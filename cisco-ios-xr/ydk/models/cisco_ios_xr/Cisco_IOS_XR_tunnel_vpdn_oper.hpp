#ifndef _CISCO_IOS_XR_TUNNEL_VPDN_OPER_
#define _CISCO_IOS_XR_TUNNEL_VPDN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tunnel_vpdn_oper {

class Vpdn : public Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Sessions; //type: Vpdn::Sessions
        class TunnelDestinations; //type: Vpdn::TunnelDestinations
        class VpdnMirroring; //type: Vpdn::VpdnMirroring
        class VpdnRedundancy; //type: Vpdn::VpdnRedundancy
        class HistoryFailures; //type: Vpdn::HistoryFailures

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::HistoryFailures> history_failures;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::TunnelDestinations> tunnel_destinations;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring> vpdn_mirroring;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnRedundancy> vpdn_redundancy;


}; // Vpdn


class Vpdn::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session; //type: Vpdn::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session> > session;


}; // Vpdn::Sessions


class Vpdn::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_label; //type: string
        YLeaf setup_time; //type: uint32
        YLeaf parent_interface_name; //type: string

        class Session_; //type: Vpdn::Sessions::Session::Session_
        class L2Tp; //type: Vpdn::Sessions::Session::L2Tp
        class Subscriber; //type: Vpdn::Sessions::Session::Subscriber
        class Configuration; //type: Vpdn::Sessions::Session::Configuration

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Session_> session;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Subscriber> subscriber;


}; // Vpdn::Sessions::Session


class Vpdn::Sessions::Session::Session_ : public Entity
{
    public:
        Session_();
        ~Session_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_change; //type: string
        YLeaf interface_name; //type: string
        YLeaf username; //type: string
        YLeaf domain_name; //type: string
        YLeaf state; //type: SessionStateEnum
        YLeaf l2tp_session_id; //type: uint16
        YLeaf l2tp_tunnel_id; //type: uint16
        YLeaf srg_slave; //type: boolean



}; // Vpdn::Sessions::Session::Session_


class Vpdn::Sessions::Session::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_endpoint; //type: string
        YLeaf remote_endpoint; //type: string
        YLeaf call_serial_number; //type: uint32
        YLeaf is_l2tp_class_attribute_mask_set; //type: boolean
        YLeaf local_tunnel_id; //type: uint16
        YLeaf remote_tunnel_id; //type: uint16
        YLeaf local_session_id; //type: uint16
        YLeaf remote_session_id; //type: uint16
        YLeaf remote_port; //type: uint16
        YLeaf tunnel_client_authentication_id; //type: string
        YLeaf tunnel_server_authentication_id; //type: string
        YLeaf tunnel_assignment_id; //type: string
        YLeaf is_tunnel_authentication_enabled; //type: boolean



}; // Vpdn::Sessions::Session::L2Tp


class Vpdn::Sessions::Session::Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nas_port_type; //type: VpdnNasPortEnum
        YLeaf physical_channel_id; //type: uint32
        YLeaf receive_connect_speed; //type: uint64
        YLeaf transmit_connect_speed; //type: uint64
        YLeafList nas_port; //type: list of  uint8



}; // Vpdn::Sessions::Session::Subscriber


class Vpdn::Sessions::Session::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf template_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf l2tp_busy_timeout; //type: uint16
        YLeaf tos_mode; //type: TosModeEnum
        YLeaf tos; //type: uint8
        YLeaf dsl_line_forwarding; //type: boolean

        class VpnId; //type: Vpdn::Sessions::Session::Configuration::VpnId

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Configuration::VpnId> vpn_id;


}; // Vpdn::Sessions::Session::Configuration


class Vpdn::Sessions::Session::Configuration::VpnId : public Entity
{
    public:
        VpnId();
        ~VpnId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oui; //type: uint32
        YLeaf index_; //type: uint32



}; // Vpdn::Sessions::Session::Configuration::VpnId


class Vpdn::TunnelDestinations : public Entity
{
    public:
        TunnelDestinations();
        ~TunnelDestinations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelDestination; //type: Vpdn::TunnelDestinations::TunnelDestination

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::TunnelDestinations::TunnelDestination> > tunnel_destination;


}; // Vpdn::TunnelDestinations


class Vpdn::TunnelDestinations::TunnelDestination : public Entity
{
    public:
        TunnelDestination();
        ~TunnelDestination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf address; //type: string
        YLeaf vrf_name_xr; //type: string
        YLeaf load; //type: uint32
        YLeaf status; //type: LsgStatusEnum
        YLeaf connects; //type: uint32
        YLeaf disconnects; //type: uint32
        YLeaf retry; //type: uint32
        YLeaf status_change_time; //type: uint32



}; // Vpdn::TunnelDestinations::TunnelDestination


