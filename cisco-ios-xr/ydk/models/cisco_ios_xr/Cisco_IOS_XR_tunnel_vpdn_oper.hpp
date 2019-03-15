#ifndef _CISCO_IOS_XR_TUNNEL_VPDN_OPER_
#define _CISCO_IOS_XR_TUNNEL_VPDN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_vpdn_oper {

class Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

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

        class Sessions; //type: Vpdn::Sessions
        class TunnelDestinations; //type: Vpdn::TunnelDestinations
        class VpdnMirroring; //type: Vpdn::VpdnMirroring
        class VpdnRedundancy; //type: Vpdn::VpdnRedundancy
        class HistoryFailures; //type: Vpdn::HistoryFailures

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::TunnelDestinations> tunnel_destinations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring> vpdn_mirroring;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnRedundancy> vpdn_redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::HistoryFailures> history_failures;
        
}; // Vpdn


class Vpdn::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Session; //type: Vpdn::Sessions::Session

        ydk::YList session;
        
}; // Vpdn::Sessions


class Vpdn::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session_label; //type: string
        ydk::YLeaf setup_time; //type: uint32
        ydk::YLeaf parent_interface_name; //type: string
        class Session_; //type: Vpdn::Sessions::Session::Session_
        class L2tp; //type: Vpdn::Sessions::Session::L2tp
        class Subscriber; //type: Vpdn::Sessions::Session::Subscriber
        class Configuration; //type: Vpdn::Sessions::Session::Configuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Session_> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Subscriber> subscriber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Configuration> configuration;
        
}; // Vpdn::Sessions::Session


class Vpdn::Sessions::Session::Session_ : public ydk::Entity
{
    public:
        Session_();
        ~Session_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_change; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf state; //type: SessionState
        ydk::YLeaf l2tp_session_id; //type: uint16
        ydk::YLeaf l2tp_tunnel_id; //type: uint16
        ydk::YLeaf srg_slave; //type: boolean

}; // Vpdn::Sessions::Session::Session_


class Vpdn::Sessions::Session::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_endpoint; //type: string
        ydk::YLeaf remote_endpoint; //type: string
        ydk::YLeaf call_serial_number; //type: uint32
        ydk::YLeaf is_l2tp_class_attribute_mask_set; //type: boolean
        ydk::YLeaf local_tunnel_id; //type: uint16
        ydk::YLeaf remote_tunnel_id; //type: uint16
        ydk::YLeaf local_session_id; //type: uint16
        ydk::YLeaf remote_session_id; //type: uint16
        ydk::YLeaf remote_port; //type: uint16
        ydk::YLeaf tunnel_client_authentication_id; //type: string
        ydk::YLeaf tunnel_server_authentication_id; //type: string
        ydk::YLeaf tunnel_assignment_id; //type: string
        ydk::YLeaf is_tunnel_authentication_enabled; //type: boolean

}; // Vpdn::Sessions::Session::L2tp


class Vpdn::Sessions::Session::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nas_port_id_val; //type: string
        ydk::YLeaf nas_port_type; //type: string
        ydk::YLeaf physical_channel_id; //type: uint32
        ydk::YLeaf receive_connect_speed; //type: uint64
        ydk::YLeaf transmit_connect_speed; //type: uint64

}; // Vpdn::Sessions::Session::Subscriber


class Vpdn::Sessions::Session::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf l2tp_busy_timeout; //type: uint16
        ydk::YLeaf tos_mode; //type: TosMode
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf dsl_line_forwarding; //type: boolean
        class VpnId; //type: Vpdn::Sessions::Session::Configuration::VpnId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::Sessions::Session::Configuration::VpnId> vpn_id;
        
}; // Vpdn::Sessions::Session::Configuration


class Vpdn::Sessions::Session::Configuration::VpnId : public ydk::Entity
{
    public:
        VpnId();
        ~VpnId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf index_; //type: uint32

}; // Vpdn::Sessions::Session::Configuration::VpnId


class Vpdn::TunnelDestinations : public ydk::Entity
{
    public:
        TunnelDestinations();
        ~TunnelDestinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelDestination; //type: Vpdn::TunnelDestinations::TunnelDestination

        ydk::YList tunnel_destination;
        
}; // Vpdn::TunnelDestinations


