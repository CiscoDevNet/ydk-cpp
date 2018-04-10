#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_68_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_68_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_40.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_54.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf speaker_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf remote_as; //type: uint32
        ydk::YLeaf has_internal_link; //type: boolean
        ydk::YLeaf is_external_neighbor_not_directly_connected; //type: boolean
        ydk::YLeaf messages_received; //type: uint32
        ydk::YLeaf messages_sent; //type: uint32
        ydk::YLeaf update_messages_in; //type: uint32
        ydk::YLeaf update_messages_out; //type: uint32
        ydk::YLeaf messages_queued_in; //type: uint32
        ydk::YLeaf messages_queued_out; //type: uint32
        ydk::YLeaf connection_established_time; //type: uint32
        ydk::YLeaf connection_state; //type: BgpConnState
        ydk::YLeaf previous_connection_state; //type: uint32
        ydk::YLeaf connection_admin_status; //type: uint32
        ydk::YLeaf open_check_error_code; //type: BgpOpenCheckErr
        ydk::YLeaf is_local_address_configured; //type: boolean
        ydk::YLeaf connection_local_port; //type: uint32
        ydk::YLeaf connection_remote_port; //type: uint32
        ydk::YLeaf neighbor_interface_handle; //type: uint32
        ydk::YLeaf reset_notification_sent; //type: boolean
        ydk::YLeaf is_administratively_shut_down; //type: boolean
        ydk::YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        ydk::YLeaf is_out_of_memory_shutdown; //type: boolean
        ydk::YLeaf is_out_of_memory_forced_up; //type: boolean
        ydk::YLeaf is_ebgp_peer_as_league; //type: boolean
        ydk::YLeaf is_ebgp_peer_common_admin; //type: boolean
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf suppress4_byte_as; //type: boolean
        ydk::YLeaf bfd_session_state; //type: BgpBfdState
        ydk::YLeaf bfd_session_created_state; //type: BgpBfdState
        ydk::YLeaf bfd_session_enable_mode; //type: BgpBfdEnableMode
        ydk::YLeaf bfd_minintervalval; //type: uint32
        ydk::YLeaf bfd_multiplierval; //type: uint32
        ydk::YLeaf bfd_state_ts; //type: uint64
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf negotiated_protocol_version; //type: uint16
        ydk::YLeaf ebgp_time_to_live; //type: uint32
        ydk::YLeaf is_ebgp_multihop_bgp_mpls_forwarding_disabled; //type: boolean
        ydk::YLeaf tcpmss; //type: uint32
        ydk::YLeaf msg_log_in; //type: uint32
        ydk::YLeaf msg_log_out; //type: uint32
        ydk::YLeaf neighbor_local_as; //type: uint32
        ydk::YLeaf local_as_no_prepend; //type: boolean
        ydk::YLeaf is_capability_negotiation_suppressed; //type: boolean
        ydk::YLeaf is_capability_negotiation_performed; //type: boolean
        ydk::YLeaf is_route_refresh_capability_received; //type: boolean
        ydk::YLeaf is_route_refresh_old_capability_received; //type: boolean
        ydk::YLeaf is_gr_aware; //type: boolean
        ydk::YLeaf is4_byte_as_capability_received; //type: boolean
        ydk::YLeaf is4_byte_as_capability_sent; //type: boolean
        ydk::YLeaf multi_protocol_capability_received; //type: boolean
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf keep_alive_time; //type: uint16
        ydk::YLeaf configured_hold_time; //type: uint16
        ydk::YLeaf configured_keepalive; //type: uint16
        ydk::YLeaf configured_min_acc_hold_time; //type: uint16
        ydk::YLeaf min_advertise_interval; //type: uint32
        ydk::YLeaf min_advertise_interval_msecs; //type: uint32
        ydk::YLeaf min_origination_interval; //type: uint16
        ydk::YLeaf connect_retry_interval; //type: uint16
        ydk::YLeaf time_since_last_update; //type: uint32
        ydk::YLeaf time_since_last_read; //type: uint32
        ydk::YLeaf time_since_last_read_reset; //type: uint32
        ydk::YLeaf time_last_cb; //type: uint64
        ydk::YLeaf time_last_cb_reset; //type: uint32
        ydk::YLeaf time_last_fb; //type: uint64
        ydk::YLeaf count_last_write; //type: uint32
        ydk::YLeaf time_since_last_write; //type: uint32
        ydk::YLeaf attempted_last_write_bytes; //type: uint32
        ydk::YLeaf actual_last_write_bytes; //type: uint32
        ydk::YLeaf time_since_second_last_write; //type: uint32
        ydk::YLeaf attempted_second_last_write_bytes; //type: uint32
        ydk::YLeaf actual_second_last_write_bytes; //type: uint32
        ydk::YLeaf time_since_last_write_reset; //type: uint32
        ydk::YLeaf attempted_last_write_reset_bytes; //type: uint32
        ydk::YLeaf actual_last_write_reset_bytes; //type: uint32
        ydk::YLeaf time_since_second_last_write_reset; //type: uint32
        ydk::YLeaf attempted_second_last_write_reset_bytes; //type: uint32
        ydk::YLeaf actual_second_last_write_reset_bytes; //type: uint32
        ydk::YLeaf last_write_event; //type: uint32
        ydk::YLeaf second_last_write_event; //type: uint32
        ydk::YLeaf last_k_aexpiry_reset; //type: uint32
        ydk::YLeaf second_last_k_aexpiry_reset; //type: uint32
        ydk::YLeaf last_k_anotsent_reset; //type: uint32
        ydk::YLeaf last_k_aerror_reset; //type: uint32
        ydk::YLeaf last_k_astart_reset; //type: uint32
        ydk::YLeaf second_last_k_astart_reset; //type: uint32
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        ydk::YLeaf time_since_connection_last_dropped; //type: uint32
        ydk::YLeaf reset_reason; //type: BgpResetReasonIndex
        ydk::YLeaf peer_reset_reason; //type: BgpPeerResetReasonIndex
        ydk::YLeaf peer_error_code; //type: uint32
        ydk::YLeaf last_notify_error_code; //type: uint8
        ydk::YLeaf last_notify_error_subcode; //type: uint8
        ydk::YLeaf error_notifies_received; //type: uint32
        ydk::YLeaf error_notifies_sent; //type: uint32
        ydk::YLeaf remote_as_number; //type: uint32
        ydk::YLeaf dmz_link_bandwidth; //type: uint32
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf tos_type; //type: uint8
        ydk::YLeaf tos_value; //type: uint8
        ydk::YLeaf tcp_session_open_mode; //type: BgpTcpMode
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf standby_rp; //type: boolean
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf graceful_restart_enabled_nbr; //type: boolean
        ydk::YLeaf gr_restart_time; //type: uint32
        ydk::YLeaf gr_stale_path_time; //type: uint32
        ydk::YLeaf fssn_offset; //type: uint32
        ydk::YLeaf fpbsn_offset; //type: uint32
        ydk::YLeaf last_ackd_seq_no; //type: uint32
        ydk::YLeaf bytes_written; //type: uint32
        ydk::YLeaf bytes_read; //type: uint32
        ydk::YLeaf socket_read_bytes; //type: uint32
        ydk::YLeaf is_read_disabled; //type: boolean
        ydk::YLeaf update_bytes_read; //type: uint32
        ydk::YLeaf nsr_state; //type: BgpSyncNbrNsrState
        ydk::YLeaf is_passive_close; //type: boolean
        ydk::YLeaf nbr_enforce_first_as; //type: boolean
        ydk::YLeaf active_bmp_servers; //type: uint8
        ydk::YLeaf nbr_cluster_id; //type: uint32
        ydk::YLeaf nbr_in_cluster; //type: uint8
        ydk::YLeaf ignore_connected; //type: boolean
        ydk::YLeaf internal_vpn_client; //type: boolean
        ydk::YLeaf io_armed; //type: boolean
        ydk::YLeaf read_armed; //type: boolean
        ydk::YLeaf write_armed; //type: boolean
        ydk::YLeaf discard_data_bytes; //type: uint32
        ydk::YLeaf local_as_replace_as; //type: boolean
        ydk::YLeaf local_as_dual_as; //type: boolean
        ydk::YLeaf local_as_dual_as_mode_native; //type: boolean
        ydk::YLeaf egress_peer_engineering_enabled; //type: boolean
        ydk::YLeaf discard_as4_path; //type: uint32
        ydk::YLeaf rpki_disable; //type: boolean
        ydk::YLeaf rpki_use_validity; //type: boolean
        ydk::YLeaf rpki_allow_invalid; //type: boolean
        ydk::YLeaf rpki_signal_ibgp; //type: boolean
        ydk::YLeaf dynamic_neighbor; //type: boolean
        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress
        class SendNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo
        class ReceivedNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics
        class MessageStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics
        class TcpInitSyncTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec
        class TcpInitSyncPhaseTwoTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec
        class TcpInitSyncDoneTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo> send_notification_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo> received_notification_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics> performance_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics> message_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec> tcp_init_sync_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec> tcp_init_sync_phase_two_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec> tcp_init_sync_done_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance> graceful_maintenance;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData> > af_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress : public ydk::Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress : public ydk::Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo : public ydk::Entity
{
    public:
        SendNotificationInfo();
        ~SendNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since_last_notification; //type: uint32
        ydk::YLeaf notification_error_code; //type: uint8
        ydk::YLeaf notification_error_subcode; //type: uint8
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData : public ydk::Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo : public ydk::Entity
{
    public:
        ReceivedNotificationInfo();
        ~ReceivedNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since_last_notification; //type: uint32
        ydk::YLeaf notification_error_code; //type: uint8
        ydk::YLeaf notification_error_subcode; //type: uint8
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData : public ydk::Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics : public ydk::Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf read_throttles; //type: uint32
        ydk::YLeaf low_throttled_read; //type: uint32
        ydk::YLeaf high_throttled_read; //type: uint32
        ydk::YLeaf time_since_last_throttled_read; //type: uint32
        ydk::YLeaf read_calls_count; //type: uint32
        ydk::YLeaf read_messages_count; //type: uint32
        ydk::YLeaf data_bytes_read; //type: uint32
        ydk::YLeaf io_read_time; //type: uint32
        ydk::YLeaf write_calls_count; //type: uint32
        ydk::YLeaf data_bytes_written; //type: uint32
        ydk::YLeaf io_write_time; //type: uint32
        ydk::YLeaf last_sent_seq_no; //type: uint32
        ydk::YLeaf write_subgroup_calls_count; //type: uint32
        ydk::YLeaf write_subgroup_messages_count; //type: uint32
        ydk::YLeaf subgroup_list_time; //type: uint32
        ydk::YLeaf write_queue_calls_count; //type: uint32
        ydk::YLeaf write_queue_messages_count; //type: uint32
        ydk::YLeaf write_queue_time; //type: uint32
        ydk::YLeaf inbound_update_messages; //type: uint32
        ydk::YLeaf inbound_update_messages_time; //type: uint32
        ydk::YLeaf maximum_read_size; //type: uint32
        ydk::YLeaf actives; //type: uint32
        ydk::YLeaf failed_post_actives; //type: uint32
        ydk::YLeaf passives; //type: uint32
        ydk::YLeaf rejected_passives; //type: uint32
        ydk::YLeaf active_collision; //type: uint32
        ydk::YLeaf passive_collision; //type: uint32
        ydk::YLeaf control_to_read_thread_trigger; //type: uint32
        ydk::YLeaf control_to_write_thread_trigger; //type: uint32
        ydk::YLeaf network_status; //type: uint32
        ydk::YLeaf reset_flags; //type: uint32
        ydk::YLeaf nbr_flags; //type: uint32
        ydk::YLeaf nbr_fd; //type: int32
        ydk::YLeaf reset_retries; //type: uint8
        ydk::YLeaf sync_flags; //type: uint32
        ydk::YLeaf nsr_oper_down_count; //type: uint32
        ydk::YLeaf last_nsr_scoped_sync; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics : public ydk::Entity
{
    public:
        MessageStatistics();
        ~MessageStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Open; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open
        class Notification; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification
        class Update; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update
        class Keepalive; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive
        class RouteRefresh; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh
        class Total; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open> open;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification> notification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update> update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh> route_refresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total> total;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open : public ydk::Entity
{
    public:
        Open();
        ~Open();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx> rx;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx> rx;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx> rx;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx> rx;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh : public ydk::Entity
{
    public:
        RouteRefresh();
        ~RouteRefresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx> rx;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx> rx;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec : public ydk::Entity
{
    public:
        TcpInitSyncTimeSpec();
        ~TcpInitSyncTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec : public ydk::Entity
{
    public:
        TcpInitSyncPhaseTwoTimeSpec();
        ~TcpInitSyncPhaseTwoTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec : public ydk::Entity
{
    public:
        TcpInitSyncDoneTimeSpec();
        ~TcpInitSyncDoneTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_exists; //type: boolean
        ydk::YLeaf gshut_local_active; //type: boolean
        ydk::YLeaf gshut_active; //type: boolean
        ydk::YLeaf gshut_locpref_set; //type: boolean
        ydk::YLeaf gshut_locpref; //type: uint32
        ydk::YLeaf gshut_prepends; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::GracefulMaintenance


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf is_neighbor_route_reflector_client; //type: boolean
        ydk::YLeaf is_legacy_pe_rt; //type: boolean
        ydk::YLeaf is_neighbor_af_capable; //type: boolean
        ydk::YLeaf is_soft_reconfiguration_inbound_allowed; //type: boolean
        ydk::YLeaf is_use_soft_reconfiguration_always_on; //type: boolean
        ydk::YLeaf remove_private_as_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_from_inbound_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_inbound_updates; //type: boolean
        ydk::YLeaf flowspec_validation_d_isable; //type: boolean
        ydk::YLeaf flowspec_redirect_validation_d_isable; //type: boolean
        ydk::YLeaf orr_group_name; //type: string
        ydk::YLeaf orr_group_index; //type: uint32
        ydk::YLeaf is_orr_root_address_configured; //type: boolean
        ydk::YLeaf advertise_afi; //type: boolean
        ydk::YLeaf advertise_afi_reorg; //type: boolean
        ydk::YLeaf advertise_afi_disable; //type: boolean
        ydk::YLeaf encapsulation_type; //type: uint32
        ydk::YLeaf advertise_rt_type; //type: uint8
        ydk::YLeaf advertise_afi_def_vrf_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv4_afi_def_vrf_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv6_afi_def_vrf_imp_disable; //type: boolean
        ydk::YLeaf advertise_afi_vrf_re_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv4_afi_vrf_re_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv6_afi_vrf_re_imp_disable; //type: boolean
        ydk::YLeaf advertise_afi_eo_r_ready; //type: boolean
        ydk::YLeaf always_use_next_hop_local; //type: boolean
        ydk::YLeaf sent_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_gshut_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_extended_community_to_neighbor; //type: boolean
        ydk::YLeaf neighbor_default_originate; //type: boolean
        ydk::YLeaf is_orf_sent; //type: boolean
        ydk::YLeaf is_update_deferred; //type: boolean
        ydk::YLeaf is_orf_send_scheduled; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        ydk::YLeaf filter_group_index; //type: uint32
        ydk::YLeaf is_update_throttled; //type: boolean
        ydk::YLeaf is_update_leaving; //type: boolean
        ydk::YLeaf vpn_update_gen_enabled; //type: boolean
        ydk::YLeaf vpn_update_gen_trigger_enabled; //type: boolean
        ydk::YLeaf is_addpath_send_operational; //type: boolean
        ydk::YLeaf is_addpath_receive_operational; //type: boolean
        ydk::YLeaf neighbor_version; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf max_prefix_limit; //type: uint32
        ydk::YLeaf use_max_prefix_warning_only; //type: boolean
        ydk::YLeaf max_prefix_discard_extra_paths; //type: boolean
        ydk::YLeaf max_prefix_exceed_discard_paths; //type: boolean
        ydk::YLeaf max_prefix_threshold_percent; //type: uint8
        ydk::YLeaf max_prefix_restart_time; //type: uint16
        ydk::YLeaf prefixes_accepted; //type: uint32
        ydk::YLeaf prefixes_synced; //type: uint32
        ydk::YLeaf prefixes_withdrawn_not_found; //type: uint32
        ydk::YLeaf prefixes_denied; //type: uint32
        ydk::YLeaf prefixes_denied_no_policy; //type: uint32
        ydk::YLeaf prefixes_denied_rt_permit; //type: uint32
        ydk::YLeaf prefixes_denied_orf_policy; //type: uint32
        ydk::YLeaf prefixes_denied_policy; //type: uint32
        ydk::YLeaf number_of_bestpaths; //type: uint32
        ydk::YLeaf number_of_best_externalpaths; //type: uint32
        ydk::YLeaf prefixes_advertised; //type: uint32
        ydk::YLeaf prefixes_be_advertised; //type: uint32
        ydk::YLeaf prefixes_suppressed; //type: uint32
        ydk::YLeaf prefixes_withdrawn; //type: uint32
        ydk::YLeaf is_peer_orf_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_send; //type: boolean
        ydk::YLeaf is_received_orf_send_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_receive; //type: boolean
        ydk::YLeaf is_received_orf_receive_capable; //type: boolean
        ydk::YLeaf is_advertised_graceful_restart; //type: boolean
        ydk::YLeaf is_graceful_restart_state_flag; //type: boolean
        ydk::YLeaf is_received_graceful_restart_capable; //type: boolean
        ydk::YLeaf is_add_path_send_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_send_capability_received; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_received; //type: boolean
        ydk::YLeaf is_ext_nh_encoding_capability_received; //type: boolean
        ydk::YLeaf is_ext_nh_encoding_capability_sent; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf local_restart_time; //type: uint32
        ydk::YLeaf stale_path_timeout; //type: uint32
        ydk::YLeaf rib_purge_timeout_value; //type: uint32
        ydk::YLeaf neighbor_preserved_forwarding_state; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_configured; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_sent; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_stale_time_accept; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_capability_received; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_received; //type: uint32
        ydk::YLeaf neighbor_preserved_long_lived_forwarding_state; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_time_remaining; //type: uint32
        ydk::YLeaf route_refreshes_received; //type: uint32
        ydk::YLeaf route_refreshes_sent; //type: uint32
        ydk::YLeaf refresh_target_version; //type: uint32
        ydk::YLeaf refresh_version; //type: uint32
        ydk::YLeaf refresh_acked_version; //type: uint32
        ydk::YLeaf is_prefix_orf_present; //type: boolean
        ydk::YLeaf orf_entries_received; //type: uint32
        ydk::YLeaf is_default_originate_sent; //type: boolean
        ydk::YLeaf route_policy_prefix_orf; //type: string
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf route_policy_default_originate; //type: string
        ydk::YLeaf is_neighbor_ebgp_without_inbound_policy; //type: boolean
        ydk::YLeaf is_neighbor_ebgp_without_outbound_policy; //type: boolean
        ydk::YLeaf is_as_override_set; //type: boolean
        ydk::YLeaf is_allow_as_in_set; //type: boolean
        ydk::YLeaf allow_as_in_count; //type: uint32
        ydk::YLeaf address_family_long_lived_time; //type: uint32
        ydk::YLeaf eo_r_received_in_read_only; //type: boolean
        ydk::YLeaf acked_version; //type: uint32
        ydk::YLeaf synced_acked_version; //type: uint32
        ydk::YLeaf outstanding_version; //type: uint32
        ydk::YLeaf outstanding_refresh_version; //type: uint32
        ydk::YLeaf outstanding_version_max; //type: uint32
        ydk::YLeaf is_aigp_set; //type: boolean
        ydk::YLeaf is_rt_present; //type: boolean
        ydk::YLeaf is_rt_present_standby; //type: boolean
        ydk::YLeaf accept_own_enabled; //type: boolean
        ydk::YLeaf selective_multipath_eligible; //type: boolean
        ydk::YLeaf afrpki_disable; //type: boolean
        ydk::YLeaf afrpki_use_validity; //type: boolean
        ydk::YLeaf afrpki_allow_invalid; //type: boolean
        ydk::YLeaf afrpki_signal_ibgp; //type: boolean
        ydk::YLeaf is_advertise_permanent_network; //type: boolean
        ydk::YLeaf is_send_mcast_attr; //type: boolean
        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean
        ydk::YLeaf advertise_v4_flags; //type: uint32
        ydk::YLeaf advertise_v6_flags; //type: uint32
        ydk::YLeaf advertise_local_labeled_route_unicast; //type: boolean
        ydk::YLeaf prefixes_denied_non_cumulative; //type: uint32
        ydk::YLeaf enable_label_stack; //type: boolean
        class NeighborAfPerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity
        class ExtendedCommunityStandby; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics> neighbor_af_performance_statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby> > extended_community_standby;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics : public ydk::Entity
{
    public:
        NeighborAfPerformanceStatistics();
        ~NeighborAfPerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_group_pending_message_count; //type: uint32
        ydk::YLeaf processed_messages; //type: uint32
        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf split_horizon_update_transmit; //type: uint32
        ydk::YLeaf split_horizon_update_blocked; //type: uint32
        ydk::YLeaf split_horizon_withdraw_transmit; //type: uint32
        ydk::YLeaf split_horizon_withdraw_blocked; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby : public ydk::Entity
{
    public:
        ExtendedCommunityStandby();
        ~ExtendedCommunityStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf : public ydk::Entity
{
    public:
        NextHopVrf();
        ~NextHopVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_processing_time; //type: uint32
        ydk::YLeaf max_proc_notification_time; //type: uint32
        ydk::YLeaf max_notification_bestpath_deletes; //type: uint32
        ydk::YLeaf max_notification_bestpath_changes; //type: uint32
        ydk::YLeaf maximum_processing_time; //type: uint32
        ydk::YLeaf last_notificationication_time; //type: uint32
        ydk::YLeaf last_notification_processing_time; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges : public ydk::Entity
{
    public:
        NeighborRanges();
        ~NeighborRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborRange; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange> > neighbor_range;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange : public ydk::Entity
{
    public:
        NeighborRange();
        ~NeighborRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_range_address; //type: string
        ydk::YLeaf speaker_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf remote_as; //type: uint32
        ydk::YLeaf has_internal_link; //type: boolean
        ydk::YLeaf is_local_address_configured; //type: boolean
        ydk::YLeaf neighbor_range_prefix_length; //type: uint8
        ydk::YLeaf is_administratively_shut_down; //type: boolean
        ydk::YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        ydk::YLeaf is_out_of_memory_forced_up; //type: boolean
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf suppress4_byte_as; //type: boolean
        ydk::YLeaf bfd_session_enable_mode; //type: BgpBfdEnableMode
        ydk::YLeaf bfd_minintervalval; //type: uint32
        ydk::YLeaf bfd_multiplierval; //type: uint32
        ydk::YLeaf ebgp_time_to_live; //type: uint32
        ydk::YLeaf is_ebgp_multihop_bgp_mpls_forwarding_disabled; //type: boolean
        ydk::YLeaf tcpmss; //type: uint32
        ydk::YLeaf msg_log_in; //type: uint32
        ydk::YLeaf msg_log_out; //type: uint32
        ydk::YLeaf neighbor_local_as; //type: uint32
        ydk::YLeaf local_as_no_prepend; //type: boolean
        ydk::YLeaf is_capability_negotiation_performed; //type: boolean
        ydk::YLeaf configured_hold_time; //type: uint16
        ydk::YLeaf configured_keepalive; //type: uint16
        ydk::YLeaf configured_min_acc_hold_time; //type: uint16
        ydk::YLeaf min_advertise_interval; //type: uint32
        ydk::YLeaf min_advertise_interval_msecs; //type: uint32
        ydk::YLeaf min_origination_interval; //type: uint16
        ydk::YLeaf remote_as_number; //type: uint32
        ydk::YLeaf dmz_link_bandwidth; //type: uint32
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf tos_type; //type: uint8
        ydk::YLeaf tos_value; //type: uint8
        ydk::YLeaf tcp_session_open_mode; //type: BgpTcpMode
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf standby_rp; //type: boolean
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf graceful_restart_enabled_nbr; //type: boolean
        ydk::YLeaf gr_restart_time; //type: uint32
        ydk::YLeaf gr_stale_path_time; //type: uint32
        ydk::YLeaf is_passive_close; //type: boolean
        ydk::YLeaf nbr_enforce_first_as; //type: boolean
        ydk::YLeaf active_bmp_servers; //type: uint8
        ydk::YLeaf nbr_cluster_id; //type: uint32
        ydk::YLeaf nbr_in_cluster; //type: uint8
        ydk::YLeaf ignore_connected; //type: boolean
        ydk::YLeaf internal_vpn_client; //type: boolean
        ydk::YLeaf local_as_replace_as; //type: boolean
        ydk::YLeaf local_as_dual_as; //type: boolean
        ydk::YLeaf local_as_dual_as_mode_native; //type: boolean
        ydk::YLeaf egress_peer_engineering_enabled; //type: boolean
        ydk::YLeaf discard_as4_path; //type: uint32
        ydk::YLeaf rpki_disable; //type: boolean
        ydk::YLeaf rpki_use_validity; //type: boolean
        ydk::YLeaf rpki_allow_invalid; //type: boolean
        ydk::YLeaf rpki_signal_ibgp; //type: boolean
        ydk::YLeaf remote_as_list_name; //type: string
        ydk::YLeaf nbr_rcv_size; //type: uint32
        ydk::YLeaf nbr_send_size; //type: uint32
        ydk::YLeaf islocal_address_cfg; //type: boolean
        ydk::YLeaf update_source; //type: string
        ydk::YLeaf addpath_send_enable; //type: boolean
        ydk::YLeaf addpath_receive_enable; //type: boolean
        ydk::YLeaf addpath_send_disable; //type: boolean
        ydk::YLeaf addpath_receive_disable; //type: boolean
        ydk::YLeaf upd_errh_noreset; //type: boolean
        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_bug_circular; //type: boolean
        ydk::YLeaf syslog_enable; //type: boolean
        ydk::YLeaf oper_attrf_enable; //type: boolean
        ydk::YLeaf attrf_group_name; //type: string
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf current_peers; //type: uint32
        ydk::YLeaf range_open_match; //type: uint32
        ydk::YLeaf range_open_accepted; //type: uint32
        ydk::YLeaf range_max_drop; //type: uint32
        ydk::YLeaf range_inst_error; //type: uint32
        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance
        class CfgLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData
        class Instance_; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress> cfg_local_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData> > af_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_> > instance;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress : public ydk::Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress : public ydk::Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_exists; //type: boolean
        ydk::YLeaf gshut_local_active; //type: boolean
        ydk::YLeaf gshut_active; //type: boolean
        ydk::YLeaf gshut_locpref_set; //type: boolean
        ydk::YLeaf gshut_locpref; //type: uint32
        ydk::YLeaf gshut_prepends; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::GracefulMaintenance


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress : public ydk::Entity
{
    public:
        CfgLocalAddress();
        ~CfgLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf is_neighbor_route_reflector_client; //type: boolean
        ydk::YLeaf is_legacy_pe_rt; //type: boolean
        ydk::YLeaf is_neighbor_af_capable; //type: boolean
        ydk::YLeaf is_soft_reconfiguration_inbound_allowed; //type: boolean
        ydk::YLeaf is_use_soft_reconfiguration_always_on; //type: boolean
        ydk::YLeaf remove_private_as_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_from_inbound_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_inbound_updates; //type: boolean
        ydk::YLeaf flowspec_validation_d_isable; //type: boolean
        ydk::YLeaf flowspec_redirect_validation_d_isable; //type: boolean
        ydk::YLeaf orr_group_name; //type: string
        ydk::YLeaf orr_group_index; //type: uint32
        ydk::YLeaf is_orr_root_address_configured; //type: boolean
        ydk::YLeaf advertise_afi; //type: boolean
        ydk::YLeaf advertise_afi_reorg; //type: boolean
        ydk::YLeaf advertise_afi_local; //type: boolean
        ydk::YLeaf advertise_afi_disable; //type: boolean
        ydk::YLeaf always_use_next_hop_local; //type: boolean
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf sent_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_gshut_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_extended_community_to_neighbor; //type: boolean
        ydk::YLeaf neighbor_default_originate; //type: boolean
        ydk::YLeaf is_orf_sent; //type: boolean
        ydk::YLeaf is_update_deferred; //type: boolean
        ydk::YLeaf is_orf_send_scheduled; //type: boolean
        ydk::YLeaf vpn_update_gen_enabled; //type: boolean
        ydk::YLeaf vpn_update_gen_trigger_enabled; //type: boolean
        ydk::YLeaf is_addpath_send_operational; //type: boolean
        ydk::YLeaf is_addpath_receive_operational; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf max_prefix_limit; //type: uint32
        ydk::YLeaf use_max_prefix_warning_only; //type: boolean
        ydk::YLeaf max_prefix_discard_extra_paths; //type: boolean
        ydk::YLeaf max_prefix_exceed_discard_paths; //type: boolean
        ydk::YLeaf max_prefix_threshold_percent; //type: uint8
        ydk::YLeaf max_prefix_restart_time; //type: uint16
        ydk::YLeaf is_peer_orf_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_send; //type: boolean
        ydk::YLeaf is_received_orf_send_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_receive; //type: boolean
        ydk::YLeaf is_received_orf_receive_capable; //type: boolean
        ydk::YLeaf is_advertised_graceful_restart; //type: boolean
        ydk::YLeaf is_graceful_restart_state_flag; //type: boolean
        ydk::YLeaf is_received_graceful_restart_capable; //type: boolean
        ydk::YLeaf is_add_path_send_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_send_capability_received; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_received; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf local_restart_time; //type: uint32
        ydk::YLeaf stale_path_timeout; //type: uint32
        ydk::YLeaf rib_purge_timeout_value; //type: uint32
        ydk::YLeaf neighbor_preserved_forwarding_state; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_configured; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_sent; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_stale_time_accept; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_capability_received; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_received; //type: uint32
        ydk::YLeaf neighbor_preserved_long_lived_forwarding_state; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_time_remaining; //type: uint32
        ydk::YLeaf is_prefix_orf_present; //type: boolean
        ydk::YLeaf orf_entries_received; //type: uint32
        ydk::YLeaf route_policy_prefix_orf; //type: string
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf route_policy_default_originate; //type: string
        ydk::YLeaf is_neighbor_ebgp_without_inbound_policy; //type: boolean
        ydk::YLeaf is_neighbor_ebgp_without_outbound_policy; //type: boolean
        ydk::YLeaf is_as_override_set; //type: boolean
        ydk::YLeaf is_allow_as_in_set; //type: boolean
        ydk::YLeaf allow_as_in_count; //type: uint32
        ydk::YLeaf address_family_long_lived_time; //type: uint32
        ydk::YLeaf is_aigp_set; //type: boolean
        ydk::YLeaf is_rt_present; //type: boolean
        ydk::YLeaf is_rt_present_standby; //type: boolean
        ydk::YLeaf accept_own_enabled; //type: boolean
        ydk::YLeaf selective_multipath_eligible; //type: boolean
        ydk::YLeaf afrpki_disable; //type: boolean
        ydk::YLeaf afrpki_use_validity; //type: boolean
        ydk::YLeaf afrpki_allow_invalid; //type: boolean
        ydk::YLeaf afrpki_signal_ibgp; //type: boolean
        ydk::YLeaf is_advertise_permanent_network; //type: boolean
        ydk::YLeaf is_send_mcast_attr; //type: boolean
        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean
        ydk::YLeaf advertise_v4_flags; //type: uint32
        ydk::YLeaf advertise_v6_flags; //type: uint32
        ydk::YLeaf enable_label_stack; //type: boolean
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity
        class ExtendedCommunityStandby; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby> > extended_community_standby;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby : public ydk::Entity
{
    public:
        ExtendedCommunityStandby();
        ~ExtendedCommunityStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_ : public ydk::Entity
{
    public:
        Instance_();
        ~Instance_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_idle_watch_timer_running; //type: boolean
        ydk::YLeaf connection_state; //type: BgpConnState
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress
        class NeighborAge; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge
        class IdleWatchTimerRemainingValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge> neighbor_age;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue> idle_watch_timer_remaining_value;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge : public ydk::Entity
{
    public:
        NeighborAge();
        ~NeighborAge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::NeighborAge


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue : public ydk::Entity
{
    public:
        IdleWatchTimerRemainingValue();
        ~IdleWatchTimerRemainingValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs : public ydk::Entity
{
    public:
        MessageLogs();
        ~MessageLogs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageLog; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog> > message_log;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog : public ydk::Entity
{
    public:
        MessageLog();
        ~MessageLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf direction; //type: int32
        class NeighborMessage; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage> > neighbor_message;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage : public ydk::Entity
{
    public:
        NeighborMessage();
        ~NeighborMessage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_type_received; //type: uint8
        ydk::YLeaf total_logged_message_count; //type: uint32
        ydk::YLeaf message_data_length; //type: uint16
        class MessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp
        class LoggedMessageData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp> message_timestamp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData> > logged_message_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp : public ydk::Entity
{
    public:
        MessageTimestamp();
        ~MessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData : public ydk::Entity
{
    public:
        LoggedMessageData();
        ~LoggedMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData


class Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess : public ydk::Entity
{
    public:
        UpdateInboundFilterProcess();
        ~UpdateInboundFilterProcess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_filtered_message_count; //type: uint32
        ydk::YLeaf update_filtered_neighbor_count; //type: uint32
        ydk::YLeaf last_update_filtered_age; //type: uint32
        class LastUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp> last_update_filtered_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess


class Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp : public ydk::Entity
{
    public:
        LastUpdateFilteredTimestamp();
        ~LastUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess::LastUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attribute; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute> > attribute;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_iid; //type: int32
        ydk::YLeaf attribute_cache_bucket; //type: int32
        ydk::YLeaf attribute_cache_id; //type: int32
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf attribute_instance_id; //type: uint8
        ydk::YLeaf attribute_structure_id; //type: uint32
        ydk::YLeaf attribute_structure_hash_value; //type: uint32
        ydk::YLeaf reference_count; //type: uint32
        class AttributeInfo; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo> attribute_info;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo : public ydk::Entity
{
    public:
        AttributeInfo();
        ~AttributeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_as_path2_byte; //type: boolean
        ydk::YLeaf is_application_gateway_present; //type: boolean
        ydk::YLeaf is_attr_set_present; //type: boolean
        ydk::YLeaf set_aigp_inbound_igp; //type: boolean
        ydk::YLeaf set_aigp_inbound_metric; //type: boolean
        ydk::YLeaf is_rnh_present; //type: boolean
        ydk::YLeaf is_ribrnh_present; //type: boolean
        ydk::YLeaf attribute_key_number; //type: uint32
        ydk::YLeaf attribute_reuse_id_config; //type: boolean
        ydk::YLeaf attribute_reuse_id_max_id; //type: uint32
        ydk::YLeaf attribute_reuse_id_node; //type: uint32
        ydk::YLeaf attribute_reuse_id_current; //type: uint32
        ydk::YLeaf attribute_reuse_id_keys; //type: uint32
        ydk::YLeaf attribute_reuse_id_recover_sec; //type: uint32
        ydk::YLeaf vpn_distinguisher; //type: uint32
        ydk::YLeaf rnh_type; //type: uint16
        ydk::YLeaf rnh_len; //type: uint8
        ydk::YLeaf rnh_addr_len; //type: uint32
        ydk::YLeaf ribrnh_table; //type: uint32
        ydk::YLeaf ribrnh_mac; //type: string
        ydk::YLeaf ribrnhip_table; //type: uint32
        ydk::YLeaf ribrnh_vni; //type: uint32
        ydk::YLeaf ribrnh_encap; //type: uint8
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes : public ydk::Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet : public ydk::Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr : public ydk::Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpRnhAddrLen
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp : public ydk::Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::RtEntries : public ydk::Entity
{
    public:
        RtEntries();
        ~RtEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtEntry; //type: Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry> > rt_entry;
        
}; // Bgp::Instances::Instance::InstanceStandby::RtEntries


class Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry : public ydk::Entity
{
    public:
        RtEntry();
        ~RtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_target_lower_bytes; //type: int32
        ydk::YLeaf route_target_upper_bytes; //type: int32
        ydk::YLeaf af_name; //type: BgpAddressFamily
        ydk::YLeaf request_id; //type: int32
        ydk::YLeaf afs; //type: string
        class Rt; //type: Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt> rt;
        
}; // Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry


class Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_target; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::RtEntries::RtEntry::Rt


class Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups : public ydk::Entity
{
    public:
        AttributeFilterGroups();
        ~AttributeFilterGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttributeFilterGroup; //type: Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup> > attribute_filter_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups


class Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup : public ydk::Entity
{
    public:
        AttributeFilterGroup();
        ~AttributeFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf attribute_filter_group_name; //type: string
        ydk::YLeaf attribute_filter_total_group_count; //type: uint32
        class AttributeFilterEntry; //type: Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry> > attribute_filter_entry;
        
}; // Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup


class Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry : public ydk::Entity
{
    public:
        AttributeFilterEntry();
        ~AttributeFilterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_filter_entry_requested_action; //type: BgpBagUpdFilterAction
        ydk::YLeaf attribute_filter_entry_range_start; //type: uint32
        ydk::YLeaf attribute_filter_entry_range_end; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry


class Bgp::Instances::Instance::InstanceStandby::RpkiServerList : public ydk::Entity
{
    public:
        RpkiServerList();
        ~RpkiServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpkiServer; //type: Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer> > rpki_server;
        
}; // Bgp::Instances::Instance::InstanceStandby::RpkiServerList


class Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer : public ydk::Entity
{
    public:
        RpkiServer();
        ~RpkiServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf state; //type: BgpRpkiState
        ydk::YLeaf state_time; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf close_reason; //type: BgpRpkiCreason
        ydk::YLeaf close_time; //type: uint32
        ydk::YLeaf close_time_real; //type: uint32
        ydk::YLeaf read_bytes; //type: uint32
        ydk::YLeaf write_bytes; //type: uint32
        ydk::YLeaf transport; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf sshpid; //type: uint32
        ydk::YLeaf proto_state; //type: BgpRpkiPstate
        ydk::YLeaf proto_state_time; //type: uint32
        ydk::YLeaf serial; //type: uint32
        ydk::YLeaf nonce; //type: uint32
        ydk::YLeaf refresh_time; //type: int32
        ydk::YLeaf response_time; //type: int32
        ydk::YLeaf purge_time; //type: int32
        ydk::YLeaf ipv4roa; //type: uint32
        ydk::YLeaf ipv4roa_announce; //type: uint32
        ydk::YLeaf ipv4roa_withdraw; //type: uint32
        ydk::YLeaf ipv6roa; //type: uint32
        ydk::YLeaf ipv6roa_announce; //type: uint32
        ydk::YLeaf ipv6roa_withdraw; //type: uint32
        ydk::YLeaf proto_error; //type: BgpRpkiPerror

}; // Bgp::Instances::Instance::InstanceStandby::RpkiServerList::RpkiServer


class Bgp::Instances::Instance::InstanceStandby::RpkiRoutes : public ydk::Entity
{
    public:
        RpkiRoutes();
        ~RpkiRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpkiRoute; //type: Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute> > rpki_route;
        
}; // Bgp::Instances::Instance::InstanceStandby::RpkiRoutes


class Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute : public ydk::Entity
{
    public:
        RpkiRoute();
        ~RpkiRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpRpkiEdmAf
        ydk::YLeaf address; //type: string
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        class RpkiRoute_; //type: Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_> > rpki_route;
        
}; // Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute


class Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_ : public ydk::Entity
{
    public:
        RpkiRoute_();
        ~RpkiRoute_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpRpkiAf
        ydk::YLeaf address; //type: string
        ydk::YLeaf min_prefix_len; //type: uint8
        ydk::YLeaf max_prefix_len; //type: uint8
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf refcount; //type: uint16
        ydk::YLeaf server; //type: string
        ydk::YLeaf stale; //type: boolean

}; // Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_


class Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess : public ydk::Entity
{
    public:
        UpdateInboundErrorProcess();
        ~UpdateInboundErrorProcess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_error_handling_basic_ebgp; //type: boolean
        ydk::YLeaf update_error_handling_basic_ibgp; //type: boolean
        ydk::YLeaf update_error_handling_extended_ebgp; //type: boolean
        ydk::YLeaf update_error_handling_extended_ibgp; //type: boolean
        ydk::YLeaf update_malformed_message_count; //type: uint32
        ydk::YLeaf update_malformed_neighbor_count; //type: uint32
        ydk::YLeaf last_update_malformed_age; //type: uint32
        class LastUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp> last_update_malformed_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess


class Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp : public ydk::Entity
{
    public:
        LastUpdateMalformedTimestamp();
        ~LastUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_68_ */