class Vpdn::VpdnMirroring : public Entity
{
    public:
        VpdnMirroring();
        ~VpdnMirroring();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_not_conn_cnt; //type: uint32
        YLeaf sso_err_cnt; //type: uint32
        YLeaf sso_batch_err_cnt; //type: uint32
        YLeaf alloc_err_cnt; //type: uint32
        YLeaf alloc_cnt; //type: uint32

        class QadSendStats; //type: Vpdn::VpdnMirroring::QadSendStats
        class QadRecvStats; //type: Vpdn::VpdnMirroring::QadRecvStats
        class QadSendStatsLastClear; //type: Vpdn::VpdnMirroring::QadSendStatsLastClear
        class QadRecvStatsLastClear; //type: Vpdn::VpdnMirroring::QadRecvStatsLastClear

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadRecvStats> qad_recv_stats;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadRecvStatsLastClear> qad_recv_stats_last_clear;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadSendStats> qad_send_stats;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadSendStatsLastClear> qad_send_stats_last_clear;


}; // Vpdn::VpdnMirroring


class Vpdn::VpdnMirroring::QadSendStats : public Entity
{
    public:
        QadSendStats();
        ~QadSendStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msgs_sent; //type: uint32
        YLeaf acks_sent; //type: uint32
        YLeaf no_partner; //type: uint32
        YLeaf sends_failed; //type: uint32
        YLeaf acks_failed; //type: uint32
        YLeaf pending_acks; //type: uint32
        YLeaf timeouts; //type: uint32
        YLeaf suspends; //type: uint32
        YLeaf resumes; //type: uint32
        YLeaf sends_fragment; //type: uint32
        YLeaf qad_last_seq_number; //type: uint32
        YLeaf qad_frag_count; //type: uint32
        YLeaf qad_ack_count; //type: uint32
        YLeaf qad_unknown_acks; //type: uint32
        YLeaf qad_timeouts; //type: uint32
        YLeaf qad_rx_count; //type: uint32
        YLeaf qad_rx_list_count; //type: uint32
        YLeaf qad_rx_list_q_size; //type: uint32
        YLeaf qad_rx_first_seq_number; //type: uint32



}; // Vpdn::VpdnMirroring::QadSendStats


class Vpdn::VpdnMirroring::QadRecvStats : public Entity
{
    public:
        QadRecvStats();
        ~QadRecvStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msgs_recvd; //type: uint32
        YLeaf acks_recvd; //type: uint32
        YLeaf recvd_acks_failed; //type: uint32
        YLeaf init_drops; //type: uint32
        YLeaf msg_drops; //type: uint32
        YLeaf ooo_drops; //type: uint32
        YLeaf stale_msgs; //type: uint32



}; // Vpdn::VpdnMirroring::QadRecvStats


class Vpdn::VpdnMirroring::QadSendStatsLastClear : public Entity
{
    public:
        QadSendStatsLastClear();
        ~QadSendStatsLastClear();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msgs_sent; //type: uint32
        YLeaf acks_sent; //type: uint32
        YLeaf no_partner; //type: uint32
        YLeaf sends_failed; //type: uint32
        YLeaf acks_failed; //type: uint32
        YLeaf pending_acks; //type: uint32
        YLeaf timeouts; //type: uint32
        YLeaf suspends; //type: uint32
        YLeaf resumes; //type: uint32
        YLeaf sends_fragment; //type: uint32
        YLeaf qad_last_seq_number; //type: uint32
        YLeaf qad_frag_count; //type: uint32
        YLeaf qad_ack_count; //type: uint32
        YLeaf qad_unknown_acks; //type: uint32
        YLeaf qad_timeouts; //type: uint32
        YLeaf qad_rx_count; //type: uint32
        YLeaf qad_rx_list_count; //type: uint32
        YLeaf qad_rx_list_q_size; //type: uint32
        YLeaf qad_rx_first_seq_number; //type: uint32



}; // Vpdn::VpdnMirroring::QadSendStatsLastClear


class Vpdn::VpdnMirroring::QadRecvStatsLastClear : public Entity
{
    public:
        QadRecvStatsLastClear();
        ~QadRecvStatsLastClear();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf msgs_recvd; //type: uint32
        YLeaf acks_recvd; //type: uint32
        YLeaf recvd_acks_failed; //type: uint32
        YLeaf init_drops; //type: uint32
        YLeaf msg_drops; //type: uint32
        YLeaf ooo_drops; //type: uint32
        YLeaf stale_msgs; //type: uint32



}; // Vpdn::VpdnMirroring::QadRecvStatsLastClear