class Vpdn::TunnelDestinations::TunnelDestination : public ydk::Entity
{
    public:
        TunnelDestination();
        ~TunnelDestination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf load; //type: uint32
        ydk::YLeaf status; //type: LsgStatus
        ydk::YLeaf connects; //type: uint32
        ydk::YLeaf disconnects; //type: uint32
        ydk::YLeaf retry; //type: uint32
        ydk::YLeaf status_change_time; //type: uint32

}; // Vpdn::TunnelDestinations::TunnelDestination


class Vpdn::VpdnMirroring : public ydk::Entity
{
    public:
        VpdnMirroring();
        ~VpdnMirroring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_not_conn_cnt; //type: uint32
        ydk::YLeaf sso_err_cnt; //type: uint32
        ydk::YLeaf sso_batch_err_cnt; //type: uint32
        ydk::YLeaf alloc_err_cnt; //type: uint32
        ydk::YLeaf alloc_cnt; //type: uint32
        class QadSendStats; //type: Vpdn::VpdnMirroring::QadSendStats
        class QadRecvStats; //type: Vpdn::VpdnMirroring::QadRecvStats
        class QadSendStatsLastClear; //type: Vpdn::VpdnMirroring::QadSendStatsLastClear
        class QadRecvStatsLastClear; //type: Vpdn::VpdnMirroring::QadRecvStatsLastClear

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadSendStats> qad_send_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadRecvStats> qad_recv_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadSendStatsLastClear> qad_send_stats_last_clear;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_oper::Vpdn::VpdnMirroring::QadRecvStatsLastClear> qad_recv_stats_last_clear;
        
}; // Vpdn::VpdnMirroring


class Vpdn::VpdnMirroring::QadSendStats : public ydk::Entity
{
    public:
        QadSendStats();
        ~QadSendStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msgs_sent; //type: uint32
        ydk::YLeaf acks_sent; //type: uint32
        ydk::YLeaf no_partner; //type: uint32
        ydk::YLeaf sends_failed; //type: uint32
        ydk::YLeaf acks_failed; //type: uint32
        ydk::YLeaf pending_acks; //type: uint32
        ydk::YLeaf timeouts; //type: uint32
        ydk::YLeaf suspends; //type: uint32
        ydk::YLeaf resumes; //type: uint32
        ydk::YLeaf sends_fragment; //type: uint32
        ydk::YLeaf qad_last_seq_number; //type: uint32
        ydk::YLeaf qad_frag_count; //type: uint32
        ydk::YLeaf qad_ack_count; //type: uint32
        ydk::YLeaf qad_unknown_acks; //type: uint32
        ydk::YLeaf qad_timeouts; //type: uint32
        ydk::YLeaf qad_rx_count; //type: uint32
        ydk::YLeaf qad_rx_list_count; //type: uint32
        ydk::YLeaf qad_rx_list_q_size; //type: uint32
        ydk::YLeaf qad_rx_first_seq_number; //type: uint32

}; // Vpdn::VpdnMirroring::QadSendStats


class Vpdn::VpdnMirroring::QadRecvStats : public ydk::Entity
{
    public:
        QadRecvStats();
        ~QadRecvStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msgs_recvd; //type: uint32
        ydk::YLeaf acks_recvd; //type: uint32
        ydk::YLeaf recvd_acks_failed; //type: uint32
        ydk::YLeaf init_drops; //type: uint32
        ydk::YLeaf msg_drops; //type: uint32
        ydk::YLeaf ooo_drops; //type: uint32
        ydk::YLeaf stale_msgs; //type: uint32

}; // Vpdn::VpdnMirroring::QadRecvStats


