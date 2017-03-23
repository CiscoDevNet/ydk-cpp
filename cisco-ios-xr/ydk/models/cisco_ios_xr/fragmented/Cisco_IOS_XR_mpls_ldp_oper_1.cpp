
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_1.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::Neighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
    	,
    detailed_information(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation>())
	,protocol_information(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation>())
	,tcp_information(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation>())
{
    detailed_information->parent = this;
    children["detailed-information"] = detailed_information;

    protocol_information->parent = this;
    children["protocol-information"] = protocol_information;

    tcp_information->parent = this;
    children["tcp-information"] = tcp_information;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<ldp_nbr_bound_ipv4_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv4_address_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_bound_ipv6_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv6_address_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv4_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv4_adj_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv6_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv6_adj_info[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| lsr_id.is_set
	|| (detailed_information !=  nullptr && detailed_information->has_data())
	|| (protocol_information !=  nullptr && protocol_information->has_data())
	|| (tcp_information !=  nullptr && tcp_information->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ldp_nbr_bound_ipv4_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv4_address_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_bound_ipv6_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv6_address_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv4_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv4_adj_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv6_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv6_adj_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| (detailed_information !=  nullptr && detailed_information->has_operation())
	|| (protocol_information !=  nullptr && protocol_information->has_operation())
	|| (tcp_information !=  nullptr && tcp_information->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detailed-information")
    {
        if(detailed_information != nullptr)
        {
            children["detailed-information"] = detailed_information;
        }
        else
        {
            detailed_information = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation>();
            detailed_information->parent = this;
            children["detailed-information"] = detailed_information;
        }
        return children.at("detailed-information");
    }

    if(child_yang_name == "ldp-nbr-bound-ipv4-address-info")
    {
        for(auto const & c : ldp_nbr_bound_ipv4_address_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo>();
        c->parent = this;
        ldp_nbr_bound_ipv4_address_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_bound_ipv4_address_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-nbr-bound-ipv6-address-info")
    {
        for(auto const & c : ldp_nbr_bound_ipv6_address_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo>();
        c->parent = this;
        ldp_nbr_bound_ipv6_address_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_bound_ipv6_address_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-nbr-ipv4-adj-info")
    {
        for(auto const & c : ldp_nbr_ipv4_adj_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo>();
        c->parent = this;
        ldp_nbr_ipv4_adj_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_ipv4_adj_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-nbr-ipv6-adj-info")
    {
        for(auto const & c : ldp_nbr_ipv6_adj_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo>();
        c->parent = this;
        ldp_nbr_ipv6_adj_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_ipv6_adj_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-information")
    {
        if(protocol_information != nullptr)
        {
            children["protocol-information"] = protocol_information;
        }
        else
        {
            protocol_information = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation>();
            protocol_information->parent = this;
            children["protocol-information"] = protocol_information;
        }
        return children.at("protocol-information");
    }

    if(child_yang_name == "tcp-information")
    {
        if(tcp_information != nullptr)
        {
            children["tcp-information"] = tcp_information;
        }
        else
        {
            tcp_information = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation>();
            tcp_information->parent = this;
            children["tcp-information"] = tcp_information;
        }
        return children.at("tcp-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::get_children()
{
    if(children.find("detailed-information") == children.end())
    {
        if(detailed_information != nullptr)
        {
            children["detailed-information"] = detailed_information;
        }
    }

    for (auto const & c : ldp_nbr_bound_ipv4_address_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ldp_nbr_bound_ipv6_address_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ldp_nbr_ipv4_adj_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ldp_nbr_ipv6_adj_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("protocol-information") == children.end())
    {
        if(protocol_information != nullptr)
        {
            children["protocol-information"] = protocol_information;
        }
    }

    if(children.find("tcp-information") == children.end())
    {
        if(tcp_information != nullptr)
        {
            children["tcp-information"] = tcp_information;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::ProtocolInformation()
    :
    downstream_on_demand{YType::boolean, "downstream-on-demand"},
    ta_holdtime{YType::uint32, "ta-holdtime"},
    ta_pies_rcvd{YType::uint32, "ta-pies-rcvd"},
    ta_pies_sent{YType::uint32, "ta-pies-sent"},
    ta_state{YType::str, "ta-state"},
    ta_up_time_seconds{YType::uint32, "ta-up-time-seconds"}
    	,
    ta_graceful_restart_adjacency(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency>())
{
    ta_graceful_restart_adjacency->parent = this;
    children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;

    yang_name = "protocol-information"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::~ProtocolInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::has_data() const
{
    return downstream_on_demand.is_set
	|| ta_holdtime.is_set
	|| ta_pies_rcvd.is_set
	|| ta_pies_sent.is_set
	|| ta_state.is_set
	|| ta_up_time_seconds.is_set
	|| (ta_graceful_restart_adjacency !=  nullptr && ta_graceful_restart_adjacency->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(downstream_on_demand.operation)
	|| is_set(ta_holdtime.operation)
	|| is_set(ta_pies_rcvd.operation)
	|| is_set(ta_pies_sent.operation)
	|| is_set(ta_state.operation)
	|| is_set(ta_up_time_seconds.operation)
	|| (ta_graceful_restart_adjacency !=  nullptr && ta_graceful_restart_adjacency->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream_on_demand.is_set || is_set(downstream_on_demand.operation)) leaf_name_data.push_back(downstream_on_demand.get_name_leafdata());
    if (ta_holdtime.is_set || is_set(ta_holdtime.operation)) leaf_name_data.push_back(ta_holdtime.get_name_leafdata());
    if (ta_pies_rcvd.is_set || is_set(ta_pies_rcvd.operation)) leaf_name_data.push_back(ta_pies_rcvd.get_name_leafdata());
    if (ta_pies_sent.is_set || is_set(ta_pies_sent.operation)) leaf_name_data.push_back(ta_pies_sent.get_name_leafdata());
    if (ta_state.is_set || is_set(ta_state.operation)) leaf_name_data.push_back(ta_state.get_name_leafdata());
    if (ta_up_time_seconds.is_set || is_set(ta_up_time_seconds.operation)) leaf_name_data.push_back(ta_up_time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ta-graceful-restart-adjacency")
    {
        if(ta_graceful_restart_adjacency != nullptr)
        {
            children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
        }
        else
        {
            ta_graceful_restart_adjacency = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency>();
            ta_graceful_restart_adjacency->parent = this;
            children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
        }
        return children.at("ta-graceful-restart-adjacency");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::get_children()
{
    if(children.find("ta-graceful-restart-adjacency") == children.end())
    {
        if(ta_graceful_restart_adjacency != nullptr)
        {
            children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand = value;
    }
    if(value_path == "ta-holdtime")
    {
        ta_holdtime = value;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd = value;
    }
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent = value;
    }
    if(value_path == "ta-state")
    {
        ta_state = value;
    }
    if(value_path == "ta-up-time-seconds")
    {
        ta_up_time_seconds = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::TaGracefulRestartAdjacency()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    reconnect_timeout{YType::uint32, "reconnect-timeout"},
    recovery_time{YType::uint32, "recovery-time"}
{
    yang_name = "ta-graceful-restart-adjacency"; yang_parent_name = "protocol-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::~TaGracefulRestartAdjacency()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_data() const
{
    return is_graceful_restartable.is_set
	|| reconnect_timeout.is_set
	|| recovery_time.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_operation() const
{
    return is_set(operation)
	|| is_set(is_graceful_restartable.operation)
	|| is_set(reconnect_timeout.operation)
	|| is_set(recovery_time.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ta-graceful-restart-adjacency";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/protocol-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.operation)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.operation)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::TcpInformation()
    :
    foreign_port{YType::uint16, "foreign-port"},
    is_md5_on{YType::boolean, "is-md5-on"},
    local_port{YType::uint16, "local-port"}
    	,
    foreign_host(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost>())
	,local_host(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost>())
{
    foreign_host->parent = this;
    children["foreign-host"] = foreign_host;

    local_host->parent = this;
    children["local-host"] = local_host;

    yang_name = "tcp-information"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::~TcpInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::has_data() const
{
    return foreign_port.is_set
	|| is_md5_on.is_set
	|| local_port.is_set
	|| (foreign_host !=  nullptr && foreign_host->has_data())
	|| (local_host !=  nullptr && local_host->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(foreign_port.operation)
	|| is_set(is_md5_on.operation)
	|| is_set(local_port.operation)
	|| (foreign_host !=  nullptr && foreign_host->has_operation())
	|| (local_host !=  nullptr && local_host->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (is_md5_on.is_set || is_set(is_md5_on.operation)) leaf_name_data.push_back(is_md5_on.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "foreign-host")
    {
        if(foreign_host != nullptr)
        {
            children["foreign-host"] = foreign_host;
        }
        else
        {
            foreign_host = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost>();
            foreign_host->parent = this;
            children["foreign-host"] = foreign_host;
        }
        return children.at("foreign-host");
    }

    if(child_yang_name == "local-host")
    {
        if(local_host != nullptr)
        {
            children["local-host"] = local_host;
        }
        else
        {
            local_host = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost>();
            local_host->parent = this;
            children["local-host"] = local_host;
        }
        return children.at("local-host");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::get_children()
{
    if(children.find("foreign-host") == children.end())
    {
        if(foreign_host != nullptr)
        {
            children["foreign-host"] = foreign_host;
        }
    }

    if(children.find("local-host") == children.end())
    {
        if(local_host != nullptr)
        {
            children["local-host"] = local_host;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::ForeignHost()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "foreign-host"; yang_parent_name = "tcp-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::~ForeignHost()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-host";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/tcp-information/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::LocalHost()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-host"; yang_parent_name = "tcp-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::~LocalHost()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-host";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/tcp-information/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::DetailedInformation()
    :
    advertise_bgp_prefixes{YType::boolean, "advertise-bgp-prefixes"},
    bgp_advertisement_state{YType::enumeration, "bgp-advertisement-state"},
    has_ipv4_inbound{YType::boolean, "has-ipv4-inbound"},
    has_ipv4_outbound{YType::boolean, "has-ipv4-outbound"},
    has_ipv6_inbound{YType::boolean, "has-ipv6-inbound"},
    has_ipv6_outbound{YType::boolean, "has-ipv6-outbound"},
    has_sp{YType::boolean, "has-sp"},
    inbound_ipv4acl{YType::str, "inbound-ipv4acl"},
    inbound_ipv6acl{YType::str, "inbound-ipv6acl"},
    keep_alive_interval{YType::uint32, "keep-alive-interval"},
    nsr_last_sync_error{YType::enumeration, "nsr-last-sync-error"},
    nsr_last_sync_nack_reason{YType::enumeration, "nsr-last-sync-nack-reason"},
    nsr_sync_state{YType::enumeration, "nsr-sync-state"},
    outbound_ipv4acl{YType::str, "outbound-ipv4acl"},
    outbound_ipv6acl{YType::str, "outbound-ipv6acl"},
    peer_holdtime{YType::uint32, "peer-holdtime"},
    peer_state{YType::str, "peer-state"},
    sp_duration{YType::uint32, "sp-duration"},
    sp_has_acl{YType::boolean, "sp-has-acl"},
    sp_has_duration{YType::boolean, "sp-has-duration"},
    sp_state{YType::str, "sp-state"},
    spacl{YType::str, "spacl"},
    spht_remaining{YType::uint32, "spht-remaining"},
    spht_running{YType::boolean, "spht-running"}
    	,
    capabilities(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities>())
{
    capabilities->parent = this;
    children["capabilities"] = capabilities;

    yang_name = "detailed-information"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::~DetailedInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_duplicate_address.size(); index++)
    {
        if(ipv4_duplicate_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_duplicate_address.size(); index++)
    {
        if(ipv6_duplicate_address[index]->has_data())
            return true;
    }
    return advertise_bgp_prefixes.is_set
	|| bgp_advertisement_state.is_set
	|| has_ipv4_inbound.is_set
	|| has_ipv4_outbound.is_set
	|| has_ipv6_inbound.is_set
	|| has_ipv6_outbound.is_set
	|| has_sp.is_set
	|| inbound_ipv4acl.is_set
	|| inbound_ipv6acl.is_set
	|| keep_alive_interval.is_set
	|| nsr_last_sync_error.is_set
	|| nsr_last_sync_nack_reason.is_set
	|| nsr_sync_state.is_set
	|| outbound_ipv4acl.is_set
	|| outbound_ipv6acl.is_set
	|| peer_holdtime.is_set
	|| peer_state.is_set
	|| sp_duration.is_set
	|| sp_has_acl.is_set
	|| sp_has_duration.is_set
	|| sp_state.is_set
	|| spacl.is_set
	|| spht_remaining.is_set
	|| spht_running.is_set
	|| (capabilities !=  nullptr && capabilities->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_duplicate_address.size(); index++)
    {
        if(ipv4_duplicate_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_duplicate_address.size(); index++)
    {
        if(ipv6_duplicate_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(advertise_bgp_prefixes.operation)
	|| is_set(bgp_advertisement_state.operation)
	|| is_set(has_ipv4_inbound.operation)
	|| is_set(has_ipv4_outbound.operation)
	|| is_set(has_ipv6_inbound.operation)
	|| is_set(has_ipv6_outbound.operation)
	|| is_set(has_sp.operation)
	|| is_set(inbound_ipv4acl.operation)
	|| is_set(inbound_ipv6acl.operation)
	|| is_set(keep_alive_interval.operation)
	|| is_set(nsr_last_sync_error.operation)
	|| is_set(nsr_last_sync_nack_reason.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(outbound_ipv4acl.operation)
	|| is_set(outbound_ipv6acl.operation)
	|| is_set(peer_holdtime.operation)
	|| is_set(peer_state.operation)
	|| is_set(sp_duration.operation)
	|| is_set(sp_has_acl.operation)
	|| is_set(sp_has_duration.operation)
	|| is_set(sp_state.operation)
	|| is_set(spacl.operation)
	|| is_set(spht_remaining.operation)
	|| is_set(spht_running.operation)
	|| (capabilities !=  nullptr && capabilities->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_bgp_prefixes.is_set || is_set(advertise_bgp_prefixes.operation)) leaf_name_data.push_back(advertise_bgp_prefixes.get_name_leafdata());
    if (bgp_advertisement_state.is_set || is_set(bgp_advertisement_state.operation)) leaf_name_data.push_back(bgp_advertisement_state.get_name_leafdata());
    if (has_ipv4_inbound.is_set || is_set(has_ipv4_inbound.operation)) leaf_name_data.push_back(has_ipv4_inbound.get_name_leafdata());
    if (has_ipv4_outbound.is_set || is_set(has_ipv4_outbound.operation)) leaf_name_data.push_back(has_ipv4_outbound.get_name_leafdata());
    if (has_ipv6_inbound.is_set || is_set(has_ipv6_inbound.operation)) leaf_name_data.push_back(has_ipv6_inbound.get_name_leafdata());
    if (has_ipv6_outbound.is_set || is_set(has_ipv6_outbound.operation)) leaf_name_data.push_back(has_ipv6_outbound.get_name_leafdata());
    if (has_sp.is_set || is_set(has_sp.operation)) leaf_name_data.push_back(has_sp.get_name_leafdata());
    if (inbound_ipv4acl.is_set || is_set(inbound_ipv4acl.operation)) leaf_name_data.push_back(inbound_ipv4acl.get_name_leafdata());
    if (inbound_ipv6acl.is_set || is_set(inbound_ipv6acl.operation)) leaf_name_data.push_back(inbound_ipv6acl.get_name_leafdata());
    if (keep_alive_interval.is_set || is_set(keep_alive_interval.operation)) leaf_name_data.push_back(keep_alive_interval.get_name_leafdata());
    if (nsr_last_sync_error.is_set || is_set(nsr_last_sync_error.operation)) leaf_name_data.push_back(nsr_last_sync_error.get_name_leafdata());
    if (nsr_last_sync_nack_reason.is_set || is_set(nsr_last_sync_nack_reason.operation)) leaf_name_data.push_back(nsr_last_sync_nack_reason.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (outbound_ipv4acl.is_set || is_set(outbound_ipv4acl.operation)) leaf_name_data.push_back(outbound_ipv4acl.get_name_leafdata());
    if (outbound_ipv6acl.is_set || is_set(outbound_ipv6acl.operation)) leaf_name_data.push_back(outbound_ipv6acl.get_name_leafdata());
    if (peer_holdtime.is_set || is_set(peer_holdtime.operation)) leaf_name_data.push_back(peer_holdtime.get_name_leafdata());
    if (peer_state.is_set || is_set(peer_state.operation)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (sp_duration.is_set || is_set(sp_duration.operation)) leaf_name_data.push_back(sp_duration.get_name_leafdata());
    if (sp_has_acl.is_set || is_set(sp_has_acl.operation)) leaf_name_data.push_back(sp_has_acl.get_name_leafdata());
    if (sp_has_duration.is_set || is_set(sp_has_duration.operation)) leaf_name_data.push_back(sp_has_duration.get_name_leafdata());
    if (sp_state.is_set || is_set(sp_state.operation)) leaf_name_data.push_back(sp_state.get_name_leafdata());
    if (spacl.is_set || is_set(spacl.operation)) leaf_name_data.push_back(spacl.get_name_leafdata());
    if (spht_remaining.is_set || is_set(spht_remaining.operation)) leaf_name_data.push_back(spht_remaining.get_name_leafdata());
    if (spht_running.is_set || is_set(spht_running.operation)) leaf_name_data.push_back(spht_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
        else
        {
            capabilities = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities>();
            capabilities->parent = this;
            children["capabilities"] = capabilities;
        }
        return children.at("capabilities");
    }

    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-duplicate-address")
    {
        for(auto const & c : ipv4_duplicate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress>();
        c->parent = this;
        ipv4_duplicate_address.push_back(std::move(c));
        children[segment_path] = ipv4_duplicate_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-duplicate-address")
    {
        for(auto const & c : ipv6_duplicate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress>();
        c->parent = this;
        ipv6_duplicate_address.push_back(std::move(c));
        children[segment_path] = ipv6_duplicate_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::get_children()
{
    if(children.find("capabilities") == children.end())
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
    }

    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ipv4_duplicate_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ipv6_duplicate_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes = value;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state = value;
    }
    if(value_path == "has-ipv4-inbound")
    {
        has_ipv4_inbound = value;
    }
    if(value_path == "has-ipv4-outbound")
    {
        has_ipv4_outbound = value;
    }
    if(value_path == "has-ipv6-inbound")
    {
        has_ipv6_inbound = value;
    }
    if(value_path == "has-ipv6-outbound")
    {
        has_ipv6_outbound = value;
    }
    if(value_path == "has-sp")
    {
        has_sp = value;
    }
    if(value_path == "inbound-ipv4acl")
    {
        inbound_ipv4acl = value;
    }
    if(value_path == "inbound-ipv6acl")
    {
        inbound_ipv6acl = value;
    }
    if(value_path == "keep-alive-interval")
    {
        keep_alive_interval = value;
    }
    if(value_path == "nsr-last-sync-error")
    {
        nsr_last_sync_error = value;
    }
    if(value_path == "nsr-last-sync-nack-reason")
    {
        nsr_last_sync_nack_reason = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "outbound-ipv4acl")
    {
        outbound_ipv4acl = value;
    }
    if(value_path == "outbound-ipv6acl")
    {
        outbound_ipv6acl = value;
    }
    if(value_path == "peer-holdtime")
    {
        peer_holdtime = value;
    }
    if(value_path == "peer-state")
    {
        peer_state = value;
    }
    if(value_path == "sp-duration")
    {
        sp_duration = value;
    }
    if(value_path == "sp-has-acl")
    {
        sp_has_acl = value;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration = value;
    }
    if(value_path == "sp-state")
    {
        sp_state = value;
    }
    if(value_path == "spacl")
    {
        spacl = value;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining = value;
    }
    if(value_path == "spht-running")
    {
        spht_running = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_data() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received")
    {
        for(auto const & c : received)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received>();
        c->parent = this;
        received.push_back(std::move(c));
        children[segment_path] = received.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sent")
    {
        for(auto const & c : sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent>();
        c->parent = this;
        sent.push_back(std::move(c));
        children[segment_path] = sent.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_children()
{
    for (auto const & c : received)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::Sent()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "sent"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::~Sent()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::Received()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "received"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::~Received()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::Client()
    :
    name{YType::str, "name"}
{
    yang_name = "client"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::~Client()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::has_data() const
{
    return name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Ipv4DuplicateAddress()
    :
    address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ipv4-duplicate-address"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::~Ipv4DuplicateAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-duplicate-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ipv4-duplicate-address";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::~Address()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/ipv4-duplicate-address/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Ipv6DuplicateAddress()
    :
    address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ipv6-duplicate-address"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::~Ipv6DuplicateAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-duplicate-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ipv6-duplicate-address";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::~Address()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/detailed-information/ipv6-duplicate-address/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::LdpNbrBoundIpv4AddressInfo()
    :
    address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ldp-nbr-bound-ipv4-address-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::~LdpNbrBoundIpv4AddressInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-bound-ipv4-address-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ldp-nbr-bound-ipv4-address-info";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::~Address()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-bound-ipv4-address-info/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::LdpNbrBoundIpv6AddressInfo()
    :
    address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ldp-nbr-bound-ipv6-address-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::~LdpNbrBoundIpv6AddressInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-bound-ipv6-address-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ldp-nbr-bound-ipv6-address-info";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::~Address()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-bound-ipv6-address-info/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::LdpNbrIpv4AdjInfo()
    :
    adjacency_group(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup>())
{
    adjacency_group->parent = this;
    children["adjacency-group"] = adjacency_group;

    yang_name = "ldp-nbr-ipv4-adj-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::~LdpNbrIpv4AdjInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_data() const
{
    return (adjacency_group !=  nullptr && adjacency_group->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_operation() const
{
    return is_set(operation)
	|| (adjacency_group !=  nullptr && adjacency_group->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-ipv4-adj-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-group")
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
        else
        {
            adjacency_group = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup>();
            adjacency_group->parent = this;
            children["adjacency-group"] = adjacency_group;
        }
        return children.at("adjacency-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_children()
{
    if(children.find("adjacency-group") == children.end())
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::AdjacencyGroup()
    :
    hello_type{YType::enumeration, "hello-type"}
    	,
    link_hello_data(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData>())
	,target_hello_data(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData>())
{
    link_hello_data->parent = this;
    children["link-hello-data"] = link_hello_data;

    target_hello_data->parent = this;
    children["target-hello-data"] = target_hello_data;

    yang_name = "adjacency-group"; yang_parent_name = "ldp-nbr-ipv4-adj-info";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::~AdjacencyGroup()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_data() const
{
    return hello_type.is_set
	|| (link_hello_data !=  nullptr && link_hello_data->has_data())
	|| (target_hello_data !=  nullptr && target_hello_data->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_type.operation)
	|| (link_hello_data !=  nullptr && link_hello_data->has_operation())
	|| (target_hello_data !=  nullptr && target_hello_data->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-group";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv4-adj-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_type.is_set || is_set(hello_type.operation)) leaf_name_data.push_back(hello_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-data")
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
        else
        {
            link_hello_data = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData>();
            link_hello_data->parent = this;
            children["link-hello-data"] = link_hello_data;
        }
        return children.at("link-hello-data");
    }

    if(child_yang_name == "target-hello-data")
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
        else
        {
            target_hello_data = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData>();
            target_hello_data->parent = this;
            children["target-hello-data"] = target_hello_data;
        }
        return children.at("target-hello-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_children()
{
    if(children.find("link-hello-data") == children.end())
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
    }

    if(children.find("target-hello-data") == children.end())
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-type")
    {
        hello_type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::LinkHelloData()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "link-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::~LinkHelloData()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_data() const
{
    return interface.is_set
	|| interface_name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv4-adj-info/adjacency-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetHelloData()
    :
    state{YType::enumeration, "state"}
    	,
    local_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>())
	,target_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>())
{
    local_address->parent = this;
    children["local-address"] = local_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "target-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::~TargetHelloData()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_data() const
{
    return state.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv4-adj-info/adjacency-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_children()
{
    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
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

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::LocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::~LocalAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv4-adj-info/adjacency-group/target-hello-data/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::~TargetAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv4-adj-info/adjacency-group/target-hello-data/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::LdpNbrIpv6AdjInfo()
    :
    adjacency_group(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup>())
{
    adjacency_group->parent = this;
    children["adjacency-group"] = adjacency_group;

    yang_name = "ldp-nbr-ipv6-adj-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::~LdpNbrIpv6AdjInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_data() const
{
    return (adjacency_group !=  nullptr && adjacency_group->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_operation() const
{
    return is_set(operation)
	|| (adjacency_group !=  nullptr && adjacency_group->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-ipv6-adj-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-group")
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
        else
        {
            adjacency_group = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup>();
            adjacency_group->parent = this;
            children["adjacency-group"] = adjacency_group;
        }
        return children.at("adjacency-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_children()
{
    if(children.find("adjacency-group") == children.end())
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::AdjacencyGroup()
    :
    hello_type{YType::enumeration, "hello-type"}
    	,
    link_hello_data(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData>())
	,target_hello_data(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData>())
{
    link_hello_data->parent = this;
    children["link-hello-data"] = link_hello_data;

    target_hello_data->parent = this;
    children["target-hello-data"] = target_hello_data;

    yang_name = "adjacency-group"; yang_parent_name = "ldp-nbr-ipv6-adj-info";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::~AdjacencyGroup()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_data() const
{
    return hello_type.is_set
	|| (link_hello_data !=  nullptr && link_hello_data->has_data())
	|| (target_hello_data !=  nullptr && target_hello_data->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_type.operation)
	|| (link_hello_data !=  nullptr && link_hello_data->has_operation())
	|| (target_hello_data !=  nullptr && target_hello_data->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-group";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv6-adj-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_type.is_set || is_set(hello_type.operation)) leaf_name_data.push_back(hello_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-data")
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
        else
        {
            link_hello_data = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData>();
            link_hello_data->parent = this;
            children["link-hello-data"] = link_hello_data;
        }
        return children.at("link-hello-data");
    }

    if(child_yang_name == "target-hello-data")
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
        else
        {
            target_hello_data = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData>();
            target_hello_data->parent = this;
            children["target-hello-data"] = target_hello_data;
        }
        return children.at("target-hello-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_children()
{
    if(children.find("link-hello-data") == children.end())
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
    }

    if(children.find("target-hello-data") == children.end())
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-type")
    {
        hello_type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::LinkHelloData()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "link-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::~LinkHelloData()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_data() const
{
    return interface.is_set
	|| interface_name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv6-adj-info/adjacency-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetHelloData()
    :
    state{YType::enumeration, "state"}
    	,
    local_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>())
	,target_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>())
{
    local_address->parent = this;
    children["local-address"] = local_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "target-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::~TargetHelloData()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_data() const
{
    return state.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv6-adj-info/adjacency-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_children()
{
    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
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

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::LocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::~LocalAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv6-adj-info/adjacency-group/target-hello-data/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::~TargetAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbors/neighbor/ldp-nbr-ipv6-adj-info/adjacency-group/target-hello-data/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::DefaultVrf::LdpId::LdpId()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "ldp-id"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::LdpId::~LdpId()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::LdpId::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::LdpId::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::LdpId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::LdpId::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::LdpId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::~Statistics()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Statistics::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::Statistic()
    :
    iccp_enabled{YType::boolean, "iccp-enabled"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
    	,
    message_in(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn>())
	,message_out(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut>())
{
    message_in->parent = this;
    children["message-in"] = message_in;

    message_out->parent = this;
    children["message-out"] = message_out;

    yang_name = "statistic"; yang_parent_name = "statistics";
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::~Statistic()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::has_data() const
{
    return iccp_enabled.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| (message_in !=  nullptr && message_in->has_data())
	|| (message_out !=  nullptr && message_out->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_enabled.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| (message_in !=  nullptr && message_in->has_operation())
	|| (message_out !=  nullptr && message_out->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_enabled.is_set || is_set(iccp_enabled.operation)) leaf_name_data.push_back(iccp_enabled.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-in")
    {
        if(message_in != nullptr)
        {
            children["message-in"] = message_in;
        }
        else
        {
            message_in = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn>();
            message_in->parent = this;
            children["message-in"] = message_in;
        }
        return children.at("message-in");
    }

    if(child_yang_name == "message-out")
    {
        if(message_out != nullptr)
        {
            children["message-out"] = message_out;
        }
        else
        {
            message_out = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut>();
            message_out->parent = this;
            children["message-out"] = message_out;
        }
        return children.at("message-out");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::get_children()
{
    if(children.find("message-in") == children.end())
    {
        if(message_in != nullptr)
        {
            children["message-in"] = message_in;
        }
    }

    if(children.find("message-out") == children.end())
    {
        if(message_out != nullptr)
        {
            children["message-out"] = message_out;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-enabled")
    {
        iccp_enabled = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::MessageOut()
    :
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    init_count{YType::uint32, "init-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    notification_count{YType::uint32, "notification-count"},
    total_count{YType::uint32, "total-count"}
{
    yang_name = "message-out"; yang_parent_name = "statistic";
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::~MessageOut()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::has_data() const
{
    return address_count.is_set
	|| address_withdraw_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| init_count.is_set
	|| keep_alive_count.is_set
	|| label_abort_request_count.is_set
	|| label_map_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_withdraw_count.is_set
	|| notification_count.is_set
	|| total_count.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation)
	|| is_set(address_withdraw_count.operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| is_set(init_count.operation)
	|| is_set(keep_alive_count.operation)
	|| is_set(label_abort_request_count.operation)
	|| is_set(label_map_count.operation)
	|| is_set(label_release_count.operation)
	|| is_set(label_request_count.operation)
	|| is_set(label_withdraw_count.operation)
	|| is_set(notification_count.operation)
	|| is_set(total_count.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-out";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/statistics/statistic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.operation)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.operation)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.operation)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.operation)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.operation)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.operation)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.operation)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.operation)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.operation)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
    if(value_path == "init-count")
    {
        init_count = value;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::MessageIn()
    :
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    init_count{YType::uint32, "init-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    notification_count{YType::uint32, "notification-count"},
    total_count{YType::uint32, "total-count"}
{
    yang_name = "message-in"; yang_parent_name = "statistic";
}

MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::~MessageIn()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::has_data() const
{
    return address_count.is_set
	|| address_withdraw_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| init_count.is_set
	|| keep_alive_count.is_set
	|| label_abort_request_count.is_set
	|| label_map_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_withdraw_count.is_set
	|| notification_count.is_set
	|| total_count.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation)
	|| is_set(address_withdraw_count.operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| is_set(init_count.operation)
	|| is_set(keep_alive_count.operation)
	|| is_set(label_abort_request_count.operation)
	|| is_set(label_map_count.operation)
	|| is_set(label_release_count.operation)
	|| is_set(label_request_count.operation)
	|| is_set(label_withdraw_count.operation)
	|| is_set(notification_count.operation)
	|| is_set(total_count.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-in";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/statistics/statistic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.operation)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.operation)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.operation)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.operation)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.operation)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.operation)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.operation)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.operation)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.operation)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Statistics::Statistic::MessageIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
    if(value_path == "init-count")
    {
        init_count = value;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::ForwardingSummaryAll()
    :
    fsht{YType::uint16, "fsht"},
    intfs{YType::uint16, "intfs"},
    is_lsd_bound{YType::boolean, "is-lsd-bound"},
    lbls{YType::uint16, "lbls"}
    	,
    rws(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf>())
{
    rws->parent = this;
    children["rws"] = rws;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "forwarding-summary-all"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::~ForwardingSummaryAll()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::has_data() const
{
    return fsht.is_set
	|| intfs.is_set
	|| is_lsd_bound.is_set
	|| lbls.is_set
	|| (rws !=  nullptr && rws->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::has_operation() const
{
    return is_set(operation)
	|| is_set(fsht.operation)
	|| is_set(intfs.operation)
	|| is_set(is_lsd_bound.operation)
	|| is_set(lbls.operation)
	|| (rws !=  nullptr && rws->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary-all";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsht.is_set || is_set(fsht.operation)) leaf_name_data.push_back(fsht.get_name_leafdata());
    if (intfs.is_set || is_set(intfs.operation)) leaf_name_data.push_back(intfs.get_name_leafdata());
    if (is_lsd_bound.is_set || is_set(is_lsd_bound.operation)) leaf_name_data.push_back(is_lsd_bound.get_name_leafdata());
    if (lbls.is_set || is_set(lbls.operation)) leaf_name_data.push_back(lbls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rws")
    {
        if(rws != nullptr)
        {
            children["rws"] = rws;
        }
        else
        {
            rws = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws>();
            rws->parent = this;
            children["rws"] = rws;
        }
        return children.at("rws");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::get_children()
{
    if(children.find("rws") == children.end())
    {
        if(rws != nullptr)
        {
            children["rws"] = rws;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsht")
    {
        fsht = value;
    }
    if(value_path == "intfs")
    {
        intfs = value;
    }
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound = value;
    }
    if(value_path == "lbls")
    {
        lbls = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding-summary-all";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Rws()
    :
    nhs(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs>())
	,pfxs(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs>())
{
    nhs->parent = this;
    children["nhs"] = nhs;

    pfxs->parent = this;
    children["pfxs"] = pfxs;

    yang_name = "rws"; yang_parent_name = "forwarding-summary-all";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::~Rws()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::has_data() const
{
    return (nhs !=  nullptr && nhs->has_data())
	|| (pfxs !=  nullptr && pfxs->has_data());
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::has_operation() const
{
    return is_set(operation)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (pfxs !=  nullptr && pfxs->has_operation());
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rws";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nhs")
    {
        if(nhs != nullptr)
        {
            children["nhs"] = nhs;
        }
        else
        {
            nhs = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs>();
            nhs->parent = this;
            children["nhs"] = nhs;
        }
        return children.at("nhs");
    }

    if(child_yang_name == "pfxs")
    {
        if(pfxs != nullptr)
        {
            children["pfxs"] = pfxs;
        }
        else
        {
            pfxs = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs>();
            pfxs->parent = this;
            children["pfxs"] = pfxs;
        }
        return children.at("pfxs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::get_children()
{
    if(children.find("nhs") == children.end())
    {
        if(nhs != nullptr)
        {
            children["nhs"] = nhs;
        }
    }

    if(children.find("pfxs") == children.end())
    {
        if(pfxs != nullptr)
        {
            children["pfxs"] = pfxs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::Pfxs()
    :
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"},
    total_pfxs{YType::uint16, "total-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary>())
{
    labeled_pfxs_aggr->parent = this;
    children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;

    labeled_pfxs_backup->parent = this;
    children["labeled-pfxs-backup"] = labeled_pfxs_backup;

    labeled_pfxs_primary->parent = this;
    children["labeled-pfxs-primary"] = labeled_pfxs_primary;

    yang_name = "pfxs"; yang_parent_name = "rws";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::~Pfxs()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::has_data() const
{
    return ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| total_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data());
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::has_operation() const
{
    return is_set(operation)
	|| is_set(ecmp_pfxs.operation)
	|| is_set(protected_pfxs.operation)
	|| is_set(total_pfxs.operation)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation());
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/rws/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.operation)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.operation)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());
    if (total_pfxs.is_set || is_set(total_pfxs.operation)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr != nullptr)
        {
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
        else
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr>();
            labeled_pfxs_aggr->parent = this;
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
        return children.at("labeled-pfxs-aggr");
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup != nullptr)
        {
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
        else
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup>();
            labeled_pfxs_backup->parent = this;
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
        return children.at("labeled-pfxs-backup");
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary != nullptr)
        {
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
        else
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary>();
            labeled_pfxs_primary->parent = this;
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
        return children.at("labeled-pfxs-primary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::get_children()
{
    if(children.find("labeled-pfxs-aggr") == children.end())
    {
        if(labeled_pfxs_aggr != nullptr)
        {
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
    }

    if(children.find("labeled-pfxs-backup") == children.end())
    {
        if(labeled_pfxs_backup != nullptr)
        {
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
    }

    if(children.find("labeled-pfxs-primary") == children.end())
    {
        if(labeled_pfxs_primary != nullptr)
        {
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/rws/pfxs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/rws/pfxs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/rws/pfxs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::Nhs()
    :
    backup_paths{YType::uint32, "backup-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    total_paths{YType::uint32, "total-paths"}
{
    yang_name = "nhs"; yang_parent_name = "rws";
}

MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::~Nhs()
{
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::has_data() const
{
    return backup_paths.is_set
	|| labeled_backup_paths.is_set
	|| labeled_paths.is_set
	|| protected_paths.is_set
	|| remote_backup_paths.is_set
	|| total_paths.is_set;
}

bool MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_paths.operation)
	|| is_set(labeled_backup_paths.operation)
	|| is_set(labeled_paths.operation)
	|| is_set(protected_paths.operation)
	|| is_set(remote_backup_paths.operation)
	|| is_set(total_paths.operation);
}

std::string MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/forwarding-summary-all/rws/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_paths.is_set || is_set(backup_paths.operation)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.operation)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.operation)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.operation)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.operation)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::ForwardingSummaryAll::Rws::Nhs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-paths")
    {
        backup_paths = value;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
}

MplsLdp::Global::Standby::BindingsSummaryAll::BindingsSummaryAll()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::BindingsSummaryAll::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "bindings-summary-all"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::BindingsSummaryAll::~BindingsSummaryAll()
{
}

bool MplsLdp::Global::Standby::BindingsSummaryAll::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::BindingsSummaryAll::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::BindingsSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary-all";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::BindingsSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::BindingsSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::BindingsSummaryAll::BindAf>();
        c->parent = this;
        bind_af.push_back(std::move(c));
        children[segment_path] = bind_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::BindingsSummaryAll::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::BindingsSummaryAll::get_children()
{
    for (auto const & c : bind_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::BindingsSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/bindings-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::BindingsSummaryAll::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(last_lib_update.operation)
	|| is_set(lib_minimum_revision_sent_all.operation);
}

std::string MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/bindings-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.operation)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.operation)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::BindingsSummaryAll::BindAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntries()
{
    yang_name = "ato-mdb-table-entries"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::~AtoMdbTableEntries()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::has_data() const
{
    for (std::size_t index=0; index<ato_mdb_table_entry.size(); index++)
    {
        if(ato_mdb_table_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::has_operation() const
{
    for (std::size_t index=0; index<ato_mdb_table_entry.size(); index++)
    {
        if(ato_mdb_table_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ato-mdb-table-entries";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ato-mdb-table-entry")
    {
        for(auto const & c : ato_mdb_table_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry>();
        c->parent = this;
        ato_mdb_table_entry.push_back(std::move(c));
        children[segment_path] = ato_mdb_table_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::get_children()
{
    for (auto const & c : ato_mdb_table_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::AtoMdbTableEntry()
    :
    agi{YType::int32, "agi"},
    agi_type{YType::int32, "agi-type"},
    fe_ctype{YType::int32, "fe-ctype"},
    mapping_tlv_count{YType::uint32, "mapping-tlv-count"},
    notification_tlv_count{YType::uint32, "notification-tlv-count"},
    peer_id{YType::str, "peer-id"},
    peer_id_xr{YType::str, "peer-id-xr"},
    pw_id{YType::int32, "pw-id"},
    saii_ac_id{YType::int32, "saii-ac-id"},
    saii_global_id{YType::int32, "saii-global-id"},
    saii_local_id{YType::str, "saii-local-id"},
    saii_prefix{YType::str, "saii-prefix"},
    saii_type{YType::int32, "saii-type"},
    taii_ac_id{YType::int32, "taii-ac-id"},
    taii_global_id{YType::int32, "taii-global-id"},
    taii_local_id{YType::str, "taii-local-id"},
    taii_prefix{YType::str, "taii-prefix"},
    taii_type{YType::int32, "taii-type"}
    	,
    fec_info(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo>())
{
    fec_info->parent = this;
    children["fec-info"] = fec_info;

    yang_name = "ato-mdb-table-entry"; yang_parent_name = "ato-mdb-table-entries";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::~AtoMdbTableEntry()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::has_data() const
{
    return agi.is_set
	|| agi_type.is_set
	|| fe_ctype.is_set
	|| mapping_tlv_count.is_set
	|| notification_tlv_count.is_set
	|| peer_id.is_set
	|| peer_id_xr.is_set
	|| pw_id.is_set
	|| saii_ac_id.is_set
	|| saii_global_id.is_set
	|| saii_local_id.is_set
	|| saii_prefix.is_set
	|| saii_type.is_set
	|| taii_ac_id.is_set
	|| taii_global_id.is_set
	|| taii_local_id.is_set
	|| taii_prefix.is_set
	|| taii_type.is_set
	|| (fec_info !=  nullptr && fec_info->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(agi.operation)
	|| is_set(agi_type.operation)
	|| is_set(fe_ctype.operation)
	|| is_set(mapping_tlv_count.operation)
	|| is_set(notification_tlv_count.operation)
	|| is_set(peer_id.operation)
	|| is_set(peer_id_xr.operation)
	|| is_set(pw_id.operation)
	|| is_set(saii_ac_id.operation)
	|| is_set(saii_global_id.operation)
	|| is_set(saii_local_id.operation)
	|| is_set(saii_prefix.operation)
	|| is_set(saii_type.operation)
	|| is_set(taii_ac_id.operation)
	|| is_set(taii_global_id.operation)
	|| is_set(taii_local_id.operation)
	|| is_set(taii_prefix.operation)
	|| is_set(taii_type.operation)
	|| (fec_info !=  nullptr && fec_info->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ato-mdb-table-entry";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agi.is_set || is_set(agi.operation)) leaf_name_data.push_back(agi.get_name_leafdata());
    if (agi_type.is_set || is_set(agi_type.operation)) leaf_name_data.push_back(agi_type.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (mapping_tlv_count.is_set || is_set(mapping_tlv_count.operation)) leaf_name_data.push_back(mapping_tlv_count.get_name_leafdata());
    if (notification_tlv_count.is_set || is_set(notification_tlv_count.operation)) leaf_name_data.push_back(notification_tlv_count.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (peer_id_xr.is_set || is_set(peer_id_xr.operation)) leaf_name_data.push_back(peer_id_xr.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (saii_ac_id.is_set || is_set(saii_ac_id.operation)) leaf_name_data.push_back(saii_ac_id.get_name_leafdata());
    if (saii_global_id.is_set || is_set(saii_global_id.operation)) leaf_name_data.push_back(saii_global_id.get_name_leafdata());
    if (saii_local_id.is_set || is_set(saii_local_id.operation)) leaf_name_data.push_back(saii_local_id.get_name_leafdata());
    if (saii_prefix.is_set || is_set(saii_prefix.operation)) leaf_name_data.push_back(saii_prefix.get_name_leafdata());
    if (saii_type.is_set || is_set(saii_type.operation)) leaf_name_data.push_back(saii_type.get_name_leafdata());
    if (taii_ac_id.is_set || is_set(taii_ac_id.operation)) leaf_name_data.push_back(taii_ac_id.get_name_leafdata());
    if (taii_global_id.is_set || is_set(taii_global_id.operation)) leaf_name_data.push_back(taii_global_id.get_name_leafdata());
    if (taii_local_id.is_set || is_set(taii_local_id.operation)) leaf_name_data.push_back(taii_local_id.get_name_leafdata());
    if (taii_prefix.is_set || is_set(taii_prefix.operation)) leaf_name_data.push_back(taii_prefix.get_name_leafdata());
    if (taii_type.is_set || is_set(taii_type.operation)) leaf_name_data.push_back(taii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-info")
    {
        if(fec_info != nullptr)
        {
            children["fec-info"] = fec_info;
        }
        else
        {
            fec_info = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo>();
            fec_info->parent = this;
            children["fec-info"] = fec_info;
        }
        return children.at("fec-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::get_children()
{
    if(children.find("fec-info") == children.end())
    {
        if(fec_info != nullptr)
        {
            children["fec-info"] = fec_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "agi")
    {
        agi = value;
    }
    if(value_path == "agi-type")
    {
        agi_type = value;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "mapping-tlv-count")
    {
        mapping_tlv_count = value;
    }
    if(value_path == "notification-tlv-count")
    {
        notification_tlv_count = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
    if(value_path == "peer-id-xr")
    {
        peer_id_xr = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "saii-ac-id")
    {
        saii_ac_id = value;
    }
    if(value_path == "saii-global-id")
    {
        saii_global_id = value;
    }
    if(value_path == "saii-local-id")
    {
        saii_local_id = value;
    }
    if(value_path == "saii-prefix")
    {
        saii_prefix = value;
    }
    if(value_path == "saii-type")
    {
        saii_type = value;
    }
    if(value_path == "taii-ac-id")
    {
        taii_ac_id = value;
    }
    if(value_path == "taii-global-id")
    {
        taii_global_id = value;
    }
    if(value_path == "taii-local-id")
    {
        taii_local_id = value;
    }
    if(value_path == "taii-prefix")
    {
        taii_prefix = value;
    }
    if(value_path == "taii-type")
    {
        taii_type = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::FecInfo()
    :
    fe_ctype{YType::enumeration, "fe-ctype"}
    	,
    fec128(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128>())
	,fec129(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129>())
	,fec130(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130>())
{
    fec128->parent = this;
    children["fec128"] = fec128;

    fec129->parent = this;
    children["fec129"] = fec129;

    fec130->parent = this;
    children["fec130"] = fec130;

    yang_name = "fec-info"; yang_parent_name = "ato-mdb-table-entry";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::~FecInfo()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::has_data() const
{
    return fe_ctype.is_set
	|| (fec128 !=  nullptr && fec128->has_data())
	|| (fec129 !=  nullptr && fec129->has_data())
	|| (fec130 !=  nullptr && fec130->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| (fec128 !=  nullptr && fec128->has_operation())
	|| (fec129 !=  nullptr && fec129->has_operation())
	|| (fec130 !=  nullptr && fec130->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec128")
    {
        if(fec128 != nullptr)
        {
            children["fec128"] = fec128;
        }
        else
        {
            fec128 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128>();
            fec128->parent = this;
            children["fec128"] = fec128;
        }
        return children.at("fec128");
    }

    if(child_yang_name == "fec129")
    {
        if(fec129 != nullptr)
        {
            children["fec129"] = fec129;
        }
        else
        {
            fec129 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129>();
            fec129->parent = this;
            children["fec129"] = fec129;
        }
        return children.at("fec129");
    }

    if(child_yang_name == "fec130")
    {
        if(fec130 != nullptr)
        {
            children["fec130"] = fec130;
        }
        else
        {
            fec130 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130>();
            fec130->parent = this;
            children["fec130"] = fec130;
        }
        return children.at("fec130");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::get_children()
{
    if(children.find("fec128") == children.end())
    {
        if(fec128 != nullptr)
        {
            children["fec128"] = fec128;
        }
    }

    if(children.find("fec129") == children.end())
    {
        if(fec129 != nullptr)
        {
            children["fec129"] = fec129;
        }
    }

    if(children.find("fec130") == children.end())
    {
        if(fec130 != nullptr)
        {
            children["fec130"] = fec130;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::Fec128()
    :
    pseudowire_id{YType::uint32, "pseudowire-id"}
{
    yang_name = "fec128"; yang_parent_name = "fec-info";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::~Fec128()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::has_data() const
{
    return pseudowire_id.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::has_operation() const
{
    return is_set(operation)
	|| is_set(pseudowire_id.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec128";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Fec129()
    :
    agi(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi>())
	,saii(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii>())
	,taii(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii>())
{
    agi->parent = this;
    children["agi"] = agi;

    saii->parent = this;
    children["saii"] = saii;

    taii->parent = this;
    children["taii"] = taii;

    yang_name = "fec129"; yang_parent_name = "fec-info";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::~Fec129()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::has_data() const
{
    return (agi !=  nullptr && agi->has_data())
	|| (saii !=  nullptr && saii->has_data())
	|| (taii !=  nullptr && taii->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::has_operation() const
{
    return is_set(operation)
	|| (agi !=  nullptr && agi->has_operation())
	|| (saii !=  nullptr && saii->has_operation())
	|| (taii !=  nullptr && taii->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec129";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agi")
    {
        if(agi != nullptr)
        {
            children["agi"] = agi;
        }
        else
        {
            agi = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi>();
            agi->parent = this;
            children["agi"] = agi;
        }
        return children.at("agi");
    }

    if(child_yang_name == "saii")
    {
        if(saii != nullptr)
        {
            children["saii"] = saii;
        }
        else
        {
            saii = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii>();
            saii->parent = this;
            children["saii"] = saii;
        }
        return children.at("saii");
    }

    if(child_yang_name == "taii")
    {
        if(taii != nullptr)
        {
            children["taii"] = taii;
        }
        else
        {
            taii = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii>();
            taii->parent = this;
            children["taii"] = taii;
        }
        return children.at("taii");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::get_children()
{
    if(children.find("agi") == children.end())
    {
        if(agi != nullptr)
        {
            children["agi"] = agi;
        }
    }

    if(children.find("saii") == children.end())
    {
        if(saii != nullptr)
        {
            children["saii"] = saii;
        }
    }

    if(children.find("taii") == children.end())
    {
        if(taii != nullptr)
        {
            children["taii"] = taii;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi()
    :
    agi_type{YType::enumeration, "agi-type"}
    	,
    agi1(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1>())
{
    agi1->parent = this;
    children["agi1"] = agi1;

    yang_name = "agi"; yang_parent_name = "fec129";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::~Agi()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::has_data() const
{
    return agi_type.is_set
	|| (agi1 !=  nullptr && agi1->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::has_operation() const
{
    return is_set(operation)
	|| is_set(agi_type.operation)
	|| (agi1 !=  nullptr && agi1->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agi_type.is_set || is_set(agi_type.operation)) leaf_name_data.push_back(agi_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agi1")
    {
        if(agi1 != nullptr)
        {
            children["agi1"] = agi1;
        }
        else
        {
            agi1 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1>();
            agi1->parent = this;
            children["agi1"] = agi1;
        }
        return children.at("agi1");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::get_children()
{
    if(children.find("agi1") == children.end())
    {
        if(agi1 != nullptr)
        {
            children["agi1"] = agi1;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "agi-type")
    {
        agi_type = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::Agi1()
    :
    rd{YType::uint64, "rd"}
{
    yang_name = "agi1"; yang_parent_name = "agi";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::~Agi1()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::has_data() const
{
    return rd.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi1";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/agi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Saii()
    :
    aii_type{YType::enumeration, "aii-type"}
    	,
    aii1(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1>())
	,aii2(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2>())
{
    aii1->parent = this;
    children["aii1"] = aii1;

    aii2->parent = this;
    children["aii2"] = aii2;

    yang_name = "saii"; yang_parent_name = "fec129";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::~Saii()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::has_data() const
{
    return aii_type.is_set
	|| (aii1 !=  nullptr && aii1->has_data())
	|| (aii2 !=  nullptr && aii2->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::has_operation() const
{
    return is_set(operation)
	|| is_set(aii_type.operation)
	|| (aii1 !=  nullptr && aii1->has_operation())
	|| (aii2 !=  nullptr && aii2->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saii";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aii_type.is_set || is_set(aii_type.operation)) leaf_name_data.push_back(aii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aii1")
    {
        if(aii1 != nullptr)
        {
            children["aii1"] = aii1;
        }
        else
        {
            aii1 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1>();
            aii1->parent = this;
            children["aii1"] = aii1;
        }
        return children.at("aii1");
    }

    if(child_yang_name == "aii2")
    {
        if(aii2 != nullptr)
        {
            children["aii2"] = aii2;
        }
        else
        {
            aii2 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2>();
            aii2->parent = this;
            children["aii2"] = aii2;
        }
        return children.at("aii2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::get_children()
{
    if(children.find("aii1") == children.end())
    {
        if(aii1 != nullptr)
        {
            children["aii1"] = aii1;
        }
    }

    if(children.find("aii2") == children.end())
    {
        if(aii2 != nullptr)
        {
            children["aii2"] = aii2;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aii-type")
    {
        aii_type = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::Aii1()
    :
    local_id{YType::str, "local-id"}
{
    yang_name = "aii1"; yang_parent_name = "saii";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::~Aii1()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::has_data() const
{
    return local_id.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::has_operation() const
{
    return is_set(operation)
	|| is_set(local_id.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii1";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-id")
    {
        local_id = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::Aii2()
    :
    ac_id{YType::uint32, "ac-id"},
    gobal_id{YType::uint32, "gobal-id"},
    prefix{YType::uint32, "prefix"}
{
    yang_name = "aii2"; yang_parent_name = "saii";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::~Aii2()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::has_data() const
{
    return ac_id.is_set
	|| gobal_id.is_set
	|| prefix.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(gobal_id.operation)
	|| is_set(prefix.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii2";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (gobal_id.is_set || is_set(gobal_id.operation)) leaf_name_data.push_back(gobal_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "gobal-id")
    {
        gobal_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Taii()
    :
    aii_type{YType::enumeration, "aii-type"}
    	,
    aii1(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1>())
	,aii2(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2>())
{
    aii1->parent = this;
    children["aii1"] = aii1;

    aii2->parent = this;
    children["aii2"] = aii2;

    yang_name = "taii"; yang_parent_name = "fec129";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::~Taii()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::has_data() const
{
    return aii_type.is_set
	|| (aii1 !=  nullptr && aii1->has_data())
	|| (aii2 !=  nullptr && aii2->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::has_operation() const
{
    return is_set(operation)
	|| is_set(aii_type.operation)
	|| (aii1 !=  nullptr && aii1->has_operation())
	|| (aii2 !=  nullptr && aii2->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "taii";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aii_type.is_set || is_set(aii_type.operation)) leaf_name_data.push_back(aii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aii1")
    {
        if(aii1 != nullptr)
        {
            children["aii1"] = aii1;
        }
        else
        {
            aii1 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1>();
            aii1->parent = this;
            children["aii1"] = aii1;
        }
        return children.at("aii1");
    }

    if(child_yang_name == "aii2")
    {
        if(aii2 != nullptr)
        {
            children["aii2"] = aii2;
        }
        else
        {
            aii2 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2>();
            aii2->parent = this;
            children["aii2"] = aii2;
        }
        return children.at("aii2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::get_children()
{
    if(children.find("aii1") == children.end())
    {
        if(aii1 != nullptr)
        {
            children["aii1"] = aii1;
        }
    }

    if(children.find("aii2") == children.end())
    {
        if(aii2 != nullptr)
        {
            children["aii2"] = aii2;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aii-type")
    {
        aii_type = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::Aii1()
    :
    local_id{YType::str, "local-id"}
{
    yang_name = "aii1"; yang_parent_name = "taii";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::~Aii1()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::has_data() const
{
    return local_id.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::has_operation() const
{
    return is_set(operation)
	|| is_set(local_id.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii1";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/taii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-id")
    {
        local_id = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::Aii2()
    :
    ac_id{YType::uint32, "ac-id"},
    gobal_id{YType::uint32, "gobal-id"},
    prefix{YType::uint32, "prefix"}
{
    yang_name = "aii2"; yang_parent_name = "taii";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::~Aii2()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::has_data() const
{
    return ac_id.is_set
	|| gobal_id.is_set
	|| prefix.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(gobal_id.operation)
	|| is_set(prefix.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii2";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec129/taii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (gobal_id.is_set || is_set(gobal_id.operation)) leaf_name_data.push_back(gobal_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "gobal-id")
    {
        gobal_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Fec130()
    :
    agi(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi>())
	,saii(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii>())
{
    agi->parent = this;
    children["agi"] = agi;

    saii->parent = this;
    children["saii"] = saii;

    yang_name = "fec130"; yang_parent_name = "fec-info";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::~Fec130()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::has_data() const
{
    return (agi !=  nullptr && agi->has_data())
	|| (saii !=  nullptr && saii->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::has_operation() const
{
    return is_set(operation)
	|| (agi !=  nullptr && agi->has_operation())
	|| (saii !=  nullptr && saii->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec130";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agi")
    {
        if(agi != nullptr)
        {
            children["agi"] = agi;
        }
        else
        {
            agi = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi>();
            agi->parent = this;
            children["agi"] = agi;
        }
        return children.at("agi");
    }

    if(child_yang_name == "saii")
    {
        if(saii != nullptr)
        {
            children["saii"] = saii;
        }
        else
        {
            saii = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii>();
            saii->parent = this;
            children["saii"] = saii;
        }
        return children.at("saii");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::get_children()
{
    if(children.find("agi") == children.end())
    {
        if(agi != nullptr)
        {
            children["agi"] = agi;
        }
    }

    if(children.find("saii") == children.end())
    {
        if(saii != nullptr)
        {
            children["saii"] = saii;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi()
    :
    agi_type{YType::enumeration, "agi-type"}
    	,
    agi1(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1>())
{
    agi1->parent = this;
    children["agi1"] = agi1;

    yang_name = "agi"; yang_parent_name = "fec130";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::~Agi()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::has_data() const
{
    return agi_type.is_set
	|| (agi1 !=  nullptr && agi1->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::has_operation() const
{
    return is_set(operation)
	|| is_set(agi_type.operation)
	|| (agi1 !=  nullptr && agi1->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agi_type.is_set || is_set(agi_type.operation)) leaf_name_data.push_back(agi_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agi1")
    {
        if(agi1 != nullptr)
        {
            children["agi1"] = agi1;
        }
        else
        {
            agi1 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1>();
            agi1->parent = this;
            children["agi1"] = agi1;
        }
        return children.at("agi1");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::get_children()
{
    if(children.find("agi1") == children.end())
    {
        if(agi1 != nullptr)
        {
            children["agi1"] = agi1;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "agi-type")
    {
        agi_type = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::Agi1()
    :
    rd{YType::uint64, "rd"}
{
    yang_name = "agi1"; yang_parent_name = "agi";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::~Agi1()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::has_data() const
{
    return rd.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agi1";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/agi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Saii()
    :
    aii_type{YType::enumeration, "aii-type"}
    	,
    aii1(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1>())
	,aii2(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2>())
{
    aii1->parent = this;
    children["aii1"] = aii1;

    aii2->parent = this;
    children["aii2"] = aii2;

    yang_name = "saii"; yang_parent_name = "fec130";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::~Saii()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::has_data() const
{
    return aii_type.is_set
	|| (aii1 !=  nullptr && aii1->has_data())
	|| (aii2 !=  nullptr && aii2->has_data());
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::has_operation() const
{
    return is_set(operation)
	|| is_set(aii_type.operation)
	|| (aii1 !=  nullptr && aii1->has_operation())
	|| (aii2 !=  nullptr && aii2->has_operation());
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saii";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aii_type.is_set || is_set(aii_type.operation)) leaf_name_data.push_back(aii_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aii1")
    {
        if(aii1 != nullptr)
        {
            children["aii1"] = aii1;
        }
        else
        {
            aii1 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1>();
            aii1->parent = this;
            children["aii1"] = aii1;
        }
        return children.at("aii1");
    }

    if(child_yang_name == "aii2")
    {
        if(aii2 != nullptr)
        {
            children["aii2"] = aii2;
        }
        else
        {
            aii2 = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2>();
            aii2->parent = this;
            children["aii2"] = aii2;
        }
        return children.at("aii2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::get_children()
{
    if(children.find("aii1") == children.end())
    {
        if(aii1 != nullptr)
        {
            children["aii1"] = aii1;
        }
    }

    if(children.find("aii2") == children.end())
    {
        if(aii2 != nullptr)
        {
            children["aii2"] = aii2;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aii-type")
    {
        aii_type = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::Aii1()
    :
    local_id{YType::str, "local-id"}
{
    yang_name = "aii1"; yang_parent_name = "saii";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::~Aii1()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::has_data() const
{
    return local_id.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::has_operation() const
{
    return is_set(operation)
	|| is_set(local_id.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii1";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-id")
    {
        local_id = value;
    }
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::Aii2()
    :
    ac_id{YType::uint32, "ac-id"},
    gobal_id{YType::uint32, "gobal-id"},
    prefix{YType::uint32, "prefix"}
{
    yang_name = "aii2"; yang_parent_name = "saii";
}

MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::~Aii2()
{
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::has_data() const
{
    return ac_id.is_set
	|| gobal_id.is_set
	|| prefix.is_set;
}

bool MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(gobal_id.operation)
	|| is_set(prefix.operation);
}

std::string MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aii2";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/ato-mdb-table-entries/ato-mdb-table-entry/fec-info/fec130/saii/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (gobal_id.is_set || is_set(gobal_id.operation)) leaf_name_data.push_back(gobal_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "gobal-id")
    {
        gobal_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

MplsLdp::Global::Standby::NsrSummaryAll::NsrSummaryAll()
    :
    sessions(std::make_shared<MplsLdp::Global::Standby::NsrSummaryAll::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::NsrSummaryAll::Vrf>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "nsr-summary-all"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::NsrSummaryAll::~NsrSummaryAll()
{
}

bool MplsLdp::Global::Standby::NsrSummaryAll::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::NsrSummaryAll::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::NsrSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-summary-all";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::NsrSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::NsrSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::NsrSummaryAll::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::NsrSummaryAll::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::NsrSummaryAll::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::NsrSummaryAll::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::NsrSummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "nsr-summary-all";
}

MplsLdp::Global::Standby::NsrSummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::NsrSummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::NsrSummaryAll::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::NsrSummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::NsrSummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/nsr-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::NsrSummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::NsrSummaryAll::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::NsrSummaryAll::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::NsrSummaryAll::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "nsr-summary-all";
}

MplsLdp::Global::Standby::NsrSummaryAll::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::NsrSummaryAll::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Standby::NsrSummaryAll::Sessions::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_eligible.operation)
	|| is_set(nsr_state_app_wait.operation)
	|| is_set(nsr_state_none.operation)
	|| is_set(nsr_state_operational.operation)
	|| is_set(nsr_state_prepare.operation)
	|| is_set(nsr_state_ready.operation)
	|| is_set(nsr_state_tcp_phase1.operation)
	|| is_set(nsr_state_tcp_phase2.operation)
	|| is_set(nsr_state_wait.operation)
	|| is_set(total.operation);
}

std::string MplsLdp::Global::Standby::NsrSummaryAll::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::NsrSummaryAll::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/nsr-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.operation)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.operation)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.operation)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.operation)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.operation)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.operation)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.operation)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.operation)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.operation)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::NsrSummaryAll::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::NsrSummaryAll::Sessions::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::NsrSummaryAll::Sessions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

MplsLdp::Global::Standby::Summary::Summary()
    :
    is_bound_with_atom{YType::boolean, "is-bound-with-atom"},
    is_bound_with_interface_manager{YType::boolean, "is-bound-with-interface-manager"},
    is_bound_with_ip_arm{YType::boolean, "is-bound-with-ip-arm"},
    is_bound_with_ipv4_rib{YType::boolean, "is-bound-with-ipv4-rib"},
    is_bound_with_ipv6_rib{YType::boolean, "is-bound-with-ipv6-rib"},
    is_bound_with_lsd{YType::boolean, "is-bound-with-lsd"},
    is_bound_with_nsr_mate{YType::boolean, "is-bound-with-nsr-mate"},
    is_bound_with_rsi{YType::boolean, "is-bound-with-rsi"},
    is_bound_with_sysdb{YType::boolean, "is-bound-with-sysdb"},
    is_mldp_registered{YType::boolean, "is-mldp-registered"},
    is_nsr_configured{YType::boolean, "is-nsr-configured"},
    is_registered_with_interface_manager{YType::boolean, "is-registered-with-interface-manager"},
    is_registered_with_ipv4_rib{YType::boolean, "is-registered-with-ipv4-rib"},
    is_registered_with_ipv6_rib{YType::boolean, "is-registered-with-ipv6-rib"},
    is_registered_with_lsd{YType::boolean, "is-registered-with-lsd"},
    is_registered_with_sysdb{YType::boolean, "is-registered-with-sysdb"},
    number_of_autocfg_interfaces{YType::uint32, "number-of-autocfg-interfaces"},
    number_of_fwd_ref_interfaces{YType::uint32, "number-of-fwd-ref-interfaces"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"},
    number_of_ipv4rib_tables{YType::uint32, "number-of-ipv4rib-tables"},
    number_of_ipv6rib_tables{YType::uint32, "number-of-ipv6rib-tables"},
    number_of_registered_ipv4rib_tables{YType::uint32, "number-of-registered-ipv4rib-tables"},
    number_of_registered_ipv6rib_tables{YType::uint32, "number-of-registered-ipv6rib-tables"},
    number_of_vrf{YType::uint32, "number-of-vrf"},
    number_of_vrf_oper{YType::uint32, "number-of-vrf-oper"}
    	,
    common(std::make_shared<MplsLdp::Global::Standby::Summary::Common>())
{
    common->parent = this;
    children["common"] = common;

    yang_name = "summary"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::Summary::~Summary()
{
}

bool MplsLdp::Global::Standby::Summary::has_data() const
{
    return is_bound_with_atom.is_set
	|| is_bound_with_interface_manager.is_set
	|| is_bound_with_ip_arm.is_set
	|| is_bound_with_ipv4_rib.is_set
	|| is_bound_with_ipv6_rib.is_set
	|| is_bound_with_lsd.is_set
	|| is_bound_with_nsr_mate.is_set
	|| is_bound_with_rsi.is_set
	|| is_bound_with_sysdb.is_set
	|| is_mldp_registered.is_set
	|| is_nsr_configured.is_set
	|| is_registered_with_interface_manager.is_set
	|| is_registered_with_ipv4_rib.is_set
	|| is_registered_with_ipv6_rib.is_set
	|| is_registered_with_lsd.is_set
	|| is_registered_with_sysdb.is_set
	|| number_of_autocfg_interfaces.is_set
	|| number_of_fwd_ref_interfaces.is_set
	|| number_of_interfaces.is_set
	|| number_of_ipv4rib_tables.is_set
	|| number_of_ipv6rib_tables.is_set
	|| number_of_registered_ipv4rib_tables.is_set
	|| number_of_registered_ipv6rib_tables.is_set
	|| number_of_vrf.is_set
	|| number_of_vrf_oper.is_set
	|| (common !=  nullptr && common->has_data());
}

bool MplsLdp::Global::Standby::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bound_with_atom.operation)
	|| is_set(is_bound_with_interface_manager.operation)
	|| is_set(is_bound_with_ip_arm.operation)
	|| is_set(is_bound_with_ipv4_rib.operation)
	|| is_set(is_bound_with_ipv6_rib.operation)
	|| is_set(is_bound_with_lsd.operation)
	|| is_set(is_bound_with_nsr_mate.operation)
	|| is_set(is_bound_with_rsi.operation)
	|| is_set(is_bound_with_sysdb.operation)
	|| is_set(is_mldp_registered.operation)
	|| is_set(is_nsr_configured.operation)
	|| is_set(is_registered_with_interface_manager.operation)
	|| is_set(is_registered_with_ipv4_rib.operation)
	|| is_set(is_registered_with_ipv6_rib.operation)
	|| is_set(is_registered_with_lsd.operation)
	|| is_set(is_registered_with_sysdb.operation)
	|| is_set(number_of_autocfg_interfaces.operation)
	|| is_set(number_of_fwd_ref_interfaces.operation)
	|| is_set(number_of_interfaces.operation)
	|| is_set(number_of_ipv4rib_tables.operation)
	|| is_set(number_of_ipv6rib_tables.operation)
	|| is_set(number_of_registered_ipv4rib_tables.operation)
	|| is_set(number_of_registered_ipv6rib_tables.operation)
	|| is_set(number_of_vrf.operation)
	|| is_set(number_of_vrf_oper.operation)
	|| (common !=  nullptr && common->has_operation());
}

std::string MplsLdp::Global::Standby::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bound_with_atom.is_set || is_set(is_bound_with_atom.operation)) leaf_name_data.push_back(is_bound_with_atom.get_name_leafdata());
    if (is_bound_with_interface_manager.is_set || is_set(is_bound_with_interface_manager.operation)) leaf_name_data.push_back(is_bound_with_interface_manager.get_name_leafdata());
    if (is_bound_with_ip_arm.is_set || is_set(is_bound_with_ip_arm.operation)) leaf_name_data.push_back(is_bound_with_ip_arm.get_name_leafdata());
    if (is_bound_with_ipv4_rib.is_set || is_set(is_bound_with_ipv4_rib.operation)) leaf_name_data.push_back(is_bound_with_ipv4_rib.get_name_leafdata());
    if (is_bound_with_ipv6_rib.is_set || is_set(is_bound_with_ipv6_rib.operation)) leaf_name_data.push_back(is_bound_with_ipv6_rib.get_name_leafdata());
    if (is_bound_with_lsd.is_set || is_set(is_bound_with_lsd.operation)) leaf_name_data.push_back(is_bound_with_lsd.get_name_leafdata());
    if (is_bound_with_nsr_mate.is_set || is_set(is_bound_with_nsr_mate.operation)) leaf_name_data.push_back(is_bound_with_nsr_mate.get_name_leafdata());
    if (is_bound_with_rsi.is_set || is_set(is_bound_with_rsi.operation)) leaf_name_data.push_back(is_bound_with_rsi.get_name_leafdata());
    if (is_bound_with_sysdb.is_set || is_set(is_bound_with_sysdb.operation)) leaf_name_data.push_back(is_bound_with_sysdb.get_name_leafdata());
    if (is_mldp_registered.is_set || is_set(is_mldp_registered.operation)) leaf_name_data.push_back(is_mldp_registered.get_name_leafdata());
    if (is_nsr_configured.is_set || is_set(is_nsr_configured.operation)) leaf_name_data.push_back(is_nsr_configured.get_name_leafdata());
    if (is_registered_with_interface_manager.is_set || is_set(is_registered_with_interface_manager.operation)) leaf_name_data.push_back(is_registered_with_interface_manager.get_name_leafdata());
    if (is_registered_with_ipv4_rib.is_set || is_set(is_registered_with_ipv4_rib.operation)) leaf_name_data.push_back(is_registered_with_ipv4_rib.get_name_leafdata());
    if (is_registered_with_ipv6_rib.is_set || is_set(is_registered_with_ipv6_rib.operation)) leaf_name_data.push_back(is_registered_with_ipv6_rib.get_name_leafdata());
    if (is_registered_with_lsd.is_set || is_set(is_registered_with_lsd.operation)) leaf_name_data.push_back(is_registered_with_lsd.get_name_leafdata());
    if (is_registered_with_sysdb.is_set || is_set(is_registered_with_sysdb.operation)) leaf_name_data.push_back(is_registered_with_sysdb.get_name_leafdata());
    if (number_of_autocfg_interfaces.is_set || is_set(number_of_autocfg_interfaces.operation)) leaf_name_data.push_back(number_of_autocfg_interfaces.get_name_leafdata());
    if (number_of_fwd_ref_interfaces.is_set || is_set(number_of_fwd_ref_interfaces.operation)) leaf_name_data.push_back(number_of_fwd_ref_interfaces.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.operation)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());
    if (number_of_ipv4rib_tables.is_set || is_set(number_of_ipv4rib_tables.operation)) leaf_name_data.push_back(number_of_ipv4rib_tables.get_name_leafdata());
    if (number_of_ipv6rib_tables.is_set || is_set(number_of_ipv6rib_tables.operation)) leaf_name_data.push_back(number_of_ipv6rib_tables.get_name_leafdata());
    if (number_of_registered_ipv4rib_tables.is_set || is_set(number_of_registered_ipv4rib_tables.operation)) leaf_name_data.push_back(number_of_registered_ipv4rib_tables.get_name_leafdata());
    if (number_of_registered_ipv6rib_tables.is_set || is_set(number_of_registered_ipv6rib_tables.operation)) leaf_name_data.push_back(number_of_registered_ipv6rib_tables.get_name_leafdata());
    if (number_of_vrf.is_set || is_set(number_of_vrf.operation)) leaf_name_data.push_back(number_of_vrf.get_name_leafdata());
    if (number_of_vrf_oper.is_set || is_set(number_of_vrf_oper.operation)) leaf_name_data.push_back(number_of_vrf_oper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
        else
        {
            common = std::make_shared<MplsLdp::Global::Standby::Summary::Common>();
            common->parent = this;
            children["common"] = common;
        }
        return children.at("common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Summary::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bound-with-atom")
    {
        is_bound_with_atom = value;
    }
    if(value_path == "is-bound-with-interface-manager")
    {
        is_bound_with_interface_manager = value;
    }
    if(value_path == "is-bound-with-ip-arm")
    {
        is_bound_with_ip_arm = value;
    }
    if(value_path == "is-bound-with-ipv4-rib")
    {
        is_bound_with_ipv4_rib = value;
    }
    if(value_path == "is-bound-with-ipv6-rib")
    {
        is_bound_with_ipv6_rib = value;
    }
    if(value_path == "is-bound-with-lsd")
    {
        is_bound_with_lsd = value;
    }
    if(value_path == "is-bound-with-nsr-mate")
    {
        is_bound_with_nsr_mate = value;
    }
    if(value_path == "is-bound-with-rsi")
    {
        is_bound_with_rsi = value;
    }
    if(value_path == "is-bound-with-sysdb")
    {
        is_bound_with_sysdb = value;
    }
    if(value_path == "is-mldp-registered")
    {
        is_mldp_registered = value;
    }
    if(value_path == "is-nsr-configured")
    {
        is_nsr_configured = value;
    }
    if(value_path == "is-registered-with-interface-manager")
    {
        is_registered_with_interface_manager = value;
    }
    if(value_path == "is-registered-with-ipv4-rib")
    {
        is_registered_with_ipv4_rib = value;
    }
    if(value_path == "is-registered-with-ipv6-rib")
    {
        is_registered_with_ipv6_rib = value;
    }
    if(value_path == "is-registered-with-lsd")
    {
        is_registered_with_lsd = value;
    }
    if(value_path == "is-registered-with-sysdb")
    {
        is_registered_with_sysdb = value;
    }
    if(value_path == "number-of-autocfg-interfaces")
    {
        number_of_autocfg_interfaces = value;
    }
    if(value_path == "number-of-fwd-ref-interfaces")
    {
        number_of_fwd_ref_interfaces = value;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
    }
    if(value_path == "number-of-ipv4rib-tables")
    {
        number_of_ipv4rib_tables = value;
    }
    if(value_path == "number-of-ipv6rib-tables")
    {
        number_of_ipv6rib_tables = value;
    }
    if(value_path == "number-of-registered-ipv4rib-tables")
    {
        number_of_registered_ipv4rib_tables = value;
    }
    if(value_path == "number-of-registered-ipv6rib-tables")
    {
        number_of_registered_ipv6rib_tables = value;
    }
    if(value_path == "number-of-vrf")
    {
        number_of_vrf = value;
    }
    if(value_path == "number-of-vrf-oper")
    {
        number_of_vrf_oper = value;
    }
}

MplsLdp::Global::Standby::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{
    yang_name = "common"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Standby::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Standby::Summary::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(address_families.operation)
	|| is_set(number_of_bindings_ipv4.operation)
	|| is_set(number_of_bindings_ipv6.operation)
	|| is_set(number_of_downstream_on_demand_neighbors.operation)
	|| is_set(number_of_graceful_restart_neighbors.operation)
	|| is_set(number_of_ipv4_hello_adj.operation)
	|| is_set(number_of_ipv4_local_addresses.operation)
	|| is_set(number_of_ipv4_routes.operation)
	|| is_set(number_of_ipv4af.operation)
	|| is_set(number_of_ipv4ldp_interfaces.operation)
	|| is_set(number_of_ipv6_hello_adj.operation)
	|| is_set(number_of_ipv6_local_addresses.operation)
	|| is_set(number_of_ipv6_routes.operation)
	|| is_set(number_of_ipv6af.operation)
	|| is_set(number_of_ipv6ldp_interfaces.operation)
	|| is_set(number_of_ldp_interfaces.operation)
	|| is_set(number_of_local_bindings_ipv4.operation)
	|| is_set(number_of_local_bindings_ipv6.operation)
	|| is_set(number_of_neighbors.operation)
	|| is_set(number_of_nsr_synced_neighbors.operation)
	|| is_set(number_of_remote_bindings_ipv4.operation)
	|| is_set(number_of_remote_bindings_ipv6.operation);
}

std::string MplsLdp::Global::Standby::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Summary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.operation)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.operation)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.operation)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.operation)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.operation)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.operation)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.operation)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.operation)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Summary::Common::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Summary::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-families")
    {
        address_families = value;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::Vrfs::~Vrfs()
{
}

bool MplsLdp::Global::Standby::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    afs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs>())
	,backoff_parameters(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters>())
	,backoffs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs>())
	,capabilities(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities>())
	,graceful_restart(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart>())
	,issu(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu>())
	,ldp_id(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::LdpId>())
	,neighbor_briefs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs>())
	,neighbor_capabilities(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities>())
	,neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors>())
	,nsr(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr>())
	,parameters(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters>())
	,statistics(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics>())
	,summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Summary>())
{
    afs->parent = this;
    children["afs"] = afs;

    backoff_parameters->parent = this;
    children["backoff-parameters"] = backoff_parameters;

    backoffs->parent = this;
    children["backoffs"] = backoffs;

    capabilities->parent = this;
    children["capabilities"] = capabilities;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    issu->parent = this;
    children["issu"] = issu;

    ldp_id->parent = this;
    children["ldp-id"] = ldp_id;

    neighbor_briefs->parent = this;
    children["neighbor-briefs"] = neighbor_briefs;

    neighbor_capabilities->parent = this;
    children["neighbor-capabilities"] = neighbor_capabilities;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    nsr->parent = this;
    children["nsr"] = nsr;

    parameters->parent = this;
    children["parameters"] = parameters;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (backoffs !=  nullptr && backoffs->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (ldp_id !=  nullptr && ldp_id->has_data())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_data())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (ldp_id !=  nullptr && ldp_id->has_operation())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_operation())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters != nullptr)
        {
            children["backoff-parameters"] = backoff_parameters;
        }
        else
        {
            backoff_parameters = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters>();
            backoff_parameters->parent = this;
            children["backoff-parameters"] = backoff_parameters;
        }
        return children.at("backoff-parameters");
    }

    if(child_yang_name == "backoffs")
    {
        if(backoffs != nullptr)
        {
            children["backoffs"] = backoffs;
        }
        else
        {
            backoffs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs>();
            backoffs->parent = this;
            children["backoffs"] = backoffs;
        }
        return children.at("backoffs");
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
        else
        {
            capabilities = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities>();
            capabilities->parent = this;
            children["capabilities"] = capabilities;
        }
        return children.at("capabilities");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "ldp-id")
    {
        if(ldp_id != nullptr)
        {
            children["ldp-id"] = ldp_id;
        }
        else
        {
            ldp_id = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::LdpId>();
            ldp_id->parent = this;
            children["ldp-id"] = ldp_id;
        }
        return children.at("ldp-id");
    }

    if(child_yang_name == "neighbor-briefs")
    {
        if(neighbor_briefs != nullptr)
        {
            children["neighbor-briefs"] = neighbor_briefs;
        }
        else
        {
            neighbor_briefs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs>();
            neighbor_briefs->parent = this;
            children["neighbor-briefs"] = neighbor_briefs;
        }
        return children.at("neighbor-briefs");
    }

    if(child_yang_name == "neighbor-capabilities")
    {
        if(neighbor_capabilities != nullptr)
        {
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
        else
        {
            neighbor_capabilities = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities>();
            neighbor_capabilities->parent = this;
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
        return children.at("neighbor-capabilities");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("backoff-parameters") == children.end())
    {
        if(backoff_parameters != nullptr)
        {
            children["backoff-parameters"] = backoff_parameters;
        }
    }

    if(children.find("backoffs") == children.end())
    {
        if(backoffs != nullptr)
        {
            children["backoffs"] = backoffs;
        }
    }

    if(children.find("capabilities") == children.end())
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("ldp-id") == children.end())
    {
        if(ldp_id != nullptr)
        {
            children["ldp-id"] = ldp_id;
        }
    }

    if(children.find("neighbor-briefs") == children.end())
    {
        if(neighbor_briefs != nullptr)
        {
            children["neighbor-briefs"] = neighbor_briefs;
        }
    }

    if(children.find("neighbor-capabilities") == children.end())
    {
        if(neighbor_capabilities != nullptr)
        {
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestart()
    :
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"},
    is_forwarding_state_hold_timer_running{YType::boolean, "is-forwarding-state-hold-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "graceful-restart"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_data())
            return true;
    }
    return forwarding_state_hold_timer_remaining_seconds.is_set
	|| is_forwarding_state_hold_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(forwarding_state_hold_timer_remaining_seconds.operation)
	|| is_set(is_forwarding_state_hold_timer_running.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.operation)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());
    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.operation)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restartable-neighbor")
    {
        for(auto const & c : graceful_restartable_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor>();
        c->parent = this;
        graceful_restartable_neighbor.push_back(std::move(c));
        children[segment_path] = graceful_restartable_neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::get_children()
{
    for (auto const & c : graceful_restartable_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GracefulRestartableNeighbor()
    :
    connect_count{YType::uint32, "connect-count"},
    down_nbr_down_reason{YType::uint32, "down-nbr-down-reason"},
    down_nbr_flags{YType::uint32, "down-nbr-flags"},
    down_nbr_flap_count{YType::uint8, "down-nbr-flap-count"},
    is_liveness_timer_running{YType::boolean, "is-liveness-timer-running"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"}
    	,
    gr_peer(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>())
{
    gr_peer->parent = this;
    children["gr-peer"] = gr_peer;

    yang_name = "graceful-restartable-neighbor"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::~GracefulRestartableNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::has_data() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_data())
            return true;
    }
    return connect_count.is_set
	|| down_nbr_down_reason.is_set
	|| down_nbr_flags.is_set
	|| down_nbr_flap_count.is_set
	|| is_liveness_timer_running.is_set
	|| is_neighbor_up.is_set
	|| is_recovery_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| recovery_timer_remaining_seconds.is_set
	|| (gr_peer !=  nullptr && gr_peer->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::has_operation() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_count.operation)
	|| is_set(down_nbr_down_reason.operation)
	|| is_set(down_nbr_flags.operation)
	|| is_set(down_nbr_flap_count.operation)
	|| is_set(is_liveness_timer_running.operation)
	|| is_set(is_neighbor_up.operation)
	|| is_set(is_recovery_timer_running.operation)
	|| is_set(liveness_timer_remaining_seconds.operation)
	|| is_set(recovery_timer_remaining_seconds.operation)
	|| (gr_peer !=  nullptr && gr_peer->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restartable-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestartableNeighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.operation)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());
    if (down_nbr_flags.is_set || is_set(down_nbr_flags.operation)) leaf_name_data.push_back(down_nbr_flags.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.operation)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.operation)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.operation)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.operation)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.operation)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.operation)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "down-nbr-address")
    {
        for(auto const & c : down_nbr_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress>();
        c->parent = this;
        down_nbr_address.push_back(std::move(c));
        children[segment_path] = down_nbr_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "down-nbr-interface")
    {
        for(auto const & c : down_nbr_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface>();
        c->parent = this;
        down_nbr_interface.push_back(std::move(c));
        children[segment_path] = down_nbr_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "gr-peer")
    {
        if(gr_peer != nullptr)
        {
            children["gr-peer"] = gr_peer;
        }
        else
        {
            gr_peer = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>();
            gr_peer->parent = this;
            children["gr-peer"] = gr_peer;
        }
        return children.at("gr-peer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::get_children()
{
    for (auto const & c : down_nbr_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : down_nbr_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("gr-peer") == children.end())
    {
        if(gr_peer != nullptr)
        {
            children["gr-peer"] = gr_peer;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags = value;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::GrPeer()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "gr-peer"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::~GrPeer()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrPeer' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::DownNbrInterface()
    :
    address_family{YType::enumeration, "address-family"},
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "down-nbr-interface"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::~DownNbrInterface()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_data() const
{
    return address_family.is_set
	|| interface_handle.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(interface_handle.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-interface";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownNbrInterface' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::DownNbrAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "down-nbr-address"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::~DownNbrAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownNbrAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::has_data() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capabilities' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capability")
    {
        for(auto const & c : capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability>();
        c->parent = this;
        capability.push_back(std::move(c));
        children[segment_path] = capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::get_children()
{
    for (auto const & c : capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability()
    :
    capability_type{YType::int32, "capability-type"},
    capability_owner{YType::str, "capability-owner"}
    	,
    capability(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_>())
{
    capability->parent = this;
    children["capability"] = capability;

    yang_name = "capability"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::has_data() const
{
    return capability_type.is_set
	|| capability_owner.is_set
	|| (capability !=  nullptr && capability->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_type.operation)
	|| is_set(capability_owner.operation)
	|| (capability !=  nullptr && capability->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[capability-type='" <<capability_type <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.operation)) leaf_name_data.push_back(capability_type.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.operation)) leaf_name_data.push_back(capability_owner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capability")
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
        else
        {
            capability = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_>();
            capability->parent = this;
            children["capability"] = capability;
        }
        return children.at("capability");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::get_children()
{
    if(children.find("capability") == children.end())
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::Capability_()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "capability"; yang_parent_name = "capability";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::~Capability_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Capabilities::Capability::Capability_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Summary()
    :
    common(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_>())
{
    common->parent = this;
    children["common"] = common;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "summary"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Summary::~Summary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Summary::has_data() const
{
    return (common !=  nullptr && common->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(operation)
	|| (common !=  nullptr && common->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
        else
        {
            common = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common>();
            common->parent = this;
            children["common"] = common;
        }
        return children.at("common");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Summary::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{
    yang_name = "common"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(address_families.operation)
	|| is_set(number_of_bindings_ipv4.operation)
	|| is_set(number_of_bindings_ipv6.operation)
	|| is_set(number_of_downstream_on_demand_neighbors.operation)
	|| is_set(number_of_graceful_restart_neighbors.operation)
	|| is_set(number_of_ipv4_hello_adj.operation)
	|| is_set(number_of_ipv4_local_addresses.operation)
	|| is_set(number_of_ipv4_routes.operation)
	|| is_set(number_of_ipv4af.operation)
	|| is_set(number_of_ipv4ldp_interfaces.operation)
	|| is_set(number_of_ipv6_hello_adj.operation)
	|| is_set(number_of_ipv6_local_addresses.operation)
	|| is_set(number_of_ipv6_routes.operation)
	|| is_set(number_of_ipv6af.operation)
	|| is_set(number_of_ipv6ldp_interfaces.operation)
	|| is_set(number_of_ldp_interfaces.operation)
	|| is_set(number_of_local_bindings_ipv4.operation)
	|| is_set(number_of_local_bindings_ipv6.operation)
	|| is_set(number_of_neighbors.operation)
	|| is_set(number_of_nsr_synced_neighbors.operation)
	|| is_set(number_of_remote_bindings_ipv4.operation)
	|| is_set(number_of_remote_bindings_ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.operation)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.operation)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.operation)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.operation)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.operation)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.operation)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.operation)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.operation)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Summary::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-families")
    {
        address_families = value;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    bindings(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings>())
	,bindings_advertise_spec(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec>())
	,bindings_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary>())
	,bindings_summary_all(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll>())
	,discovery(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery>())
	,forwarding_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary>())
	,forwardings(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings>())
	,igp(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp>())
	,interface_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary>())
	,interfaces(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces>())
{
    bindings->parent = this;
    children["bindings"] = bindings;

    bindings_advertise_spec->parent = this;
    children["bindings-advertise-spec"] = bindings_advertise_spec;

    bindings_summary->parent = this;
    children["bindings-summary"] = bindings_summary;

    bindings_summary_all->parent = this;
    children["bindings-summary-all"] = bindings_summary_all;

    discovery->parent = this;
    children["discovery"] = discovery;

    forwarding_summary->parent = this;
    children["forwarding-summary"] = forwarding_summary;

    forwardings->parent = this;
    children["forwardings"] = forwardings;

    igp->parent = this;
    children["igp"] = igp;

    interface_summary->parent = this;
    children["interface-summary"] = interface_summary;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (bindings !=  nullptr && bindings->has_data())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (forwardings !=  nullptr && forwardings->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (forwardings !=  nullptr && forwardings->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bindings")
    {
        if(bindings != nullptr)
        {
            children["bindings"] = bindings;
        }
        else
        {
            bindings = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings>();
            bindings->parent = this;
            children["bindings"] = bindings;
        }
        return children.at("bindings");
    }

    if(child_yang_name == "bindings-advertise-spec")
    {
        if(bindings_advertise_spec != nullptr)
        {
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
        else
        {
            bindings_advertise_spec = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec>();
            bindings_advertise_spec->parent = this;
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
        return children.at("bindings-advertise-spec");
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary != nullptr)
        {
            children["bindings-summary"] = bindings_summary;
        }
        else
        {
            bindings_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary>();
            bindings_summary->parent = this;
            children["bindings-summary"] = bindings_summary;
        }
        return children.at("bindings-summary");
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
        else
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll>();
            bindings_summary_all->parent = this;
            children["bindings-summary-all"] = bindings_summary_all;
        }
        return children.at("bindings-summary-all");
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery;
        }
        else
        {
            discovery = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery;
        }
        return children.at("discovery");
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
        else
        {
            forwarding_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary>();
            forwarding_summary->parent = this;
            children["forwarding-summary"] = forwarding_summary;
        }
        return children.at("forwarding-summary");
    }

    if(child_yang_name == "forwardings")
    {
        if(forwardings != nullptr)
        {
            children["forwardings"] = forwardings;
        }
        else
        {
            forwardings = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings>();
            forwardings->parent = this;
            children["forwardings"] = forwardings;
        }
        return children.at("forwardings");
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
        else
        {
            igp = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp>();
            igp->parent = this;
            children["igp"] = igp;
        }
        return children.at("igp");
    }

    if(child_yang_name == "interface-summary")
    {
        if(interface_summary != nullptr)
        {
            children["interface-summary"] = interface_summary;
        }
        else
        {
            interface_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary>();
            interface_summary->parent = this;
            children["interface-summary"] = interface_summary;
        }
        return children.at("interface-summary");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::get_children()
{
    if(children.find("bindings") == children.end())
    {
        if(bindings != nullptr)
        {
            children["bindings"] = bindings;
        }
    }

    if(children.find("bindings-advertise-spec") == children.end())
    {
        if(bindings_advertise_spec != nullptr)
        {
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
    }

    if(children.find("bindings-summary") == children.end())
    {
        if(bindings_summary != nullptr)
        {
            children["bindings-summary"] = bindings_summary;
        }
    }

    if(children.find("bindings-summary-all") == children.end())
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
    }

    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery;
        }
    }

    if(children.find("forwarding-summary") == children.end())
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
    }

    if(children.find("forwardings") == children.end())
    {
        if(forwardings != nullptr)
        {
            children["forwardings"] = forwardings;
        }
    }

    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
    }

    if(children.find("interface-summary") == children.end())
    {
        if(interface_summary != nullptr)
        {
            children["interface-summary"] = interface_summary;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    auto_config{YType::uint32, "auto-config"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"},
    forward_references{YType::uint32, "forward-references"},
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"},
    ldp_configured_attached_interface{YType::uint32, "ldp-configured-attached-interface"},
    ldp_configured_te_interface{YType::uint32, "ldp-configured-te-interface"}
{
    yang_name = "interface-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_data() const
{
    return auto_config.is_set
	|| auto_config_disabled.is_set
	|| auto_config_forward_reference_interfaces.is_set
	|| forward_references.is_set
	|| known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set
	|| ldp_configured_attached_interface.is_set
	|| ldp_configured_te_interface.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_config.operation)
	|| is_set(auto_config_disabled.operation)
	|| is_set(auto_config_forward_reference_interfaces.operation)
	|| is_set(forward_references.operation)
	|| is_set(known_ip_interface_count.operation)
	|| is_set(known_ip_interface_ldp_enabled.operation)
	|| is_set(ldp_configured_attached_interface.operation)
	|| is_set(ldp_configured_te_interface.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.operation)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.operation)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.operation)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.operation)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.operation)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.operation)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());
    if (ldp_configured_attached_interface.is_set || is_set(ldp_configured_attached_interface.operation)) leaf_name_data.push_back(ldp_configured_attached_interface.get_name_leafdata());
    if (ldp_configured_te_interface.is_set || is_set(ldp_configured_te_interface.operation)) leaf_name_data.push_back(ldp_configured_te_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
    }
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface = value;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Bindings()
{
    yang_name = "bindings"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::~Bindings()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bindings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding>();
        c->parent = this;
        binding.push_back(std::move(c));
        children[segment_path] = binding.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::get_children()
{
    for (auto const & c : binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Binding()
    :
    prefix{YType::str, "prefix"},
    advertise_prefix_acl{YType::str, "advertise-prefix-acl"},
    advertise_tsr_acl{YType::str, "advertise-tsr-acl"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"},
    is_elc{YType::boolean, "is-elc"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    local_label{YType::uint32, "local-label"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_>())
{
    prefix_xr->parent = this;
    children["prefix-xr"] = prefix_xr;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "binding"; yang_parent_name = "bindings";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::~Binding()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| advertise_prefix_acl.is_set
	|| advertise_tsr_acl.is_set
	|| config_enforced_local_label_value.is_set
	|| is_elc.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| local_label.is_set
	|| prefix_length.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(advertise_prefix_acl.operation)
	|| is_set(advertise_tsr_acl.operation)
	|| is_set(config_enforced_local_label_value.operation)
	|| is_set(is_elc.operation)
	|| is_set(is_no_route.operation)
	|| is_set(label_oor.operation)
	|| is_set(le_local_binding_revision.operation)
	|| is_set(le_local_label_state.operation)
	|| is_set(local_label.operation)
	|| is_set(prefix_length.operation)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise_prefix_acl.is_set || is_set(advertise_prefix_acl.operation)) leaf_name_data.push_back(advertise_prefix_acl.get_name_leafdata());
    if (advertise_tsr_acl.is_set || is_set(advertise_tsr_acl.operation)) leaf_name_data.push_back(advertise_tsr_acl.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.operation)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());
    if (is_elc.is_set || is_set(is_elc.operation)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.operation)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.operation)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.operation)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.operation)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peers-acked")
    {
        for(auto const & c : peers_acked)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked>();
        c->parent = this;
        peers_acked.push_back(std::move(c));
        children[segment_path] = peers_acked.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "peers-advertised-to")
    {
        for(auto const & c : peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo>();
        c->parent = this;
        peers_advertised_to.push_back(std::move(c));
        children[segment_path] = peers_advertised_to.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
        else
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr>();
            prefix_xr->parent = this;
            children["prefix-xr"] = prefix_xr;
        }
        return children.at("prefix-xr");
    }

    if(child_yang_name == "remote-binding")
    {
        for(auto const & c : remote_binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding>();
        c->parent = this;
        remote_binding.push_back(std::move(c));
        children[segment_path] = remote_binding.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::get_children()
{
    for (auto const & c : peers_acked)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : peers_advertised_to)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("prefix-xr") == children.end())
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
    }

    for (auto const & c : remote_binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl = value;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl = value;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
    }
    if(value_path == "is-elc")
    {
        is_elc = value;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    is_elc{YType::boolean, "is-elc"},
    is_stale{YType::boolean, "is-stale"},
    remote_label{YType::uint32, "remote-label"}
    	,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;
    children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;

    yang_name = "remote-binding"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::has_data() const
{
    return is_elc.is_set
	|| is_stale.is_set
	|| remote_label.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(operation)
	|| is_set(is_elc.operation)
	|| is_set(is_stale.operation)
	|| is_set(remote_label.operation)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteBinding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_elc.is_set || is_set(is_elc.operation)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "assigning-peer-ldp-ident")
    {
        if(assigning_peer_ldp_ident != nullptr)
        {
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
        else
        {
            assigning_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>();
            assigning_peer_ldp_ident->parent = this;
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
        return children.at("assigning-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::get_children()
{
    if(children.find("assigning-peer-ldp-ident") == children.end())
    {
        if(assigning_peer_ldp_ident != nullptr)
        {
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-elc")
    {
        is_elc = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssigningPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-advertised-to"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAdvertisedTo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::PeersAcked()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-acked"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::~PeersAcked()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-acked";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAcked' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Igp()
    :
    sync_delay_restart(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart>())
	,syncs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs>())
{
    sync_delay_restart->parent = this;
    children["sync-delay-restart"] = sync_delay_restart;

    syncs->parent = this;
    children["syncs"] = syncs;

    yang_name = "igp"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::has_data() const
{
    return (sync_delay_restart !=  nullptr && sync_delay_restart->has_data())
	|| (syncs !=  nullptr && syncs->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::has_operation() const
{
    return is_set(operation)
	|| (sync_delay_restart !=  nullptr && sync_delay_restart->has_operation())
	|| (syncs !=  nullptr && syncs->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-delay-restart")
    {
        if(sync_delay_restart != nullptr)
        {
            children["sync-delay-restart"] = sync_delay_restart;
        }
        else
        {
            sync_delay_restart = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart>();
            sync_delay_restart->parent = this;
            children["sync-delay-restart"] = sync_delay_restart;
        }
        return children.at("sync-delay-restart");
    }

    if(child_yang_name == "syncs")
    {
        if(syncs != nullptr)
        {
            children["syncs"] = syncs;
        }
        else
        {
            syncs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs>();
            syncs->parent = this;
            children["syncs"] = syncs;
        }
        return children.at("syncs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::get_children()
{
    if(children.find("sync-delay-restart") == children.end())
    {
        if(sync_delay_restart != nullptr)
        {
            children["sync-delay-restart"] = sync_delay_restart;
        }
    }

    if(children.find("syncs") == children.end())
    {
        if(syncs != nullptr)
        {
            children["syncs"] = syncs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Syncs()
{
    yang_name = "syncs"; yang_parent_name = "igp";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::~Syncs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::has_data() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::has_operation() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syncs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync")
    {
        for(auto const & c : sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync>();
        c->parent = this;
        sync.push_back(std::move(c));
        children[segment_path] = sync.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::get_children()
{
    for (auto const & c : sync)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Sync()
    :
    interface_name{YType::str, "interface-name"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_delay{YType::uint32, "igp-sync-delay"},
    igp_sync_down_reason{YType::enumeration, "igp-sync-down-reason"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_delay_timer_running{YType::boolean, "is-delay-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "sync"; yang_parent_name = "syncs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::~Sync()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::has_data() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| delay_timer_remaining.is_set
	|| igp_sync_delay.is_set
	|| igp_sync_down_reason.is_set
	|| igp_sync_state.is_set
	|| interface_name_xr.is_set
	|| is_delay_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::has_operation() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(delay_timer_remaining.operation)
	|| is_set(igp_sync_delay.operation)
	|| is_set(igp_sync_down_reason.operation)
	|| is_set(igp_sync_state.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_delay_timer_running.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.operation)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_delay.is_set || is_set(igp_sync_delay.operation)) leaf_name_data.push_back(igp_sync_delay.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.operation)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.operation)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.operation)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gr-only-peer")
    {
        for(auto const & c : gr_only_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer>();
        c->parent = this;
        gr_only_peer.push_back(std::move(c));
        children[segment_path] = gr_only_peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers>();
        c->parent = this;
        peers.push_back(std::move(c));
        children[segment_path] = peers.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::get_children()
{
    for (auto const & c : gr_only_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : peers)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay = value;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "sync";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::Peers()
    :
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "peers"; yang_parent_name = "sync";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::~Peers()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::has_data() const
{
    return is_gr_enabled.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::has_operation() const
{
    return is_set(operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::GrOnlyPeer()
    :
    is_chkpt_created{YType::boolean, "is-chkpt-created"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "gr-only-peer"; yang_parent_name = "sync";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::~GrOnlyPeer()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_data() const
{
    return is_chkpt_created.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_chkpt_created.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-only-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrOnlyPeer' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_chkpt_created.is_set || is_set(is_chkpt_created.operation)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::SyncDelayRestart()
    :
    configured{YType::boolean, "configured"},
    delay_secs{YType::uint32, "delay-secs"},
    remaining_secs{YType::uint32, "remaining-secs"},
    timer_running{YType::boolean, "timer-running"}
{
    yang_name = "sync-delay-restart"; yang_parent_name = "igp";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::~SyncDelayRestart()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::has_data() const
{
    return configured.is_set
	|| delay_secs.is_set
	|| remaining_secs.is_set
	|| timer_running.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(delay_secs.operation)
	|| is_set(remaining_secs.operation)
	|| is_set(timer_running.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-delay-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SyncDelayRestart' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (delay_secs.is_set || is_set(delay_secs.operation)) leaf_name_data.push_back(delay_secs.get_name_leafdata());
    if (remaining_secs.is_set || is_set(remaining_secs.operation)) leaf_name_data.push_back(remaining_secs.get_name_leafdata());
    if (timer_running.is_set || is_set(timer_running.operation)) leaf_name_data.push_back(timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "delay-secs")
    {
        delay_secs = value;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs = value;
    }
    if(value_path == "timer-running")
    {
        timer_running = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindingsSummary()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "bindings-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf>();
        c->parent = this;
        bind_af.push_back(std::move(c));
        children[segment_path] = bind_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::get_children()
{
    for (auto const & c : bind_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(last_lib_update.operation)
	|| is_set(lib_minimum_revision_sent_all.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.operation)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.operation)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::~Interfaces()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_im_stale{YType::boolean, "is-im-stale"},
    ldp_autoconfig_disable{YType::boolean, "ldp-autoconfig-disable"},
    ldp_config_mode{YType::boolean, "ldp-config-mode"},
    ldp_enabled{YType::boolean, "ldp-enabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| is_im_stale.is_set
	|| ldp_autoconfig_disable.is_set
	|| ldp_config_mode.is_set
	|| ldp_enabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_im_stale.operation)
	|| is_set(ldp_autoconfig_disable.operation)
	|| is_set(ldp_config_mode.operation)
	|| is_set(ldp_enabled.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_im_stale.is_set || is_set(is_im_stale.operation)) leaf_name_data.push_back(is_im_stale.get_name_leafdata());
    if (ldp_autoconfig_disable.is_set || is_set(ldp_autoconfig_disable.operation)) leaf_name_data.push_back(ldp_autoconfig_disable.get_name_leafdata());
    if (ldp_config_mode.is_set || is_set(ldp_config_mode.operation)) leaf_name_data.push_back(ldp_config_mode.get_name_leafdata());
    if (ldp_enabled.is_set || is_set(ldp_enabled.operation)) leaf_name_data.push_back(ldp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-config")
    {
        for(auto const & c : auto_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig>();
        c->parent = this;
        auto_config.push_back(std::move(c));
        children[segment_path] = auto_config.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "te-mesh-grp")
    {
        for(auto const & c : te_mesh_grp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp>();
        c->parent = this;
        te_mesh_grp.push_back(std::move(c));
        children[segment_path] = te_mesh_grp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::get_children()
{
    for (auto const & c : auto_config)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : te_mesh_grp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale = value;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable = value;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode = value;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "interface";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::TeMeshGrp()
    :
    ldp_mesh_group_enabled{YType::boolean, "ldp-mesh-group-enabled"},
    ldp_te_mesh_group_all_cfgd{YType::boolean, "ldp-te-mesh-group-all-cfgd"},
    te_mesh_group_id{YType::uint32, "te-mesh-group-id"}
{
    yang_name = "te-mesh-grp"; yang_parent_name = "interface";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::~TeMeshGrp()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_data() const
{
    return ldp_mesh_group_enabled.is_set
	|| ldp_te_mesh_group_all_cfgd.is_set
	|| te_mesh_group_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_operation() const
{
    return is_set(operation)
	|| is_set(ldp_mesh_group_enabled.operation)
	|| is_set(ldp_te_mesh_group_all_cfgd.operation)
	|| is_set(te_mesh_group_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mesh-grp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeMeshGrp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_mesh_group_enabled.is_set || is_set(ldp_mesh_group_enabled.operation)) leaf_name_data.push_back(ldp_mesh_group_enabled.get_name_leafdata());
    if (ldp_te_mesh_group_all_cfgd.is_set || is_set(ldp_te_mesh_group_all_cfgd.operation)) leaf_name_data.push_back(ldp_te_mesh_group_all_cfgd.get_name_leafdata());
    if (te_mesh_group_id.is_set || is_set(te_mesh_group_id.operation)) leaf_name_data.push_back(te_mesh_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled = value;
    }
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd = value;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::AutoConfig()
    :
    tuple{YType::str, "tuple"}
{
    yang_name = "auto-config"; yang_parent_name = "interface";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::~AutoConfig()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::has_data() const
{
    return tuple.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(tuple.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-config";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoConfig' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.operation)) leaf_name_data.push_back(tuple.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tuple")
    {
        tuple = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Discovery()
    :
    brief(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief>())
	,link_hellos(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos>())
	,stats(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats>())
	,summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary>())
	,targeted_hellos(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos>())
{
    brief->parent = this;
    children["brief"] = brief;

    link_hellos->parent = this;
    children["link-hellos"] = link_hellos;

    stats->parent = this;
    children["stats"] = stats;

    summary->parent = this;
    children["summary"] = summary;

    targeted_hellos->parent = this;
    children["targeted-hellos"] = targeted_hellos;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (link_hellos !=  nullptr && link_hellos->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (link_hellos !=  nullptr && link_hellos->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
        else
        {
            brief = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "link-hellos")
    {
        if(link_hellos != nullptr)
        {
            children["link-hellos"] = link_hellos;
        }
        else
        {
            link_hellos = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos>();
            link_hellos->parent = this;
            children["link-hellos"] = link_hellos;
        }
        return children.at("link-hellos");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "targeted-hellos")
    {
        if(targeted_hellos != nullptr)
        {
            children["targeted-hellos"] = targeted_hellos;
        }
        else
        {
            targeted_hellos = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos>();
            targeted_hellos->parent = this;
            children["targeted-hellos"] = targeted_hellos;
        }
        return children.at("targeted-hellos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("link-hellos") == children.end())
    {
        if(link_hellos != nullptr)
        {
            children["link-hellos"] = link_hellos;
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("targeted-hellos") == children.end())
    {
        if(targeted_hellos != nullptr)
        {
            children["targeted-hellos"] = targeted_hellos;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHellos()
{
    yang_name = "link-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::has_data() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::has_operation() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello")
    {
        for(auto const & c : link_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello>();
        c->parent = this;
        link_hello.push_back(std::move(c));
        children[segment_path] = link_hello.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::get_children()
{
    for (auto const & c : link_hello)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::LinkHello()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "link-hello"; yang_parent_name = "link-hellos";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_data() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_operation() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(next_hello.operation)
	|| is_set(quick_start_disabled.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.operation)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-link-af")
    {
        for(auto const & c : discovery_link_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf>();
        c->parent = this;
        discovery_link_af.push_back(std::move(c));
        children[segment_path] = discovery_link_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_children()
{
    for (auto const & c : discovery_link_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::HelloInformation()
    :
    disc_expiry{YType::uint32, "disc-expiry"},
    established_age{YType::uint64, "established-age"},
    established_time{YType::uint64, "established-time"},
    hold_time{YType::uint32, "hold-time"},
    is_no_route{YType::boolean, "is-no-route"},
    is_targeted{YType::boolean, "is-targeted"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"},
    session_up{YType::boolean, "session-up"}
    	,
    neighbor_src_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>())
	,neighbor_transport_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>())
	,target(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>())
{
    neighbor_src_address->parent = this;
    children["neighbor-src-address"] = neighbor_src_address;

    neighbor_transport_address->parent = this;
    children["neighbor-transport-address"] = neighbor_transport_address;

    target->parent = this;
    children["target"] = target;

    yang_name = "hello-information"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_data() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return disc_expiry.is_set
	|| established_age.is_set
	|| established_time.is_set
	|| hold_time.is_set
	|| is_no_route.is_set
	|| is_targeted.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_bringup_failure_reason.is_set
	|| session_up.is_set
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_data())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disc_expiry.operation)
	|| is_set(established_age.operation)
	|| is_set(established_time.operation)
	|| is_set(hold_time.operation)
	|| is_set(is_no_route.operation)
	|| is_set(is_targeted.operation)
	|| is_set(local_hold_time.operation)
	|| is_set(neighbor_hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(session_bringup_failure_reason.operation)
	|| is_set(session_up.operation)
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_operation())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_expiry.is_set || is_set(disc_expiry.operation)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.operation)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.operation)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.operation)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (is_targeted.is_set || is_set(is_targeted.operation)) leaf_name_data.push_back(is_targeted.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.operation)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.operation)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.operation)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-session-down-info")
    {
        for(auto const & c : last_session_down_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo>();
        c->parent = this;
        last_session_down_info.push_back(std::move(c));
        children[segment_path] = last_session_down_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-src-address")
    {
        if(neighbor_src_address != nullptr)
        {
            children["neighbor-src-address"] = neighbor_src_address;
        }
        else
        {
            neighbor_src_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>();
            neighbor_src_address->parent = this;
            children["neighbor-src-address"] = neighbor_src_address;
        }
        return children.at("neighbor-src-address");
    }

    if(child_yang_name == "neighbor-transport-address")
    {
        if(neighbor_transport_address != nullptr)
        {
            children["neighbor-transport-address"] = neighbor_transport_address;
        }
        else
        {
            neighbor_transport_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>();
            neighbor_transport_address->parent = this;
            children["neighbor-transport-address"] = neighbor_transport_address;
        }
        return children.at("neighbor-transport-address");
    }

    if(child_yang_name == "target")
    {
        if(target != nullptr)
        {
            children["target"] = target;
        }
        else
        {
            target = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>();
            target->parent = this;
            children["target"] = target;
        }
        return children.at("target");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_children()
{
    for (auto const & c : last_session_down_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("neighbor-src-address") == children.end())
    {
        if(neighbor_src_address != nullptr)
        {
            children["neighbor-src-address"] = neighbor_src_address;
        }
    }

    if(children.find("neighbor-transport-address") == children.end())
    {
        if(neighbor_transport_address != nullptr)
        {
            children["neighbor-transport-address"] = neighbor_transport_address;
        }
    }

    if(children.find("target") == children.end())
    {
        if(target != nullptr)
        {
            children["target"] = target;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
    }
    if(value_path == "established-age")
    {
        established_age = value;
    }
    if(value_path == "established-time")
    {
        established_time = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
    }
    if(value_path == "is-targeted")
    {
        is_targeted = value;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::NeighborSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "neighbor-src-address"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::~NeighborSrcAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-src-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSrcAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::NeighborTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "neighbor-transport-address"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::~NeighborTransportAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::Target()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::~Target()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Target' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{
    yang_name = "last-session-down-info"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_data() const
{
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(last_session_down_reason.operation)
	|| is_set(last_session_down_time.operation)
	|| is_set(last_session_up_time.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastSessionDownInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.operation)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.operation)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.operation)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::DiscoveryLinkAf()
    :
    interval{YType::uint32, "interval"}
    	,
    local_src_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress>())
	,local_transport_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress>())
{
    local_src_address->parent = this;
    children["local-src-address"] = local_src_address;

    local_transport_address->parent = this;
    children["local-transport-address"] = local_transport_address;

    yang_name = "discovery-link-af"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::~DiscoveryLinkAf()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_data() const
{
    return interval.is_set
	|| (local_src_address !=  nullptr && local_src_address->has_data())
	|| (local_transport_address !=  nullptr && local_transport_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| (local_src_address !=  nullptr && local_src_address->has_operation())
	|| (local_transport_address !=  nullptr && local_transport_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-link-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscoveryLinkAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-src-address")
    {
        if(local_src_address != nullptr)
        {
            children["local-src-address"] = local_src_address;
        }
        else
        {
            local_src_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress>();
            local_src_address->parent = this;
            children["local-src-address"] = local_src_address;
        }
        return children.at("local-src-address");
    }

    if(child_yang_name == "local-transport-address")
    {
        if(local_transport_address != nullptr)
        {
            children["local-transport-address"] = local_transport_address;
        }
        else
        {
            local_transport_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress>();
            local_transport_address->parent = this;
            children["local-transport-address"] = local_transport_address;
        }
        return children.at("local-transport-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_children()
{
    if(children.find("local-src-address") == children.end())
    {
        if(local_src_address != nullptr)
        {
            children["local-src-address"] = local_src_address;
        }
    }

    if(children.find("local-transport-address") == children.end())
    {
        if(local_transport_address != nullptr)
        {
            children["local-transport-address"] = local_transport_address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::LocalSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-src-address"; yang_parent_name = "discovery-link-af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::~LocalSrcAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-src-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalSrcAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::LocalTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-transport-address"; yang_parent_name = "discovery-link-af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::~LocalTransportAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Summary()
    :
    local_ldp_id{YType::str, "local-ldp-id"},
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_disc_with_bad_addr_recv{YType::uint32, "num-of-disc-with-bad-addr-recv"},
    num_of_disc_with_bad_hello_pdu{YType::uint32, "num-of-disc-with-bad-hello-pdu"},
    num_of_disc_with_bad_xport_addr{YType::uint32, "num-of-disc-with-bad-xport-addr"},
    num_of_disc_with_same_router_id{YType::uint32, "num-of-disc-with-same-router-id"},
    num_of_disc_with_wrong_router_id{YType::uint32, "num-of-disc-with-wrong-router-id"},
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "summary"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::~Summary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::has_data() const
{
    return local_ldp_id.is_set
	|| num_of_active_ldp_interfaces.is_set
	|| num_of_disc_with_bad_addr_recv.is_set
	|| num_of_disc_with_bad_hello_pdu.is_set
	|| num_of_disc_with_bad_xport_addr.is_set
	|| num_of_disc_with_same_router_id.is_set
	|| num_of_disc_with_wrong_router_id.is_set
	|| num_of_ldp_interfaces.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_recv.is_set
	|| num_of_tgt_disc_xmit.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(local_ldp_id.operation)
	|| is_set(num_of_active_ldp_interfaces.operation)
	|| is_set(num_of_disc_with_bad_addr_recv.operation)
	|| is_set(num_of_disc_with_bad_hello_pdu.operation)
	|| is_set(num_of_disc_with_bad_xport_addr.operation)
	|| is_set(num_of_disc_with_same_router_id.operation)
	|| is_set(num_of_disc_with_wrong_router_id.operation)
	|| is_set(num_of_ldp_interfaces.operation)
	|| is_set(num_of_lnk_disc_recv.operation)
	|| is_set(num_of_lnk_disc_xmit.operation)
	|| is_set(num_of_tgt_disc_recv.operation)
	|| is_set(num_of_tgt_disc_xmit.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ldp_id.is_set || is_set(local_ldp_id.operation)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_disc_with_bad_addr_recv.is_set || is_set(num_of_disc_with_bad_addr_recv.operation)) leaf_name_data.push_back(num_of_disc_with_bad_addr_recv.get_name_leafdata());
    if (num_of_disc_with_bad_hello_pdu.is_set || is_set(num_of_disc_with_bad_hello_pdu.operation)) leaf_name_data.push_back(num_of_disc_with_bad_hello_pdu.get_name_leafdata());
    if (num_of_disc_with_bad_xport_addr.is_set || is_set(num_of_disc_with_bad_xport_addr.operation)) leaf_name_data.push_back(num_of_disc_with_bad_xport_addr.get_name_leafdata());
    if (num_of_disc_with_same_router_id.is_set || is_set(num_of_disc_with_same_router_id.operation)) leaf_name_data.push_back(num_of_disc_with_same_router_id.get_name_leafdata());
    if (num_of_disc_with_wrong_router_id.is_set || is_set(num_of_disc_with_wrong_router_id.operation)) leaf_name_data.push_back(num_of_disc_with_wrong_router_id.get_name_leafdata());
    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.operation)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.operation)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.operation)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.operation)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::get_children()
{
    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv = value;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu = value;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr = value;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id = value;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id = value;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHellos()
{
    yang_name = "targeted-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::~TargetedHellos()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::has_data() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hellos";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "targeted-hello")
    {
        for(auto const & c : targeted_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello>();
        c->parent = this;
        targeted_hello.push_back(std::move(c));
        children[segment_path] = targeted_hello.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::get_children()
{
    for (auto const & c : targeted_hello)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::TargetedHello()
    :
    adjacency_ldp_identifier{YType::str, "adjacency-ldp-identifier"},
    disc_expiry{YType::uint32, "disc-expiry"},
    established_age{YType::uint64, "established-age"},
    established_time{YType::uint64, "established-time"},
    hold_time{YType::uint32, "hold-time"},
    interval{YType::uint32, "interval"},
    local_address{YType::str, "local-address"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"},
    session_up{YType::boolean, "session-up"},
    state{YType::enumeration, "state"},
    target_address{YType::str, "target-address"}
    	,
    dhcb_local_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress>())
	,dhcb_target_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress>())
{
    dhcb_local_address->parent = this;
    children["dhcb-local-address"] = dhcb_local_address;

    dhcb_target_address->parent = this;
    children["dhcb-target-address"] = dhcb_target_address;

    yang_name = "targeted-hello"; yang_parent_name = "targeted-hellos";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_data() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return adjacency_ldp_identifier.is_set
	|| disc_expiry.is_set
	|| established_age.is_set
	|| established_time.is_set
	|| hold_time.is_set
	|| interval.is_set
	|| local_address.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| session_bringup_failure_reason.is_set
	|| session_up.is_set
	|| state.is_set
	|| target_address.is_set
	|| (dhcb_local_address !=  nullptr && dhcb_local_address->has_data())
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(adjacency_ldp_identifier.operation)
	|| is_set(disc_expiry.operation)
	|| is_set(established_age.operation)
	|| is_set(established_time.operation)
	|| is_set(hold_time.operation)
	|| is_set(interval.operation)
	|| is_set(local_address.operation)
	|| is_set(local_hold_time.operation)
	|| is_set(neighbor_hold_time.operation)
	|| is_set(next_hello.operation)
	|| is_set(quick_start_disabled.operation)
	|| is_set(session_bringup_failure_reason.operation)
	|| is_set(session_up.operation)
	|| is_set(state.operation)
	|| is_set(target_address.operation)
	|| (dhcb_local_address !=  nullptr && dhcb_local_address->has_operation())
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_ldp_identifier.is_set || is_set(adjacency_ldp_identifier.operation)) leaf_name_data.push_back(adjacency_ldp_identifier.get_name_leafdata());
    if (disc_expiry.is_set || is_set(disc_expiry.operation)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.operation)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.operation)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.operation)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.operation)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.operation)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.operation)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.operation)) leaf_name_data.push_back(target_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcb-local-address")
    {
        if(dhcb_local_address != nullptr)
        {
            children["dhcb-local-address"] = dhcb_local_address;
        }
        else
        {
            dhcb_local_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress>();
            dhcb_local_address->parent = this;
            children["dhcb-local-address"] = dhcb_local_address;
        }
        return children.at("dhcb-local-address");
    }

    if(child_yang_name == "dhcb-target-address")
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
        else
        {
            dhcb_target_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress>();
            dhcb_target_address->parent = this;
            children["dhcb-target-address"] = dhcb_target_address;
        }
        return children.at("dhcb-target-address");
    }

    if(child_yang_name == "last-session-down-info")
    {
        for(auto const & c : last_session_down_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo>();
        c->parent = this;
        last_session_down_info.push_back(std::move(c));
        children[segment_path] = last_session_down_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_children()
{
    if(children.find("dhcb-local-address") == children.end())
    {
        if(dhcb_local_address != nullptr)
        {
            children["dhcb-local-address"] = dhcb_local_address;
        }
    }

    if(children.find("dhcb-target-address") == children.end())
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
    }

    for (auto const & c : last_session_down_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-ldp-identifier")
    {
        adjacency_ldp_identifier = value;
    }
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
    }
    if(value_path == "established-age")
    {
        established_age = value;
    }
    if(value_path == "established-time")
    {
        established_time = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "target-address")
    {
        target_address = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::DhcbLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-local-address"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::~DhcbLocalAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-local-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbLocalAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::DhcbTargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-target-address"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::~DhcbTargetAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbTargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{
    yang_name = "last-session-down-info"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_data() const
{
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(last_session_down_reason.operation)
	|| is_set(last_session_down_time.operation)
	|| is_set(last_session_up_time.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastSessionDownInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.operation)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.operation)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.operation)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::Brief()
    :
    link_hello_briefs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs>())
	,targeted_hello_briefs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs>())
{
    link_hello_briefs->parent = this;
    children["link-hello-briefs"] = link_hello_briefs;

    targeted_hello_briefs->parent = this;
    children["targeted-hello-briefs"] = targeted_hello_briefs;

    yang_name = "brief"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::~Brief()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::has_data() const
{
    return (link_hello_briefs !=  nullptr && link_hello_briefs->has_data())
	|| (targeted_hello_briefs !=  nullptr && targeted_hello_briefs->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::has_operation() const
{
    return is_set(operation)
	|| (link_hello_briefs !=  nullptr && link_hello_briefs->has_operation())
	|| (targeted_hello_briefs !=  nullptr && targeted_hello_briefs->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-briefs")
    {
        if(link_hello_briefs != nullptr)
        {
            children["link-hello-briefs"] = link_hello_briefs;
        }
        else
        {
            link_hello_briefs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs>();
            link_hello_briefs->parent = this;
            children["link-hello-briefs"] = link_hello_briefs;
        }
        return children.at("link-hello-briefs");
    }

    if(child_yang_name == "targeted-hello-briefs")
    {
        if(targeted_hello_briefs != nullptr)
        {
            children["targeted-hello-briefs"] = targeted_hello_briefs;
        }
        else
        {
            targeted_hello_briefs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs>();
            targeted_hello_briefs->parent = this;
            children["targeted-hello-briefs"] = targeted_hello_briefs;
        }
        return children.at("targeted-hello-briefs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::get_children()
{
    if(children.find("link-hello-briefs") == children.end())
    {
        if(link_hello_briefs != nullptr)
        {
            children["link-hello-briefs"] = link_hello_briefs;
        }
    }

    if(children.find("targeted-hello-briefs") == children.end())
    {
        if(targeted_hello_briefs != nullptr)
        {
            children["targeted-hello-briefs"] = targeted_hello_briefs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBriefs()
{
    yang_name = "link-hello-briefs"; yang_parent_name = "brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::~LinkHelloBriefs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_data() const
{
    for (std::size_t index=0; index<link_hello_brief.size(); index++)
    {
        if(link_hello_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_operation() const
{
    for (std::size_t index=0; index<link_hello_brief.size(); index++)
    {
        if(link_hello_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-briefs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-brief")
    {
        for(auto const & c : link_hello_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief>();
        c->parent = this;
        link_hello_brief.push_back(std::move(c));
        children[segment_path] = link_hello_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_children()
{
    for (auto const & c : link_hello_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::LinkHelloBrief()
    :
    interface_name{YType::str, "interface-name"},
    address_family{YType::enumeration, "address-family"},
    address_family_set{YType::enumeration, "address-family-set"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "link-hello-brief"; yang_parent_name = "link-hello-briefs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::~LinkHelloBrief()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_data() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| address_family.is_set
	|| address_family_set.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_operation() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(address_family.operation)
	|| is_set(address_family_set.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (address_family_set.is_set || is_set(address_family_set.operation)) leaf_name_data.push_back(address_family_set.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_children()
{
    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "address-family-set")
    {
        address_family_set = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "link-hello-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::HelloInformation()
    :
    hold_time{YType::uint32, "hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_up{YType::boolean, "session-up"}
{
    yang_name = "hello-information"; yang_parent_name = "link-hello-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_data() const
{
    return hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_up.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(session_up.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBriefs()
{
    yang_name = "targeted-hello-briefs"; yang_parent_name = "brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::~TargetedHelloBriefs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_data() const
{
    for (std::size_t index=0; index<targeted_hello_brief.size(); index++)
    {
        if(targeted_hello_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello_brief.size(); index++)
    {
        if(targeted_hello_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-briefs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "targeted-hello-brief")
    {
        for(auto const & c : targeted_hello_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief>();
        c->parent = this;
        targeted_hello_brief.push_back(std::move(c));
        children[segment_path] = targeted_hello_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_children()
{
    for (auto const & c : targeted_hello_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::TargetedHelloBrief()
    :
    address_family{YType::enumeration, "address-family"},
    local_address{YType::str, "local-address"},
    target_address{YType::str, "target-address"}
    	,
    dhcb_target_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_>())
{
    dhcb_target_address->parent = this;
    children["dhcb-target-address"] = dhcb_target_address;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "targeted-hello-brief"; yang_parent_name = "targeted-hello-briefs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::~TargetedHelloBrief()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_data() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| local_address.is_set
	|| target_address.is_set
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_operation() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(local_address.operation)
	|| is_set(target_address.operation)
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-brief";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.operation)) leaf_name_data.push_back(target_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcb-target-address")
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
        else
        {
            dhcb_target_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress>();
            dhcb_target_address->parent = this;
            children["dhcb-target-address"] = dhcb_target_address;
        }
        return children.at("dhcb-target-address");
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_children()
{
    if(children.find("dhcb-target-address") == children.end())
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
    }

    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "target-address")
    {
        target_address = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::DhcbTargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-target-address"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::~DhcbTargetAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbTargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::HelloInformation()
    :
    hold_time{YType::uint32, "hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_up{YType::boolean, "session-up"}
{
    yang_name = "hello-information"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_data() const
{
    return hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_up.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(session_up.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stats()
{
    yang_name = "stats"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::~Stats()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::has_data() const
{
    for (std::size_t index=0; index<stat.size(); index++)
    {
        if(stat[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::has_operation() const
{
    for (std::size_t index=0; index<stat.size(); index++)
    {
        if(stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stat")
    {
        for(auto const & c : stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat>();
        c->parent = this;
        stat.push_back(std::move(c));
        children[segment_path] = stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::get_children()
{
    for (auto const & c : stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::Stat()
    :
    adjacency_group_up_time{YType::uint32, "adjacency-group-up-time"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    tcp_arb_chg_count{YType::uint32, "tcp-arb-chg-count"},
    tcp_open_count{YType::uint32, "tcp-open-count"},
    tcp_role{YType::uint32, "tcp-role"}
{
    yang_name = "stat"; yang_parent_name = "stats";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::~Stat()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::has_data() const
{
    return adjacency_group_up_time.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| tcp_arb_chg_count.is_set
	|| tcp_open_count.is_set
	|| tcp_role.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_group_up_time.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(tcp_arb_chg_count.operation)
	|| is_set(tcp_open_count.operation)
	|| is_set(tcp_role.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stat' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_group_up_time.is_set || is_set(adjacency_group_up_time.operation)) leaf_name_data.push_back(adjacency_group_up_time.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (tcp_arb_chg_count.is_set || is_set(tcp_arb_chg_count.operation)) leaf_name_data.push_back(tcp_arb_chg_count.get_name_leafdata());
    if (tcp_open_count.is_set || is_set(tcp_open_count.operation)) leaf_name_data.push_back(tcp_open_count.get_name_leafdata());
    if (tcp_role.is_set || is_set(tcp_role.operation)) leaf_name_data.push_back(tcp_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-group-up-time")
    {
        adjacency_group_up_time = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "tcp-arb-chg-count")
    {
        tcp_arb_chg_count = value;
    }
    if(value_path == "tcp-open-count")
    {
        tcp_open_count = value;
    }
    if(value_path == "tcp-role")
    {
        tcp_role = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindingsSummaryAll()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "bindings-summary-all"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::~BindingsSummaryAll()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary-all";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummaryAll' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf>();
        c->parent = this;
        bind_af.push_back(std::move(c));
        children[segment_path] = bind_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::get_children()
{
    for (auto const & c : bind_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(last_lib_update.operation)
	|| is_set(lib_minimum_revision_sent_all.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.operation)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.operation)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwardings()
{
    yang_name = "forwardings"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::~Forwardings()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::has_data() const
{
    for (std::size_t index=0; index<forwarding.size(); index++)
    {
        if(forwarding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::has_operation() const
{
    for (std::size_t index=0; index<forwarding.size(); index++)
    {
        if(forwarding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwardings";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwardings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding")
    {
        for(auto const & c : forwarding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding>();
        c->parent = this;
        forwarding.push_back(std::move(c));
        children[segment_path] = forwarding.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::get_children()
{
    for (auto const & c : forwarding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Forwarding()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    table_id{YType::uint32, "table-id"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr>())
	,route(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_>())
{
    prefix_xr->parent = this;
    children["prefix-xr"] = prefix_xr;

    route->parent = this;
    children["route"] = route;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "forwarding"; yang_parent_name = "forwardings";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::~Forwarding()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| table_id.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(table_id.operation)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
        else
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr>();
            prefix_xr->parent = this;
            children["prefix-xr"] = prefix_xr;
        }
        return children.at("prefix-xr");
    }

    if(child_yang_name == "route")
    {
        if(route != nullptr)
        {
            children["route"] = route;
        }
        else
        {
            route = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route>();
            route->parent = this;
            children["route"] = route;
        }
        return children.at("route");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::get_children()
{
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("prefix-xr") == children.end())
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
    }

    if(children.find("route") == children.end())
    {
        if(route != nullptr)
        {
            children["route"] = route;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr::set_value(const std::string & value_path, std::string value)
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

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Route()
    :
    mpls(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls>())
	,routing(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing>())
{
    mpls->parent = this;
    children["mpls"] = mpls;

    routing->parent = this;
    children["routing"] = routing;

    yang_name = "route"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::~Route()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "routing")
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
        else
        {
            routing = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing>();
            routing->parent = this;
            children["routing"] = routing;
        }
        return children.at("routing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::get_children()
{
    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("routing") == children.end())
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::set_value(const std::string & value_path, std::string value)
{
}


}
}