class Vpdn::VpdnRedundancy : public Entity
{
    public:
        VpdnRedundancy();
        ~VpdnRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_total; //type: uint32
        YLeaf session_synced; //type: uint32
        YLeaf state; //type: VpdnStateEnum
        YLeaf start_time; //type: uint64
        YLeaf finish_time; //type: uint64
        YLeaf abort_time; //type: uint64



}; // Vpdn::VpdnRedundancy


class Vpdn::HistoryFailures : public Entity
{
    public:
        HistoryFailures();
        ~HistoryFailures();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HistoryFailure; //type: Vpdn::HistoryFailures::HistoryFailure

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::HistoryFailures::HistoryFailure> > history_failure;


}; // Vpdn::HistoryFailures


class Vpdn::HistoryFailures::HistoryFailure : public Entity
{
    public:
        HistoryFailure();
        ~HistoryFailure();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf username; //type: string
        YLeaf remote_name; //type: string
        YLeaf username_xr; //type: string
        YLeaf domain_name; //type: string
        YLeaf mid; //type: uint16
        YLeaf nas; //type: string
        YLeaf destination_address; //type: string
        YLeaf remote_client_id; //type: uint16
        YLeaf home_gateway; //type: string
        YLeaf source_address; //type: string
        YLeaf local_client_id; //type: uint16
        YLeaf event_time; //type: string
        YLeaf error_repeat_count; //type: uint16
        YLeaf failure_type; //type: VpdnFailcodeEnum



}; // Vpdn::HistoryFailures::HistoryFailure

class SessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf established;

};

class VpdnStateEnum : public Enum
{
    public:
        static const Enum::YLeaf initial_state;
        static const Enum::YLeaf init_sync_in_progress;
        static const Enum::YLeaf steady_state;

};

class VpdnFailcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf peer_action;
        static const Enum::YLeaf authentication;
        static const Enum::YLeaf authentication_error;
        static const Enum::YLeaf authentication_failed;
        static const Enum::YLeaf authorization;
        static const Enum::YLeaf authorization_failed;
        static const Enum::YLeaf home_gatewayfailure;
        static const Enum::YLeaf connection_termination;
        static const Enum::YLeaf no_resources_available;
        static const Enum::YLeaf timer_expiry;
        static const Enum::YLeaf session_mid_exceeded;
        static const Enum::YLeaf soft_shut;
        static const Enum::YLeaf session_limit_exceeded;
        static const Enum::YLeaf administrative;
        static const Enum::YLeaf link_failure;
        static const Enum::YLeaf security;
        static const Enum::YLeaf tunnel_in_resync;
        static const Enum::YLeaf call_prarmeters;

};

class VpdnNasPortEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf primary;
        static const Enum::YLeaf bri;
        static const Enum::YLeaf serial;
        static const Enum::YLeaf asynchronous;
        static const Enum::YLeaf vty;
        static const Enum::YLeaf atm;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ppp_atm;
        static const Enum::YLeaf pppoe_over_atm;
        static const Enum::YLeaf pppoe_over_ethernet;
        static const Enum::YLeaf pppoe_over_vlan;
        static const Enum::YLeaf pppoe_over_q_in_q;
        static const Enum::YLeaf v120;
        static const Enum::YLeaf v110;
        static const Enum::YLeaf piafs;
        static const Enum::YLeaf x75;
        static const Enum::YLeaf ip_sec;
        static const Enum::YLeaf other;
        static const Enum::YLeaf virtual_pppoe_over_ethernet;
        static const Enum::YLeaf virtual_pppoe_over_vlan;
        static const Enum::YLeaf virtual_pppoe_over_q_in_q;
        static const Enum::YLeaf ipo_e_over_ethernet;
        static const Enum::YLeaf ipo_e_over_vlan;
        static const Enum::YLeaf ipo_e_over_q_in_q;
        static const Enum::YLeaf virtual_i_po_e_over_ethernet;
        static const Enum::YLeaf virtual_i_po_e_over_vlan;
        static const Enum::YLeaf virtual_i_po_e_over_q_in_q;
        static const Enum::YLeaf unknown;

};

class TosModeEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf set;
        static const Enum::YLeaf reflect;

};

class LsgStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf active;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testable;
        static const Enum::YLeaf testing;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_VPDN_OPER_ */

