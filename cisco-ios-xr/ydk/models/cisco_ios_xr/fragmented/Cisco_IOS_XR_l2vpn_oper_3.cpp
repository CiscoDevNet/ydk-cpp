
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::Oper()
    :
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"}
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
    return unicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
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

    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());

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
    char count=0;
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-kb-ps")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::OperationalInformation()
    :
    mtu{YType::uint32, "mtu"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_limit{YType::uint32, "mac-limit"},
    number_of_macs{YType::uint32, "number-of-macs"},
    admin_disabled{YType::boolean, "admin-disabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    stp_participating{YType::boolean, "stp-participating"},
    bvi_configured{YType::boolean, "bvi-configured"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    msti{YType::uint32, "msti"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"}
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
    return mtu.is_set
	|| mac_aging_time.is_set
	|| mac_limit.is_set
	|| number_of_macs.is_set
	|| admin_disabled.is_set
	|| flooding_disabled.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| mac_limit_action.is_set
	|| mac_limit_threshold.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_limit_notification_type.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| mac_secure_action.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| mac_aging_type.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| is_dai_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| stp_participating.is_set
	|| bvi_configured.is_set
	|| is_bvi_up.is_set
	|| is_vni_enabled.is_set
	|| is_evpn_enabled.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_evpn_flow_label.is_set
	|| is_evpn_cw_disable.is_set
	|| msti.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_igmp_snoop_enabled.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter);
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

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : feature)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
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
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
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
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "mtu" || name == "mac-aging-time" || name == "mac-limit" || name == "number-of-macs" || name == "admin-disabled" || name == "flooding-disabled" || name == "flood-unknown-unicast-enabled" || name == "mac-limit-action" || name == "mac-limit-threshold" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "mac-limit-notification-type" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "mac-secure-action" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-threshold-enabled" || name == "mac-aging-type" || name == "storm-control-unicast-enabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-multicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-rate-unit" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "is-dai-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-logging-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "stp-participating" || name == "bvi-configured" || name == "is-bvi-up" || name == "is-vni-enabled" || name == "is-evpn-enabled" || name == "unknown-unicast-flooding-disabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-evpn-flow-label" || name == "is-evpn-cw-disable" || name == "msti" || name == "is-p2mp-pw-enabled" || name == "is-igmp-snoop-enabled" || name == "nv-satellite-offload-ipv4-multicast-disabled")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::L2FibMainInterfaceInstanceInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    instance{YType::uint32, "instance"},
    state{YType::enumeration, "state"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance_provisioned{YType::boolean, "instance-provisioned"}
{

    yang_name = "l2fib-main-interface-instance-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::~L2FibMainInterfaceInstanceInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::has_data() const
{
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| instance.is_set
	|| state.is_set
	|| bridge_port_count.is_set
	|| instance_provisioned.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter);
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "instance" || name == "state" || name == "bridge-port-count" || name == "instance-provisioned")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::L2FibMainInterfaceInstanceHardwareIngressDetailInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    instance{YType::uint32, "instance"},
    state{YType::enumeration, "state"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance_provisioned{YType::boolean, "instance-provisioned"}
{

    yang_name = "l2fib-main-interface-instance-hardware-ingress-detail-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::~L2FibMainInterfaceInstanceHardwareIngressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::has_data() const
{
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| instance.is_set
	|| state.is_set
	|| bridge_port_count.is_set
	|| instance_provisioned.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter);
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "instance" || name == "state" || name == "bridge-port-count" || name == "instance-provisioned")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::L2FibMainInterfaceInstanceHardwareEgressInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    instance{YType::uint32, "instance"},
    state{YType::enumeration, "state"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance_provisioned{YType::boolean, "instance-provisioned"}
{

    yang_name = "l2fib-main-interface-instance-hardware-egress-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::~L2FibMainInterfaceInstanceHardwareEgressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::has_data() const
{
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| instance.is_set
	|| state.is_set
	|| bridge_port_count.is_set
	|| instance_provisioned.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter);
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "instance" || name == "state" || name == "bridge-port-count" || name == "instance-provisioned")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::L2FibMainInterfaceInstanceHardwareIngressInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    instance{YType::uint32, "instance"},
    state{YType::enumeration, "state"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance_provisioned{YType::boolean, "instance-provisioned"}
{

    yang_name = "l2fib-main-interface-instance-hardware-ingress-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::~L2FibMainInterfaceInstanceHardwareIngressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::has_data() const
{
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| instance.is_set
	|| state.is_set
	|| bridge_port_count.is_set
	|| instance_provisioned.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter);
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "instance" || name == "state" || name == "bridge-port-count" || name == "instance-provisioned")
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
    char count=0;
    count = 0;
    for (auto const & c : l2fib_main_interface_instance_bridge_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    bridge_port_id{YType::str, "bridge-port-id"},
    bridge_id{YType::uint32, "bridge-id"},
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    bp_type{YType::uint8, "bp-type"}
{

    yang_name = "l2fib-main-interface-instance-bridge-port"; yang_parent_name = "l2fib-main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::~L2FibMainInterfaceInstanceBridgePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_data() const
{
    return xcid.is_set
	|| bridge_port_id.is_set
	|| bridge_id.is_set
	|| main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| bp_type.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(bridge_port_id.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(bp_type.yfilter);
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
    if (bridge_port_id.is_set || is_set(bridge_port_id.yfilter)) leaf_name_data.push_back(bridge_port_id.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (bp_type.is_set || is_set(bp_type.yfilter)) leaf_name_data.push_back(bp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "bridge-port-id")
    {
        bridge_port_id = value;
        bridge_port_id.value_namespace = name_space;
        bridge_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-type")
    {
        bp_type = value;
        bp_type.value_namespace = name_space;
        bp_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "bp-type")
    {
        bp_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid" || name == "bridge-port-id" || name == "bridge-id" || name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "bp-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::L2FibMainInterfaceInstanceHardwareEgressDetailInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    instance{YType::uint32, "instance"},
    state{YType::enumeration, "state"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance_provisioned{YType::boolean, "instance-provisioned"}
{

    yang_name = "l2fib-main-interface-instance-hardware-egress-detail-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::~L2FibMainInterfaceInstanceHardwareEgressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::has_data() const
{
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| instance.is_set
	|| state.is_set
	|| bridge_port_count.is_set
	|| instance_provisioned.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter);
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "instance" || name == "state" || name == "bridge-port-count" || name == "instance-provisioned")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::L2FibMainInterfaceInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
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
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_provisioned)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-state" || name == "instances-provisioned" || name == "main-interface" || name == "main-if-type" || name == "virtual-if-name")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::L2FibMainInterfaceDetailInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    mac{YType::str, "mac"},
    esi_id{YType::uint16, "esi-id"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"}
{

    yang_name = "l2fib-main-interface-detail-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::~L2FibMainInterfaceDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
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
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| mac.is_set
	|| esi_id.is_set
	|| evpn_shg_local_label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
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
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(evpn_shg_local_label.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.yfilter)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "bridge-port-count-instance")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance>();
        c->parent = this;
        bridge_port_count_instance.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_provisioned)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : bridge_port_count_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ethernet_segment_identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : evpn_shg_remote_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
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
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-state" || name == "instances-provisioned" || name == "bridge-port-count-instance" || name == "ethernet-segment-identifier" || name == "evpn-shg-remote-info" || name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "mac" || name == "esi-id" || name == "evpn-shg-local-label")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::BridgePortCountInstance()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bridge-port-count-instance"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::~BridgePortCountInstance()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-count-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

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
    char count=0;
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
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_data() const
{
    return next_hop.is_set
	|| label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
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

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::L2FibMainInterfaceHardwareIngressDetailInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
    virtual_if_name{YType::str, "virtual-if-name"},
    mac{YType::str, "mac"},
    esi_id{YType::uint16, "esi-id"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"}
{

    yang_name = "l2fib-main-interface-hardware-ingress-detail-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::~L2FibMainInterfaceHardwareIngressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
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
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set
	|| mac.is_set
	|| esi_id.is_set
	|| evpn_shg_local_label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
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
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(evpn_shg_local_label.yfilter);
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.yfilter)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "bridge-port-count-instance")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance>();
        c->parent = this;
        bridge_port_count_instance.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_provisioned)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : bridge_port_count_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ethernet_segment_identifier)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : evpn_shg_remote_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
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
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-state" || name == "instances-provisioned" || name == "bridge-port-count-instance" || name == "ethernet-segment-identifier" || name == "evpn-shg-remote-info" || name == "main-interface" || name == "main-if-type" || name == "virtual-if-name" || name == "mac" || name == "esi-id" || name == "evpn-shg-local-label")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_data() const
{
    return next_hop.is_set
	|| label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
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

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::L2FibMainInterfaceHardwareIngressInfo()
    :
    main_interface{YType::str, "main-interface"},
    main_if_type{YType::uint8, "main-if-type"},
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
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    return main_interface.is_set
	|| main_if_type.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
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

    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instances_provisioned)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-state" || name == "instances-provisioned" || name == "main-interface" || name == "main-if-type" || name == "virtual-if-name")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetails()
{

    yang_name = "l2fib-mstp-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mstp-detail")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail>();
        c->parent = this;
        l2fib_mstp_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_mstp_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mstp-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::L2FibMstpDetail()
    :
    parent_interface{YType::str, "parent-interface"},
    msti{YType::int32, "msti"},
    parent_interface_xr{YType::str, "parent-interface-xr"},
    msti_xr{YType::uint32, "msti-xr"},
    internal_msti{YType::uint32, "internal-msti"},
    state{YType::uint32, "state"},
    learn_key{YType::uint8, "learn-key"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base>())
{
    base->parent = this;

    yang_name = "l2fib-mstp-detail"; yang_parent_name = "l2fib-mstp-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::~L2FibMstpDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_data() const
{
    for (std::size_t index=0; index<bridge_port_array.size(); index++)
    {
        if(bridge_port_array[index]->has_data())
            return true;
    }
    return parent_interface.is_set
	|| msti.is_set
	|| parent_interface_xr.is_set
	|| msti_xr.is_set
	|| internal_msti.is_set
	|| state.is_set
	|| learn_key.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_operation() const
{
    for (std::size_t index=0; index<bridge_port_array.size(); index++)
    {
        if(bridge_port_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(parent_interface_xr.yfilter)
	|| ydk::is_set(msti_xr.yfilter)
	|| ydk::is_set(internal_msti.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mstp-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (parent_interface_xr.is_set || is_set(parent_interface_xr.yfilter)) leaf_name_data.push_back(parent_interface_xr.get_name_leafdata());
    if (msti_xr.is_set || is_set(msti_xr.yfilter)) leaf_name_data.push_back(msti_xr.get_name_leafdata());
    if (internal_msti.is_set || is_set(internal_msti.yfilter)) leaf_name_data.push_back(internal_msti.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base>();
        }
        return base;
    }

    if(child_yang_name == "bridge-port-array")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray>();
        c->parent = this;
        bridge_port_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    count = 0;
    for (auto const & c : bridge_port_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr = value;
        parent_interface_xr.value_namespace = name_space;
        parent_interface_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-xr")
    {
        msti_xr = value;
        msti_xr.value_namespace = name_space;
        msti_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-msti")
    {
        internal_msti = value;
        internal_msti.value_namespace = name_space;
        internal_msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "parent-interface-xr")
    {
        parent_interface_xr.yfilter = yfilter;
    }
    if(value_path == "msti-xr")
    {
        msti_xr.yfilter = yfilter;
    }
    if(value_path == "internal-msti")
    {
        internal_msti.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bridge-port-array" || name == "parent-interface" || name == "msti" || name == "parent-interface-xr" || name == "msti-xr" || name == "internal-msti" || name == "state" || name == "learn-key")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-mstp-detail"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::BridgePortArray()
    :
    entry{YType::str, "entry"}
{

    yang_name = "bridge-port-array"; yang_parent_name = "l2fib-mstp-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::~BridgePortArray()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2FibL2Tp()
    :
    l2tpv3_sessions(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions>())
	,l2tpv2_sessions(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions>())
{
    l2tpv3_sessions->parent = this;
    l2tpv2_sessions->parent = this;

    yang_name = "l2fib-l2tp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::~L2FibL2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_data() const
{
    return (l2tpv3_sessions !=  nullptr && l2tpv3_sessions->has_data())
	|| (l2tpv2_sessions !=  nullptr && l2tpv2_sessions->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_operation() const
{
    return is_set(yfilter)
	|| (l2tpv3_sessions !=  nullptr && l2tpv3_sessions->has_operation())
	|| (l2tpv2_sessions !=  nullptr && l2tpv2_sessions->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3-sessions")
    {
        if(l2tpv3_sessions == nullptr)
        {
            l2tpv3_sessions = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions>();
        }
        return l2tpv3_sessions;
    }

    if(child_yang_name == "l2tpv2-sessions")
    {
        if(l2tpv2_sessions == nullptr)
        {
            l2tpv2_sessions = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions>();
        }
        return l2tpv2_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tpv3_sessions != nullptr)
    {
        children["l2tpv3-sessions"] = l2tpv3_sessions;
    }

    if(l2tpv2_sessions != nullptr)
    {
        children["l2tpv2-sessions"] = l2tpv2_sessions;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3-sessions" || name == "l2tpv2-sessions")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Sessions()
{

    yang_name = "l2tpv3-sessions"; yang_parent_name = "l2fib-l2tp"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3-session")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session>();
        c->parent = this;
        l2tpv3_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2tpv3_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3-session")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::L2Tpv3Session()
    :
    session_id{YType::int32, "session-id"},
    session_id_xr{YType::uint32, "session-id-xr"},
    interface_handle{YType::str, "interface-handle"},
    sub_interface_name{YType::str, "sub-interface-name"},
    source_address{YType::str, "source-address"},
    bound{YType::boolean, "bound"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    ipv4_table_id{YType::uint32, "ipv4-table-id"},
    ipv6_table_id{YType::uint32, "ipv6-table-id"},
    nhop_ip_addr{YType::str, "nhop-ip-addr"},
    session_type{YType::enumeration, "session-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base>())
{
    base->parent = this;

    yang_name = "l2tpv3-session"; yang_parent_name = "l2tpv3-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::~L2Tpv3Session()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_data() const
{
    return session_id.is_set
	|| session_id_xr.is_set
	|| interface_handle.is_set
	|| sub_interface_name.is_set
	|| source_address.is_set
	|| bound.is_set
	|| tunnel_id_xr.is_set
	|| ipv4_table_id.is_set
	|| ipv6_table_id.is_set
	|| nhop_ip_addr.is_set
	|| session_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_id_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(sub_interface_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(ipv4_table_id.yfilter)
	|| ydk::is_set(ipv6_table_id.yfilter)
	|| ydk::is_set(nhop_ip_addr.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-session" <<"[session-id='" <<session_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.yfilter)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.yfilter)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (ipv4_table_id.is_set || is_set(ipv4_table_id.yfilter)) leaf_name_data.push_back(ipv4_table_id.get_name_leafdata());
    if (ipv6_table_id.is_set || is_set(ipv6_table_id.yfilter)) leaf_name_data.push_back(ipv6_table_id.get_name_leafdata());
    if (nhop_ip_addr.is_set || is_set(nhop_ip_addr.yfilter)) leaf_name_data.push_back(nhop_ip_addr.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
        session_id_xr.value_namespace = name_space;
        session_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
        sub_interface_name.value_namespace = name_space;
        sub_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id = value;
        ipv4_table_id.value_namespace = name_space;
        ipv4_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id = value;
        ipv6_table_id.value_namespace = name_space;
        ipv6_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr = value;
        nhop_ip_addr.value_namespace = name_space;
        nhop_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id.yfilter = yfilter;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "session-id" || name == "session-id-xr" || name == "interface-handle" || name == "sub-interface-name" || name == "source-address" || name == "bound" || name == "tunnel-id-xr" || name == "ipv4-table-id" || name == "ipv6-table-id" || name == "nhop-ip-addr" || name == "session-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2tpv3-session"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Sessions()
{

    yang_name = "l2tpv2-sessions"; yang_parent_name = "l2fib-l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::~L2Tpv2Sessions()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_data() const
{
    for (std::size_t index=0; index<l2tpv2_session.size(); index++)
    {
        if(l2tpv2_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_operation() const
{
    for (std::size_t index=0; index<l2tpv2_session.size(); index++)
    {
        if(l2tpv2_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv2-session")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session>();
        c->parent = this;
        l2tpv2_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2tpv2_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv2-session")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::L2Tpv2Session()
    :
    session_id{YType::int32, "session-id"},
    tunnel_id{YType::int32, "tunnel-id"},
    session_id_xr{YType::uint32, "session-id-xr"},
    interface_handle{YType::str, "interface-handle"},
    sub_interface_name{YType::str, "sub-interface-name"},
    source_address{YType::str, "source-address"},
    bound{YType::boolean, "bound"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    ipv4_table_id{YType::uint32, "ipv4-table-id"},
    ipv6_table_id{YType::uint32, "ipv6-table-id"},
    nhop_ip_addr{YType::str, "nhop-ip-addr"},
    session_type{YType::enumeration, "session-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base>())
{
    base->parent = this;

    yang_name = "l2tpv2-session"; yang_parent_name = "l2tpv2-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::~L2Tpv2Session()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set
	|| session_id_xr.is_set
	|| interface_handle.is_set
	|| sub_interface_name.is_set
	|| source_address.is_set
	|| bound.is_set
	|| tunnel_id_xr.is_set
	|| ipv4_table_id.is_set
	|| ipv6_table_id.is_set
	|| nhop_ip_addr.is_set
	|| session_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(session_id_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(sub_interface_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(ipv4_table_id.yfilter)
	|| ydk::is_set(ipv6_table_id.yfilter)
	|| ydk::is_set(nhop_ip_addr.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.yfilter)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.yfilter)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (ipv4_table_id.is_set || is_set(ipv4_table_id.yfilter)) leaf_name_data.push_back(ipv4_table_id.get_name_leafdata());
    if (ipv6_table_id.is_set || is_set(ipv6_table_id.yfilter)) leaf_name_data.push_back(ipv6_table_id.get_name_leafdata());
    if (nhop_ip_addr.is_set || is_set(nhop_ip_addr.yfilter)) leaf_name_data.push_back(nhop_ip_addr.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
        session_id_xr.value_namespace = name_space;
        session_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
        sub_interface_name.value_namespace = name_space;
        sub_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id = value;
        ipv4_table_id.value_namespace = name_space;
        ipv4_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id = value;
        ipv6_table_id.value_namespace = name_space;
        ipv6_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr = value;
        nhop_ip_addr.value_namespace = name_space;
        nhop_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id.yfilter = yfilter;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "session-id" || name == "tunnel-id" || name == "session-id-xr" || name == "interface-handle" || name == "sub-interface-name" || name == "source-address" || name == "bound" || name == "tunnel-id-xr" || name == "ipv4-table-id" || name == "ipv6-table-id" || name == "nhop-ip-addr" || name == "session-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2tpv2-session"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032()
    :
    l2fib_g8032_rings(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings>())
{
    l2fib_g8032_rings->parent = this;

    yang_name = "l2fib-g8032"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::~L2FibG8032()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_data() const
{
    return (l2fib_g8032_rings !=  nullptr && l2fib_g8032_rings->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_operation() const
{
    return is_set(yfilter)
	|| (l2fib_g8032_rings !=  nullptr && l2fib_g8032_rings->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-rings")
    {
        if(l2fib_g8032_rings == nullptr)
        {
            l2fib_g8032_rings = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings>();
        }
        return l2fib_g8032_rings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2fib_g8032_rings != nullptr)
    {
        children["l2fib-g8032-rings"] = l2fib_g8032_rings;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-rings")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Rings()
{

    yang_name = "l2fib-g8032-rings"; yang_parent_name = "l2fib-g8032"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::~L2FibG8032Rings()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring.size(); index++)
    {
        if(l2fib_g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring.size(); index++)
    {
        if(l2fib_g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-rings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring>();
        c->parent = this;
        l2fib_g8032_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_g8032_ring)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032Ring()
    :
    ring_name{YType::str, "ring-name"}
    	,
    l2fib_g8032_ring_detail(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail>())
	,l2fib_g8032_ring_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary>())
	,l2fib_g8032_ring_instance_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries>())
	,l2fib_g8032_ring_instance_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails>())
{
    l2fib_g8032_ring_detail->parent = this;
    l2fib_g8032_ring_summary->parent = this;
    l2fib_g8032_ring_instance_summaries->parent = this;
    l2fib_g8032_ring_instance_details->parent = this;

    yang_name = "l2fib-g8032-ring"; yang_parent_name = "l2fib-g8032-rings"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::~L2FibG8032Ring()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_data() const
{
    return ring_name.is_set
	|| (l2fib_g8032_ring_detail !=  nullptr && l2fib_g8032_ring_detail->has_data())
	|| (l2fib_g8032_ring_summary !=  nullptr && l2fib_g8032_ring_summary->has_data())
	|| (l2fib_g8032_ring_instance_summaries !=  nullptr && l2fib_g8032_ring_instance_summaries->has_data())
	|| (l2fib_g8032_ring_instance_details !=  nullptr && l2fib_g8032_ring_instance_details->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| (l2fib_g8032_ring_detail !=  nullptr && l2fib_g8032_ring_detail->has_operation())
	|| (l2fib_g8032_ring_summary !=  nullptr && l2fib_g8032_ring_summary->has_operation())
	|| (l2fib_g8032_ring_instance_summaries !=  nullptr && l2fib_g8032_ring_instance_summaries->has_operation())
	|| (l2fib_g8032_ring_instance_details !=  nullptr && l2fib_g8032_ring_instance_details->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring" <<"[ring-name='" <<ring_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-detail")
    {
        if(l2fib_g8032_ring_detail == nullptr)
        {
            l2fib_g8032_ring_detail = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail>();
        }
        return l2fib_g8032_ring_detail;
    }

    if(child_yang_name == "l2fib-g8032-ring-summary")
    {
        if(l2fib_g8032_ring_summary == nullptr)
        {
            l2fib_g8032_ring_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary>();
        }
        return l2fib_g8032_ring_summary;
    }

    if(child_yang_name == "l2fib-g8032-ring-instance-summaries")
    {
        if(l2fib_g8032_ring_instance_summaries == nullptr)
        {
            l2fib_g8032_ring_instance_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries>();
        }
        return l2fib_g8032_ring_instance_summaries;
    }

    if(child_yang_name == "l2fib-g8032-ring-instance-details")
    {
        if(l2fib_g8032_ring_instance_details == nullptr)
        {
            l2fib_g8032_ring_instance_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails>();
        }
        return l2fib_g8032_ring_instance_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2fib_g8032_ring_detail != nullptr)
    {
        children["l2fib-g8032-ring-detail"] = l2fib_g8032_ring_detail;
    }

    if(l2fib_g8032_ring_summary != nullptr)
    {
        children["l2fib-g8032-ring-summary"] = l2fib_g8032_ring_summary;
    }

    if(l2fib_g8032_ring_instance_summaries != nullptr)
    {
        children["l2fib-g8032-ring-instance-summaries"] = l2fib_g8032_ring_instance_summaries;
    }

    if(l2fib_g8032_ring_instance_details != nullptr)
    {
        children["l2fib-g8032-ring-instance-details"] = l2fib_g8032_ring_instance_details;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring-detail" || name == "l2fib-g8032-ring-summary" || name == "l2fib-g8032-ring-instance-summaries" || name == "l2fib-g8032-ring-instance-details" || name == "ring-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::L2FibG8032RingDetail()
    :
    ring_name{YType::str, "ring-name"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    monitor0{YType::str, "monitor0"},
    monitor1{YType::str, "monitor1"},
    is_open_ring{YType::boolean, "is-open-ring"}
{

    yang_name = "l2fib-g8032-ring-detail"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::~L2FibG8032RingDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_data() const
{
    return ring_name.is_set
	|| port0.is_set
	|| port1.is_set
	|| monitor0.is_set
	|| monitor1.is_set
	|| is_open_ring.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(monitor0.yfilter)
	|| ydk::is_set(monitor1.yfilter)
	|| ydk::is_set(is_open_ring.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (monitor0.is_set || is_set(monitor0.yfilter)) leaf_name_data.push_back(monitor0.get_name_leafdata());
    if (monitor1.is_set || is_set(monitor1.yfilter)) leaf_name_data.push_back(monitor1.get_name_leafdata());
    if (is_open_ring.is_set || is_set(is_open_ring.yfilter)) leaf_name_data.push_back(is_open_ring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor0")
    {
        monitor0 = value;
        monitor0.value_namespace = name_space;
        monitor0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor1")
    {
        monitor1 = value;
        monitor1.value_namespace = name_space;
        monitor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-open-ring")
    {
        is_open_ring = value;
        is_open_ring.value_namespace = name_space;
        is_open_ring.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "monitor0")
    {
        monitor0.yfilter = yfilter;
    }
    if(value_path == "monitor1")
    {
        monitor1.yfilter = yfilter;
    }
    if(value_path == "is-open-ring")
    {
        is_open_ring.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ring-name" || name == "port0" || name == "port1" || name == "monitor0" || name == "monitor1" || name == "is-open-ring")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::L2FibG8032RingSummary()
    :
    ring_name{YType::str, "ring-name"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"}
{

    yang_name = "l2fib-g8032-ring-summary"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::~L2FibG8032RingSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_data() const
{
    return ring_name.is_set
	|| port0.is_set
	|| port1.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ring-name" || name == "port0" || name == "port1")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummaries()
{

    yang_name = "l2fib-g8032-ring-instance-summaries"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::~L2FibG8032RingInstanceSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_summary.size(); index++)
    {
        if(l2fib_g8032_ring_instance_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_summary.size(); index++)
    {
        if(l2fib_g8032_ring_instance_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-instance-summary")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary>();
        c->parent = this;
        l2fib_g8032_ring_instance_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_g8032_ring_instance_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring-instance-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::L2FibG8032RingInstanceSummary()
    :
    instance{YType::int32, "instance"},
    ring_instance{YType::uint32, "ring-instance"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"}
{

    yang_name = "l2fib-g8032-ring-instance-summary"; yang_parent_name = "l2fib-g8032-ring-instance-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::~L2FibG8032RingInstanceSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_data() const
{
    return instance.is_set
	|| ring_instance.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ring_instance.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-summary" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
        aps_port0.value_namespace = name_space;
        aps_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
        aps_port1.value_namespace = name_space;
        aps_port1.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
    if(value_path == "aps-port0")
    {
        aps_port0.yfilter = yfilter;
    }
    if(value_path == "aps-port1")
    {
        aps_port1.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "ring-instance" || name == "aps-port0" || name == "aps-port1")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetails()
{

    yang_name = "l2fib-g8032-ring-instance-details"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::~L2FibG8032RingInstanceDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_detail.size(); index++)
    {
        if(l2fib_g8032_ring_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_detail.size(); index++)
    {
        if(l2fib_g8032_ring_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-instance-detail")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail>();
        c->parent = this;
        l2fib_g8032_ring_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_g8032_ring_instance_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring-instance-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::L2FibG8032RingInstanceDetail()
    :
    instance{YType::int32, "instance"},
    ring_instance{YType::uint32, "ring-instance"},
    vlan_ids{YType::str, "vlan-ids"},
    ring_profile{YType::str, "ring-profile"},
    rpl{YType::enumeration, "rpl"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    aps_port_status0{YType::enumeration, "aps-port-status0"},
    aps_port_status1{YType::enumeration, "aps-port-status1"},
    aps_channel_level{YType::uint32, "aps-channel-level"}
{

    yang_name = "l2fib-g8032-ring-instance-detail"; yang_parent_name = "l2fib-g8032-ring-instance-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::~L2FibG8032RingInstanceDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_data() const
{
    return instance.is_set
	|| ring_instance.is_set
	|| vlan_ids.is_set
	|| ring_profile.is_set
	|| rpl.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| aps_port_status0.is_set
	|| aps_port_status1.is_set
	|| aps_channel_level.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ring_instance.yfilter)
	|| ydk::is_set(vlan_ids.yfilter)
	|| ydk::is_set(ring_profile.yfilter)
	|| ydk::is_set(rpl.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(aps_port_status0.yfilter)
	|| ydk::is_set(aps_port_status1.yfilter)
	|| ydk::is_set(aps_channel_level.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-detail" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());
    if (ring_profile.is_set || is_set(ring_profile.yfilter)) leaf_name_data.push_back(ring_profile.get_name_leafdata());
    if (rpl.is_set || is_set(rpl.yfilter)) leaf_name_data.push_back(rpl.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (aps_port_status0.is_set || is_set(aps_port_status0.yfilter)) leaf_name_data.push_back(aps_port_status0.get_name_leafdata());
    if (aps_port_status1.is_set || is_set(aps_port_status1.yfilter)) leaf_name_data.push_back(aps_port_status1.get_name_leafdata());
    if (aps_channel_level.is_set || is_set(aps_channel_level.yfilter)) leaf_name_data.push_back(aps_channel_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-profile")
    {
        ring_profile = value;
        ring_profile.value_namespace = name_space;
        ring_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl")
    {
        rpl = value;
        rpl.value_namespace = name_space;
        rpl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
        aps_port0.value_namespace = name_space;
        aps_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
        aps_port1.value_namespace = name_space;
        aps_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port-status0")
    {
        aps_port_status0 = value;
        aps_port_status0.value_namespace = name_space;
        aps_port_status0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port-status1")
    {
        aps_port_status1 = value;
        aps_port_status1.value_namespace = name_space;
        aps_port_status1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level = value;
        aps_channel_level.value_namespace = name_space;
        aps_channel_level.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
    if(value_path == "ring-profile")
    {
        ring_profile.yfilter = yfilter;
    }
    if(value_path == "rpl")
    {
        rpl.yfilter = yfilter;
    }
    if(value_path == "aps-port0")
    {
        aps_port0.yfilter = yfilter;
    }
    if(value_path == "aps-port1")
    {
        aps_port1.yfilter = yfilter;
    }
    if(value_path == "aps-port-status0")
    {
        aps_port_status0.yfilter = yfilter;
    }
    if(value_path == "aps-port-status1")
    {
        aps_port_status1.yfilter = yfilter;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "ring-instance" || name == "vlan-ids" || name == "ring-profile" || name == "rpl" || name == "aps-port0" || name == "aps-port1" || name == "aps-port-status0" || name == "aps-port-status1" || name == "aps-channel-level")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePorts()
{

    yang_name = "l2fib-bridge-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::~L2FibBridgePorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_port.size(); index++)
    {
        if(l2fib_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_port.size(); index++)
    {
        if(l2fib_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-port")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort>();
        c->parent = this;
        l2fib_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_bridge_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-port")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::L2FibBridgePort()
    :
    group_name{YType::str, "group-name"},
    bd_name{YType::str, "bd-name"},
    xc_uint_id{YType::str, "xc-uint-id"},
    bridge_id{YType::uint32, "bridge-id"},
    shg_id{YType::uint32, "shg-id"},
    xc_id{YType::uint32, "xc-id"},
    number_of_hw_mac{YType::uint32, "number-of-hw-mac"},
    number_of_sw_mac{YType::uint32, "number-of-sw-mac"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mtu{YType::uint32, "mtu"},
    aging_time_out{YType::uint32, "aging-time-out"}
    	,
    segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment>())
	,bridge_port_operational_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo>())
{
    segment->parent = this;
    bridge_port_operational_info->parent = this;

    yang_name = "l2fib-bridge-port"; yang_parent_name = "l2fib-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::~L2FibBridgePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_data() const
{
    return group_name.is_set
	|| bd_name.is_set
	|| xc_uint_id.is_set
	|| bridge_id.is_set
	|| shg_id.is_set
	|| xc_id.is_set
	|| number_of_hw_mac.is_set
	|| number_of_sw_mac.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| flooding_disabled.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mtu.is_set
	|| aging_time_out.is_set
	|| (segment !=  nullptr && segment->has_data())
	|| (bridge_port_operational_info !=  nullptr && bridge_port_operational_info->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(xc_uint_id.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(shg_id.yfilter)
	|| ydk::is_set(xc_id.yfilter)
	|| ydk::is_set(number_of_hw_mac.yfilter)
	|| ydk::is_set(number_of_sw_mac.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(aging_time_out.yfilter)
	|| (segment !=  nullptr && segment->has_operation())
	|| (bridge_port_operational_info !=  nullptr && bridge_port_operational_info->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (xc_uint_id.is_set || is_set(xc_uint_id.yfilter)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.yfilter)) leaf_name_data.push_back(shg_id.get_name_leafdata());
    if (xc_id.is_set || is_set(xc_id.yfilter)) leaf_name_data.push_back(xc_id.get_name_leafdata());
    if (number_of_hw_mac.is_set || is_set(number_of_hw_mac.yfilter)) leaf_name_data.push_back(number_of_hw_mac.get_name_leafdata());
    if (number_of_sw_mac.is_set || is_set(number_of_sw_mac.yfilter)) leaf_name_data.push_back(number_of_sw_mac.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (aging_time_out.is_set || is_set(aging_time_out.yfilter)) leaf_name_data.push_back(aging_time_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment>();
        }
        return segment;
    }

    if(child_yang_name == "bridge-port-operational-info")
    {
        if(bridge_port_operational_info == nullptr)
        {
            bridge_port_operational_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo>();
        }
        return bridge_port_operational_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    if(bridge_port_operational_info != nullptr)
    {
        children["bridge-port-operational-info"] = bridge_port_operational_info;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
        xc_uint_id.value_namespace = name_space;
        xc_uint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
        shg_id.value_namespace = name_space;
        shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-id")
    {
        xc_id = value;
        xc_id.value_namespace = name_space;
        xc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-hw-mac")
    {
        number_of_hw_mac = value;
        number_of_hw_mac.value_namespace = name_space;
        number_of_hw_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sw-mac")
    {
        number_of_sw_mac = value;
        number_of_sw_mac.value_namespace = name_space;
        number_of_sw_mac.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out = value;
        aging_time_out.value_namespace = name_space;
        aging_time_out.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "shg-id")
    {
        shg_id.yfilter = yfilter;
    }
    if(value_path == "xc-id")
    {
        xc_id.yfilter = yfilter;
    }
    if(value_path == "number-of-hw-mac")
    {
        number_of_hw_mac.yfilter = yfilter;
    }
    if(value_path == "number-of-sw-mac")
    {
        number_of_sw_mac.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "bridge-port-operational-info" || name == "group-name" || name == "bd-name" || name == "xc-uint-id" || name == "bridge-id" || name == "shg-id" || name == "xc-id" || name == "number-of-hw-mac" || name == "number-of-sw-mac" || name == "mac-limit" || name == "mac-limit-action" || name == "flooding-disabled" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "mtu" || name == "aging-time-out")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    pw->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fib-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"},
    sub_interface_handle{YType::str, "sub-interface-handle"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    actype{YType::uint8, "actype"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    adjacency_address{YType::str, "adjacency-address"},
    bound{YType::boolean, "bound"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_data() const
{
    return interface_handle.is_set
	|| sub_interface_handle.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| actype.is_set
	|| inter_working_mode.is_set
	|| adjacency_valid.is_set
	|| adjacency_address.is_set
	|| bound.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
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
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
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
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "interface-handle" || name == "sub-interface-handle" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "actype" || name == "inter-working-mode" || name == "adjacency-valid" || name == "adjacency-address" || name == "bound" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "evpn-internal-label" || name == "fxc-next-hop-valid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::FxcNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_data() const
{
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    forward_class{YType::uint8, "forward-class"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_data() const
{
    return bound.is_set
	|| forward_class.is_set
	|| core_pbb_evpn_enabled.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "forward-class" || name == "core-pbb-evpn-enabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge>())
	,core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core>())
{
    edge->parent = this;
    core->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (edge !=  nullptr && edge->has_data())
	|| (core !=  nullptr && core->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (edge !=  nullptr && edge->has_operation())
	|| (core !=  nullptr && core->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    if(core != nullptr)
    {
        children["core"] = core;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "core" || name == "pbb-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::Edge()
    :
    mac_configured{YType::boolean, "mac-configured"},
    mac{YType::str, "mac"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_data() const
{
    return mac_configured.is_set
	|| mac.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_configured.yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-configured" || name == "mac")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Vni()
    :
    srcip{YType::str, "srcip"},
    mcastip{YType::str, "mcastip"},
    bound{YType::boolean, "bound"},
    parent_if{YType::str, "parent-if"},
    encap{YType::uint32, "encap"},
    udp_port{YType::uint32, "udp-port"},
    source_vtep_if{YType::str, "source-vtep-if"},
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    ingress_replication{YType::boolean, "ingress-replication"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_data() const
{
    return srcip.is_set
	|| mcastip.is_set
	|| bound.is_set
	|| parent_if.is_set
	|| encap.is_set
	|| udp_port.is_set
	|| source_vtep_if.is_set
	|| any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| ingress_replication.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mcastip.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(source_vtep_if.yfilter)
	|| ydk::is_set(any_cast_ip.yfilter)
	|| ydk::is_set(anycast_mcast_ip.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(vx_lan_mode.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.yfilter)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.yfilter)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (any_cast_ip.is_set || is_set(any_cast_ip.yfilter)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.yfilter)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.yfilter)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
        mcastip.value_namespace = name_space;
        mcastip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
        source_vtep_if.value_namespace = name_space;
        source_vtep_if.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
        vx_lan_mode.value_namespace = name_space;
        vx_lan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mcastip")
    {
        mcastip.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if.yfilter = yfilter;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip.yfilter = yfilter;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "srcip" || name == "mcastip" || name == "bound" || name == "parent-if" || name == "encap" || name == "udp-port" || name == "source-vtep-if" || name == "any-cast-ip" || name == "anycast-mcast-ip" || name == "ingress-replication" || name == "vx-lan-mode")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::Base()
{

    yang_name = "base"; yang_parent_name = "vni"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"},
    context{YType::uint16, "context"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    bound{YType::boolean, "bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    backup_configured{YType::boolean, "backup-configured"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    global_id{YType::uint32, "global-id"},
    ac_id{YType::uint32, "ac-id"},
    forward_class{YType::uint8, "forward-class"},
    next_hop_address{YType::str, "next-hop-address"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion>())
	,backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire>())
{
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;
    backup_pseudo_wire->parent = this;

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_data() const
{
    return pw_id.is_set
	|| signal_capability_flags.is_set
	|| context.is_set
	|| sequence_resync_threshold.is_set
	|| bound.is_set
	|| next_hop_valid.is_set
	|| backup_configured.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_load_balance_type.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| global_id.is_set
	|| ac_id.is_set
	|| forward_class.is_set
	|| next_hop_address.is_set
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "backup-pseudo-wire" || name == "pw-id" || name == "signal-capability-flags" || name == "context" || name == "sequence-resync-threshold" || name == "bound" || name == "next-hop-valid" || name == "backup-configured" || name == "redundancy-role" || name == "active" || name == "pseudo-wire-id-type" || name == "pw-load-balance-type" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state" || name == "global-id" || name == "ac-id" || name == "forward-class" || name == "next-hop-address")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_data() const
{
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls>())
	,l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts>())
{
    mpls->parent = this;
    l2tp->parent = this;
    l2tpv2->parent = this;
    l2tp_ipv6_ts->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "l2tp" || name == "l2tpv2" || name == "l2tp-ipv6-ts" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
    :
    pw_flags{YType::uint8, "pw-flags"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    xconnect_id{YType::uint32, "xconnect-id"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_data() const
{
    return pw_flags.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| rem_udp_port.is_set
	|| xconnect_id.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "pw-flags" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "protocol" || name == "rem-udp-port" || name == "xconnect-id" || name == "next-hop-address" || name == "source-address")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
{
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set
	|| secondary_cookie_size.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_high_value.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value" || name == "secondary-cookie-size" || name == "secondary-cookie-low-value" || name == "secondary-cookie-high-value" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    bound{YType::boolean, "bound"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_data() const
{
    return backup_next_hop.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| backup_pseudo_wire_id.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| bound.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
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
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "backup-next-hop" || name == "backup-pseudo-wire-id-type" || name == "backup-pseudo-wire-id" || name == "redundancy-role" || name == "active" || name == "bound" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::BridgePortOperationalInfo()
    :
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "bridge-port-operational-info"; yang_parent_name = "l2fib-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::~BridgePortOperationalInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_data() const
{
    return unicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-operational-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-kb-ps")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::OperationalInformation()
    :
    mtu{YType::uint32, "mtu"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_limit{YType::uint32, "mac-limit"},
    number_of_macs{YType::uint32, "number-of-macs"},
    admin_disabled{YType::boolean, "admin-disabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    stp_participating{YType::boolean, "stp-participating"},
    bvi_configured{YType::boolean, "bvi-configured"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    msti{YType::uint32, "msti"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"}
{

    yang_name = "operational-information"; yang_parent_name = "bridge-port-operational-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return mtu.is_set
	|| mac_aging_time.is_set
	|| mac_limit.is_set
	|| number_of_macs.is_set
	|| admin_disabled.is_set
	|| flooding_disabled.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| mac_limit_action.is_set
	|| mac_limit_threshold.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_limit_notification_type.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| mac_secure_action.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| mac_aging_type.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| is_dai_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| stp_participating.is_set
	|| bvi_configured.is_set
	|| is_bvi_up.is_set
	|| is_vni_enabled.is_set
	|| is_evpn_enabled.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_evpn_flow_label.is_set
	|| is_evpn_cw_disable.is_set
	|| msti.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_igmp_snoop_enabled.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : feature)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
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
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
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
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "mtu" || name == "mac-aging-time" || name == "mac-limit" || name == "number-of-macs" || name == "admin-disabled" || name == "flooding-disabled" || name == "flood-unknown-unicast-enabled" || name == "mac-limit-action" || name == "mac-limit-threshold" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "mac-limit-notification-type" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "mac-secure-action" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-threshold-enabled" || name == "mac-aging-type" || name == "storm-control-unicast-enabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-multicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-rate-unit" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "is-dai-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-logging-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "stp-participating" || name == "bvi-configured" || name == "is-bvi-up" || name == "is-vni-enabled" || name == "is-evpn-enabled" || name == "unknown-unicast-flooding-disabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-evpn-flow-label" || name == "is-evpn-cw-disable" || name == "msti" || name == "is-p2mp-pw-enabled" || name == "is-igmp-snoop-enabled" || name == "nv-satellite-offload-ipv4-multicast-disabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetails()
{

    yang_name = "l2fibmac-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::~L2FibmacDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::has_data() const
{
    for (std::size_t index=0; index<l2fibmac_detail.size(); index++)
    {
        if(l2fibmac_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_detail.size(); index++)
    {
        if(l2fibmac_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-detail")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail>();
        c->parent = this;
        l2fibmac_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fibmac_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibmac-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::L2FibmacDetail()
    :
    address{YType::str, "address"},
    group_name{YType::str, "group-name"},
    name{YType::str, "name"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    node_id{YType::str, "node-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bmac_configured{YType::boolean, "bmac-configured"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"},
    pbb_bmac{YType::str, "pbb-bmac"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    flag_extension{YType::uint16, "flag-extension"},
    vni{YType::uint32, "vni"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment>())
	,evpn_ctx(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop>())
{
    base->parent = this;
    segment->parent = this;
    evpn_ctx->parent = this;
    next_hop->parent = this;

    yang_name = "l2fibmac-detail"; yang_parent_name = "l2fibmac-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::~L2FibmacDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::has_data() const
{
    return address.is_set
	|| group_name.is_set
	|| name.is_set
	|| platform_is_hw_learn.is_set
	|| node_id.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| bmac_configured.is_set
	|| vni_l3_flag.is_set
	|| pbb_bmac.is_set
	|| l3_encapsulationvlan_id.is_set
	|| next_hop_valid.is_set
	|| peer_vtep_ip.is_set
	|| flag_extension.is_set
	|| vni.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment !=  nullptr && segment->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(platform_is_hw_learn.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bmac_configured.yfilter)
	|| ydk::is_set(vni_l3_flag.yfilter)
	|| ydk::is_set(pbb_bmac.yfilter)
	|| ydk::is_set(l3_encapsulationvlan_id.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(peer_vtep_ip.yfilter)
	|| ydk::is_set(flag_extension.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment !=  nullptr && segment->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.yfilter)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.yfilter)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.yfilter)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.yfilter)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.yfilter)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.yfilter)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.yfilter)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment>();
        }
        return segment;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    if(evpn_ctx != nullptr)
    {
        children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
        platform_is_hw_learn.value_namespace = name_space;
        platform_is_hw_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
        bmac_configured.value_namespace = name_space;
        bmac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
        vni_l3_flag.value_namespace = name_space;
        vni_l3_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
        pbb_bmac.value_namespace = name_space;
        pbb_bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
        l3_encapsulationvlan_id.value_namespace = name_space;
        l3_encapsulationvlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
        peer_vtep_ip.value_namespace = name_space;
        peer_vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
        flag_extension.value_namespace = name_space;
        flag_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured.yfilter = yfilter;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag.yfilter = yfilter;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac.yfilter = yfilter;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip.yfilter = yfilter;
    }
    if(value_path == "flag-extension")
    {
        flag_extension.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment" || name == "evpn-ctx" || name == "next-hop" || name == "address" || name == "group-name" || name == "name" || name == "platform-is-hw-learn" || name == "node-id" || name == "bridge-domain-name" || name == "bridge-id" || name == "bmac-configured" || name == "vni-l3-flag" || name == "pbb-bmac" || name == "l3-encapsulationvlan-id" || name == "next-hop-valid" || name == "peer-vtep-ip" || name == "flag-extension" || name == "vni")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    pw->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::Vni()
    :
    xcid{YType::uint32, "xcid"},
    parent_if{YType::str, "parent-if"}
{

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::has_data() const
{
    return xcid.is_set
	|| parent_if.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(parent_if.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid" || name == "parent-if")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"}
{

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::has_data() const
{
    return pw_id.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_id_type.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "next-hop-address" || name == "pseudo-wire-id-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::EvpnCtx()
    :
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"},
    bp_ifh{YType::str, "bp-ifh"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::~EvpnCtx()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::has_data() const
{
    return data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| bp_ifh.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(bp_ifh.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (bp_ifh.is_set || is_set(bp_ifh.yfilter)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
        bp_ifh.value_namespace = name_space;
        bp_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "bp-ifh")
    {
        bp_ifh.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "data-type" || name == "esi-id" || name == "local-label" || name == "bp-ifh")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::McastOle()
    :
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"},
    mcast_label{YType::uint32, "mcast-label"}
{

    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::has_data() const
{
    return next_hop_ipv6_addr.is_set
	|| mcast_label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter)
	|| ydk::is_set(mcast_label.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());
    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-ipv6-addr" || name == "mcast-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_data() const
{
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainNames()
{

    yang_name = "l2fib-bridge-domain-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::~L2FibBridgeDomainNames()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain_name.size(); index++)
    {
        if(l2fib_bridge_domain_name[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain_name.size(); index++)
    {
        if(l2fib_bridge_domain_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain-name")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName>();
        c->parent = this;
        l2fib_bridge_domain_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_bridge_domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-domain-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::L2FibBridgeDomainName()
    :
    bd_group_name{YType::str, "bd-group-name"},
    name{YType::str, "name"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_name{YType::str, "bridge-name"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    flood_disabled{YType::boolean, "flood-disabled"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    admin_disabled{YType::boolean, "admin-disabled"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    number_of_shg{YType::uint32, "number-of-shg"},
    number_of_hwmac{YType::uint32, "number-of-hwmac"},
    number_of_swmac{YType::uint32, "number-of-swmac"},
    mtu{YType::uint32, "mtu"},
    aging_time_out{YType::uint32, "aging-time-out"},
    msti{YType::uint32, "msti"}
{

    yang_name = "l2fib-bridge-domain-name"; yang_parent_name = "l2fib-bridge-domain-names"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::~L2FibBridgeDomainName()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_data() const
{
    return bd_group_name.is_set
	|| name.is_set
	|| bridge_id.is_set
	|| bridge_name.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| flood_disabled.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| admin_disabled.is_set
	|| bridge_port_count.is_set
	|| number_of_shg.is_set
	|| number_of_hwmac.is_set
	|| number_of_swmac.is_set
	|| mtu.is_set
	|| aging_time_out.is_set
	|| msti.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bridge_name.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(flood_disabled.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(number_of_shg.yfilter)
	|| ydk::is_set(number_of_hwmac.yfilter)
	|| ydk::is_set(number_of_swmac.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(aging_time_out.yfilter)
	|| ydk::is_set(msti.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.yfilter)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (flood_disabled.is_set || is_set(flood_disabled.yfilter)) leaf_name_data.push_back(flood_disabled.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (number_of_shg.is_set || is_set(number_of_shg.yfilter)) leaf_name_data.push_back(number_of_shg.get_name_leafdata());
    if (number_of_hwmac.is_set || is_set(number_of_hwmac.yfilter)) leaf_name_data.push_back(number_of_hwmac.get_name_leafdata());
    if (number_of_swmac.is_set || is_set(number_of_swmac.yfilter)) leaf_name_data.push_back(number_of_swmac.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (aging_time_out.is_set || is_set(aging_time_out.yfilter)) leaf_name_data.push_back(aging_time_out.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
        bridge_name.value_namespace = name_space;
        bridge_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flood-disabled")
    {
        flood_disabled = value;
        flood_disabled.value_namespace = name_space;
        flood_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-shg")
    {
        number_of_shg = value;
        number_of_shg.value_namespace = name_space;
        number_of_shg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac = value;
        number_of_hwmac.value_namespace = name_space;
        number_of_hwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac = value;
        number_of_swmac.value_namespace = name_space;
        number_of_swmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out = value;
        aging_time_out.value_namespace = name_space;
        aging_time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bridge-name")
    {
        bridge_name.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "flood-disabled")
    {
        flood_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "number-of-shg")
    {
        number_of_shg.yfilter = yfilter;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac.yfilter = yfilter;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-group-name" || name == "name" || name == "bridge-id" || name == "bridge-name" || name == "mac-limit" || name == "mac-limit-action" || name == "flood-disabled" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "admin-disabled" || name == "bridge-port-count" || name == "number-of-shg" || name == "number-of-hwmac" || name == "number-of-swmac" || name == "mtu" || name == "aging-time-out" || name == "msti")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePorts()
{

    yang_name = "l2fib-mroute-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::~L2FibMroutePorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute_port.size(); index++)
    {
        if(l2fib_mroute_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_port.size(); index++)
    {
        if(l2fib_mroute_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-port")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort>();
        c->parent = this;
        l2fib_mroute_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_mroute_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-port")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::L2FibMroutePort()
    :
    bd_name{YType::str, "bd-name"},
    xcid{YType::str, "xcid"},
    source{YType::str, "source"},
    group{YType::str, "group"},
    bridge_id{YType::uint32, "bridge-id"},
    ac_interface_handle{YType::str, "ac-interface-handle"},
    leaf_pointer{YType::uint32, "leaf-pointer"},
    pw_id{YType::str, "pw-id"},
    next_hop_address{YType::str, "next-hop-address"},
    isid{YType::uint32, "isid"},
    csfl{YType::uint32, "csfl"},
    sat_id{YType::uint16, "sat-id"},
    is_ole_offloaded{YType::boolean, "is-ole-offloaded"},
    is_ole_master{YType::boolean, "is-ole-master"},
    is_topo_hub_and_spoke{YType::boolean, "is-topo-hub-and-spoke"}
    	,
    base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix>())
	,destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix>())
{
    base_information->parent = this;
    forward_stats->parent = this;
    source_prefix->parent = this;
    destination_prefix->parent = this;

    yang_name = "l2fib-mroute-port"; yang_parent_name = "l2fib-mroute-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::~L2FibMroutePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::has_data() const
{
    return bd_name.is_set
	|| xcid.is_set
	|| source.is_set
	|| group.is_set
	|| bridge_id.is_set
	|| ac_interface_handle.is_set
	|| leaf_pointer.is_set
	|| pw_id.is_set
	|| next_hop_address.is_set
	|| isid.is_set
	|| csfl.is_set
	|| sat_id.is_set
	|| is_ole_offloaded.is_set
	|| is_ole_master.is_set
	|| is_topo_hub_and_spoke.is_set
	|| (base_information !=  nullptr && base_information->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(ac_interface_handle.yfilter)
	|| ydk::is_set(leaf_pointer.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(isid.yfilter)
	|| ydk::is_set(csfl.yfilter)
	|| ydk::is_set(sat_id.yfilter)
	|| ydk::is_set(is_ole_offloaded.yfilter)
	|| ydk::is_set(is_ole_master.yfilter)
	|| ydk::is_set(is_topo_hub_and_spoke.yfilter)
	|| (base_information !=  nullptr && base_information->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (ac_interface_handle.is_set || is_set(ac_interface_handle.yfilter)) leaf_name_data.push_back(ac_interface_handle.get_name_leafdata());
    if (leaf_pointer.is_set || is_set(leaf_pointer.yfilter)) leaf_name_data.push_back(leaf_pointer.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (isid.is_set || is_set(isid.yfilter)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (csfl.is_set || is_set(csfl.yfilter)) leaf_name_data.push_back(csfl.get_name_leafdata());
    if (sat_id.is_set || is_set(sat_id.yfilter)) leaf_name_data.push_back(sat_id.get_name_leafdata());
    if (is_ole_offloaded.is_set || is_set(is_ole_offloaded.yfilter)) leaf_name_data.push_back(is_ole_offloaded.get_name_leafdata());
    if (is_ole_master.is_set || is_set(is_ole_master.yfilter)) leaf_name_data.push_back(is_ole_master.get_name_leafdata());
    if (is_topo_hub_and_spoke.is_set || is_set(is_topo_hub_and_spoke.yfilter)) leaf_name_data.push_back(is_topo_hub_and_spoke.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-information")
    {
        if(base_information == nullptr)
        {
            base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation>();
        }
        return base_information;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix>();
        }
        return destination_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base_information != nullptr)
    {
        children["base-information"] = base_information;
    }

    if(forward_stats != nullptr)
    {
        children["forward-stats"] = forward_stats;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle = value;
        ac_interface_handle.value_namespace = name_space;
        ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer = value;
        leaf_pointer.value_namespace = name_space;
        leaf_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isid")
    {
        isid = value;
        isid.value_namespace = name_space;
        isid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csfl")
    {
        csfl = value;
        csfl.value_namespace = name_space;
        csfl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sat-id")
    {
        sat_id = value;
        sat_id.value_namespace = name_space;
        sat_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded = value;
        is_ole_offloaded.value_namespace = name_space;
        is_ole_offloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master = value;
        is_ole_master.value_namespace = name_space;
        is_ole_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke = value;
        is_topo_hub_and_spoke.value_namespace = name_space;
        is_topo_hub_and_spoke.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "isid")
    {
        isid.yfilter = yfilter;
    }
    if(value_path == "csfl")
    {
        csfl.yfilter = yfilter;
    }
    if(value_path == "sat-id")
    {
        sat_id.yfilter = yfilter;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded.yfilter = yfilter;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master.yfilter = yfilter;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-information" || name == "forward-stats" || name == "source-prefix" || name == "destination-prefix" || name == "bd-name" || name == "xcid" || name == "source" || name == "group" || name == "bridge-id" || name == "ac-interface-handle" || name == "leaf-pointer" || name == "pw-id" || name == "next-hop-address" || name == "isid" || name == "csfl" || name == "sat-id" || name == "is-ole-offloaded" || name == "is-ole-master" || name == "is-topo-hub-and-spoke")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::BaseInformation()
{

    yang_name = "base-information"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::~BaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
{
    multicast_forward_stat->parent = this;
    received_stat->parent = this;
    punt->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    core_received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (core_received_stat !=  nullptr && core_received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_forward_stat != nullptr)
    {
        children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(received_stat != nullptr)
    {
        children["received-stat"] = received_stat;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(core_received_stat != nullptr)
    {
        children["core-received-stat"] = core_received_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-forward-stat" || name == "received-stat" || name == "punt" || name == "drop" || name == "multicast-core-forward-stat" || name == "core-received-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return packets.is_set
	|| bytes.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return packets.is_set
	|| bytes.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return packets.is_set
	|| bytes.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return packets.is_set
	|| bytes.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return packets.is_set
	|| bytes.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return packets.is_set
	|| bytes.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::SourcePrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::has_data() const
{
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::DestinationPrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::has_data() const
{
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2FibSummary()
    :
    xconnect_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary>())
	,next_hop_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary>())
	,l2tp_disposition_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary>())
	,bridge_domain_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary>())
	,mac_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary>())
	,queue_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary>())
	,evpn_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary>())
	,global_cfg(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg>())
	,ptree_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary>())
	,pw_group_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary>())
	,pwhe_mp_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary>())
{
    xconnect_summary->parent = this;
    next_hop_summary->parent = this;
    l2tp_disposition_summary->parent = this;
    bridge_domain_summary->parent = this;
    mac_summary->parent = this;
    queue_summary->parent = this;
    evpn_summary->parent = this;
    global_cfg->parent = this;
    ptree_summary->parent = this;
    pw_group_summary->parent = this;
    pwhe_mp_summary->parent = this;

    yang_name = "l2fib-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::~L2FibSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::has_data() const
{
    return (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (next_hop_summary !=  nullptr && next_hop_summary->has_data())
	|| (l2tp_disposition_summary !=  nullptr && l2tp_disposition_summary->has_data())
	|| (bridge_domain_summary !=  nullptr && bridge_domain_summary->has_data())
	|| (mac_summary !=  nullptr && mac_summary->has_data())
	|| (queue_summary !=  nullptr && queue_summary->has_data())
	|| (evpn_summary !=  nullptr && evpn_summary->has_data())
	|| (global_cfg !=  nullptr && global_cfg->has_data())
	|| (ptree_summary !=  nullptr && ptree_summary->has_data())
	|| (pw_group_summary !=  nullptr && pw_group_summary->has_data())
	|| (pwhe_mp_summary !=  nullptr && pwhe_mp_summary->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (next_hop_summary !=  nullptr && next_hop_summary->has_operation())
	|| (l2tp_disposition_summary !=  nullptr && l2tp_disposition_summary->has_operation())
	|| (bridge_domain_summary !=  nullptr && bridge_domain_summary->has_operation())
	|| (mac_summary !=  nullptr && mac_summary->has_operation())
	|| (queue_summary !=  nullptr && queue_summary->has_operation())
	|| (evpn_summary !=  nullptr && evpn_summary->has_operation())
	|| (global_cfg !=  nullptr && global_cfg->has_operation())
	|| (ptree_summary !=  nullptr && ptree_summary->has_operation())
	|| (pw_group_summary !=  nullptr && pw_group_summary->has_operation())
	|| (pwhe_mp_summary !=  nullptr && pwhe_mp_summary->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary>();
        }
        return xconnect_summary;
    }

    if(child_yang_name == "next-hop-summary")
    {
        if(next_hop_summary == nullptr)
        {
            next_hop_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary>();
        }
        return next_hop_summary;
    }

    if(child_yang_name == "l2tp-disposition-summary")
    {
        if(l2tp_disposition_summary == nullptr)
        {
            l2tp_disposition_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary>();
        }
        return l2tp_disposition_summary;
    }

    if(child_yang_name == "bridge-domain-summary")
    {
        if(bridge_domain_summary == nullptr)
        {
            bridge_domain_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary>();
        }
        return bridge_domain_summary;
    }

    if(child_yang_name == "mac-summary")
    {
        if(mac_summary == nullptr)
        {
            mac_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary>();
        }
        return mac_summary;
    }

    if(child_yang_name == "queue-summary")
    {
        if(queue_summary == nullptr)
        {
            queue_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary>();
        }
        return queue_summary;
    }

    if(child_yang_name == "evpn-summary")
    {
        if(evpn_summary == nullptr)
        {
            evpn_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary>();
        }
        return evpn_summary;
    }

    if(child_yang_name == "global-cfg")
    {
        if(global_cfg == nullptr)
        {
            global_cfg = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg>();
        }
        return global_cfg;
    }

    if(child_yang_name == "ptree-summary")
    {
        if(ptree_summary == nullptr)
        {
            ptree_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary>();
        }
        return ptree_summary;
    }

    if(child_yang_name == "pw-group-summary")
    {
        if(pw_group_summary == nullptr)
        {
            pw_group_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary>();
        }
        return pw_group_summary;
    }

    if(child_yang_name == "pwhe-mp-summary")
    {
        if(pwhe_mp_summary == nullptr)
        {
            pwhe_mp_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary>();
        }
        return pwhe_mp_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xconnect_summary != nullptr)
    {
        children["xconnect-summary"] = xconnect_summary;
    }

    if(next_hop_summary != nullptr)
    {
        children["next-hop-summary"] = next_hop_summary;
    }

    if(l2tp_disposition_summary != nullptr)
    {
        children["l2tp-disposition-summary"] = l2tp_disposition_summary;
    }

    if(bridge_domain_summary != nullptr)
    {
        children["bridge-domain-summary"] = bridge_domain_summary;
    }

    if(mac_summary != nullptr)
    {
        children["mac-summary"] = mac_summary;
    }

    if(queue_summary != nullptr)
    {
        children["queue-summary"] = queue_summary;
    }

    if(evpn_summary != nullptr)
    {
        children["evpn-summary"] = evpn_summary;
    }

    if(global_cfg != nullptr)
    {
        children["global-cfg"] = global_cfg;
    }

    if(ptree_summary != nullptr)
    {
        children["ptree-summary"] = ptree_summary;
    }

    if(pw_group_summary != nullptr)
    {
        children["pw-group-summary"] = pw_group_summary;
    }

    if(pwhe_mp_summary != nullptr)
    {
        children["pwhe-mp-summary"] = pwhe_mp_summary;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-summary" || name == "next-hop-summary" || name == "l2tp-disposition-summary" || name == "bridge-domain-summary" || name == "mac-summary" || name == "queue-summary" || name == "evpn-summary" || name == "global-cfg" || name == "ptree-summary" || name == "pw-group-summary" || name == "pwhe-mp-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::XconnectSummary()
    :
    xconnect_count{YType::uint32, "xconnect-count"},
    xconnect_up_count{YType::uint32, "xconnect-up-count"},
    xconnect_down_count{YType::uint32, "xconnect-down-count"},
    ac_to_pw_count_mpls{YType::uint32, "ac-to-pw-count-mpls"},
    ac_to_pw_count_l2tp{YType::uint32, "ac-to-pw-count-l2tp"},
    ac_to_pw_count_l2tp_ip_v6{YType::uint32, "ac-to-pw-count-l2tp-ip-v6"},
    ac_to_pw_count_l2tpv2{YType::uint32, "ac-to-pw-count-l2tpv2"},
    ac_to_ac_count{YType::uint32, "ac-to-ac-count"},
    ac_to_unknown_count{YType::uint32, "ac-to-unknown-count"},
    mon_sess_to_pw_count{YType::uint32, "mon-sess-to-pw-count"},
    mon_sess_to_unknown_count{YType::uint32, "mon-sess-to-unknown-count"},
    ac_to_bp_count{YType::uint32, "ac-to-bp-count"},
    pw_to_bp_count{YType::uint32, "pw-to-bp-count"},
    pw_to_unknown_count{YType::uint32, "pw-to-unknown-count"},
    pbb_to_bp_count{YType::uint32, "pbb-to-bp-count"},
    pbb_to_unknown_count{YType::uint32, "pbb-to-unknown-count"},
    vni_to_bp_count{YType::uint32, "vni-to-bp-count"},
    vni_to_unknown_count{YType::uint32, "vni-to-unknown-count"},
    evpn_to_bp_count{YType::uint32, "evpn-to-bp-count"},
    evpn_to_unknown_count{YType::uint32, "evpn-to-unknown-count"},
    ac_down_count_aib{YType::uint32, "ac-down-count-aib"},
    ac_down_count_l2vpn{YType::uint32, "ac-down-count-l2vpn"},
    ac_down_count_l3fib{YType::uint32, "ac-down-count-l3fib"},
    ac_down_count_vpdn{YType::uint32, "ac-down-count-vpdn"},
    vpws_pw_invalid_xid_drop_count{YType::uint32, "vpws-pw-invalid-xid-drop-count"},
    vpls_pw_invalid_xid_drop_count{YType::uint32, "vpls-pw-invalid-xid-drop-count"},
    virtual_ac_invalid_xid_drop_count{YType::uint32, "virtual-ac-invalid-xid-drop-count"},
    pbb_invalid_xid_drop_count{YType::uint32, "pbb-invalid-xid-drop-count"},
    vni_invalid_xid_drop_count{YType::uint32, "vni-invalid-xid-drop-count"},
    evpn_invalid_xid_drop_count{YType::uint32, "evpn-invalid-xid-drop-count"},
    vpls_pw_max_exceeded_drop_cnt{YType::uint32, "vpls-pw-max-exceeded-drop-cnt"},
    bundle_ac_max_exceeded_drop_cnt{YType::uint32, "bundle-ac-max-exceeded-drop-cnt"},
    p2p_count{YType::uint32, "p2p-count"},
    bp_count{YType::uint32, "bp-count"},
    pwhe_l2_if_count{YType::uint32, "pwhe-l2-if-count"}
{

    yang_name = "xconnect-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::~XconnectSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::has_data() const
{
    return xconnect_count.is_set
	|| xconnect_up_count.is_set
	|| xconnect_down_count.is_set
	|| ac_to_pw_count_mpls.is_set
	|| ac_to_pw_count_l2tp.is_set
	|| ac_to_pw_count_l2tp_ip_v6.is_set
	|| ac_to_pw_count_l2tpv2.is_set
	|| ac_to_ac_count.is_set
	|| ac_to_unknown_count.is_set
	|| mon_sess_to_pw_count.is_set
	|| mon_sess_to_unknown_count.is_set
	|| ac_to_bp_count.is_set
	|| pw_to_bp_count.is_set
	|| pw_to_unknown_count.is_set
	|| pbb_to_bp_count.is_set
	|| pbb_to_unknown_count.is_set
	|| vni_to_bp_count.is_set
	|| vni_to_unknown_count.is_set
	|| evpn_to_bp_count.is_set
	|| evpn_to_unknown_count.is_set
	|| ac_down_count_aib.is_set
	|| ac_down_count_l2vpn.is_set
	|| ac_down_count_l3fib.is_set
	|| ac_down_count_vpdn.is_set
	|| vpws_pw_invalid_xid_drop_count.is_set
	|| vpls_pw_invalid_xid_drop_count.is_set
	|| virtual_ac_invalid_xid_drop_count.is_set
	|| pbb_invalid_xid_drop_count.is_set
	|| vni_invalid_xid_drop_count.is_set
	|| evpn_invalid_xid_drop_count.is_set
	|| vpls_pw_max_exceeded_drop_cnt.is_set
	|| bundle_ac_max_exceeded_drop_cnt.is_set
	|| p2p_count.is_set
	|| bp_count.is_set
	|| pwhe_l2_if_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_count.yfilter)
	|| ydk::is_set(xconnect_up_count.yfilter)
	|| ydk::is_set(xconnect_down_count.yfilter)
	|| ydk::is_set(ac_to_pw_count_mpls.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tp.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tp_ip_v6.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tpv2.yfilter)
	|| ydk::is_set(ac_to_ac_count.yfilter)
	|| ydk::is_set(ac_to_unknown_count.yfilter)
	|| ydk::is_set(mon_sess_to_pw_count.yfilter)
	|| ydk::is_set(mon_sess_to_unknown_count.yfilter)
	|| ydk::is_set(ac_to_bp_count.yfilter)
	|| ydk::is_set(pw_to_bp_count.yfilter)
	|| ydk::is_set(pw_to_unknown_count.yfilter)
	|| ydk::is_set(pbb_to_bp_count.yfilter)
	|| ydk::is_set(pbb_to_unknown_count.yfilter)
	|| ydk::is_set(vni_to_bp_count.yfilter)
	|| ydk::is_set(vni_to_unknown_count.yfilter)
	|| ydk::is_set(evpn_to_bp_count.yfilter)
	|| ydk::is_set(evpn_to_unknown_count.yfilter)
	|| ydk::is_set(ac_down_count_aib.yfilter)
	|| ydk::is_set(ac_down_count_l2vpn.yfilter)
	|| ydk::is_set(ac_down_count_l3fib.yfilter)
	|| ydk::is_set(ac_down_count_vpdn.yfilter)
	|| ydk::is_set(vpws_pw_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vpls_pw_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(virtual_ac_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(pbb_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vni_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(evpn_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vpls_pw_max_exceeded_drop_cnt.yfilter)
	|| ydk::is_set(bundle_ac_max_exceeded_drop_cnt.yfilter)
	|| ydk::is_set(p2p_count.yfilter)
	|| ydk::is_set(bp_count.yfilter)
	|| ydk::is_set(pwhe_l2_if_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_count.is_set || is_set(xconnect_count.yfilter)) leaf_name_data.push_back(xconnect_count.get_name_leafdata());
    if (xconnect_up_count.is_set || is_set(xconnect_up_count.yfilter)) leaf_name_data.push_back(xconnect_up_count.get_name_leafdata());
    if (xconnect_down_count.is_set || is_set(xconnect_down_count.yfilter)) leaf_name_data.push_back(xconnect_down_count.get_name_leafdata());
    if (ac_to_pw_count_mpls.is_set || is_set(ac_to_pw_count_mpls.yfilter)) leaf_name_data.push_back(ac_to_pw_count_mpls.get_name_leafdata());
    if (ac_to_pw_count_l2tp.is_set || is_set(ac_to_pw_count_l2tp.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tp.get_name_leafdata());
    if (ac_to_pw_count_l2tp_ip_v6.is_set || is_set(ac_to_pw_count_l2tp_ip_v6.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tp_ip_v6.get_name_leafdata());
    if (ac_to_pw_count_l2tpv2.is_set || is_set(ac_to_pw_count_l2tpv2.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tpv2.get_name_leafdata());
    if (ac_to_ac_count.is_set || is_set(ac_to_ac_count.yfilter)) leaf_name_data.push_back(ac_to_ac_count.get_name_leafdata());
    if (ac_to_unknown_count.is_set || is_set(ac_to_unknown_count.yfilter)) leaf_name_data.push_back(ac_to_unknown_count.get_name_leafdata());
    if (mon_sess_to_pw_count.is_set || is_set(mon_sess_to_pw_count.yfilter)) leaf_name_data.push_back(mon_sess_to_pw_count.get_name_leafdata());
    if (mon_sess_to_unknown_count.is_set || is_set(mon_sess_to_unknown_count.yfilter)) leaf_name_data.push_back(mon_sess_to_unknown_count.get_name_leafdata());
    if (ac_to_bp_count.is_set || is_set(ac_to_bp_count.yfilter)) leaf_name_data.push_back(ac_to_bp_count.get_name_leafdata());
    if (pw_to_bp_count.is_set || is_set(pw_to_bp_count.yfilter)) leaf_name_data.push_back(pw_to_bp_count.get_name_leafdata());
    if (pw_to_unknown_count.is_set || is_set(pw_to_unknown_count.yfilter)) leaf_name_data.push_back(pw_to_unknown_count.get_name_leafdata());
    if (pbb_to_bp_count.is_set || is_set(pbb_to_bp_count.yfilter)) leaf_name_data.push_back(pbb_to_bp_count.get_name_leafdata());
    if (pbb_to_unknown_count.is_set || is_set(pbb_to_unknown_count.yfilter)) leaf_name_data.push_back(pbb_to_unknown_count.get_name_leafdata());
    if (vni_to_bp_count.is_set || is_set(vni_to_bp_count.yfilter)) leaf_name_data.push_back(vni_to_bp_count.get_name_leafdata());
    if (vni_to_unknown_count.is_set || is_set(vni_to_unknown_count.yfilter)) leaf_name_data.push_back(vni_to_unknown_count.get_name_leafdata());
    if (evpn_to_bp_count.is_set || is_set(evpn_to_bp_count.yfilter)) leaf_name_data.push_back(evpn_to_bp_count.get_name_leafdata());
    if (evpn_to_unknown_count.is_set || is_set(evpn_to_unknown_count.yfilter)) leaf_name_data.push_back(evpn_to_unknown_count.get_name_leafdata());
    if (ac_down_count_aib.is_set || is_set(ac_down_count_aib.yfilter)) leaf_name_data.push_back(ac_down_count_aib.get_name_leafdata());
    if (ac_down_count_l2vpn.is_set || is_set(ac_down_count_l2vpn.yfilter)) leaf_name_data.push_back(ac_down_count_l2vpn.get_name_leafdata());
    if (ac_down_count_l3fib.is_set || is_set(ac_down_count_l3fib.yfilter)) leaf_name_data.push_back(ac_down_count_l3fib.get_name_leafdata());
    if (ac_down_count_vpdn.is_set || is_set(ac_down_count_vpdn.yfilter)) leaf_name_data.push_back(ac_down_count_vpdn.get_name_leafdata());
    if (vpws_pw_invalid_xid_drop_count.is_set || is_set(vpws_pw_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vpws_pw_invalid_xid_drop_count.get_name_leafdata());
    if (vpls_pw_invalid_xid_drop_count.is_set || is_set(vpls_pw_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vpls_pw_invalid_xid_drop_count.get_name_leafdata());
    if (virtual_ac_invalid_xid_drop_count.is_set || is_set(virtual_ac_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(virtual_ac_invalid_xid_drop_count.get_name_leafdata());
    if (pbb_invalid_xid_drop_count.is_set || is_set(pbb_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(pbb_invalid_xid_drop_count.get_name_leafdata());
    if (vni_invalid_xid_drop_count.is_set || is_set(vni_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vni_invalid_xid_drop_count.get_name_leafdata());
    if (evpn_invalid_xid_drop_count.is_set || is_set(evpn_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(evpn_invalid_xid_drop_count.get_name_leafdata());
    if (vpls_pw_max_exceeded_drop_cnt.is_set || is_set(vpls_pw_max_exceeded_drop_cnt.yfilter)) leaf_name_data.push_back(vpls_pw_max_exceeded_drop_cnt.get_name_leafdata());
    if (bundle_ac_max_exceeded_drop_cnt.is_set || is_set(bundle_ac_max_exceeded_drop_cnt.yfilter)) leaf_name_data.push_back(bundle_ac_max_exceeded_drop_cnt.get_name_leafdata());
    if (p2p_count.is_set || is_set(p2p_count.yfilter)) leaf_name_data.push_back(p2p_count.get_name_leafdata());
    if (bp_count.is_set || is_set(bp_count.yfilter)) leaf_name_data.push_back(bp_count.get_name_leafdata());
    if (pwhe_l2_if_count.is_set || is_set(pwhe_l2_if_count.yfilter)) leaf_name_data.push_back(pwhe_l2_if_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-count")
    {
        xconnect_count = value;
        xconnect_count.value_namespace = name_space;
        xconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count = value;
        xconnect_up_count.value_namespace = name_space;
        xconnect_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count = value;
        xconnect_down_count.value_namespace = name_space;
        xconnect_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls = value;
        ac_to_pw_count_mpls.value_namespace = name_space;
        ac_to_pw_count_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp = value;
        ac_to_pw_count_l2tp.value_namespace = name_space;
        ac_to_pw_count_l2tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6 = value;
        ac_to_pw_count_l2tp_ip_v6.value_namespace = name_space;
        ac_to_pw_count_l2tp_ip_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2 = value;
        ac_to_pw_count_l2tpv2.value_namespace = name_space;
        ac_to_pw_count_l2tpv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count = value;
        ac_to_ac_count.value_namespace = name_space;
        ac_to_ac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count = value;
        ac_to_unknown_count.value_namespace = name_space;
        ac_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count = value;
        mon_sess_to_pw_count.value_namespace = name_space;
        mon_sess_to_pw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count = value;
        mon_sess_to_unknown_count.value_namespace = name_space;
        mon_sess_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count = value;
        ac_to_bp_count.value_namespace = name_space;
        ac_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count = value;
        pw_to_bp_count.value_namespace = name_space;
        pw_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count = value;
        pw_to_unknown_count.value_namespace = name_space;
        pw_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count = value;
        pbb_to_bp_count.value_namespace = name_space;
        pbb_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count = value;
        pbb_to_unknown_count.value_namespace = name_space;
        pbb_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count = value;
        vni_to_bp_count.value_namespace = name_space;
        vni_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count = value;
        vni_to_unknown_count.value_namespace = name_space;
        vni_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count = value;
        evpn_to_bp_count.value_namespace = name_space;
        evpn_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count = value;
        evpn_to_unknown_count.value_namespace = name_space;
        evpn_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib = value;
        ac_down_count_aib.value_namespace = name_space;
        ac_down_count_aib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn = value;
        ac_down_count_l2vpn.value_namespace = name_space;
        ac_down_count_l2vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib = value;
        ac_down_count_l3fib.value_namespace = name_space;
        ac_down_count_l3fib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn = value;
        ac_down_count_vpdn.value_namespace = name_space;
        ac_down_count_vpdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count = value;
        vpws_pw_invalid_xid_drop_count.value_namespace = name_space;
        vpws_pw_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count = value;
        vpls_pw_invalid_xid_drop_count.value_namespace = name_space;
        vpls_pw_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count = value;
        virtual_ac_invalid_xid_drop_count.value_namespace = name_space;
        virtual_ac_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count = value;
        pbb_invalid_xid_drop_count.value_namespace = name_space;
        pbb_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count = value;
        vni_invalid_xid_drop_count.value_namespace = name_space;
        vni_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count = value;
        evpn_invalid_xid_drop_count.value_namespace = name_space;
        evpn_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt = value;
        vpls_pw_max_exceeded_drop_cnt.value_namespace = name_space;
        vpls_pw_max_exceeded_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt = value;
        bundle_ac_max_exceeded_drop_cnt.value_namespace = name_space;
        bundle_ac_max_exceeded_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-count")
    {
        p2p_count = value;
        p2p_count.value_namespace = name_space;
        p2p_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-count")
    {
        bp_count = value;
        bp_count.value_namespace = name_space;
        bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count = value;
        pwhe_l2_if_count.value_namespace = name_space;
        pwhe_l2_if_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-count")
    {
        xconnect_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2.yfilter = yfilter;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count.yfilter = yfilter;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn.yfilter = yfilter;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "p2p-count")
    {
        p2p_count.yfilter = yfilter;
    }
    if(value_path == "bp-count")
    {
        bp_count.yfilter = yfilter;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-count" || name == "xconnect-up-count" || name == "xconnect-down-count" || name == "ac-to-pw-count-mpls" || name == "ac-to-pw-count-l2tp" || name == "ac-to-pw-count-l2tp-ip-v6" || name == "ac-to-pw-count-l2tpv2" || name == "ac-to-ac-count" || name == "ac-to-unknown-count" || name == "mon-sess-to-pw-count" || name == "mon-sess-to-unknown-count" || name == "ac-to-bp-count" || name == "pw-to-bp-count" || name == "pw-to-unknown-count" || name == "pbb-to-bp-count" || name == "pbb-to-unknown-count" || name == "vni-to-bp-count" || name == "vni-to-unknown-count" || name == "evpn-to-bp-count" || name == "evpn-to-unknown-count" || name == "ac-down-count-aib" || name == "ac-down-count-l2vpn" || name == "ac-down-count-l3fib" || name == "ac-down-count-vpdn" || name == "vpws-pw-invalid-xid-drop-count" || name == "vpls-pw-invalid-xid-drop-count" || name == "virtual-ac-invalid-xid-drop-count" || name == "pbb-invalid-xid-drop-count" || name == "vni-invalid-xid-drop-count" || name == "evpn-invalid-xid-drop-count" || name == "vpls-pw-max-exceeded-drop-cnt" || name == "bundle-ac-max-exceeded-drop-cnt" || name == "p2p-count" || name == "bp-count" || name == "pwhe-l2-if-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::NextHopSummary()
    :
    mpls_il(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls>())
	,l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp>())
	,lsm(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm>())
	,p2mp_tunnels(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels>())
{
    mpls_il->parent = this;
    mpls->parent = this;
    l2tp->parent = this;
    lsm->parent = this;
    p2mp_tunnels->parent = this;

    yang_name = "next-hop-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::~NextHopSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::has_data() const
{
    return (mpls_il !=  nullptr && mpls_il->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (lsm !=  nullptr && lsm->has_data())
	|| (p2mp_tunnels !=  nullptr && p2mp_tunnels->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_il !=  nullptr && mpls_il->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (lsm !=  nullptr && lsm->has_operation())
	|| (p2mp_tunnels !=  nullptr && p2mp_tunnels->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-il")
    {
        if(mpls_il == nullptr)
        {
            mpls_il = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl>();
        }
        return mpls_il;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "lsm")
    {
        if(lsm == nullptr)
        {
            lsm = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm>();
        }
        return lsm;
    }

    if(child_yang_name == "p2mp-tunnels")
    {
        if(p2mp_tunnels == nullptr)
        {
            p2mp_tunnels = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels>();
        }
        return p2mp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls_il != nullptr)
    {
        children["mpls-il"] = mpls_il;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(lsm != nullptr)
    {
        children["lsm"] = lsm;
    }

    if(p2mp_tunnels != nullptr)
    {
        children["p2mp-tunnels"] = p2mp_tunnels;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-il" || name == "mpls" || name == "l2tp" || name == "lsm" || name == "p2mp-tunnels")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::MplsIl()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "mpls-il"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::~MplsIl()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::has_data() const
{
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-il";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::Mpls()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "mpls"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::has_data() const
{
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::L2Tp()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "l2tp"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::has_data() const
{
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::Lsm()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "lsm"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::~Lsm()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::has_data() const
{
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::P2MpTunnels()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "p2mp-tunnels"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::~P2MpTunnels()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::has_data() const
{
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::L2TpDispositionSummary()
    :
    l2tp_disposition_session_count{YType::uint32, "l2tp-disposition-session-count"},
    bound_l2tp_disposition_session_count{YType::uint32, "bound-l2tp-disposition-session-count"},
    unbound_l2tp_disposition_session_count{YType::uint32, "unbound-l2tp-disposition-session-count"}
{

    yang_name = "l2tp-disposition-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::~L2TpDispositionSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::has_data() const
{
    return l2tp_disposition_session_count.is_set
	|| bound_l2tp_disposition_session_count.is_set
	|| unbound_l2tp_disposition_session_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_disposition_session_count.yfilter)
	|| ydk::is_set(bound_l2tp_disposition_session_count.yfilter)
	|| ydk::is_set(unbound_l2tp_disposition_session_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-disposition-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_disposition_session_count.is_set || is_set(l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(l2tp_disposition_session_count.get_name_leafdata());
    if (bound_l2tp_disposition_session_count.is_set || is_set(bound_l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(bound_l2tp_disposition_session_count.get_name_leafdata());
    if (unbound_l2tp_disposition_session_count.is_set || is_set(unbound_l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(unbound_l2tp_disposition_session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count = value;
        l2tp_disposition_session_count.value_namespace = name_space;
        l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count = value;
        bound_l2tp_disposition_session_count.value_namespace = name_space;
        bound_l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count = value;
        unbound_l2tp_disposition_session_count.value_namespace = name_space;
        unbound_l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count.yfilter = yfilter;
    }
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count.yfilter = yfilter;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-disposition-session-count" || name == "bound-l2tp-disposition-session-count" || name == "unbound-l2tp-disposition-session-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::BridgeDomainSummary()
    :
    bridge_domain_count{YType::uint32, "bridge-domain-count"},
    bridge_domain_drop_count{YType::uint32, "bridge-domain-drop-count"},
    bridge_domain_with_bvi_count{YType::uint32, "bridge-domain-with-bvi-count"},
    bridge_domain_with_p2mp_enabled{YType::uint32, "bridge-domain-with-p2mp-enabled"},
    bridge_domain_with_pbbevpn_enabled{YType::uint32, "bridge-domain-with-pbbevpn-enabled"},
    bridge_domain_with_evpn_enabled{YType::uint32, "bridge-domain-with-evpn-enabled"}
{

    yang_name = "bridge-domain-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::~BridgeDomainSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::has_data() const
{
    return bridge_domain_count.is_set
	|| bridge_domain_drop_count.is_set
	|| bridge_domain_with_bvi_count.is_set
	|| bridge_domain_with_p2mp_enabled.is_set
	|| bridge_domain_with_pbbevpn_enabled.is_set
	|| bridge_domain_with_evpn_enabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_count.yfilter)
	|| ydk::is_set(bridge_domain_drop_count.yfilter)
	|| ydk::is_set(bridge_domain_with_bvi_count.yfilter)
	|| ydk::is_set(bridge_domain_with_p2mp_enabled.yfilter)
	|| ydk::is_set(bridge_domain_with_pbbevpn_enabled.yfilter)
	|| ydk::is_set(bridge_domain_with_evpn_enabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_count.is_set || is_set(bridge_domain_count.yfilter)) leaf_name_data.push_back(bridge_domain_count.get_name_leafdata());
    if (bridge_domain_drop_count.is_set || is_set(bridge_domain_drop_count.yfilter)) leaf_name_data.push_back(bridge_domain_drop_count.get_name_leafdata());
    if (bridge_domain_with_bvi_count.is_set || is_set(bridge_domain_with_bvi_count.yfilter)) leaf_name_data.push_back(bridge_domain_with_bvi_count.get_name_leafdata());
    if (bridge_domain_with_p2mp_enabled.is_set || is_set(bridge_domain_with_p2mp_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_p2mp_enabled.get_name_leafdata());
    if (bridge_domain_with_pbbevpn_enabled.is_set || is_set(bridge_domain_with_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_pbbevpn_enabled.get_name_leafdata());
    if (bridge_domain_with_evpn_enabled.is_set || is_set(bridge_domain_with_evpn_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_evpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count = value;
        bridge_domain_count.value_namespace = name_space;
        bridge_domain_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count = value;
        bridge_domain_drop_count.value_namespace = name_space;
        bridge_domain_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count = value;
        bridge_domain_with_bvi_count.value_namespace = name_space;
        bridge_domain_with_bvi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled = value;
        bridge_domain_with_p2mp_enabled.value_namespace = name_space;
        bridge_domain_with_p2mp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled = value;
        bridge_domain_with_pbbevpn_enabled.value_namespace = name_space;
        bridge_domain_with_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled = value;
        bridge_domain_with_evpn_enabled.value_namespace = name_space;
        bridge_domain_with_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-count" || name == "bridge-domain-drop-count" || name == "bridge-domain-with-bvi-count" || name == "bridge-domain-with-p2mp-enabled" || name == "bridge-domain-with-pbbevpn-enabled" || name == "bridge-domain-with-evpn-enabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::MacSummary()
    :
    local_mac_count{YType::uint32, "local-mac-count"},
    remote_mac_count{YType::uint32, "remote-mac-count"},
    static_mac_count{YType::uint32, "static-mac-count"},
    routed_mac_count{YType::uint32, "routed-mac-count"},
    mac_count{YType::uint32, "mac-count"},
    sbmac_count{YType::uint32, "sbmac-count"},
    bmac_count{YType::uint32, "bmac-count"}
{

    yang_name = "mac-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::~MacSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::has_data() const
{
    return local_mac_count.is_set
	|| remote_mac_count.is_set
	|| static_mac_count.is_set
	|| routed_mac_count.is_set
	|| mac_count.is_set
	|| sbmac_count.is_set
	|| bmac_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_mac_count.yfilter)
	|| ydk::is_set(remote_mac_count.yfilter)
	|| ydk::is_set(static_mac_count.yfilter)
	|| ydk::is_set(routed_mac_count.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(sbmac_count.yfilter)
	|| ydk::is_set(bmac_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_mac_count.is_set || is_set(local_mac_count.yfilter)) leaf_name_data.push_back(local_mac_count.get_name_leafdata());
    if (remote_mac_count.is_set || is_set(remote_mac_count.yfilter)) leaf_name_data.push_back(remote_mac_count.get_name_leafdata());
    if (static_mac_count.is_set || is_set(static_mac_count.yfilter)) leaf_name_data.push_back(static_mac_count.get_name_leafdata());
    if (routed_mac_count.is_set || is_set(routed_mac_count.yfilter)) leaf_name_data.push_back(routed_mac_count.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (sbmac_count.is_set || is_set(sbmac_count.yfilter)) leaf_name_data.push_back(sbmac_count.get_name_leafdata());
    if (bmac_count.is_set || is_set(bmac_count.yfilter)) leaf_name_data.push_back(bmac_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-mac-count")
    {
        local_mac_count = value;
        local_mac_count.value_namespace = name_space;
        local_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count = value;
        remote_mac_count.value_namespace = name_space;
        remote_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count = value;
        static_mac_count.value_namespace = name_space;
        static_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count = value;
        routed_mac_count.value_namespace = name_space;
        routed_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count = value;
        sbmac_count.value_namespace = name_space;
        sbmac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-count")
    {
        bmac_count = value;
        bmac_count.value_namespace = name_space;
        bmac_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-mac-count")
    {
        local_mac_count.yfilter = yfilter;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count.yfilter = yfilter;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count.yfilter = yfilter;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count.yfilter = yfilter;
    }
    if(value_path == "bmac-count")
    {
        bmac_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-mac-count" || name == "remote-mac-count" || name == "static-mac-count" || name == "routed-mac-count" || name == "mac-count" || name == "sbmac-count" || name == "bmac-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::QueueSummary()
    :
    inline_cnt{YType::uint32, "inline-cnt"},
    retry_cnt{YType::uint32, "retry-cnt"},
    update_cnt{YType::uint32, "update-cnt"},
    del_cnt{YType::uint32, "del-cnt"}
{

    yang_name = "queue-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::~QueueSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::has_data() const
{
    return inline_cnt.is_set
	|| retry_cnt.is_set
	|| update_cnt.is_set
	|| del_cnt.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inline_cnt.yfilter)
	|| ydk::is_set(retry_cnt.yfilter)
	|| ydk::is_set(update_cnt.yfilter)
	|| ydk::is_set(del_cnt.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inline_cnt.is_set || is_set(inline_cnt.yfilter)) leaf_name_data.push_back(inline_cnt.get_name_leafdata());
    if (retry_cnt.is_set || is_set(retry_cnt.yfilter)) leaf_name_data.push_back(retry_cnt.get_name_leafdata());
    if (update_cnt.is_set || is_set(update_cnt.yfilter)) leaf_name_data.push_back(update_cnt.get_name_leafdata());
    if (del_cnt.is_set || is_set(del_cnt.yfilter)) leaf_name_data.push_back(del_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inline-cnt")
    {
        inline_cnt = value;
        inline_cnt.value_namespace = name_space;
        inline_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt = value;
        retry_cnt.value_namespace = name_space;
        retry_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-cnt")
    {
        update_cnt = value;
        update_cnt.value_namespace = name_space;
        update_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "del-cnt")
    {
        del_cnt = value;
        del_cnt.value_namespace = name_space;
        del_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inline-cnt")
    {
        inline_cnt.yfilter = yfilter;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt.yfilter = yfilter;
    }
    if(value_path == "update-cnt")
    {
        update_cnt.yfilter = yfilter;
    }
    if(value_path == "del-cnt")
    {
        del_cnt.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline-cnt" || name == "retry-cnt" || name == "update-cnt" || name == "del-cnt")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::EvpnSummary()
    :
    total_count{YType::uint32, "total-count"},
    isid_count{YType::uint32, "isid-count"},
    default_count{YType::uint32, "default-count"},
    stitching_count{YType::uint32, "stitching-count"}
{

    yang_name = "evpn-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::~EvpnSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_data() const
{
    return total_count.is_set
	|| isid_count.is_set
	|| default_count.is_set
	|| stitching_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(isid_count.yfilter)
	|| ydk::is_set(default_count.yfilter)
	|| ydk::is_set(stitching_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (isid_count.is_set || is_set(isid_count.yfilter)) leaf_name_data.push_back(isid_count.get_name_leafdata());
    if (default_count.is_set || is_set(default_count.yfilter)) leaf_name_data.push_back(default_count.get_name_leafdata());
    if (stitching_count.is_set || is_set(stitching_count.yfilter)) leaf_name_data.push_back(stitching_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isid-count")
    {
        isid_count = value;
        isid_count.value_namespace = name_space;
        isid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-count")
    {
        default_count = value;
        default_count.value_namespace = name_space;
        default_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-count")
    {
        stitching_count = value;
        stitching_count.value_namespace = name_space;
        stitching_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "isid-count")
    {
        isid_count.yfilter = yfilter;
    }
    if(value_path == "default-count")
    {
        default_count.yfilter = yfilter;
    }
    if(value_path == "stitching-count")
    {
        stitching_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "isid-count" || name == "default-count" || name == "stitching-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::GlobalCfg()
    :
    load_balance_type{YType::enumeration, "load-balance-type"},
    evpn_imc_label_block_base{YType::uint32, "evpn-imc-label-block-base"},
    evpn_imc_label_block_size{YType::uint16, "evpn-imc-label-block-size"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base>())
{
    base->parent = this;

    yang_name = "global-cfg"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::~GlobalCfg()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::has_data() const
{
    return load_balance_type.is_set
	|| evpn_imc_label_block_base.is_set
	|| evpn_imc_label_block_size.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance_type.yfilter)
	|| ydk::is_set(evpn_imc_label_block_base.yfilter)
	|| ydk::is_set(evpn_imc_label_block_size.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance_type.is_set || is_set(load_balance_type.yfilter)) leaf_name_data.push_back(load_balance_type.get_name_leafdata());
    if (evpn_imc_label_block_base.is_set || is_set(evpn_imc_label_block_base.yfilter)) leaf_name_data.push_back(evpn_imc_label_block_base.get_name_leafdata());
    if (evpn_imc_label_block_size.is_set || is_set(evpn_imc_label_block_size.yfilter)) leaf_name_data.push_back(evpn_imc_label_block_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance-type")
    {
        load_balance_type = value;
        load_balance_type.value_namespace = name_space;
        load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base = value;
        evpn_imc_label_block_base.value_namespace = name_space;
        evpn_imc_label_block_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size = value;
        evpn_imc_label_block_size.value_namespace = name_space;
        evpn_imc_label_block_size.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance-type")
    {
        load_balance_type.yfilter = yfilter;
    }
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base.yfilter = yfilter;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "load-balance-type" || name == "evpn-imc-label-block-base" || name == "evpn-imc-label-block-size")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::Base()
{

    yang_name = "base"; yang_parent_name = "global-cfg"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::PtreeSummary()
    :
    total_ptree_count{YType::uint32, "total-ptree-count"},
    mldp_enabled_ptree_count{YType::uint32, "mldp-enabled-ptree-count"},
    lmrib_mldp_ptree_count{YType::uint32, "lmrib-mldp-ptree-count"},
    rsvp_te_enabled_ptree_count{YType::uint32, "rsvp-te-enabled-ptree-count"},
    lmrib_rsvp_te_ptree_count{YType::uint32, "lmrib-rsvp-te-ptree-count"}
{

    yang_name = "ptree-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::~PtreeSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::has_data() const
{
    return total_ptree_count.is_set
	|| mldp_enabled_ptree_count.is_set
	|| lmrib_mldp_ptree_count.is_set
	|| rsvp_te_enabled_ptree_count.is_set
	|| lmrib_rsvp_te_ptree_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_ptree_count.yfilter)
	|| ydk::is_set(mldp_enabled_ptree_count.yfilter)
	|| ydk::is_set(lmrib_mldp_ptree_count.yfilter)
	|| ydk::is_set(rsvp_te_enabled_ptree_count.yfilter)
	|| ydk::is_set(lmrib_rsvp_te_ptree_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_ptree_count.is_set || is_set(total_ptree_count.yfilter)) leaf_name_data.push_back(total_ptree_count.get_name_leafdata());
    if (mldp_enabled_ptree_count.is_set || is_set(mldp_enabled_ptree_count.yfilter)) leaf_name_data.push_back(mldp_enabled_ptree_count.get_name_leafdata());
    if (lmrib_mldp_ptree_count.is_set || is_set(lmrib_mldp_ptree_count.yfilter)) leaf_name_data.push_back(lmrib_mldp_ptree_count.get_name_leafdata());
    if (rsvp_te_enabled_ptree_count.is_set || is_set(rsvp_te_enabled_ptree_count.yfilter)) leaf_name_data.push_back(rsvp_te_enabled_ptree_count.get_name_leafdata());
    if (lmrib_rsvp_te_ptree_count.is_set || is_set(lmrib_rsvp_te_ptree_count.yfilter)) leaf_name_data.push_back(lmrib_rsvp_te_ptree_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-ptree-count")
    {
        total_ptree_count = value;
        total_ptree_count.value_namespace = name_space;
        total_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count = value;
        mldp_enabled_ptree_count.value_namespace = name_space;
        mldp_enabled_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count = value;
        lmrib_mldp_ptree_count.value_namespace = name_space;
        lmrib_mldp_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count = value;
        rsvp_te_enabled_ptree_count.value_namespace = name_space;
        rsvp_te_enabled_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count = value;
        lmrib_rsvp_te_ptree_count.value_namespace = name_space;
        lmrib_rsvp_te_ptree_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-ptree-count")
    {
        total_ptree_count.yfilter = yfilter;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count.yfilter = yfilter;
    }
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count.yfilter = yfilter;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-ptree-count" || name == "mldp-enabled-ptree-count" || name == "lmrib-mldp-ptree-count" || name == "rsvp-te-enabled-ptree-count" || name == "lmrib-rsvp-te-ptree-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::PwGroupSummary()
    :
    plat_grouping_supported{YType::boolean, "plat-grouping-supported"},
    total_pw_groups{YType::uint32, "total-pw-groups"},
    pw_groups_down{YType::uint32, "pw-groups-down"}
{

    yang_name = "pw-group-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::~PwGroupSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::has_data() const
{
    return plat_grouping_supported.is_set
	|| total_pw_groups.is_set
	|| pw_groups_down.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plat_grouping_supported.yfilter)
	|| ydk::is_set(total_pw_groups.yfilter)
	|| ydk::is_set(pw_groups_down.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-group-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plat_grouping_supported.is_set || is_set(plat_grouping_supported.yfilter)) leaf_name_data.push_back(plat_grouping_supported.get_name_leafdata());
    if (total_pw_groups.is_set || is_set(total_pw_groups.yfilter)) leaf_name_data.push_back(total_pw_groups.get_name_leafdata());
    if (pw_groups_down.is_set || is_set(pw_groups_down.yfilter)) leaf_name_data.push_back(pw_groups_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported = value;
        plat_grouping_supported.value_namespace = name_space;
        plat_grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups = value;
        total_pw_groups.value_namespace = name_space;
        total_pw_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down = value;
        pw_groups_down.value_namespace = name_space;
        pw_groups_down.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported.yfilter = yfilter;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups.yfilter = yfilter;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plat-grouping-supported" || name == "total-pw-groups" || name == "pw-groups-down")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::PwheMpSummary()
    :
    total_count{YType::uint32, "total-count"}
{

    yang_name = "pwhe-mp-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::~PwheMpSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::has_data() const
{
    return total_count.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwhe-mp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeers()
{

    yang_name = "l2fib-nve-peers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::~L2FibNvePeers()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::has_data() const
{
    for (std::size_t index=0; index<l2fib_nve_peer.size(); index++)
    {
        if(l2fib_nve_peer[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::has_operation() const
{
    for (std::size_t index=0; index<l2fib_nve_peer.size(); index++)
    {
        if(l2fib_nve_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-nve-peer")
    {
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer>();
        c->parent = this;
        l2fib_nve_peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibNvePeers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : l2fib_nve_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-nve-peer")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::L2FibNvePeer()
    :
    xc_uint_id{YType::str, "xc-uint-id"},
    vniid{YType::str, "vniid"},
    vtep_address{YType::str, "vtep-address"},
    nve_if{YType::str, "nve-if"},
    vn_iid{YType::uint32, "vn-iid"},
    vte_pip{YType::str, "vte-pip"}
{

    yang_name = "l2fib-nve-peer"; yang_parent_name = "l2fib-nve-peers"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::~L2FibNvePeer()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::has_data() const
{
    return xc_uint_id.is_set
	|| vniid.is_set
	|| vtep_address.is_set
	|| nve_if.is_set
	|| vn_iid.is_set
	|| vte_pip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xc_uint_id.yfilter)
	|| ydk::is_set(vniid.yfilter)
	|| ydk::is_set(vtep_address.yfilter)
	|| ydk::is_set(nve_if.yfilter)
	|| ydk::is_set(vn_iid.yfilter)
	|| ydk::is_set(vte_pip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_uint_id.is_set || is_set(xc_uint_id.yfilter)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());
    if (vniid.is_set || is_set(vniid.yfilter)) leaf_name_data.push_back(vniid.get_name_leafdata());
    if (vtep_address.is_set || is_set(vtep_address.yfilter)) leaf_name_data.push_back(vtep_address.get_name_leafdata());
    if (nve_if.is_set || is_set(nve_if.yfilter)) leaf_name_data.push_back(nve_if.get_name_leafdata());
    if (vn_iid.is_set || is_set(vn_iid.yfilter)) leaf_name_data.push_back(vn_iid.get_name_leafdata());
    if (vte_pip.is_set || is_set(vte_pip.yfilter)) leaf_name_data.push_back(vte_pip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
        xc_uint_id.value_namespace = name_space;
        xc_uint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniid")
    {
        vniid = value;
        vniid.value_namespace = name_space;
        vniid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep-address")
    {
        vtep_address = value;
        vtep_address.value_namespace = name_space;
        vtep_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-if")
    {
        nve_if = value;
        nve_if.value_namespace = name_space;
        nve_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vn-iid")
    {
        vn_iid = value;
        vn_iid.value_namespace = name_space;
        vn_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vte-pip")
    {
        vte_pip = value;
        vte_pip.value_namespace = name_space;
        vte_pip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xc-uint-id")
    {
        xc_uint_id.yfilter = yfilter;
    }
    if(value_path == "vniid")
    {
        vniid.yfilter = yfilter;
    }
    if(value_path == "vtep-address")
    {
        vtep_address.yfilter = yfilter;
    }
    if(value_path == "nve-if")
    {
        nve_if.yfilter = yfilter;
    }
    if(value_path == "vn-iid")
    {
        vn_iid.yfilter = yfilter;
    }
    if(value_path == "vte-pip")
    {
        vte_pip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xc-uint-id" || name == "vniid" || name == "vtep-address" || name == "nve-if" || name == "vn-iid" || name == "vte-pip")
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
    char count=0;
    count = 0;
    for (auto const & c : l2fib_mmrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    source{YType::str, "source"},
    group{YType::str, "group"},
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    xid_count{YType::uint16, "xid-count"},
    platform_data_length{YType::uint8, "platform-data-length"},
    platform_data{YType::str, "platform-data"},
    hardware_information{YType::str, "hardware-information"},
    bridge_domain_name{YType::str, "bridge-domain-name"}
    	,
    multicast_base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix>())
	,destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats>())
	,irb_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo>())
{
    multicast_base_information->parent = this;
    source_prefix->parent = this;
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;

    yang_name = "l2fib-mmrp"; yang_parent_name = "l2fib-mmrps"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::~L2FibMmrp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_data() const
{
    return source.is_set
	|| group.is_set
	|| bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| xid_count.is_set
	|| platform_data_length.is_set
	|| platform_data.is_set
	|| hardware_information.is_set
	|| bridge_domain_name.is_set
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation());
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

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_base_information != nullptr)
    {
        children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

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

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-base-information" || name == "source-prefix" || name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "source" || name == "group" || name == "bd-group-name" || name == "bd-name" || name == "bridge-id" || name == "xid-count" || name == "platform-data-length" || name == "platform-data" || name == "hardware-information" || name == "bridge-domain-name")
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
    char count=0;
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
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_data() const
{
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
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

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::DestinationPrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_data() const
{
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
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

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}


}
}