class Vpdn::VpdnMirroring::QadSendStatsLastClear : public ydk::Entity
{
    public:
        QadSendStatsLastClear();
        ~QadSendStatsLastClear();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msgs_sent; //type: uint32
        ydk::YLeaf acks_sent; //type: uint32
        ydk::YLeaf no_partner; //type: uint32
        ydk::YLeaf sends_failed; //type: uint32
        ydk::YLeaf acks_failed; //type: uint32
        ydk::YLeaf pending_acks; //type: uint32
        ydk::YLeaf timeouts; //type: uint32
        ydk::YLeaf suspends; //type: uint32
        ydk::YLeaf resumes; //type: uint32
        ydk::YLeaf sends_fragment; //type: uint32
        ydk::YLeaf qad_last_seq_number; //type: uint32
        ydk::YLeaf qad_frag_count; //type: uint32
        ydk::YLeaf qad_ack_count; //type: uint32
        ydk::YLeaf qad_unknown_acks; //type: uint32
        ydk::YLeaf qad_timeouts; //type: uint32
        ydk::YLeaf qad_rx_count; //type: uint32
        ydk::YLeaf qad_rx_list_count; //type: uint32
        ydk::YLeaf qad_rx_list_q_size; //type: uint32
        ydk::YLeaf qad_rx_first_seq_number; //type: uint32

}; // Vpdn::VpdnMirroring::QadSendStatsLastClear


class Vpdn::VpdnMirroring::QadRecvStatsLastClear : public ydk::Entity
{
    public:
        QadRecvStatsLastClear();
        ~QadRecvStatsLastClear();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msgs_recvd; //type: uint32
        ydk::YLeaf acks_recvd; //type: uint32
        ydk::YLeaf recvd_acks_failed; //type: uint32
        ydk::YLeaf init_drops; //type: uint32
        ydk::YLeaf msg_drops; //type: uint32
        ydk::YLeaf ooo_drops; //type: uint32
        ydk::YLeaf stale_msgs; //type: uint32

}; // Vpdn::VpdnMirroring::QadRecvStatsLastClear


class Vpdn::VpdnRedundancy : public ydk::Entity
{
    public:
        VpdnRedundancy();
        ~VpdnRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session_total; //type: uint32
        ydk::YLeaf session_synced; //type: uint32
        ydk::YLeaf state; //type: VpdnState
        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf finish_time; //type: uint64
        ydk::YLeaf abort_time; //type: uint64

}; // Vpdn::VpdnRedundancy


class Vpdn::HistoryFailures : public ydk::Entity
{
    public:
        HistoryFailures();
        ~HistoryFailures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HistoryFailure; //type: Vpdn::HistoryFailures::HistoryFailure

        ydk::YList history_failure;
        
}; // Vpdn::HistoryFailures


class Vpdn::HistoryFailures::HistoryFailure : public ydk::Entity
{
    public:
        HistoryFailure();
        ~HistoryFailure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf remote_name; //type: string
        ydk::YLeaf username_xr; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf mid; //type: uint16
        ydk::YLeaf nas; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf remote_client_id; //type: uint16
        ydk::YLeaf home_gateway; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf local_client_id; //type: uint16
        ydk::YLeaf event_time; //type: string
        ydk::YLeaf error_repeat_count; //type: uint16
        ydk::YLeaf failure_type; //type: VpdnFailcode

}; // Vpdn::HistoryFailures::HistoryFailure

class SessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf established;

};

class VpdnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initial_state;
        static const ydk::Enum::YLeaf init_sync_in_progress;
        static const ydk::Enum::YLeaf steady_state;

};

class VpdnFailcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf peer_action;
        static const ydk::Enum::YLeaf authentication;
        static const ydk::Enum::YLeaf authentication_error;
        static const ydk::Enum::YLeaf authentication_failed;
        static const ydk::Enum::YLeaf authorization;
        static const ydk::Enum::YLeaf authorization_failed;
        static const ydk::Enum::YLeaf home_gatewayfailure;
        static const ydk::Enum::YLeaf connection_termination;
        static const ydk::Enum::YLeaf no_resources_available;
        static const ydk::Enum::YLeaf timer_expiry;
        static const ydk::Enum::YLeaf session_mid_exceeded;
        static const ydk::Enum::YLeaf soft_shut;
        static const ydk::Enum::YLeaf session_limit_exceeded;
        static const ydk::Enum::YLeaf administrative;
        static const ydk::Enum::YLeaf link_failure;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf tunnel_in_resync;
        static const ydk::Enum::YLeaf call_prarmeters;

};

class LsgStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testable;
        static const ydk::Enum::YLeaf testing;

};

class TosMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf set;
        static const ydk::Enum::YLeaf reflect;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_VPDN_OPER_ */

