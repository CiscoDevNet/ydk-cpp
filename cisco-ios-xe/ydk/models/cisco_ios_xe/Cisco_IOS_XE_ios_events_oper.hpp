#ifndef _CISCO_IOS_XE_IOS_EVENTS_OPER_
#define _CISCO_IOS_XE_IOS_EVENTS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ios_events_oper {

class IosEvents : public ydk::Entity
{
    public:
        IosEvents();
        ~IosEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;


}; // IosEvents

class HardwareSensorType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hw_sensor_board;
        static const ydk::Enum::YLeaf hw_sensor_cpu_junction;
        static const ydk::Enum::YLeaf hw_sensor_dram;
        static const ydk::Enum::YLeaf hw_sensor_pim;

};

class InterfaceNotifState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_notif_state_up;
        static const ydk::Enum::YLeaf interface_notif_state_down;

};

class NotificationModuleState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notf_module_state_inserted;
        static const ydk::Enum::YLeaf notf_module_state_removed;

};

class UtdIpsAlertPriorityVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utd_ips_alert_priority_unknown;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_emerg;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_alert;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_crit;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_error;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_warn;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_notice;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_info;
        static const ydk::Enum::YLeaf utd_ips_alert_priority_debug;

};

class OspfIntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_ifs_down;
        static const ydk::Enum::YLeaf ospf_ifs_loopback;
        static const ydk::Enum::YLeaf ospf_ifs_waiting;
        static const ydk::Enum::YLeaf ospf_ifs_point_to_m_point;
        static const ydk::Enum::YLeaf ospf_ifs_point_to_point;
        static const ydk::Enum::YLeaf ospf_ifs_dr;
        static const ydk::Enum::YLeaf ospf_ifs_backup;
        static const ydk::Enum::YLeaf ospf_ifs_dr_other;
        static const ydk::Enum::YLeaf ospf_ifs_depend_upon;

};

class UtdIpsAlertActionVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utd_ips_alert_action_unknown;
        static const ydk::Enum::YLeaf utd_ips_alert_action_alert;
        static const ydk::Enum::YLeaf utd_ips_alert_action_drop;
        static const ydk::Enum::YLeaf utd_ips_alert_action_wdrop;

};

class BgpPstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp_state_idle;
        static const ydk::Enum::YLeaf bgp_state_connect;
        static const ydk::Enum::YLeaf bgp_state_active;
        static const ydk::Enum::YLeaf bgp_state_opensent;
        static const ydk::Enum::YLeaf bgp_state_openconfirm;
        static const ydk::Enum::YLeaf bgp_state_established;
        static const ydk::Enum::YLeaf bgp_state_clearing;
        static const ydk::Enum::YLeaf bgp_state_deleted;

};

class DhcpServerStateVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp_server_state_up;
        static const ydk::Enum::YLeaf dhcp_server_state_down;

};

class NotificationSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;

};

class VrrpIpAddrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vrrp_undefined;
        static const ydk::Enum::YLeaf vrrp_ipv4_address;
        static const ydk::Enum::YLeaf vrrp_ipv6_address;

};

class NotificationSensorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sensor_state_green;
        static const ydk::Enum::YLeaf sensor_state_yellow;
        static const ydk::Enum::YLeaf sensor_state_red;

};

class UtdUpdateTypeVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utd_update_type_unknown;
        static const ydk::Enum::YLeaf utd_update_type_ips;
        static const ydk::Enum::YLeaf utd_update_type_urlf;

};

class NotificationFailureState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notf_failure_state_ok;
        static const ydk::Enum::YLeaf notf_failure_state_failed;

};

class IntfAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class VrrpNotifProtoState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vrrp_notif_init;
        static const ydk::Enum::YLeaf vrrp_notif_backup;
        static const ydk::Enum::YLeaf vrrp_notif_master;
        static const ydk::Enum::YLeaf vrrp_notif_recover;

};

class OspfNbrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_nbr_down;
        static const ydk::Enum::YLeaf ospf_nbr_attempt;
        static const ydk::Enum::YLeaf ospf_nbr_init;
        static const ydk::Enum::YLeaf ospf_nbr_two_way;
        static const ydk::Enum::YLeaf ospf_nbr_exstart;
        static const ydk::Enum::YLeaf ospf_nbr_exchange;
        static const ydk::Enum::YLeaf ospf_nbr_loading;
        static const ydk::Enum::YLeaf ospf_nbr_full;
        static const ydk::Enum::YLeaf ospf_nbr_deleted;
        static const ydk::Enum::YLeaf ospf_nbr_depend_upon;

};

class UtdIpsAlertClassificationVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utd_ips_alert_classification_none;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_not_suspicious;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_unknown;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_bad_unknown;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_attempted_recon;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_successful_recon_limited;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_successful_recon_largescale;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_attempted_dos;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_successful_dos;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_attempted_user;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_unsuccessful_user;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_successful_user;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_attempted_admin;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_successful_admin;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_rpc_portmap_decode;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_shellcode_detect;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_string_detect;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_suspicious_filename_detect;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_suspicious_login;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_system_call_detect;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_tcp_connection;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_trojan_activity;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_unusual_client_port_connection;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_network_scan;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_denial_of_service;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_non_standard_protocol;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_protocol_command_decode;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_web_application_activity;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_web_application_attack;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_misc_activity;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_misc_attack;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_icmp_event;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_inappropriate_content;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_policy_violation;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_default_login_attempt;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_sdf;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_file_format;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_malware_cnc;
        static const ydk::Enum::YLeaf utd_ips_alert_classification_client_side_exploit;

};

class FibUpdatesAfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_updates_af_unknown;
        static const ydk::Enum::YLeaf fib_updates_af_ipv4;
        static const ydk::Enum::YLeaf fib_updates_af_ipv6;

};


}
}

#endif /* _CISCO_IOS_XE_IOS_EVENTS_OPER_ */

