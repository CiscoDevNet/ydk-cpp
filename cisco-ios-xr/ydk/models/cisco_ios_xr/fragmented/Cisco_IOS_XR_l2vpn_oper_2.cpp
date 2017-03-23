
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    host_routing_enabled{YType::boolean, "host-routing-enabled"},
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
    yang_name = "operational-information"; yang_parent_name = "oper";
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
	|| host_routing_enabled.is_set
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
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(bvi_configured.operation)
	|| is_set(dhcp_enabled.operation)
	|| is_set(dhcp_trusted.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(host_routing_enabled.operation)
	|| is_set(igmp_flood_forward_enabled.operation)
	|| is_set(igmp_mroute_port_enabled.operation)
	|| is_set(igmp_route_guard_enabled.operation)
	|| is_set(igmp_snoop_enabled.operation)
	|| is_set(igmp_snoop_profile_enabled.operation)
	|| is_set(is_bvi_up.operation)
	|| is_set(is_dai_addr_validation_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validation_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validation_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_evpn_cw_disable.operation)
	|| is_set(is_evpn_enabled.operation)
	|| is_set(is_evpn_flow_label.operation)
	|| is_set(is_igmp_snoop_enabled.operation)
	|| is_set(is_ipsg_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(is_p2mp_pw_enabled.operation)
	|| is_set(is_pbbevpn_enabled.operation)
	|| is_set(is_swmac_learning.operation)
	|| is_set(is_vni_enabled.operation)
	|| is_set(is_vpls_flood_optimization_enabled.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_aging_type.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification_type.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_flood_forward_enabled.operation)
	|| is_set(mld_mroute_port_enabled.operation)
	|| is_set(mld_route_guard_enabled.operation)
	|| is_set(mld_snoop_enabled.operation)
	|| is_set(mld_snoop_profile_enabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_macs.operation)
	|| is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)
	|| is_set(storm_control_broadcast_enabled.operation)
	|| is_set(storm_control_broadcast_rate_unit.operation)
	|| is_set(storm_control_multicast_enabled.operation)
	|| is_set(storm_control_multicast_rate_unit.operation)
	|| is_set(storm_control_unicast_enabled.operation)
	|| is_set(storm_control_unicast_rate_unit.operation)
	|| is_set(stp_participating.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.operation)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.operation)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.operation)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (host_routing_enabled.is_set || is_set(host_routing_enabled.operation)) leaf_name_data.push_back(host_routing_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.operation)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.operation)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.operation)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.operation)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.operation)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.operation)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.operation)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.operation)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.operation)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.operation)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.operation)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.operation)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.operation)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.operation)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.operation)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.operation)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.operation)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.operation)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.operation)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.operation)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.operation)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.operation)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.operation)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.operation)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.operation)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.operation)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.operation)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.operation)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.operation)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(std::move(c));
        children[segment_path] = feature.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_children()
{
    for (auto const & c : feature)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "host-routing-enabled")
    {
        host_routing_enabled = value;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
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
    children["dhcp"] = dhcp;

    igmp->parent = this;
    children["igmp"] = igmp;

    mld->parent = this;
    children["mld"] = mld;

    yang_name = "feature"; yang_parent_name = "operational-information";
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
    return is_set(operation)
	|| is_set(feature_type.operation)
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

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Feature' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.operation)) leaf_name_data.push_back(feature_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp != nullptr)
        {
            children["dhcp"] = dhcp;
        }
        else
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>();
            dhcp->parent = this;
            children["dhcp"] = dhcp;
        }
        return children.at("dhcp");
    }

    if(child_yang_name == "igmp")
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp;
        }
        else
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>();
            igmp->parent = this;
            children["igmp"] = igmp;
        }
        return children.at("igmp");
    }

    if(child_yang_name == "mld")
    {
        if(mld != nullptr)
        {
            children["mld"] = mld;
        }
        else
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>();
            mld->parent = this;
            children["mld"] = mld;
        }
        return children.at("mld");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_children()
{
    if(children.find("dhcp") == children.end())
    {
        if(dhcp != nullptr)
        {
            children["dhcp"] = dhcp;
        }
    }

    if(children.find("igmp") == children.end())
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp;
        }
    }

    if(children.find("mld") == children.end())
    {
        if(mld != nullptr)
        {
            children["mld"] = mld;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp"; yang_parent_name = "feature";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp"; yang_parent_name = "feature";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld"; yang_parent_name = "feature";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mld' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
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
    yang_name = "p2mp"; yang_parent_name = "bp";
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
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsm_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(ptree_owner_lmrib.operation)
	|| is_set(ptree_type.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2Mp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.operation)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (ptree_owner_lmrib.is_set || is_set(ptree_owner_lmrib.operation)) leaf_name_data.push_back(ptree_owner_lmrib.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.operation)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib = value;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Fxs()
    :
    fxs_id{YType::uint32, "fxs-id"},
    segment_type{YType::uint8, "segment-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "fxs"; yang_parent_name = "segment2";
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
    return is_set(operation)
	|| is_set(fxs_id.operation)
	|| is_set(segment_type.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxs";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fxs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxs_id.is_set || is_set(fxs_id.operation)) leaf_name_data.push_back(fxs_id.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.operation)) leaf_name_data.push_back(segment_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fxs-id")
    {
        fxs_id = value;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxs";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::set_value(const std::string & value_path, std::string value)
{
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
    children["backup-pseudo-wire"] = backup_pseudo_wire;

    base->parent = this;
    children["base"] = base;

    next_hop->parent = this;
    children["next-hop"] = next_hop;

    pseudo_wire_union->parent = this;
    children["pseudo-wire-union"] = pseudo_wire_union;

    yang_name = "pw"; yang_parent_name = "segment2";
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
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(active.operation)
	|| is_set(backup_configured.operation)
	|| is_set(bound.operation)
	|| is_set(context.operation)
	|| is_set(forward_class.operation)
	|| is_set(global_id.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(pw_id.operation)
	|| is_set(pw_load_balance_type.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(sequence_resync_threshold.operation)
	|| is_set(signal_capability_flags.operation)
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

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.operation)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.operation)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.operation)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.operation)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire != nullptr)
        {
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
        else
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire>();
            backup_pseudo_wire->parent = this;
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
        return children.at("backup-pseudo-wire");
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union != nullptr)
        {
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
        else
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion>();
            pseudo_wire_union->parent = this;
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
        return children.at("pseudo-wire-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_children()
{
    if(children.find("backup-pseudo-wire") == children.end())
    {
        if(backup_pseudo_wire != nullptr)
        {
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
    }

    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("pseudo-wire-union") == children.end())
    {
        if(pseudo_wire_union != nullptr)
        {
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pw";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "next-hop"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
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
    children["l2tp"] = l2tp;

    l2tp_ipv6_ts->parent = this;
    children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;

    l2tpv2->parent = this;
    children["l2tpv2"] = l2tpv2;

    mpls->parent = this;
    children["mpls"] = mpls;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw";
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
    return is_set(operation)
	|| is_set(data_type.operation)
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

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWireUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
        else
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp>();
            l2tp->parent = this;
            children["l2tp"] = l2tp;
        }
        return children.at("l2tp");
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts != nullptr)
        {
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
        else
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>();
            l2tp_ipv6_ts->parent = this;
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
        return children.at("l2tp-ipv6-ts");
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 != nullptr)
        {
            children["l2tpv2"] = l2tpv2;
        }
        else
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2>();
            l2tpv2->parent = this;
            children["l2tpv2"] = l2tpv2;
        }
        return children.at("l2tpv2");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_children()
{
    if(children.find("l2tp") == children.end())
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
    }

    if(children.find("l2tp-ipv6-ts") == children.end())
    {
        if(l2tp_ipv6_ts != nullptr)
        {
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
    }

    if(children.find("l2tpv2") == children.end())
    {
        if(l2tpv2 != nullptr)
        {
            children["l2tpv2"] = l2tpv2;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
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
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union";
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
    return is_set(operation)
	|| is_set(path_mtu.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp";
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
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
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
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(protocol.operation)
	|| is_set(pw_flags.operation)
	|| is_set(rem_udp_port.operation)
	|| is_set(source_address.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| is_set(xconnect_id.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.operation)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.operation)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "local"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(remote_address.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpIpv6Ts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(secondary_cookie_high_value.operation)
	|| is_set(secondary_cookie_low_value.operation)
	|| is_set(secondary_cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.operation)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.operation)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.operation)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
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
    children["atom"] = atom;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw";
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
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(backup_next_hop.operation)
	|| is_set(backup_pseudo_wire_id.operation)
	|| is_set(backup_pseudo_wire_id_type.operation)
	|| is_set(bound.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(redundancy_role.operation)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.operation)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.operation)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.operation)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atom")
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
        else
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom>();
            atom->parent = this;
            children["atom"] = atom;
        }
        return children.at("atom");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_children()
{
    if(children.find("atom") == children.end())
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire";
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
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummaries()
{
    yang_name = "l2fib-mmrp-summaries"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp-summaries";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMmrpSummaries' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-mmrp-summary")
    {
        for(auto const & c : l2fib_mmrp_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary>();
        c->parent = this;
        l2fib_mmrp_summary.push_back(std::move(c));
        children[segment_path] = l2fib_mmrp_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_children()
{
    for (auto const & c : l2fib_mmrp_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "l2fib-mmrp-summary"; yang_parent_name = "l2fib-mmrp-summaries";
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
    return is_set(operation)
	|| is_set(bd_group_name.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_domain_id.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(multicast_update.operation)
	|| is_set(multicast_update_dropped.operation)
	|| is_set(number_mroute_all_delete_drop.operation)
	|| is_set(number_mroute_delete_drop.operation)
	|| is_set(number_mroute_deleted.operation)
	|| is_set(number_mroutes_deleted_all.operation)
	|| is_set(number_of_mroute_add.operation)
	|| is_set(number_of_routes.operation)
	|| is_set(number_of_routes_with_ole_offload.operation)
	|| is_set(number_of_xid.operation)
	|| is_set(number_xid_add.operation)
	|| is_set(number_xid_deleted.operation)
	|| is_set(stale_deleted.operation)
	|| is_set(stale_xid_deleted.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp-summary";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMmrpSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.operation)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.operation)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (multicast_update.is_set || is_set(multicast_update.operation)) leaf_name_data.push_back(multicast_update.get_name_leafdata());
    if (multicast_update_dropped.is_set || is_set(multicast_update_dropped.operation)) leaf_name_data.push_back(multicast_update_dropped.get_name_leafdata());
    if (number_mroute_all_delete_drop.is_set || is_set(number_mroute_all_delete_drop.operation)) leaf_name_data.push_back(number_mroute_all_delete_drop.get_name_leafdata());
    if (number_mroute_delete_drop.is_set || is_set(number_mroute_delete_drop.operation)) leaf_name_data.push_back(number_mroute_delete_drop.get_name_leafdata());
    if (number_mroute_deleted.is_set || is_set(number_mroute_deleted.operation)) leaf_name_data.push_back(number_mroute_deleted.get_name_leafdata());
    if (number_mroutes_deleted_all.is_set || is_set(number_mroutes_deleted_all.operation)) leaf_name_data.push_back(number_mroutes_deleted_all.get_name_leafdata());
    if (number_of_mroute_add.is_set || is_set(number_of_mroute_add.operation)) leaf_name_data.push_back(number_of_mroute_add.get_name_leafdata());
    if (number_of_routes.is_set || is_set(number_of_routes.operation)) leaf_name_data.push_back(number_of_routes.get_name_leafdata());
    if (number_of_routes_with_ole_offload.is_set || is_set(number_of_routes_with_ole_offload.operation)) leaf_name_data.push_back(number_of_routes_with_ole_offload.get_name_leafdata());
    if (number_of_xid.is_set || is_set(number_of_xid.operation)) leaf_name_data.push_back(number_of_xid.get_name_leafdata());
    if (number_xid_add.is_set || is_set(number_xid_add.operation)) leaf_name_data.push_back(number_xid_add.get_name_leafdata());
    if (number_xid_deleted.is_set || is_set(number_xid_deleted.operation)) leaf_name_data.push_back(number_xid_deleted.get_name_leafdata());
    if (stale_deleted.is_set || is_set(stale_deleted.operation)) leaf_name_data.push_back(stale_deleted.get_name_leafdata());
    if (stale_xid_deleted.is_set || is_set(stale_xid_deleted.operation)) leaf_name_data.push_back(stale_xid_deleted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message>();
        c->parent = this;
        message.push_back(std::move(c));
        children[segment_path] = message.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_children()
{
    for (auto const & c : message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "multicast-update")
    {
        multicast_update = value;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped = value;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop = value;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop = value;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted = value;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all = value;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add = value;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes = value;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload = value;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid = value;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add = value;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted = value;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted = value;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::Message()
    :
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"},
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"}
{
    yang_name = "message"; yang_parent_name = "l2fib-mmrp-summary";
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
    return is_set(operation)
	|| is_set(information1.operation)
	|| is_set(information2.operation)
	|| is_set(messgae_count.operation)
	|| is_set(time.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Message' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information1.is_set || is_set(information1.operation)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.operation)) leaf_name_data.push_back(information2.get_name_leafdata());
    if (messgae_count.is_set || is_set(messgae_count.operation)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "information1")
    {
        information1 = value;
    }
    if(value_path == "information2")
    {
        information2 = value;
    }
    if(value_path == "messgae-count")
    {
        messgae_count = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroups()
{
    yang_name = "l2fib-pw-groups"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::~L2FibPwGroups()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::has_data() const
{
    for (std::size_t index=0; index<l2fib_pw_group.size(); index++)
    {
        if(l2fib_pw_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pw_group.size(); index++)
    {
        if(l2fib_pw_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pw-groups";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibPwGroups' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-pw-group")
    {
        for(auto const & c : l2fib_pw_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup>();
        c->parent = this;
        l2fib_pw_group.push_back(std::move(c));
        children[segment_path] = l2fib_pw_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibPwGroups::get_children()
{
    for (auto const & c : l2fib_pw_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwGroups::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::L2FibPwGroup()
    :
    group_id{YType::int32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    peer_address{YType::str, "peer-address"},
    pw_list_count{YType::uint32, "pw-list-count"},
    tunnel_if_handle{YType::int32, "tunnel-if-handle"}
{
    yang_name = "l2fib-pw-group"; yang_parent_name = "l2fib-pw-groups";
}

L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::~L2FibPwGroup()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::has_data() const
{
    return group_id.is_set
	|| group_state.is_set
	|| peer_address.is_set
	|| pw_list_count.is_set
	|| tunnel_if_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(peer_address.operation)
	|| is_set(pw_list_count.operation)
	|| is_set(tunnel_if_handle.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pw-group";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibPwGroup' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (pw_list_count.is_set || is_set(pw_list_count.operation)) leaf_name_data.push_back(pw_list_count.get_name_leafdata());
    if (tunnel_if_handle.is_set || is_set(tunnel_if_handle.operation)) leaf_name_data.push_back(tunnel_if_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "pw-list-count")
    {
        pw_list_count = value;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngresses()
{
    yang_name = "l2fib-evpn-incl-m-cast-hardware-ingresses"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::~L2FibEvpnInclMCastHardwareIngresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_ingress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_ingress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingress[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-ingresses";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastHardwareIngresses' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-ingress")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_hardware_ingress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_hardware_ingress.push_back(std::move(c));
        children[segment_path] = l2fib_evpn_incl_m_cast_hardware_ingress.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_children()
{
    for (auto const & c : l2fib_evpn_incl_m_cast_hardware_ingress)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastHardwareIngress()
    :
    bd_name{YType::str, "bd-name"}
    	,
    l2fib_evpn_incl_m_cast_oles(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles>())
	,mcast_replication_list(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList>())
{
    l2fib_evpn_incl_m_cast_oles->parent = this;
    children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;

    mcast_replication_list->parent = this;
    children["mcast-replication-list"] = mcast_replication_list;

    yang_name = "l2fib-evpn-incl-m-cast-hardware-ingress"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-ingresses";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::~L2FibEvpnInclMCastHardwareIngress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::has_data() const
{
    return bd_name.is_set
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_name.operation)
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-ingress" <<"[bd-name='" <<bd_name <<"']";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastHardwareIngress' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles != nullptr)
        {
            children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
        }
        else
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles>();
            l2fib_evpn_incl_m_cast_oles->parent = this;
            children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
        }
        return children.at("l2fib-evpn-incl-m-cast-oles");
    }

    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list != nullptr)
        {
            children["mcast-replication-list"] = mcast_replication_list;
        }
        else
        {
            mcast_replication_list = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList>();
            mcast_replication_list->parent = this;
            children["mcast-replication-list"] = mcast_replication_list;
        }
        return children.at("mcast-replication-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_children()
{
    if(children.find("l2fib-evpn-incl-m-cast-oles") == children.end())
    {
        if(l2fib_evpn_incl_m_cast_oles != nullptr)
        {
            children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
        }
    }

    if(children.find("mcast-replication-list") == children.end())
    {
        if(mcast_replication_list != nullptr)
        {
            children["mcast-replication-list"] = mcast_replication_list;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::McastReplicationList()
    :
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    is_bound{YType::boolean, "is-bound"}
{
    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-ingress";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::~McastReplicationList()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::has_data() const
{
    return bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| is_bound.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(is_bound.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastReplicationList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.operation)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.operation)) leaf_name_data.push_back(is_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOles()
{
    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-ingress";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::~L2FibEvpnInclMCastOles()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastOles' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_ole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_ole.push_back(std::move(c));
        children[segment_path] = l2fib_evpn_incl_m_cast_ole.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_children()
{
    for (auto const & c : l2fib_evpn_incl_m_cast_ole)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::L2FibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;
    children["mcast-ole"] = mcast_ole;

    next_hop->parent = this;
    children["next-hop"] = next_hop;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::~L2FibEvpnInclMCastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_data() const
{
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(is_bound.operation)
	|| is_set(next_hop_valid.operation)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.operation)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole != nullptr)
        {
            children["mcast-ole"] = mcast_ole;
        }
        else
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>();
            mcast_ole->parent = this;
            children["mcast-ole"] = mcast_ole;
        }
        return children.at("mcast-ole");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_children()
{
    if(children.find("mcast-ole") == children.end())
    {
        if(mcast_ole != nullptr)
        {
            children["mcast-ole"] = mcast_ole;
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{
    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(mcast_label.operation)
	|| is_set(next_hop_ipv6_addr.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.operation)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.operation)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetails()
{
    yang_name = "l2fib-dhcp-binding-details"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::~L2FibDhcpBindingDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_detail.size(); index++)
    {
        if(l2fib_dhcp_binding_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_detail.size(); index++)
    {
        if(l2fib_dhcp_binding_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-details";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibDhcpBindingDetails' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-dhcp-binding-detail")
    {
        for(auto const & c : l2fib_dhcp_binding_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail>();
        c->parent = this;
        l2fib_dhcp_binding_detail.push_back(std::move(c));
        children[segment_path] = l2fib_dhcp_binding_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_children()
{
    for (auto const & c : l2fib_dhcp_binding_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::L2FibDhcpBindingDetail()
    :
    address{YType::str, "address"},
    neighbor_address{YType::str, "neighbor-address"},
    xcid{YType::str, "xcid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base>())
	,port(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port>())
{
    base->parent = this;
    children["base"] = base;

    port->parent = this;
    children["port"] = port;

    yang_name = "l2fib-dhcp-binding-detail"; yang_parent_name = "l2fib-dhcp-binding-details";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::~L2FibDhcpBindingDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::has_data() const
{
    return address.is_set
	|| neighbor_address.is_set
	|| xcid.is_set
	|| (base !=  nullptr && base->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(xcid.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-detail";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibDhcpBindingDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
        else
        {
            port = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port>();
            port->parent = this;
            children["port"] = port;
        }
        return children.at("port");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fib-dhcp-binding-detail";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Port()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw>())
{
    ac->parent = this;
    children["ac"] = ac;

    pw->parent = this;
    children["pw"] = pw;

    yang_name = "port"; yang_parent_name = "l2fib-dhcp-binding-detail";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::~Port()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac")
    {
        if(ac != nullptr)
        {
            children["ac"] = ac;
        }
        else
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac>();
            ac->parent = this;
            children["ac"] = ac;
        }
        return children.at("ac");
    }

    if(child_yang_name == "pw")
    {
        if(pw != nullptr)
        {
            children["pw"] = pw;
        }
        else
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw>();
            pw->parent = this;
            children["pw"] = pw;
        }
        return children.at("pw");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_children()
{
    if(children.find("ac") == children.end())
    {
        if(ac != nullptr)
        {
            children["ac"] = ac;
        }
    }

    if(children.find("pw") == children.end())
    {
        if(pw != nullptr)
        {
            children["pw"] = pw;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "ac"; yang_parent_name = "port";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{
    yang_name = "pw"; yang_parent_name = "port";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCons()
{
    yang_name = "l2fibx-cons"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::~L2FibxCons()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::has_data() const
{
    for (std::size_t index=0; index<l2fibx_con.size(); index++)
    {
        if(l2fibx_con[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::has_operation() const
{
    for (std::size_t index=0; index<l2fibx_con.size(); index++)
    {
        if(l2fibx_con[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-cons";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibxCons' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fibx-con")
    {
        for(auto const & c : l2fibx_con)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon>();
        c->parent = this;
        l2fibx_con.push_back(std::move(c));
        children[segment_path] = l2fibx_con.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::get_children()
{
    for (auto const & c : l2fibx_con)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::L2FibxCon()
    :
    xcid{YType::str, "xcid"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"},
    xcon_name{YType::str, "xcon-name"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base>())
	,segment1(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1>())
	,segment2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2>())
{
    base->parent = this;
    children["base"] = base;

    segment1->parent = this;
    children["segment1"] = segment1;

    segment2->parent = this;
    children["segment2"] = segment2;

    yang_name = "l2fibx-con"; yang_parent_name = "l2fibx-cons";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::~L2FibxCon()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::has_data() const
{
    return xcid.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| xcon_name.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::has_operation() const
{
    return is_set(operation)
	|| is_set(xcid.operation)
	|| is_set(bound.operation)
	|| is_set(switching_type.operation)
	|| is_set(xcon_name.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con" <<"[xcid='" <<xcid <<"']";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibxCon' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.operation)) leaf_name_data.push_back(switching_type.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.operation)) leaf_name_data.push_back(xcon_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 != nullptr)
        {
            children["segment1"] = segment1;
        }
        else
        {
            segment1 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1>();
            segment1->parent = this;
            children["segment1"] = segment1;
        }
        return children.at("segment1");
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 != nullptr)
        {
            children["segment2"] = segment2;
        }
        else
        {
            segment2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2>();
            segment2->parent = this;
            children["segment2"] = segment2;
        }
        return children.at("segment2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("segment1") == children.end())
    {
        if(segment1 != nullptr)
        {
            children["segment1"] = segment1;
        }
    }

    if(children.find("segment2") == children.end())
    {
        if(segment2 != nullptr)
        {
            children["segment2"] = segment2;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xcid")
    {
        xcid = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fibx-con";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn>())
	,monitor_session(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni>())
{
    ac->parent = this;
    children["ac"] = ac;

    evpn->parent = this;
    children["evpn"] = evpn;

    monitor_session->parent = this;
    children["monitor-session"] = monitor_session;

    pbb->parent = this;
    children["pbb"] = pbb;

    pw->parent = this;
    children["pw"] = pw;

    vni->parent = this;
    children["vni"] = vni;

    yang_name = "segment1"; yang_parent_name = "l2fibx-con";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::~Segment1()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment1' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac")
    {
        if(ac != nullptr)
        {
            children["ac"] = ac;
        }
        else
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac>();
            ac->parent = this;
            children["ac"] = ac;
        }
        return children.at("ac");
    }

    if(child_yang_name == "evpn")
    {
        if(evpn != nullptr)
        {
            children["evpn"] = evpn;
        }
        else
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn>();
            evpn->parent = this;
            children["evpn"] = evpn;
        }
        return children.at("evpn");
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session != nullptr)
        {
            children["monitor-session"] = monitor_session;
        }
        else
        {
            monitor_session = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession>();
            monitor_session->parent = this;
            children["monitor-session"] = monitor_session;
        }
        return children.at("monitor-session");
    }

    if(child_yang_name == "pbb")
    {
        if(pbb != nullptr)
        {
            children["pbb"] = pbb;
        }
        else
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb>();
            pbb->parent = this;
            children["pbb"] = pbb;
        }
        return children.at("pbb");
    }

    if(child_yang_name == "pw")
    {
        if(pw != nullptr)
        {
            children["pw"] = pw;
        }
        else
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw>();
            pw->parent = this;
            children["pw"] = pw;
        }
        return children.at("pw");
    }

    if(child_yang_name == "vni")
    {
        if(vni != nullptr)
        {
            children["vni"] = vni;
        }
        else
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni>();
            vni->parent = this;
            children["vni"] = vni;
        }
        return children.at("vni");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::get_children()
{
    if(children.find("ac") == children.end())
    {
        if(ac != nullptr)
        {
            children["ac"] = ac;
        }
    }

    if(children.find("evpn") == children.end())
    {
        if(evpn != nullptr)
        {
            children["evpn"] = evpn;
        }
    }

    if(children.find("monitor-session") == children.end())
    {
        if(monitor_session != nullptr)
        {
            children["monitor-session"] = monitor_session;
        }
    }

    if(children.find("pbb") == children.end())
    {
        if(pbb != nullptr)
        {
            children["pbb"] = pbb;
        }
    }

    if(children.find("pw") == children.end())
    {
        if(pw != nullptr)
        {
            children["pw"] = pw;
        }
    }

    if(children.find("vni") == children.end())
    {
        if(vni != nullptr)
        {
            children["vni"] = vni;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Ac()
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
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;
    children["base"] = base;

    fxc_next_hop->parent = this;
    children["fxc-next-hop"] = fxc_next_hop;

    yang_name = "ac"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(actype.operation)
	|| is_set(adjacency_address.operation)
	|| is_set(adjacency_valid.operation)
	|| is_set(attachment_circuit_id.operation)
	|| is_set(attachment_circuit_mtu.operation)
	|| is_set(bound.operation)
	|| is_set(evpn_internal_label.operation)
	|| is_set(fxc_next_hop_valid.operation)
	|| is_set(inter_working_mode.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ip_inter_working_mac.operation)
	|| is_set(redundancy_group_id.operation)
	|| is_set(redundancy_object_id.operation)
	|| is_set(sub_interface_handle.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.operation)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.operation)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.operation)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.operation)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.operation)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.operation)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.operation)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.operation)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.operation)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.operation)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.operation)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop != nullptr)
        {
            children["fxc-next-hop"] = fxc_next_hop;
        }
        else
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop>();
            fxc_next_hop->parent = this;
            children["fxc-next-hop"] = fxc_next_hop;
        }
        return children.at("fxc-next-hop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("fxc-next-hop") == children.end())
    {
        if(fxc_next_hop != nullptr)
        {
            children["fxc-next-hop"] = fxc_next_hop;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actype")
    {
        actype = value;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::Base()
{
    yang_name = "base"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FxcNextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxc-next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;
    children["base"] = base;

    pbb_union->parent = this;
    children["pbb-union"] = pbb_union;

    yang_name = "pbb"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::has_data() const
{
    return bound.is_set
	|| core_pbb_evpn_enabled.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(core_pbb_evpn_enabled.operation)
	|| is_set(forward_class.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbb' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.operation)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union != nullptr)
        {
            children["pbb-union"] = pbb_union;
        }
        else
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion>();
            pbb_union->parent = this;
            children["pbb-union"] = pbb_union;
        }
        return children.at("pbb-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("pbb-union") == children.end())
    {
        if(pbb_union != nullptr)
        {
            children["pbb-union"] = pbb_union;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pbb";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge>())
{
    core->parent = this;
    children["core"] = core;

    edge->parent = this;
    children["edge"] = edge;

    yang_name = "pbb-union"; yang_parent_name = "pbb";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_type.operation)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.operation)) leaf_name_data.push_back(pbb_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "core")
    {
        if(core != nullptr)
        {
            children["core"] = core;
        }
        else
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core>();
            core->parent = this;
            children["core"] = core;
        }
        return children.at("core");
    }

    if(child_yang_name == "edge")
    {
        if(edge != nullptr)
        {
            children["edge"] = edge;
        }
        else
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge>();
            edge->parent = this;
            children["edge"] = edge;
        }
        return children.at("edge");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::get_children()
{
    if(children.find("core") == children.end())
    {
        if(core != nullptr)
        {
            children["core"] = core;
        }
    }

    if(children.find("edge") == children.end())
    {
        if(edge != nullptr)
        {
            children["edge"] = edge;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac{YType::str, "mac"},
    mac_configured{YType::boolean, "mac-configured"}
{
    yang_name = "edge"; yang_parent_name = "pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    return mac.is_set
	|| mac_configured.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(operation)
	|| is_set(mac.operation)
	|| is_set(mac_configured.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Edge' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_configured.is_set || is_set(mac_configured.operation)) leaf_name_data.push_back(mac_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "mac-configured")
    {
        mac_configured = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{
    yang_name = "core"; yang_parent_name = "pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Core' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Vni()
    :
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    bound{YType::boolean, "bound"},
    encap{YType::uint32, "encap"},
    mcastip{YType::str, "mcastip"},
    parent_if{YType::str, "parent-if"},
    source_vtep_if{YType::str, "source-vtep-if"},
    srcip{YType::str, "srcip"},
    udp_port{YType::uint32, "udp-port"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "vni"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::has_data() const
{
    return any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| bound.is_set
	|| encap.is_set
	|| mcastip.is_set
	|| parent_if.is_set
	|| source_vtep_if.is_set
	|| srcip.is_set
	|| udp_port.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::has_operation() const
{
    return is_set(operation)
	|| is_set(any_cast_ip.operation)
	|| is_set(anycast_mcast_ip.operation)
	|| is_set(bound.operation)
	|| is_set(encap.operation)
	|| is_set(mcastip.operation)
	|| is_set(parent_if.operation)
	|| is_set(source_vtep_if.operation)
	|| is_set(srcip.operation)
	|| is_set(udp_port.operation)
	|| is_set(vx_lan_mode.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vni' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_cast_ip.is_set || is_set(any_cast_ip.operation)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.operation)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.operation)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.operation)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.operation)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.operation)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.operation)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
    }
    if(value_path == "srcip")
    {
        srcip = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::Base()
{
    yang_name = "base"; yang_parent_name = "vni";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "evpn"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(evi.operation)
	|| is_set(forward_class.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evpn' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::Base()
{
    yang_name = "base"; yang_parent_name = "evpn";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::MonitorSession()
    :
    bound{YType::boolean, "bound"},
    hardware_information{YType::str, "hardware-information"},
    session_name{YType::str, "session-name"},
    xcid{YType::uint32, "xcid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "monitor-session"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::has_data() const
{
    return bound.is_set
	|| hardware_information.is_set
	|| session_name.is_set
	|| xcid.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(hardware_information.operation)
	|| is_set(session_name.operation)
	|| is_set(xcid.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorSession' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::Base()
{
    yang_name = "base"; yang_parent_name = "monitor-session";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Pw()
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
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;
    children["backup-pseudo-wire"] = backup_pseudo_wire;

    base->parent = this;
    children["base"] = base;

    next_hop->parent = this;
    children["next-hop"] = next_hop;

    pseudo_wire_union->parent = this;
    children["pseudo-wire-union"] = pseudo_wire_union;

    yang_name = "pw"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(active.operation)
	|| is_set(backup_configured.operation)
	|| is_set(bound.operation)
	|| is_set(context.operation)
	|| is_set(forward_class.operation)
	|| is_set(global_id.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(pw_id.operation)
	|| is_set(pw_load_balance_type.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(sequence_resync_threshold.operation)
	|| is_set(signal_capability_flags.operation)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.operation)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.operation)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.operation)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.operation)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire != nullptr)
        {
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
        else
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire>();
            backup_pseudo_wire->parent = this;
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
        return children.at("backup-pseudo-wire");
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union != nullptr)
        {
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
        else
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion>();
            pseudo_wire_union->parent = this;
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
        return children.at("pseudo-wire-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::get_children()
{
    if(children.find("backup-pseudo-wire") == children.end())
    {
        if(backup_pseudo_wire != nullptr)
        {
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
    }

    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("pseudo-wire-union") == children.end())
    {
        if(pseudo_wire_union != nullptr)
        {
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "next-hop"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;
    children["l2tp"] = l2tp;

    l2tp_ipv6_ts->parent = this;
    children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;

    l2tpv2->parent = this;
    children["l2tpv2"] = l2tpv2;

    mpls->parent = this;
    children["mpls"] = mpls;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWireUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
        else
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp>();
            l2tp->parent = this;
            children["l2tp"] = l2tp;
        }
        return children.at("l2tp");
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts != nullptr)
        {
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
        else
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts>();
            l2tp_ipv6_ts->parent = this;
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
        return children.at("l2tp-ipv6-ts");
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 != nullptr)
        {
            children["l2tpv2"] = l2tpv2;
        }
        else
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2>();
            l2tpv2->parent = this;
            children["l2tpv2"] = l2tpv2;
        }
        return children.at("l2tpv2");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::get_children()
{
    if(children.find("l2tp") == children.end())
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
    }

    if(children.find("l2tp-ipv6-ts") == children.end())
    {
        if(l2tp_ipv6_ts != nullptr)
        {
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
    }

    if(children.find("l2tpv2") == children.end())
    {
        if(l2tpv2 != nullptr)
        {
            children["l2tpv2"] = l2tpv2;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
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
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(protocol.operation)
	|| is_set(pw_flags.operation)
	|| is_set(rem_udp_port.operation)
	|| is_set(source_address.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| is_set(xconnect_id.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.operation)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.operation)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "local"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(remote_address.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpIpv6Ts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(secondary_cookie_high_value.operation)
	|| is_set(secondary_cookie_low_value.operation)
	|| is_set(secondary_cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.operation)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.operation)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.operation)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::BackupPseudoWire()
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
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;
    children["atom"] = atom;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(backup_next_hop.operation)
	|| is_set(backup_pseudo_wire_id.operation)
	|| is_set(backup_pseudo_wire_id_type.operation)
	|| is_set(bound.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(redundancy_role.operation)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.operation)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.operation)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.operation)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atom")
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
        else
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom>();
            atom->parent = this;
            children["atom"] = atom;
        }
        return children.at("atom");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::get_children()
{
    if(children.find("atom") == children.end())
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Segment2()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac>())
	,bp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp>())
	,fxs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw>())
{
    ac->parent = this;
    children["ac"] = ac;

    bp->parent = this;
    children["bp"] = bp;

    fxs->parent = this;
    children["fxs"] = fxs;

    pw->parent = this;
    children["pw"] = pw;

    yang_name = "segment2"; yang_parent_name = "l2fibx-con";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::~Segment2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (fxs !=  nullptr && fxs->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (fxs !=  nullptr && fxs->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment2";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac")
    {
        if(ac != nullptr)
        {
            children["ac"] = ac;
        }
        else
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac>();
            ac->parent = this;
            children["ac"] = ac;
        }
        return children.at("ac");
    }

    if(child_yang_name == "bp")
    {
        if(bp != nullptr)
        {
            children["bp"] = bp;
        }
        else
        {
            bp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp>();
            bp->parent = this;
            children["bp"] = bp;
        }
        return children.at("bp");
    }

    if(child_yang_name == "fxs")
    {
        if(fxs != nullptr)
        {
            children["fxs"] = fxs;
        }
        else
        {
            fxs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs>();
            fxs->parent = this;
            children["fxs"] = fxs;
        }
        return children.at("fxs");
    }

    if(child_yang_name == "pw")
    {
        if(pw != nullptr)
        {
            children["pw"] = pw;
        }
        else
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw>();
            pw->parent = this;
            children["pw"] = pw;
        }
        return children.at("pw");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::get_children()
{
    if(children.find("ac") == children.end())
    {
        if(ac != nullptr)
        {
            children["ac"] = ac;
        }
    }

    if(children.find("bp") == children.end())
    {
        if(bp != nullptr)
        {
            children["bp"] = bp;
        }
    }

    if(children.find("fxs") == children.end())
    {
        if(fxs != nullptr)
        {
            children["fxs"] = fxs;
        }
    }

    if(children.find("pw") == children.end())
    {
        if(pw != nullptr)
        {
            children["pw"] = pw;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Ac()
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
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop>())
{
    base->parent = this;
    children["base"] = base;

    fxc_next_hop->parent = this;
    children["fxc-next-hop"] = fxc_next_hop;

    yang_name = "ac"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(actype.operation)
	|| is_set(adjacency_address.operation)
	|| is_set(adjacency_valid.operation)
	|| is_set(attachment_circuit_id.operation)
	|| is_set(attachment_circuit_mtu.operation)
	|| is_set(bound.operation)
	|| is_set(evpn_internal_label.operation)
	|| is_set(fxc_next_hop_valid.operation)
	|| is_set(inter_working_mode.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ip_inter_working_mac.operation)
	|| is_set(redundancy_group_id.operation)
	|| is_set(redundancy_object_id.operation)
	|| is_set(sub_interface_handle.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.operation)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.operation)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.operation)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.operation)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.operation)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.operation)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.operation)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.operation)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.operation)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.operation)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.operation)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop != nullptr)
        {
            children["fxc-next-hop"] = fxc_next_hop;
        }
        else
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop>();
            fxc_next_hop->parent = this;
            children["fxc-next-hop"] = fxc_next_hop;
        }
        return children.at("fxc-next-hop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("fxc-next-hop") == children.end())
    {
        if(fxc_next_hop != nullptr)
        {
            children["fxc-next-hop"] = fxc_next_hop;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actype")
    {
        actype = value;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::Base()
{
    yang_name = "base"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FxcNextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxc-next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Bp()
    :
    bridge_id{YType::uint32, "bridge-id"},
    learn_key{YType::uint8, "learn-key"},
    msti_pointer{YType::uint32, "msti-pointer"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"},
    segment_type{YType::uint8, "segment-type"},
    shg_id{YType::uint32, "shg-id"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base>())
	,oper(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper>())
	,p2mp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp>())
{
    base->parent = this;
    children["base"] = base;

    oper->parent = this;
    children["oper"] = oper;

    p2mp->parent = this;
    children["p2mp"] = p2mp;

    yang_name = "bp"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::~Bp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_id.operation)
	|| is_set(learn_key.operation)
	|| is_set(msti_pointer.operation)
	|| is_set(mvrp_sequence_number.operation)
	|| is_set(segment_type.operation)
	|| is_set(shg_id.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.operation)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (msti_pointer.is_set || is_set(msti_pointer.operation)) leaf_name_data.push_back(msti_pointer.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.operation)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.operation)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.operation)) leaf_name_data.push_back(shg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "oper")
    {
        if(oper != nullptr)
        {
            children["oper"] = oper;
        }
        else
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper>();
            oper->parent = this;
            children["oper"] = oper;
        }
        return children.at("oper");
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp != nullptr)
        {
            children["p2mp"] = p2mp;
        }
        else
        {
            p2mp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp>();
            p2mp->parent = this;
            children["p2mp"] = p2mp;
        }
        return children.at("p2mp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("oper") == children.end())
    {
        if(oper != nullptr)
        {
            children["oper"] = oper;
        }
    }

    if(children.find("p2mp") == children.end())
    {
        if(p2mp != nullptr)
        {
            children["p2mp"] = p2mp;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer = value;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::Base()
{
    yang_name = "base"; yang_parent_name = "bp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::Oper()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation>())
{
    operational_information->parent = this;
    children["operational-information"] = operational_information;

    yang_name = "oper"; yang_parent_name = "bp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::~Oper()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oper' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-information")
    {
        if(operational_information != nullptr)
        {
            children["operational-information"] = operational_information;
        }
        else
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation>();
            operational_information->parent = this;
            children["operational-information"] = operational_information;
        }
        return children.at("operational-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::get_children()
{
    if(children.find("operational-information") == children.end())
    {
        if(operational_information != nullptr)
        {
            children["operational-information"] = operational_information;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    host_routing_enabled{YType::boolean, "host-routing-enabled"},
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
    yang_name = "operational-information"; yang_parent_name = "oper";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::has_data() const
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
	|| host_routing_enabled.is_set
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(bvi_configured.operation)
	|| is_set(dhcp_enabled.operation)
	|| is_set(dhcp_trusted.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(host_routing_enabled.operation)
	|| is_set(igmp_flood_forward_enabled.operation)
	|| is_set(igmp_mroute_port_enabled.operation)
	|| is_set(igmp_route_guard_enabled.operation)
	|| is_set(igmp_snoop_enabled.operation)
	|| is_set(igmp_snoop_profile_enabled.operation)
	|| is_set(is_bvi_up.operation)
	|| is_set(is_dai_addr_validation_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validation_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validation_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_evpn_cw_disable.operation)
	|| is_set(is_evpn_enabled.operation)
	|| is_set(is_evpn_flow_label.operation)
	|| is_set(is_igmp_snoop_enabled.operation)
	|| is_set(is_ipsg_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(is_p2mp_pw_enabled.operation)
	|| is_set(is_pbbevpn_enabled.operation)
	|| is_set(is_swmac_learning.operation)
	|| is_set(is_vni_enabled.operation)
	|| is_set(is_vpls_flood_optimization_enabled.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_aging_type.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification_type.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_flood_forward_enabled.operation)
	|| is_set(mld_mroute_port_enabled.operation)
	|| is_set(mld_route_guard_enabled.operation)
	|| is_set(mld_snoop_enabled.operation)
	|| is_set(mld_snoop_profile_enabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_macs.operation)
	|| is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)
	|| is_set(storm_control_broadcast_enabled.operation)
	|| is_set(storm_control_broadcast_rate_unit.operation)
	|| is_set(storm_control_multicast_enabled.operation)
	|| is_set(storm_control_multicast_rate_unit.operation)
	|| is_set(storm_control_unicast_enabled.operation)
	|| is_set(storm_control_unicast_rate_unit.operation)
	|| is_set(stp_participating.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.operation)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.operation)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.operation)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (host_routing_enabled.is_set || is_set(host_routing_enabled.operation)) leaf_name_data.push_back(host_routing_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.operation)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.operation)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.operation)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.operation)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.operation)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.operation)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.operation)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.operation)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.operation)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.operation)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.operation)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.operation)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.operation)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.operation)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.operation)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.operation)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.operation)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.operation)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.operation)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.operation)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.operation)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.operation)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.operation)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.operation)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.operation)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.operation)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.operation)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.operation)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.operation)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(std::move(c));
        children[segment_path] = feature.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::get_children()
{
    for (auto const & c : feature)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "host-routing-enabled")
    {
        host_routing_enabled = value;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    children["dhcp"] = dhcp;

    igmp->parent = this;
    children["igmp"] = igmp;

    mld->parent = this;
    children["mld"] = mld;

    yang_name = "feature"; yang_parent_name = "operational-information";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(operation)
	|| is_set(feature_type.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Feature' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.operation)) leaf_name_data.push_back(feature_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp != nullptr)
        {
            children["dhcp"] = dhcp;
        }
        else
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>();
            dhcp->parent = this;
            children["dhcp"] = dhcp;
        }
        return children.at("dhcp");
    }

    if(child_yang_name == "igmp")
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp;
        }
        else
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>();
            igmp->parent = this;
            children["igmp"] = igmp;
        }
        return children.at("igmp");
    }

    if(child_yang_name == "mld")
    {
        if(mld != nullptr)
        {
            children["mld"] = mld;
        }
        else
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>();
            mld->parent = this;
            children["mld"] = mld;
        }
        return children.at("mld");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_children()
{
    if(children.find("dhcp") == children.end())
    {
        if(dhcp != nullptr)
        {
            children["dhcp"] = dhcp;
        }
    }

    if(children.find("igmp") == children.end())
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp;
        }
    }

    if(children.find("mld") == children.end())
    {
        if(mld != nullptr)
        {
            children["mld"] = mld;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mld' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::P2Mp()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsm_id{YType::uint32, "lsm-id"},
    p2mp_id{YType::uint16, "p2mp-id"},
    ptree_owner_lmrib{YType::boolean, "ptree-owner-lmrib"},
    ptree_type{YType::enumeration, "ptree-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "p2mp"; yang_parent_name = "bp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::~P2Mp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::has_data() const
{
    return extended_tunnel_id.is_set
	|| lsm_id.is_set
	|| p2mp_id.is_set
	|| ptree_owner_lmrib.is_set
	|| ptree_type.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsm_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(ptree_owner_lmrib.operation)
	|| is_set(ptree_type.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2Mp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.operation)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (ptree_owner_lmrib.is_set || is_set(ptree_owner_lmrib.operation)) leaf_name_data.push_back(ptree_owner_lmrib.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.operation)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib = value;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Fxs()
    :
    fxs_id{YType::uint32, "fxs-id"},
    segment_type{YType::uint8, "segment-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "fxs"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::~Fxs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::has_data() const
{
    return fxs_id.is_set
	|| segment_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::has_operation() const
{
    return is_set(operation)
	|| is_set(fxs_id.operation)
	|| is_set(segment_type.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxs";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fxs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxs_id.is_set || is_set(fxs_id.operation)) leaf_name_data.push_back(fxs_id.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.operation)) leaf_name_data.push_back(segment_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fxs-id")
    {
        fxs_id = value;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxs";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Pw()
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
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;
    children["backup-pseudo-wire"] = backup_pseudo_wire;

    base->parent = this;
    children["base"] = base;

    next_hop->parent = this;
    children["next-hop"] = next_hop;

    pseudo_wire_union->parent = this;
    children["pseudo-wire-union"] = pseudo_wire_union;

    yang_name = "pw"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(active.operation)
	|| is_set(backup_configured.operation)
	|| is_set(bound.operation)
	|| is_set(context.operation)
	|| is_set(forward_class.operation)
	|| is_set(global_id.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(pw_id.operation)
	|| is_set(pw_load_balance_type.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(sequence_resync_threshold.operation)
	|| is_set(signal_capability_flags.operation)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.operation)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.operation)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.operation)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.operation)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire != nullptr)
        {
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
        else
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire>();
            backup_pseudo_wire->parent = this;
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
        return children.at("backup-pseudo-wire");
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union != nullptr)
        {
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
        else
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion>();
            pseudo_wire_union->parent = this;
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
        return children.at("pseudo-wire-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::get_children()
{
    if(children.find("backup-pseudo-wire") == children.end())
    {
        if(backup_pseudo_wire != nullptr)
        {
            children["backup-pseudo-wire"] = backup_pseudo_wire;
        }
    }

    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("pseudo-wire-union") == children.end())
    {
        if(pseudo_wire_union != nullptr)
        {
            children["pseudo-wire-union"] = pseudo_wire_union;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "next-hop"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;
    children["l2tp"] = l2tp;

    l2tp_ipv6_ts->parent = this;
    children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;

    l2tpv2->parent = this;
    children["l2tpv2"] = l2tpv2;

    mpls->parent = this;
    children["mpls"] = mpls;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWireUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
        else
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp>();
            l2tp->parent = this;
            children["l2tp"] = l2tp;
        }
        return children.at("l2tp");
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts != nullptr)
        {
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
        else
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>();
            l2tp_ipv6_ts->parent = this;
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
        return children.at("l2tp-ipv6-ts");
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 != nullptr)
        {
            children["l2tpv2"] = l2tpv2;
        }
        else
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2>();
            l2tpv2->parent = this;
            children["l2tpv2"] = l2tpv2;
        }
        return children.at("l2tpv2");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::get_children()
{
    if(children.find("l2tp") == children.end())
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
    }

    if(children.find("l2tp-ipv6-ts") == children.end())
    {
        if(l2tp_ipv6_ts != nullptr)
        {
            children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
        }
    }

    if(children.find("l2tpv2") == children.end())
    {
        if(l2tpv2 != nullptr)
        {
            children["l2tpv2"] = l2tpv2;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
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
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(protocol.operation)
	|| is_set(pw_flags.operation)
	|| is_set(rem_udp_port.operation)
	|| is_set(source_address.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| is_set(xconnect_id.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.operation)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.operation)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "local"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    children["local"] = local;

    remote->parent = this;
    children["remote"] = remote;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(remote_address.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpIpv6Ts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(secondary_cookie_high_value.operation)
	|| is_set(secondary_cookie_low_value.operation)
	|| is_set(secondary_cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.operation)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.operation)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.operation)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::BackupPseudoWire()
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
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;
    children["atom"] = atom;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::has_data() const
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

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(backup_next_hop.operation)
	|| is_set(backup_pseudo_wire_id.operation)
	|| is_set(backup_pseudo_wire_id_type.operation)
	|| is_set(bound.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(redundancy_role.operation)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.operation)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.operation)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.operation)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atom")
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
        else
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom>();
            atom->parent = this;
            children["atom"] = atom;
        }
        return children.at("atom");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::get_children()
{
    if(children.find("atom") == children.end())
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire";
}

L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterfaces()
{
    yang_name = "l2fib-main-interfaces"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::~L2FibMainInterfaces()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::has_data() const
{
    for (std::size_t index=0; index<l2fib_main_interface.size(); index++)
    {
        if(l2fib_main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<l2fib_main_interface.size(); index++)
    {
        if(l2fib_main_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interfaces";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaces' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-main-interface")
    {
        for(auto const & c : l2fib_main_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface>();
        c->parent = this;
        l2fib_main_interface.push_back(std::move(c));
        children[segment_path] = l2fib_main_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_children()
{
    for (auto const & c : l2fib_main_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterface()
    :
    main_interface_id{YType::int32, "main-interface-id"},
    main_interface_type{YType::enumeration, "main-interface-type"}
    	,
    l2fib_main_interface_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo>())
	,l2fib_main_interface_hardware_egress_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo>())
	,l2fib_main_interface_hardware_egress_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo>())
	,l2fib_main_interface_hardware_ingress_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo>())
	,l2fib_main_interface_hardware_ingress_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo>())
	,l2fib_main_interface_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo>())
	,l2fib_main_interface_instances(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances>())
{
    l2fib_main_interface_detail_info->parent = this;
    children["l2fib-main-interface-detail-info"] = l2fib_main_interface_detail_info;

    l2fib_main_interface_hardware_egress_detail_info->parent = this;
    children["l2fib-main-interface-hardware-egress-detail-info"] = l2fib_main_interface_hardware_egress_detail_info;

    l2fib_main_interface_hardware_egress_info->parent = this;
    children["l2fib-main-interface-hardware-egress-info"] = l2fib_main_interface_hardware_egress_info;

    l2fib_main_interface_hardware_ingress_detail_info->parent = this;
    children["l2fib-main-interface-hardware-ingress-detail-info"] = l2fib_main_interface_hardware_ingress_detail_info;

    l2fib_main_interface_hardware_ingress_info->parent = this;
    children["l2fib-main-interface-hardware-ingress-info"] = l2fib_main_interface_hardware_ingress_info;

    l2fib_main_interface_info->parent = this;
    children["l2fib-main-interface-info"] = l2fib_main_interface_info;

    l2fib_main_interface_instances->parent = this;
    children["l2fib-main-interface-instances"] = l2fib_main_interface_instances;

    yang_name = "l2fib-main-interface"; yang_parent_name = "l2fib-main-interfaces";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::~L2FibMainInterface()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::has_data() const
{
    return main_interface_id.is_set
	|| main_interface_type.is_set
	|| (l2fib_main_interface_detail_info !=  nullptr && l2fib_main_interface_detail_info->has_data())
	|| (l2fib_main_interface_hardware_egress_detail_info !=  nullptr && l2fib_main_interface_hardware_egress_detail_info->has_data())
	|| (l2fib_main_interface_hardware_egress_info !=  nullptr && l2fib_main_interface_hardware_egress_info->has_data())
	|| (l2fib_main_interface_hardware_ingress_detail_info !=  nullptr && l2fib_main_interface_hardware_ingress_detail_info->has_data())
	|| (l2fib_main_interface_hardware_ingress_info !=  nullptr && l2fib_main_interface_hardware_ingress_info->has_data())
	|| (l2fib_main_interface_info !=  nullptr && l2fib_main_interface_info->has_data())
	|| (l2fib_main_interface_instances !=  nullptr && l2fib_main_interface_instances->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(main_interface_id.operation)
	|| is_set(main_interface_type.operation)
	|| (l2fib_main_interface_detail_info !=  nullptr && l2fib_main_interface_detail_info->has_operation())
	|| (l2fib_main_interface_hardware_egress_detail_info !=  nullptr && l2fib_main_interface_hardware_egress_detail_info->has_operation())
	|| (l2fib_main_interface_hardware_egress_info !=  nullptr && l2fib_main_interface_hardware_egress_info->has_operation())
	|| (l2fib_main_interface_hardware_ingress_detail_info !=  nullptr && l2fib_main_interface_hardware_ingress_detail_info->has_operation())
	|| (l2fib_main_interface_hardware_ingress_info !=  nullptr && l2fib_main_interface_hardware_ingress_info->has_operation())
	|| (l2fib_main_interface_info !=  nullptr && l2fib_main_interface_info->has_operation())
	|| (l2fib_main_interface_instances !=  nullptr && l2fib_main_interface_instances->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_interface_id.is_set || is_set(main_interface_id.operation)) leaf_name_data.push_back(main_interface_id.get_name_leafdata());
    if (main_interface_type.is_set || is_set(main_interface_type.operation)) leaf_name_data.push_back(main_interface_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-main-interface-detail-info")
    {
        if(l2fib_main_interface_detail_info != nullptr)
        {
            children["l2fib-main-interface-detail-info"] = l2fib_main_interface_detail_info;
        }
        else
        {
            l2fib_main_interface_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo>();
            l2fib_main_interface_detail_info->parent = this;
            children["l2fib-main-interface-detail-info"] = l2fib_main_interface_detail_info;
        }
        return children.at("l2fib-main-interface-detail-info");
    }

    if(child_yang_name == "l2fib-main-interface-hardware-egress-detail-info")
    {
        if(l2fib_main_interface_hardware_egress_detail_info != nullptr)
        {
            children["l2fib-main-interface-hardware-egress-detail-info"] = l2fib_main_interface_hardware_egress_detail_info;
        }
        else
        {
            l2fib_main_interface_hardware_egress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo>();
            l2fib_main_interface_hardware_egress_detail_info->parent = this;
            children["l2fib-main-interface-hardware-egress-detail-info"] = l2fib_main_interface_hardware_egress_detail_info;
        }
        return children.at("l2fib-main-interface-hardware-egress-detail-info");
    }

    if(child_yang_name == "l2fib-main-interface-hardware-egress-info")
    {
        if(l2fib_main_interface_hardware_egress_info != nullptr)
        {
            children["l2fib-main-interface-hardware-egress-info"] = l2fib_main_interface_hardware_egress_info;
        }
        else
        {
            l2fib_main_interface_hardware_egress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo>();
            l2fib_main_interface_hardware_egress_info->parent = this;
            children["l2fib-main-interface-hardware-egress-info"] = l2fib_main_interface_hardware_egress_info;
        }
        return children.at("l2fib-main-interface-hardware-egress-info");
    }

    if(child_yang_name == "l2fib-main-interface-hardware-ingress-detail-info")
    {
        if(l2fib_main_interface_hardware_ingress_detail_info != nullptr)
        {
            children["l2fib-main-interface-hardware-ingress-detail-info"] = l2fib_main_interface_hardware_ingress_detail_info;
        }
        else
        {
            l2fib_main_interface_hardware_ingress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo>();
            l2fib_main_interface_hardware_ingress_detail_info->parent = this;
            children["l2fib-main-interface-hardware-ingress-detail-info"] = l2fib_main_interface_hardware_ingress_detail_info;
        }
        return children.at("l2fib-main-interface-hardware-ingress-detail-info");
    }

    if(child_yang_name == "l2fib-main-interface-hardware-ingress-info")
    {
        if(l2fib_main_interface_hardware_ingress_info != nullptr)
        {
            children["l2fib-main-interface-hardware-ingress-info"] = l2fib_main_interface_hardware_ingress_info;
        }
        else
        {
            l2fib_main_interface_hardware_ingress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo>();
            l2fib_main_interface_hardware_ingress_info->parent = this;
            children["l2fib-main-interface-hardware-ingress-info"] = l2fib_main_interface_hardware_ingress_info;
        }
        return children.at("l2fib-main-interface-hardware-ingress-info");
    }

    if(child_yang_name == "l2fib-main-interface-info")
    {
        if(l2fib_main_interface_info != nullptr)
        {
            children["l2fib-main-interface-info"] = l2fib_main_interface_info;
        }
        else
        {
            l2fib_main_interface_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo>();
            l2fib_main_interface_info->parent = this;
            children["l2fib-main-interface-info"] = l2fib_main_interface_info;
        }
        return children.at("l2fib-main-interface-info");
    }

    if(child_yang_name == "l2fib-main-interface-instances")
    {
        if(l2fib_main_interface_instances != nullptr)
        {
            children["l2fib-main-interface-instances"] = l2fib_main_interface_instances;
        }
        else
        {
            l2fib_main_interface_instances = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances>();
            l2fib_main_interface_instances->parent = this;
            children["l2fib-main-interface-instances"] = l2fib_main_interface_instances;
        }
        return children.at("l2fib-main-interface-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_children()
{
    if(children.find("l2fib-main-interface-detail-info") == children.end())
    {
        if(l2fib_main_interface_detail_info != nullptr)
        {
            children["l2fib-main-interface-detail-info"] = l2fib_main_interface_detail_info;
        }
    }

    if(children.find("l2fib-main-interface-hardware-egress-detail-info") == children.end())
    {
        if(l2fib_main_interface_hardware_egress_detail_info != nullptr)
        {
            children["l2fib-main-interface-hardware-egress-detail-info"] = l2fib_main_interface_hardware_egress_detail_info;
        }
    }

    if(children.find("l2fib-main-interface-hardware-egress-info") == children.end())
    {
        if(l2fib_main_interface_hardware_egress_info != nullptr)
        {
            children["l2fib-main-interface-hardware-egress-info"] = l2fib_main_interface_hardware_egress_info;
        }
    }

    if(children.find("l2fib-main-interface-hardware-ingress-detail-info") == children.end())
    {
        if(l2fib_main_interface_hardware_ingress_detail_info != nullptr)
        {
            children["l2fib-main-interface-hardware-ingress-detail-info"] = l2fib_main_interface_hardware_ingress_detail_info;
        }
    }

    if(children.find("l2fib-main-interface-hardware-ingress-info") == children.end())
    {
        if(l2fib_main_interface_hardware_ingress_info != nullptr)
        {
            children["l2fib-main-interface-hardware-ingress-info"] = l2fib_main_interface_hardware_ingress_info;
        }
    }

    if(children.find("l2fib-main-interface-info") == children.end())
    {
        if(l2fib_main_interface_info != nullptr)
        {
            children["l2fib-main-interface-info"] = l2fib_main_interface_info;
        }
    }

    if(children.find("l2fib-main-interface-instances") == children.end())
    {
        if(l2fib_main_interface_instances != nullptr)
        {
            children["l2fib-main-interface-instances"] = l2fib_main_interface_instances;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "main-interface-id")
    {
        main_interface_id = value;
    }
    if(value_path == "main-interface-type")
    {
        main_interface_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::L2FibMainInterfaceHardwareEgressDetailInfo()
    :
    bridge_port_count_instance{YType::uint32, "bridge-port-count-instance"},
    esi_id{YType::uint16, "esi-id"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"},
    instance_id{YType::uint32, "instance-id"},
    instances_provisioned{YType::boolean, "instances-provisioned"},
    instances_state{YType::enumeration, "instances-state"},
    mac{YType::str, "mac"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-hardware-egress-detail-info"; yang_parent_name = "l2fib-main-interface";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::~L2FibMainInterfaceHardwareEgressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::has_data() const
{
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : bridge_port_count_instance.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(leaf.is_set)
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
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : bridge_port_count_instance.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bridge_port_count_instance.operation)
	|| is_set(esi_id.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(evpn_shg_local_label.operation)
	|| is_set(instance_id.operation)
	|| is_set(instances_provisioned.operation)
	|| is_set(instances_state.operation)
	|| is_set(mac.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-egress-detail-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceHardwareEgressDetailInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_id.is_set || is_set(esi_id.operation)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.operation)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());
    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    auto bridge_port_count_instance_name_datas = bridge_port_count_instance.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bridge_port_count_instance_name_datas.begin(), bridge_port_count_instance_name_datas.end());
    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());
    auto instance_id_name_datas = instance_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instance_id_name_datas.begin(), instance_id_name_datas.end());
    auto instances_provisioned_name_datas = instances_provisioned.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_provisioned_name_datas.begin(), instances_provisioned_name_datas.end());
    auto instances_state_name_datas = instances_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_state_name_datas.begin(), instances_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        for(auto const & c : evpn_shg_remote_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(std::move(c));
        children[segment_path] = evpn_shg_remote_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_children()
{
    for (auto const & c : evpn_shg_remote_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count-instance")
    {
        bridge_port_count_instance.append(value);
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label = value;
    }
    if(value_path == "instance-id")
    {
        instance_id.append(value);
    }
    if(value_path == "instances-provisioned")
    {
        instances_provisioned.append(value);
    }
    if(value_path == "instances-state")
    {
        instances_state.append(value);
    }
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::EvpnShgRemoteInfo()
    :
    remote_split_horizon_group_label(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>())
{
    remote_split_horizon_group_label->parent = this;
    children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;

    yang_name = "evpn-shg-remote-info"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info";
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
    return is_set(operation)
	|| (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-shg-remote-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnShgRemoteInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        if(remote_split_horizon_group_label != nullptr)
        {
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
        else
        {
            remote_split_horizon_group_label = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>();
            remote_split_horizon_group_label->parent = this;
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
        return children.at("remote-split-horizon-group-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_children()
{
    if(children.find("remote-split-horizon-group-label") == children.end())
    {
        if(remote_split_horizon_group_label != nullptr)
        {
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{
    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info";
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
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(next_hop.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSplitHorizonGroupLabel' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::L2FibMainInterfaceHardwareEgressInfo()
    :
    instance_id{YType::uint32, "instance-id"},
    instances_provisioned{YType::boolean, "instances-provisioned"},
    instances_state{YType::enumeration, "instances-state"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-hardware-egress-info"; yang_parent_name = "l2fib-main-interface";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::~L2FibMainInterfaceHardwareEgressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::has_data() const
{
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::has_operation() const
{
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(instance_id.operation)
	|| is_set(instances_provisioned.operation)
	|| is_set(instances_state.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-egress-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceHardwareEgressInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    auto instance_id_name_datas = instance_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instance_id_name_datas.begin(), instance_id_name_datas.end());
    auto instances_provisioned_name_datas = instances_provisioned.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_provisioned_name_datas.begin(), instances_provisioned_name_datas.end());
    auto instances_state_name_datas = instances_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_state_name_datas.begin(), instances_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-id")
    {
        instance_id.append(value);
    }
    if(value_path == "instances-provisioned")
    {
        instances_provisioned.append(value);
    }
    if(value_path == "instances-state")
    {
        instances_state.append(value);
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstances()
{
    yang_name = "l2fib-main-interface-instances"; yang_parent_name = "l2fib-main-interface";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instances";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstances' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-main-interface-instance")
    {
        for(auto const & c : l2fib_main_interface_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance>();
        c->parent = this;
        l2fib_main_interface_instance.push_back(std::move(c));
        children[segment_path] = l2fib_main_interface_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_children()
{
    for (auto const & c : l2fib_main_interface_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::set_value(const std::string & value_path, std::string value)
{
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
    children["l2fib-main-interface-instance-bridge-port-details"] = l2fib_main_interface_instance_bridge_port_details;

    l2fib_main_interface_instance_bridge_ports->parent = this;
    children["l2fib-main-interface-instance-bridge-ports"] = l2fib_main_interface_instance_bridge_ports;

    l2fib_main_interface_instance_detail_info->parent = this;
    children["l2fib-main-interface-instance-detail-info"] = l2fib_main_interface_instance_detail_info;

    l2fib_main_interface_instance_hardware_egress_detail_info->parent = this;
    children["l2fib-main-interface-instance-hardware-egress-detail-info"] = l2fib_main_interface_instance_hardware_egress_detail_info;

    l2fib_main_interface_instance_hardware_egress_info->parent = this;
    children["l2fib-main-interface-instance-hardware-egress-info"] = l2fib_main_interface_instance_hardware_egress_info;

    l2fib_main_interface_instance_hardware_ingress_detail_info->parent = this;
    children["l2fib-main-interface-instance-hardware-ingress-detail-info"] = l2fib_main_interface_instance_hardware_ingress_detail_info;

    l2fib_main_interface_instance_hardware_ingress_info->parent = this;
    children["l2fib-main-interface-instance-hardware-ingress-info"] = l2fib_main_interface_instance_hardware_ingress_info;

    l2fib_main_interface_instance_info->parent = this;
    children["l2fib-main-interface-instance-info"] = l2fib_main_interface_instance_info;

    yang_name = "l2fib-main-interface-instance"; yang_parent_name = "l2fib-main-interface-instances";
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
    return is_set(operation)
	|| is_set(instance.operation)
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

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstance' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-main-interface-instance-bridge-port-details")
    {
        if(l2fib_main_interface_instance_bridge_port_details != nullptr)
        {
            children["l2fib-main-interface-instance-bridge-port-details"] = l2fib_main_interface_instance_bridge_port_details;
        }
        else
        {
            l2fib_main_interface_instance_bridge_port_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails>();
            l2fib_main_interface_instance_bridge_port_details->parent = this;
            children["l2fib-main-interface-instance-bridge-port-details"] = l2fib_main_interface_instance_bridge_port_details;
        }
        return children.at("l2fib-main-interface-instance-bridge-port-details");
    }

    if(child_yang_name == "l2fib-main-interface-instance-bridge-ports")
    {
        if(l2fib_main_interface_instance_bridge_ports != nullptr)
        {
            children["l2fib-main-interface-instance-bridge-ports"] = l2fib_main_interface_instance_bridge_ports;
        }
        else
        {
            l2fib_main_interface_instance_bridge_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts>();
            l2fib_main_interface_instance_bridge_ports->parent = this;
            children["l2fib-main-interface-instance-bridge-ports"] = l2fib_main_interface_instance_bridge_ports;
        }
        return children.at("l2fib-main-interface-instance-bridge-ports");
    }

    if(child_yang_name == "l2fib-main-interface-instance-detail-info")
    {
        if(l2fib_main_interface_instance_detail_info != nullptr)
        {
            children["l2fib-main-interface-instance-detail-info"] = l2fib_main_interface_instance_detail_info;
        }
        else
        {
            l2fib_main_interface_instance_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo>();
            l2fib_main_interface_instance_detail_info->parent = this;
            children["l2fib-main-interface-instance-detail-info"] = l2fib_main_interface_instance_detail_info;
        }
        return children.at("l2fib-main-interface-instance-detail-info");
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-egress-detail-info")
    {
        if(l2fib_main_interface_instance_hardware_egress_detail_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-egress-detail-info"] = l2fib_main_interface_instance_hardware_egress_detail_info;
        }
        else
        {
            l2fib_main_interface_instance_hardware_egress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo>();
            l2fib_main_interface_instance_hardware_egress_detail_info->parent = this;
            children["l2fib-main-interface-instance-hardware-egress-detail-info"] = l2fib_main_interface_instance_hardware_egress_detail_info;
        }
        return children.at("l2fib-main-interface-instance-hardware-egress-detail-info");
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-egress-info")
    {
        if(l2fib_main_interface_instance_hardware_egress_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-egress-info"] = l2fib_main_interface_instance_hardware_egress_info;
        }
        else
        {
            l2fib_main_interface_instance_hardware_egress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo>();
            l2fib_main_interface_instance_hardware_egress_info->parent = this;
            children["l2fib-main-interface-instance-hardware-egress-info"] = l2fib_main_interface_instance_hardware_egress_info;
        }
        return children.at("l2fib-main-interface-instance-hardware-egress-info");
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-ingress-detail-info")
    {
        if(l2fib_main_interface_instance_hardware_ingress_detail_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-ingress-detail-info"] = l2fib_main_interface_instance_hardware_ingress_detail_info;
        }
        else
        {
            l2fib_main_interface_instance_hardware_ingress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo>();
            l2fib_main_interface_instance_hardware_ingress_detail_info->parent = this;
            children["l2fib-main-interface-instance-hardware-ingress-detail-info"] = l2fib_main_interface_instance_hardware_ingress_detail_info;
        }
        return children.at("l2fib-main-interface-instance-hardware-ingress-detail-info");
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-ingress-info")
    {
        if(l2fib_main_interface_instance_hardware_ingress_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-ingress-info"] = l2fib_main_interface_instance_hardware_ingress_info;
        }
        else
        {
            l2fib_main_interface_instance_hardware_ingress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo>();
            l2fib_main_interface_instance_hardware_ingress_info->parent = this;
            children["l2fib-main-interface-instance-hardware-ingress-info"] = l2fib_main_interface_instance_hardware_ingress_info;
        }
        return children.at("l2fib-main-interface-instance-hardware-ingress-info");
    }

    if(child_yang_name == "l2fib-main-interface-instance-info")
    {
        if(l2fib_main_interface_instance_info != nullptr)
        {
            children["l2fib-main-interface-instance-info"] = l2fib_main_interface_instance_info;
        }
        else
        {
            l2fib_main_interface_instance_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo>();
            l2fib_main_interface_instance_info->parent = this;
            children["l2fib-main-interface-instance-info"] = l2fib_main_interface_instance_info;
        }
        return children.at("l2fib-main-interface-instance-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_children()
{
    if(children.find("l2fib-main-interface-instance-bridge-port-details") == children.end())
    {
        if(l2fib_main_interface_instance_bridge_port_details != nullptr)
        {
            children["l2fib-main-interface-instance-bridge-port-details"] = l2fib_main_interface_instance_bridge_port_details;
        }
    }

    if(children.find("l2fib-main-interface-instance-bridge-ports") == children.end())
    {
        if(l2fib_main_interface_instance_bridge_ports != nullptr)
        {
            children["l2fib-main-interface-instance-bridge-ports"] = l2fib_main_interface_instance_bridge_ports;
        }
    }

    if(children.find("l2fib-main-interface-instance-detail-info") == children.end())
    {
        if(l2fib_main_interface_instance_detail_info != nullptr)
        {
            children["l2fib-main-interface-instance-detail-info"] = l2fib_main_interface_instance_detail_info;
        }
    }

    if(children.find("l2fib-main-interface-instance-hardware-egress-detail-info") == children.end())
    {
        if(l2fib_main_interface_instance_hardware_egress_detail_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-egress-detail-info"] = l2fib_main_interface_instance_hardware_egress_detail_info;
        }
    }

    if(children.find("l2fib-main-interface-instance-hardware-egress-info") == children.end())
    {
        if(l2fib_main_interface_instance_hardware_egress_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-egress-info"] = l2fib_main_interface_instance_hardware_egress_info;
        }
    }

    if(children.find("l2fib-main-interface-instance-hardware-ingress-detail-info") == children.end())
    {
        if(l2fib_main_interface_instance_hardware_ingress_detail_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-ingress-detail-info"] = l2fib_main_interface_instance_hardware_ingress_detail_info;
        }
    }

    if(children.find("l2fib-main-interface-instance-hardware-ingress-info") == children.end())
    {
        if(l2fib_main_interface_instance_hardware_ingress_info != nullptr)
        {
            children["l2fib-main-interface-instance-hardware-ingress-info"] = l2fib_main_interface_instance_hardware_ingress_info;
        }
    }

    if(children.find("l2fib-main-interface-instance-info") == children.end())
    {
        if(l2fib_main_interface_instance_info != nullptr)
        {
            children["l2fib-main-interface-instance-info"] = l2fib_main_interface_instance_info;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
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
    yang_name = "l2fib-main-interface-instance-detail-info"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(instance.operation)
	|| is_set(instance_provisioned.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-detail-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceDetailInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.operation)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetails()
{
    yang_name = "l2fib-main-interface-instance-bridge-port-details"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-port-details";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceBridgePortDetails' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-main-interface-instance-bridge-port-detail")
    {
        for(auto const & c : l2fib_main_interface_instance_bridge_port_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail>();
        c->parent = this;
        l2fib_main_interface_instance_bridge_port_detail.push_back(std::move(c));
        children[segment_path] = l2fib_main_interface_instance_bridge_port_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_children()
{
    for (auto const & c : l2fib_main_interface_instance_bridge_port_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::L2FibMainInterfaceInstanceBridgePortDetail()
    :
    bridge_port{YType::str, "bridge-port"},
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
    children["oper"] = oper;

    yang_name = "l2fib-main-interface-instance-bridge-port-detail"; yang_parent_name = "l2fib-main-interface-instance-bridge-port-details";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::~L2FibMainInterfaceInstanceBridgePortDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::has_data() const
{
    return bridge_port.is_set
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
    return is_set(operation)
	|| is_set(bridge_port.operation)
	|| is_set(bp_type.operation)
	|| is_set(bridge_id.operation)
	|| is_set(bridge_port_id.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-port-detail" <<"[bridge-port='" <<bridge_port <<"']";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceBridgePortDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.operation)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bp_type.is_set || is_set(bp_type.operation)) leaf_name_data.push_back(bp_type.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_port_id.is_set || is_set(bridge_port_id.operation)) leaf_name_data.push_back(bridge_port_id.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oper")
    {
        if(oper != nullptr)
        {
            children["oper"] = oper;
        }
        else
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper>();
            oper->parent = this;
            children["oper"] = oper;
        }
        return children.at("oper");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_children()
{
    if(children.find("oper") == children.end())
    {
        if(oper != nullptr)
        {
            children["oper"] = oper;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
    }
    if(value_path == "bp-type")
    {
        bp_type = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
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
    children["operational-information"] = operational_information;

    yang_name = "oper"; yang_parent_name = "l2fib-main-interface-instance-bridge-port-detail";
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
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oper' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operational-information")
    {
        if(operational_information != nullptr)
        {
            children["operational-information"] = operational_information;
        }
        else
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation>();
            operational_information->parent = this;
            children["operational-information"] = operational_information;
        }
        return children.at("operational-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_children()
{
    if(children.find("operational-information") == children.end())
    {
        if(operational_information != nullptr)
        {
            children["operational-information"] = operational_information;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    host_routing_enabled{YType::boolean, "host-routing-enabled"},
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
    yang_name = "operational-information"; yang_parent_name = "oper";
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
	|| host_routing_enabled.is_set
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
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(bvi_configured.operation)
	|| is_set(dhcp_enabled.operation)
	|| is_set(dhcp_trusted.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(host_routing_enabled.operation)
	|| is_set(igmp_flood_forward_enabled.operation)
	|| is_set(igmp_mroute_port_enabled.operation)
	|| is_set(igmp_route_guard_enabled.operation)
	|| is_set(igmp_snoop_enabled.operation)
	|| is_set(igmp_snoop_profile_enabled.operation)
	|| is_set(is_bvi_up.operation)
	|| is_set(is_dai_addr_validation_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validation_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validation_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_evpn_cw_disable.operation)
	|| is_set(is_evpn_enabled.operation)
	|| is_set(is_evpn_flow_label.operation)
	|| is_set(is_igmp_snoop_enabled.operation)
	|| is_set(is_ipsg_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(is_p2mp_pw_enabled.operation)
	|| is_set(is_pbbevpn_enabled.operation)
	|| is_set(is_swmac_learning.operation)
	|| is_set(is_vni_enabled.operation)
	|| is_set(is_vpls_flood_optimization_enabled.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_aging_type.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification_type.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_flood_forward_enabled.operation)
	|| is_set(mld_mroute_port_enabled.operation)
	|| is_set(mld_route_guard_enabled.operation)
	|| is_set(mld_snoop_enabled.operation)
	|| is_set(mld_snoop_profile_enabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_macs.operation)
	|| is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)
	|| is_set(storm_control_broadcast_enabled.operation)
	|| is_set(storm_control_broadcast_rate_unit.operation)
	|| is_set(storm_control_multicast_enabled.operation)
	|| is_set(storm_control_multicast_rate_unit.operation)
	|| is_set(storm_control_unicast_enabled.operation)
	|| is_set(storm_control_unicast_rate_unit.operation)
	|| is_set(stp_participating.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.operation)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.operation)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.operation)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (host_routing_enabled.is_set || is_set(host_routing_enabled.operation)) leaf_name_data.push_back(host_routing_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.operation)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.operation)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.operation)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.operation)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.operation)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.operation)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.operation)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.operation)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.operation)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.operation)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.operation)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.operation)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.operation)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.operation)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.operation)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.operation)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.operation)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.operation)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.operation)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.operation)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.operation)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.operation)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.operation)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.operation)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.operation)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.operation)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.operation)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.operation)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.operation)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(std::move(c));
        children[segment_path] = feature.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_children()
{
    for (auto const & c : feature)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "host-routing-enabled")
    {
        host_routing_enabled = value;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
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
    children["dhcp"] = dhcp;

    igmp->parent = this;
    children["igmp"] = igmp;

    mld->parent = this;
    children["mld"] = mld;

    yang_name = "feature"; yang_parent_name = "operational-information";
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
    return is_set(operation)
	|| is_set(feature_type.operation)
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

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Feature' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.operation)) leaf_name_data.push_back(feature_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp != nullptr)
        {
            children["dhcp"] = dhcp;
        }
        else
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp>();
            dhcp->parent = this;
            children["dhcp"] = dhcp;
        }
        return children.at("dhcp");
    }

    if(child_yang_name == "igmp")
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp;
        }
        else
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp>();
            igmp->parent = this;
            children["igmp"] = igmp;
        }
        return children.at("igmp");
    }

    if(child_yang_name == "mld")
    {
        if(mld != nullptr)
        {
            children["mld"] = mld;
        }
        else
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld>();
            mld->parent = this;
            children["mld"] = mld;
        }
        return children.at("mld");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_children()
{
    if(children.find("dhcp") == children.end())
    {
        if(dhcp != nullptr)
        {
            children["dhcp"] = dhcp;
        }
    }

    if(children.find("igmp") == children.end())
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp;
        }
    }

    if(children.find("mld") == children.end())
    {
        if(mld != nullptr)
        {
            children["mld"] = mld;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp"; yang_parent_name = "feature";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp"; yang_parent_name = "feature";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld"; yang_parent_name = "feature";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mld' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
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
    yang_name = "l2fib-main-interface-instance-info"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(instance.operation)
	|| is_set(instance_provisioned.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.operation)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
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
    yang_name = "l2fib-main-interface-instance-hardware-ingress-detail-info"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(instance.operation)
	|| is_set(instance_provisioned.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-ingress-detail-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceHardwareIngressDetailInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.operation)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
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
    yang_name = "l2fib-main-interface-instance-hardware-egress-info"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(instance.operation)
	|| is_set(instance_provisioned.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-egress-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceHardwareEgressInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.operation)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
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
    yang_name = "l2fib-main-interface-instance-hardware-ingress-info"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(instance.operation)
	|| is_set(instance_provisioned.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-ingress-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceHardwareIngressInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.operation)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePorts()
{
    yang_name = "l2fib-main-interface-instance-bridge-ports"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-ports";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceBridgePorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-main-interface-instance-bridge-port")
    {
        for(auto const & c : l2fib_main_interface_instance_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort>();
        c->parent = this;
        l2fib_main_interface_instance_bridge_port.push_back(std::move(c));
        children[segment_path] = l2fib_main_interface_instance_bridge_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_children()
{
    for (auto const & c : l2fib_main_interface_instance_bridge_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::L2FibMainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bp_type{YType::uint8, "bp-type"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_port_id{YType::str, "bridge-port-id"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-instance-bridge-port"; yang_parent_name = "l2fib-main-interface-instance-bridge-ports";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::~L2FibMainInterfaceInstanceBridgePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_data() const
{
    return bridge_port.is_set
	|| bp_type.is_set
	|| bridge_id.is_set
	|| bridge_port_id.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_port.operation)
	|| is_set(bp_type.operation)
	|| is_set(bridge_id.operation)
	|| is_set(bridge_port_id.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-port" <<"[bridge-port='" <<bridge_port <<"']";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceBridgePort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.operation)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bp_type.is_set || is_set(bp_type.operation)) leaf_name_data.push_back(bp_type.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_port_id.is_set || is_set(bridge_port_id.operation)) leaf_name_data.push_back(bridge_port_id.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
    }
    if(value_path == "bp-type")
    {
        bp_type = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
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
    yang_name = "l2fib-main-interface-instance-hardware-egress-detail-info"; yang_parent_name = "l2fib-main-interface-instance";
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
    return is_set(operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(instance.operation)
	|| is_set(instance_provisioned.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(state.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-egress-detail-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInstanceHardwareEgressDetailInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.operation)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::L2FibMainInterfaceInfo()
    :
    instance_id{YType::uint32, "instance-id"},
    instances_provisioned{YType::boolean, "instances-provisioned"},
    instances_state{YType::enumeration, "instances-state"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-info"; yang_parent_name = "l2fib-main-interface";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::~L2FibMainInterfaceInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_data() const
{
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_operation() const
{
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(instance_id.operation)
	|| is_set(instances_provisioned.operation)
	|| is_set(instances_state.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    auto instance_id_name_datas = instance_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instance_id_name_datas.begin(), instance_id_name_datas.end());
    auto instances_provisioned_name_datas = instances_provisioned.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_provisioned_name_datas.begin(), instances_provisioned_name_datas.end());
    auto instances_state_name_datas = instances_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_state_name_datas.begin(), instances_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-id")
    {
        instance_id.append(value);
    }
    if(value_path == "instances-provisioned")
    {
        instances_provisioned.append(value);
    }
    if(value_path == "instances-state")
    {
        instances_state.append(value);
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::L2FibMainInterfaceDetailInfo()
    :
    bridge_port_count_instance{YType::uint32, "bridge-port-count-instance"},
    esi_id{YType::uint16, "esi-id"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"},
    instance_id{YType::uint32, "instance-id"},
    instances_provisioned{YType::boolean, "instances-provisioned"},
    instances_state{YType::enumeration, "instances-state"},
    mac{YType::str, "mac"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-detail-info"; yang_parent_name = "l2fib-main-interface";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::~L2FibMainInterfaceDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_data() const
{
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : bridge_port_count_instance.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return esi_id.is_set
	|| evpn_shg_local_label.is_set
	|| mac.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : bridge_port_count_instance.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bridge_port_count_instance.operation)
	|| is_set(esi_id.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(evpn_shg_local_label.operation)
	|| is_set(instance_id.operation)
	|| is_set(instances_provisioned.operation)
	|| is_set(instances_state.operation)
	|| is_set(mac.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-detail-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceDetailInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_id.is_set || is_set(esi_id.operation)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.operation)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());
    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    auto bridge_port_count_instance_name_datas = bridge_port_count_instance.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bridge_port_count_instance_name_datas.begin(), bridge_port_count_instance_name_datas.end());
    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());
    auto instance_id_name_datas = instance_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instance_id_name_datas.begin(), instance_id_name_datas.end());
    auto instances_provisioned_name_datas = instances_provisioned.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_provisioned_name_datas.begin(), instances_provisioned_name_datas.end());
    auto instances_state_name_datas = instances_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_state_name_datas.begin(), instances_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        for(auto const & c : evpn_shg_remote_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(std::move(c));
        children[segment_path] = evpn_shg_remote_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_children()
{
    for (auto const & c : evpn_shg_remote_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count-instance")
    {
        bridge_port_count_instance.append(value);
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label = value;
    }
    if(value_path == "instance-id")
    {
        instance_id.append(value);
    }
    if(value_path == "instances-provisioned")
    {
        instances_provisioned.append(value);
    }
    if(value_path == "instances-state")
    {
        instances_state.append(value);
    }
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::EvpnShgRemoteInfo()
    :
    remote_split_horizon_group_label(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>())
{
    remote_split_horizon_group_label->parent = this;
    children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;

    yang_name = "evpn-shg-remote-info"; yang_parent_name = "l2fib-main-interface-detail-info";
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
    return is_set(operation)
	|| (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-shg-remote-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnShgRemoteInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        if(remote_split_horizon_group_label != nullptr)
        {
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
        else
        {
            remote_split_horizon_group_label = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>();
            remote_split_horizon_group_label->parent = this;
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
        return children.at("remote-split-horizon-group-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_children()
{
    if(children.find("remote-split-horizon-group-label") == children.end())
    {
        if(remote_split_horizon_group_label != nullptr)
        {
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{
    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info";
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
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(next_hop.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSplitHorizonGroupLabel' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::L2FibMainInterfaceHardwareIngressDetailInfo()
    :
    bridge_port_count_instance{YType::uint32, "bridge-port-count-instance"},
    esi_id{YType::uint16, "esi-id"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"},
    instance_id{YType::uint32, "instance-id"},
    instances_provisioned{YType::boolean, "instances-provisioned"},
    instances_state{YType::enumeration, "instances-state"},
    mac{YType::str, "mac"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-hardware-ingress-detail-info"; yang_parent_name = "l2fib-main-interface";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::~L2FibMainInterfaceHardwareIngressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_data() const
{
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : bridge_port_count_instance.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(leaf.is_set)
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
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : bridge_port_count_instance.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bridge_port_count_instance.operation)
	|| is_set(esi_id.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(evpn_shg_local_label.operation)
	|| is_set(instance_id.operation)
	|| is_set(instances_provisioned.operation)
	|| is_set(instances_state.operation)
	|| is_set(mac.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-ingress-detail-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceHardwareIngressDetailInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_id.is_set || is_set(esi_id.operation)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.operation)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());
    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    auto bridge_port_count_instance_name_datas = bridge_port_count_instance.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bridge_port_count_instance_name_datas.begin(), bridge_port_count_instance_name_datas.end());
    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());
    auto instance_id_name_datas = instance_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instance_id_name_datas.begin(), instance_id_name_datas.end());
    auto instances_provisioned_name_datas = instances_provisioned.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_provisioned_name_datas.begin(), instances_provisioned_name_datas.end());
    auto instances_state_name_datas = instances_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_state_name_datas.begin(), instances_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        for(auto const & c : evpn_shg_remote_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(std::move(c));
        children[segment_path] = evpn_shg_remote_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_children()
{
    for (auto const & c : evpn_shg_remote_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-count-instance")
    {
        bridge_port_count_instance.append(value);
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label = value;
    }
    if(value_path == "instance-id")
    {
        instance_id.append(value);
    }
    if(value_path == "instances-provisioned")
    {
        instances_provisioned.append(value);
    }
    if(value_path == "instances-state")
    {
        instances_state.append(value);
    }
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::EvpnShgRemoteInfo()
    :
    remote_split_horizon_group_label(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>())
{
    remote_split_horizon_group_label->parent = this;
    children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;

    yang_name = "evpn-shg-remote-info"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info";
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
    return is_set(operation)
	|| (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-shg-remote-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnShgRemoteInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        if(remote_split_horizon_group_label != nullptr)
        {
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
        else
        {
            remote_split_horizon_group_label = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>();
            remote_split_horizon_group_label->parent = this;
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
        return children.at("remote-split-horizon-group-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_children()
{
    if(children.find("remote-split-horizon-group-label") == children.end())
    {
        if(remote_split_horizon_group_label != nullptr)
        {
            children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{
    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info";
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
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(next_hop.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSplitHorizonGroupLabel' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::L2FibMainInterfaceHardwareIngressInfo()
    :
    instance_id{YType::uint32, "instance-id"},
    instances_provisioned{YType::boolean, "instances-provisioned"},
    instances_state{YType::enumeration, "instances-state"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{
    yang_name = "l2fib-main-interface-hardware-ingress-info"; yang_parent_name = "l2fib-main-interface";
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::~L2FibMainInterfaceHardwareIngressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_data() const
{
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_operation() const
{
    for (auto const & leaf : instance_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_provisioned.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : instances_state.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(instance_id.operation)
	|| is_set(instances_provisioned.operation)
	|| is_set(instances_state.operation)
	|| is_set(main_if_type.operation)
	|| is_set(main_interface.operation)
	|| is_set(virtual_if_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-ingress-info";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMainInterfaceHardwareIngressInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_if_type.is_set || is_set(main_if_type.operation)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.operation)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.operation)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    auto instance_id_name_datas = instance_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instance_id_name_datas.begin(), instance_id_name_datas.end());
    auto instances_provisioned_name_datas = instances_provisioned.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_provisioned_name_datas.begin(), instances_provisioned_name_datas.end());
    auto instances_state_name_datas = instances_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), instances_state_name_datas.begin(), instances_state_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-id")
    {
        instance_id.append(value);
    }
    if(value_path == "instances-provisioned")
    {
        instances_provisioned.append(value);
    }
    if(value_path == "instances-state")
    {
        instances_state.append(value);
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetails()
{
    yang_name = "l2fib-mstp-details"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::~L2FibMstpDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_mstp_detail.size(); index++)
    {
        if(l2fib_mstp_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mstp_detail.size(); index++)
    {
        if(l2fib_mstp_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-details";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMstpDetails' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2fib-mstp-detail")
    {
        for(auto const & c : l2fib_mstp_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail>();
        c->parent = this;
        l2fib_mstp_detail.push_back(std::move(c));
        children[segment_path] = l2fib_mstp_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_children()
{
    for (auto const & c : l2fib_mstp_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::L2FibMstpDetail()
    :
    bridge_port_array{YType::str, "bridge-port-array"},
    internal_msti{YType::uint32, "internal-msti"},
    learn_key{YType::uint8, "learn-key"},
    msti{YType::int32, "msti"},
    msti_xr{YType::uint32, "msti-xr"},
    parent_interface{YType::str, "parent-interface"},
    parent_interface_xr{YType::str, "parent-interface-xr"},
    state{YType::uint32, "state"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base>())
{
    base->parent = this;
    children["base"] = base;

    yang_name = "l2fib-mstp-detail"; yang_parent_name = "l2fib-mstp-details";
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::~L2FibMstpDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_data() const
{
    for (auto const & leaf : bridge_port_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return internal_msti.is_set
	|| learn_key.is_set
	|| msti.is_set
	|| msti_xr.is_set
	|| parent_interface.is_set
	|| parent_interface_xr.is_set
	|| state.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_operation() const
{
    for (auto const & leaf : bridge_port_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bridge_port_array.operation)
	|| is_set(internal_msti.operation)
	|| is_set(learn_key.operation)
	|| is_set(msti.operation)
	|| is_set(msti_xr.operation)
	|| is_set(parent_interface.operation)
	|| is_set(parent_interface_xr.operation)
	|| is_set(state.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-detail";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMstpDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_msti.is_set || is_set(internal_msti.operation)) leaf_name_data.push_back(internal_msti.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.operation)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (msti_xr.is_set || is_set(msti_xr.operation)) leaf_name_data.push_back(msti_xr.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (parent_interface_xr.is_set || is_set(parent_interface_xr.operation)) leaf_name_data.push_back(parent_interface_xr.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());

    auto bridge_port_array_name_datas = bridge_port_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bridge_port_array_name_datas.begin(), bridge_port_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port-array")
    {
        bridge_port_array.append(value);
    }
    if(value_path == "internal-msti")
    {
        internal_msti = value;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "msti-xr")
    {
        msti_xr = value;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fib-mstp-detail";
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_children()
{
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2FibL2Tp()
    :
    l2tpv2_sessions(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions>())
	,l2tpv3_sessions(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions>())
{
    l2tpv2_sessions->parent = this;
    children["l2tpv2-sessions"] = l2tpv2_sessions;

    l2tpv3_sessions->parent = this;
    children["l2tpv3-sessions"] = l2tpv3_sessions;

    yang_name = "l2fib-l2tp"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::~L2FibL2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_data() const
{
    return (l2tpv2_sessions !=  nullptr && l2tpv2_sessions->has_data())
	|| (l2tpv3_sessions !=  nullptr && l2tpv3_sessions->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_operation() const
{
    return is_set(operation)
	|| (l2tpv2_sessions !=  nullptr && l2tpv2_sessions->has_operation())
	|| (l2tpv3_sessions !=  nullptr && l2tpv3_sessions->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-l2tp";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibL2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tpv2-sessions")
    {
        if(l2tpv2_sessions != nullptr)
        {
            children["l2tpv2-sessions"] = l2tpv2_sessions;
        }
        else
        {
            l2tpv2_sessions = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions>();
            l2tpv2_sessions->parent = this;
            children["l2tpv2-sessions"] = l2tpv2_sessions;
        }
        return children.at("l2tpv2-sessions");
    }

    if(child_yang_name == "l2tpv3-sessions")
    {
        if(l2tpv3_sessions != nullptr)
        {
            children["l2tpv3-sessions"] = l2tpv3_sessions;
        }
        else
        {
            l2tpv3_sessions = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions>();
            l2tpv3_sessions->parent = this;
            children["l2tpv3-sessions"] = l2tpv3_sessions;
        }
        return children.at("l2tpv3-sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_children()
{
    if(children.find("l2tpv2-sessions") == children.end())
    {
        if(l2tpv2_sessions != nullptr)
        {
            children["l2tpv2-sessions"] = l2tpv2_sessions;
        }
    }

    if(children.find("l2tpv3-sessions") == children.end())
    {
        if(l2tpv3_sessions != nullptr)
        {
            children["l2tpv3-sessions"] = l2tpv3_sessions;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Sessions()
{
    yang_name = "l2tpv3-sessions"; yang_parent_name = "l2fib-l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::~L2Tpv3Sessions()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::has_data() const
{
    for (std::size_t index=0; index<l2tpv3_session.size(); index++)
    {
        if(l2tpv3_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::has_operation() const
{
    for (std::size_t index=0; index<l2tpv3_session.size(); index++)
    {
        if(l2tpv3_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-sessions";

    return path_buffer.str();

}

EntityPath L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Sessions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tpv3-session")
    {
        for(auto const & c : l2tpv3_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session>();
        c->parent = this;
        l2tpv3_session.push_back(std::move(c));
        children[segment_path] = l2tpv3_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_children()
{
    for (auto const & c : l2tpv3_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::set_value(const std::string & value_path, std::string value)
{
}


}
}

