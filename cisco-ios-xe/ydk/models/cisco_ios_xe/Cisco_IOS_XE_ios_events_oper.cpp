
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ios_events_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ios_events_oper {

IosEvents::IosEvents()
{

    yang_name = "ios-events"; yang_parent_name = "Cisco-IOS-XE-ios-events-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

IosEvents::~IosEvents()
{
}

bool IosEvents::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool IosEvents::has_operation() const
{
    return is_set(yfilter);
}

std::string IosEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ios-events-oper:ios-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IosEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IosEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IosEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IosEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IosEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IosEvents::clone_ptr() const
{
    return std::make_shared<IosEvents>();
}

std::string IosEvents::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IosEvents::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IosEvents::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IosEvents::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IosEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf HardwareSensorType::hw_sensor_board {0, "hw-sensor-board"};
const Enum::YLeaf HardwareSensorType::hw_sensor_cpu_junction {1, "hw-sensor-cpu-junction"};
const Enum::YLeaf HardwareSensorType::hw_sensor_dram {2, "hw-sensor-dram"};
const Enum::YLeaf HardwareSensorType::hw_sensor_pim {3, "hw-sensor-pim"};

const Enum::YLeaf InterfaceNotifState::interface_notif_state_up {0, "interface-notif-state-up"};
const Enum::YLeaf InterfaceNotifState::interface_notif_state_down {1, "interface-notif-state-down"};

const Enum::YLeaf NotificationModuleState::notf_module_state_inserted {0, "notf-module-state-inserted"};
const Enum::YLeaf NotificationModuleState::notf_module_state_removed {1, "notf-module-state-removed"};

const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_unknown {0, "utd-ips-alert-priority-unknown"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_emerg {1, "utd-ips-alert-priority-emerg"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_alert {2, "utd-ips-alert-priority-alert"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_crit {3, "utd-ips-alert-priority-crit"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_error {4, "utd-ips-alert-priority-error"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_warn {5, "utd-ips-alert-priority-warn"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_notice {6, "utd-ips-alert-priority-notice"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_info {7, "utd-ips-alert-priority-info"};
const Enum::YLeaf UtdIpsAlertPriorityVal::utd_ips_alert_priority_debug {8, "utd-ips-alert-priority-debug"};

const Enum::YLeaf OspfIntfState::ospf_ifs_down {0, "ospf-ifs-down"};
const Enum::YLeaf OspfIntfState::ospf_ifs_loopback {1, "ospf-ifs-loopback"};
const Enum::YLeaf OspfIntfState::ospf_ifs_waiting {2, "ospf-ifs-waiting"};
const Enum::YLeaf OspfIntfState::ospf_ifs_point_to_m_point {3, "ospf-ifs-point-to-m-point"};
const Enum::YLeaf OspfIntfState::ospf_ifs_point_to_point {4, "ospf-ifs-point-to-point"};
const Enum::YLeaf OspfIntfState::ospf_ifs_dr {5, "ospf-ifs-dr"};
const Enum::YLeaf OspfIntfState::ospf_ifs_backup {6, "ospf-ifs-backup"};
const Enum::YLeaf OspfIntfState::ospf_ifs_dr_other {7, "ospf-ifs-dr-other"};
const Enum::YLeaf OspfIntfState::ospf_ifs_depend_upon {8, "ospf-ifs-depend-upon"};

const Enum::YLeaf UtdIpsAlertActionVal::utd_ips_alert_action_unknown {0, "utd-ips-alert-action-unknown"};
const Enum::YLeaf UtdIpsAlertActionVal::utd_ips_alert_action_alert {1, "utd-ips-alert-action-alert"};
const Enum::YLeaf UtdIpsAlertActionVal::utd_ips_alert_action_drop {2, "utd-ips-alert-action-drop"};
const Enum::YLeaf UtdIpsAlertActionVal::utd_ips_alert_action_wdrop {3, "utd-ips-alert-action-wdrop"};

const Enum::YLeaf BgpPstate::bgp_state_idle {0, "bgp-state-idle"};
const Enum::YLeaf BgpPstate::bgp_state_connect {1, "bgp-state-connect"};
const Enum::YLeaf BgpPstate::bgp_state_active {2, "bgp-state-active"};
const Enum::YLeaf BgpPstate::bgp_state_opensent {3, "bgp-state-opensent"};
const Enum::YLeaf BgpPstate::bgp_state_openconfirm {4, "bgp-state-openconfirm"};
const Enum::YLeaf BgpPstate::bgp_state_established {5, "bgp-state-established"};
const Enum::YLeaf BgpPstate::bgp_state_clearing {6, "bgp-state-clearing"};
const Enum::YLeaf BgpPstate::bgp_state_deleted {7, "bgp-state-deleted"};

const Enum::YLeaf DhcpServerStateVal::dhcp_server_state_up {0, "dhcp-server-state-up"};
const Enum::YLeaf DhcpServerStateVal::dhcp_server_state_down {1, "dhcp-server-state-down"};

const Enum::YLeaf NotificationSeverity::critical {0, "critical"};
const Enum::YLeaf NotificationSeverity::major_ {1, "major"};
const Enum::YLeaf NotificationSeverity::minor {2, "minor"};

const Enum::YLeaf VrrpIpAddrType::vrrp_undefined {0, "vrrp-undefined"};
const Enum::YLeaf VrrpIpAddrType::vrrp_ipv4_address {1, "vrrp-ipv4-address"};
const Enum::YLeaf VrrpIpAddrType::vrrp_ipv6_address {2, "vrrp-ipv6-address"};

const Enum::YLeaf NotificationSensorState::sensor_state_green {0, "sensor-state-green"};
const Enum::YLeaf NotificationSensorState::sensor_state_yellow {1, "sensor-state-yellow"};
const Enum::YLeaf NotificationSensorState::sensor_state_red {2, "sensor-state-red"};

const Enum::YLeaf UtdUpdateTypeVal::utd_update_type_unknown {0, "utd-update-type-unknown"};
const Enum::YLeaf UtdUpdateTypeVal::utd_update_type_ips {1, "utd-update-type-ips"};
const Enum::YLeaf UtdUpdateTypeVal::utd_update_type_urlf {2, "utd-update-type-urlf"};

const Enum::YLeaf NotificationFailureState::notf_failure_state_ok {0, "notf-failure-state-ok"};
const Enum::YLeaf NotificationFailureState::notf_failure_state_failed {1, "notf-failure-state-failed"};

const Enum::YLeaf IntfAdminState::up {0, "up"};
const Enum::YLeaf IntfAdminState::down {1, "down"};

const Enum::YLeaf VrrpNotifProtoState::vrrp_notif_init {1, "vrrp-notif-init"};
const Enum::YLeaf VrrpNotifProtoState::vrrp_notif_backup {2, "vrrp-notif-backup"};
const Enum::YLeaf VrrpNotifProtoState::vrrp_notif_master {3, "vrrp-notif-master"};
const Enum::YLeaf VrrpNotifProtoState::vrrp_notif_recover {4, "vrrp-notif-recover"};

const Enum::YLeaf OspfNbrState::ospf_nbr_down {0, "ospf-nbr-down"};
const Enum::YLeaf OspfNbrState::ospf_nbr_attempt {1, "ospf-nbr-attempt"};
const Enum::YLeaf OspfNbrState::ospf_nbr_init {2, "ospf-nbr-init"};
const Enum::YLeaf OspfNbrState::ospf_nbr_two_way {3, "ospf-nbr-two-way"};
const Enum::YLeaf OspfNbrState::ospf_nbr_exstart {4, "ospf-nbr-exstart"};
const Enum::YLeaf OspfNbrState::ospf_nbr_exchange {5, "ospf-nbr-exchange"};
const Enum::YLeaf OspfNbrState::ospf_nbr_loading {6, "ospf-nbr-loading"};
const Enum::YLeaf OspfNbrState::ospf_nbr_full {7, "ospf-nbr-full"};
const Enum::YLeaf OspfNbrState::ospf_nbr_deleted {8, "ospf-nbr-deleted"};
const Enum::YLeaf OspfNbrState::ospf_nbr_depend_upon {9, "ospf-nbr-depend-upon"};

const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_none {0, "utd-ips-alert-classification-none"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_not_suspicious {1, "utd-ips-alert-classification-not-suspicious"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_unknown {2, "utd-ips-alert-classification-unknown"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_bad_unknown {3, "utd-ips-alert-classification-bad-unknown"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_attempted_recon {4, "utd-ips-alert-classification-attempted-recon"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_successful_recon_limited {5, "utd-ips-alert-classification-successful-recon-limited"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_successful_recon_largescale {6, "utd-ips-alert-classification-successful-recon-largescale"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_attempted_dos {7, "utd-ips-alert-classification-attempted-dos"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_successful_dos {8, "utd-ips-alert-classification-successful-dos"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_attempted_user {9, "utd-ips-alert-classification-attempted-user"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_unsuccessful_user {10, "utd-ips-alert-classification-unsuccessful-user"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_successful_user {11, "utd-ips-alert-classification-successful-user"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_attempted_admin {12, "utd-ips-alert-classification-attempted-admin"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_successful_admin {13, "utd-ips-alert-classification-successful-admin"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_rpc_portmap_decode {14, "utd-ips-alert-classification-rpc-portmap-decode"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_shellcode_detect {15, "utd-ips-alert-classification-shellcode-detect"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_string_detect {16, "utd-ips-alert-classification-string-detect"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_suspicious_filename_detect {17, "utd-ips-alert-classification-suspicious-filename-detect"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_suspicious_login {18, "utd-ips-alert-classification-suspicious-login"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_system_call_detect {19, "utd-ips-alert-classification-system-call-detect"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_tcp_connection {20, "utd-ips-alert-classification-tcp-connection"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_trojan_activity {21, "utd-ips-alert-classification-trojan-activity"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_unusual_client_port_connection {22, "utd-ips-alert-classification-unusual-client-port-connection"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_network_scan {23, "utd-ips-alert-classification-network-scan"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_denial_of_service {24, "utd-ips-alert-classification-denial-of-service"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_non_standard_protocol {25, "utd-ips-alert-classification-non-standard-protocol"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_protocol_command_decode {26, "utd-ips-alert-classification-protocol-command-decode"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_web_application_activity {27, "utd-ips-alert-classification-web-application-activity"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_web_application_attack {28, "utd-ips-alert-classification-web-application-attack"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_misc_activity {29, "utd-ips-alert-classification-misc-activity"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_misc_attack {30, "utd-ips-alert-classification-misc-attack"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_icmp_event {31, "utd-ips-alert-classification-icmp-event"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_inappropriate_content {32, "utd-ips-alert-classification-inappropriate-content"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_policy_violation {33, "utd-ips-alert-classification-policy-violation"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_default_login_attempt {34, "utd-ips-alert-classification-default-login-attempt"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_sdf {35, "utd-ips-alert-classification-sdf"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_file_format {36, "utd-ips-alert-classification-file-format"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_malware_cnc {37, "utd-ips-alert-classification-malware-cnc"};
const Enum::YLeaf UtdIpsAlertClassificationVal::utd_ips_alert_classification_client_side_exploit {38, "utd-ips-alert-classification-client-side-exploit"};

const Enum::YLeaf FibUpdatesAfType::fib_updates_af_unknown {0, "fib-updates-af-unknown"};
const Enum::YLeaf FibUpdatesAfType::fib_updates_af_ipv4 {1, "fib-updates-af-ipv4"};
const Enum::YLeaf FibUpdatesAfType::fib_updates_af_ipv6 {2, "fib-updates-af-ipv6"};


}
}

