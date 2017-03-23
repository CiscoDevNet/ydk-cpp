#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_67_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_67_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_49.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_66.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray : public Entity
{
    public:
        NsrPlSendDropArray();
        ~NsrPlSendDropArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop : public Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPlRecvDropArray; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray> > nsr_pl_recv_drop_array;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray : public Entity
{
    public:
        NsrPlRecvDropArray();
        ~NsrPlRecvDropArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint : public Entity
{
    public:
        NplEndpoint();
        ~NplEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf endpoint_name; //type: string
        YLeaf sync_group_name; //type: string
        YLeaf node_id; //type: string
        YLeaf endpoint_handle; //type: uint64
        YLeaf endpoint_stale_flag; //type: boolean
        YLeaf endpoint_issu_role; //type: string
        YLeaf endpoint_active_flag; //type: boolean
        YLeaf msg_size; //type: uint32
        YLeaf wheel_id; //type: uint32
        YLeaf expected_sequence_num; //type: uint32

        class Endpoint; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint> > endpoint;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint : public Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime : public Entity
{
    public:
        ActiveNsrModeEnterTime();
        ~ActiveNsrModeEnterTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime : public Entity
{
    public:
        StandbyNsrModeEnterTime();
        ~StandbyNsrModeEnterTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime : public Entity
{
    public:
        ActiveNsrfoTime();
        ~ActiveNsrfoTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo : public Entity
{
    public:
        PostitCountInfo();
        ~PostitCountInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf postit_count; //type: uint32
        YLeaf vrf_name; //type: string

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone : public Entity
{
    public:
        IssuMilestone();
        ~IssuMilestone();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf milestone_name; //type: string
        YLeaf milestone_start_timestamp; //type: uint32
        YLeaf milestone_met_timestamp; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lpts_set_up_time; //type: uint32
        YLeaf lpts_calls; //type: uint32
        YLeaf read_throttles_count; //type: uint32
        YLeaf low_throttled_read_count; //type: uint32
        YLeaf high_throttled_read_count; //type: uint32
        YLeaf read_calls_count; //type: uint32
        YLeaf read_messages_count; //type: uint32
        YLeaf data_bytes_read; //type: uint32
        YLeaf io_read_time; //type: uint32
        YLeaf write_calls_count; //type: uint32
        YLeaf data_bytes_written; //type: uint32
        YLeaf io_write_time; //type: uint32
        YLeaf write_subgroup_calls_count; //type: uint32
        YLeaf write_subgroup_messages_count; //type: uint32
        YLeaf subgroup_list_time; //type: uint32
        YLeaf write_queue_calls_count; //type: uint32
        YLeaf write_queue_messages_count; //type: uint32
        YLeaf write_queue_time; //type: uint32
        YLeaf inbound_update_messages; //type: uint32
        YLeaf inbound_update_messages_time; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions : public Entity
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



        class Session; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session> > session;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session : public Entity
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


        YLeaf neighbor_address; //type: string
        YLeaf speaker_id; //type: uint8
        YLeaf description; //type: string
        YLeaf local_as; //type: uint32
        YLeaf remote_as; //type: uint32
        YLeaf messages_queued_in; //type: uint32
        YLeaf messages_queued_out; //type: uint32
        YLeaf connection_state; //type: BgpConnStateEnum
        YLeaf is_local_address_configured; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_state; //type: BgpSyncNbrNsrStateEnum
        YLeaf postit_pending; //type: boolean

        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress> connection_remote_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress : public Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress : public Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf speaker_id; //type: uint8
        YLeaf description; //type: string
        YLeaf local_as; //type: uint32
        YLeaf remote_as; //type: uint32
        YLeaf has_internal_link; //type: boolean
        YLeaf is_external_neighbor_not_directly_connected; //type: boolean
        YLeaf messages_received; //type: uint32
        YLeaf messages_sent; //type: uint32
        YLeaf update_messages_in; //type: uint32
        YLeaf update_messages_out; //type: uint32
        YLeaf messages_queued_in; //type: uint32
        YLeaf messages_queued_out; //type: uint32
        YLeaf connection_established_time; //type: uint32
        YLeaf connection_state; //type: BgpConnStateEnum
        YLeaf previous_connection_state; //type: uint32
        YLeaf connection_admin_status; //type: uint32
        YLeaf open_check_error_code; //type: BgpOpenCheckErrEnum
        YLeaf is_local_address_configured; //type: boolean
        YLeaf connection_local_port; //type: uint32
        YLeaf connection_remote_port; //type: uint32
        YLeaf neighbor_interface_handle; //type: uint32
        YLeaf reset_notification_sent; //type: boolean
        YLeaf is_administratively_shut_down; //type: boolean
        YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        YLeaf is_out_of_memory_shutdown; //type: boolean
        YLeaf is_out_of_memory_forced_up; //type: boolean
        YLeaf is_ebgp_peer_as_league; //type: boolean
        YLeaf is_ebgp_peer_common_admin; //type: boolean
        YLeaf ttl_security_enabled; //type: boolean
        YLeaf suppress4_byte_as; //type: boolean
        YLeaf bfd_session_state; //type: BgpBfdStateEnum
        YLeaf bfd_session_created_state; //type: BgpBfdStateEnum
        YLeaf bfd_session_enable_mode; //type: BgpBfdEnableModeEnum
        YLeaf bfd_minintervalval; //type: uint32
        YLeaf bfd_multiplierval; //type: uint32
        YLeaf bfd_state_ts; //type: uint64
        YLeaf router_id; //type: string
        YLeaf negotiated_protocol_version; //type: uint16
        YLeaf ebgp_time_to_live; //type: uint32
        YLeaf is_ebgp_multihop_bgpmpls_forwarding_disabled; //type: boolean
        YLeaf tcpmss; //type: uint32
        YLeaf msg_log_in; //type: uint32
        YLeaf msg_log_out; //type: uint32
        YLeaf neighbor_local_as; //type: uint32
        YLeaf local_as_no_prepend; //type: boolean
        YLeaf is_capability_negotiation_suppressed; //type: boolean
        YLeaf is_capability_negotiation_performed; //type: boolean
        YLeaf is_route_refresh_capability_received; //type: boolean
        YLeaf is_route_refresh_old_capability_received; //type: boolean
        YLeaf is_gr_aware; //type: boolean
        YLeaf is4_byte_as_capability_received; //type: boolean
        YLeaf is4_byte_as_capability_sent; //type: boolean
        YLeaf multi_protocol_capability_received; //type: boolean
        YLeaf hold_time; //type: uint16
        YLeaf keep_alive_time; //type: uint16
        YLeaf configured_hold_time; //type: uint16
        YLeaf configured_keepalive; //type: uint16
        YLeaf configured_min_acc_hold_time; //type: uint16
        YLeaf min_advertise_interval; //type: uint32
        YLeaf min_advertise_interval_msecs; //type: uint32
        YLeaf min_origination_interval; //type: uint16
        YLeaf connect_retry_interval; //type: uint16
        YLeaf time_since_last_update; //type: uint32
        YLeaf time_since_last_read; //type: uint32
        YLeaf time_since_last_read_reset; //type: uint32
        YLeaf time_last_cb; //type: uint64
        YLeaf time_last_cb_reset; //type: uint32
        YLeaf time_last_fb; //type: uint64
        YLeaf count_last_write; //type: uint32
        YLeaf time_since_last_write; //type: uint32
        YLeaf attempted_last_write_bytes; //type: uint32
        YLeaf actual_last_write_bytes; //type: uint32
        YLeaf time_since_second_last_write; //type: uint32
        YLeaf attempted_second_last_write_bytes; //type: uint32
        YLeaf actual_second_last_write_bytes; //type: uint32
        YLeaf time_since_last_write_reset; //type: uint32
        YLeaf attempted_last_write_reset_bytes; //type: uint32
        YLeaf actual_last_write_reset_bytes; //type: uint32
        YLeaf time_since_second_last_write_reset; //type: uint32
        YLeaf attempted_second_last_write_reset_bytes; //type: uint32
        YLeaf actual_second_last_write_reset_bytes; //type: uint32
        YLeaf last_write_event; //type: uint32
        YLeaf second_last_write_event; //type: uint32
        YLeaf last_k_aexpiry_reset; //type: uint32
        YLeaf second_last_k_aexpiry_reset; //type: uint32
        YLeaf last_k_anotsent_reset; //type: uint32
        YLeaf last_k_aerror_reset; //type: uint32
        YLeaf last_k_astart_reset; //type: uint32
        YLeaf second_last_k_astart_reset; //type: uint32
        YLeaf connection_up_count; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeaf time_since_connection_last_dropped; //type: uint32
        YLeaf reset_reason; //type: BgpResetReasonIndexEnum
        YLeaf peer_reset_reason; //type: BgpPeerResetReasonIndexEnum
        YLeaf peer_error_code; //type: uint32
        YLeaf last_notify_error_code; //type: uint8
        YLeaf last_notify_error_subcode; //type: uint8
        YLeaf error_notifies_received; //type: uint32
        YLeaf error_notifies_sent; //type: uint32
        YLeaf remote_as_number; //type: uint32
        YLeaf dmz_link_bandwidth; //type: uint32
        YLeaf ebgp_recv_dmz; //type: boolean
        YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf tos_type; //type: uint8
        YLeaf tos_value; //type: uint8
        YLeaf tcp_session_open_mode; //type: BgpTcpModeEnum
        YLeaf vrf_name; //type: string
        YLeaf standby_rp; //type: boolean
        YLeaf nsr_enabled; //type: boolean
        YLeaf graceful_restart_enabled_nbr; //type: boolean
        YLeaf gr_restart_time; //type: uint32
        YLeaf gr_stale_path_time; //type: uint32
        YLeaf fssn_offset; //type: uint32
        YLeaf fpbsn_offset; //type: uint32
        YLeaf last_ackd_seq_no; //type: uint32
        YLeaf bytes_written; //type: uint32
        YLeaf bytes_read; //type: uint32
        YLeaf socket_read_bytes; //type: uint32
        YLeaf is_read_disabled; //type: boolean
        YLeaf update_bytes_read; //type: uint32
        YLeaf nsr_state; //type: BgpSyncNbrNsrStateEnum
        YLeaf is_passive_close; //type: boolean
        YLeaf nbr_enforce_first_as; //type: boolean
        YLeaf active_bmp_servers; //type: uint8
        YLeaf nbr_cluster_id; //type: uint32
        YLeaf nbr_in_cluster; //type: uint8
        YLeaf ignore_connected; //type: boolean
        YLeaf internal_vpn_client; //type: boolean
        YLeaf io_armed; //type: boolean
        YLeaf read_armed; //type: boolean
        YLeaf write_armed; //type: boolean
        YLeaf discard_data_bytes; //type: uint32
        YLeaf local_as_replace_as; //type: boolean
        YLeaf local_as_dual_as; //type: boolean
        YLeaf local_as_dual_as_mode_native; //type: boolean
        YLeaf egress_peer_engineering_enabled; //type: boolean
        YLeaf discard_as4_path; //type: uint32
        YLeaf rpki_disable; //type: boolean
        YLeaf rpki_use_validity; //type: boolean
        YLeaf rpki_allow_invalid; //type: boolean
        YLeaf rpki_signal_ibgp; //type: boolean
        YLeaf dynamic_neighbor; //type: boolean

        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress
        class SendNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo
        class ReceivedNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics
        class MessageStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics
        class TcpInitSyncTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec
        class TcpInitSyncPhaseTwoTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec
        class TcpInitSyncDoneTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData> > af_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics> message_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics> performance_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo> received_notification_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo> send_notification_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec> tcp_init_sync_done_time_spec;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec> tcp_init_sync_phase_two_time_spec;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec> tcp_init_sync_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress : public Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress : public Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo : public Entity
{
    public:
        SendNotificationInfo();
        ~SendNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_since_last_notification; //type: uint32
        YLeaf notification_error_code; //type: uint8
        YLeaf notification_error_subcode; //type: uint8

        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData> > last_notification_data;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData : public Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo : public Entity
{
    public:
        ReceivedNotificationInfo();
        ~ReceivedNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_since_last_notification; //type: uint32
        YLeaf notification_error_code; //type: uint8
        YLeaf notification_error_subcode; //type: uint8

        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData> > last_notification_data;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData : public Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics : public Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf read_throttles; //type: uint32
        YLeaf low_throttled_read; //type: uint32
        YLeaf high_throttled_read; //type: uint32
        YLeaf time_since_last_throttled_read; //type: uint32
        YLeaf read_calls_count; //type: uint32
        YLeaf read_messages_count; //type: uint32
        YLeaf data_bytes_read; //type: uint32
        YLeaf io_read_time; //type: uint32
        YLeaf write_calls_count; //type: uint32
        YLeaf data_bytes_written; //type: uint32
        YLeaf io_write_time; //type: uint32
        YLeaf last_sent_seq_no; //type: uint32
        YLeaf write_subgroup_calls_count; //type: uint32
        YLeaf write_subgroup_messages_count; //type: uint32
        YLeaf subgroup_list_time; //type: uint32
        YLeaf write_queue_calls_count; //type: uint32
        YLeaf write_queue_messages_count; //type: uint32
        YLeaf write_queue_time; //type: uint32
        YLeaf inbound_update_messages; //type: uint32
        YLeaf inbound_update_messages_time; //type: uint32
        YLeaf maximum_read_size; //type: uint32
        YLeaf actives; //type: uint32
        YLeaf failed_post_actives; //type: uint32
        YLeaf passives; //type: uint32
        YLeaf rejected_passives; //type: uint32
        YLeaf active_collision; //type: uint32
        YLeaf passive_collision; //type: uint32
        YLeaf control_to_read_thread_trigger; //type: uint32
        YLeaf control_to_write_thread_trigger; //type: uint32
        YLeaf network_status; //type: uint32
        YLeaf reset_flags; //type: uint32
        YLeaf nbr_flags; //type: uint32
        YLeaf nbr_fd; //type: int32
        YLeaf reset_retries; //type: uint8
        YLeaf sync_flags; //type: uint32
        YLeaf nsr_oper_down_count; //type: uint32
        YLeaf last_nsr_scoped_sync; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics : public Entity
{
    public:
        MessageStatistics();
        ~MessageStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Open; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open
        class Notification; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification
        class Update; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update
        class Keepalive; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive
        class RouteRefresh; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh
        class Total; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification> notification;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open> open;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh> route_refresh;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total> total;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update> update;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open : public Entity
{
    public:
        Open();
        ~Open();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh : public Entity
{
    public:
        RouteRefresh();
        ~RouteRefresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx> rx;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx> tx;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx : public Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx : public Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf count; //type: uint32

        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec> last_time_spec;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec : public Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec : public Entity
{
    public:
        TcpInitSyncTimeSpec();
        ~TcpInitSyncTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec : public Entity
{
    public:
        TcpInitSyncPhaseTwoTimeSpec();
        ~TcpInitSyncPhaseTwoTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec : public Entity
{
    public:
        TcpInitSyncDoneTimeSpec();
        ~TcpInitSyncDoneTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance : public Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_exists; //type: boolean
        YLeaf gshut_local_active; //type: boolean
        YLeaf gshut_active; //type: boolean
        YLeaf gshut_locpref_set; //type: boolean
        YLeaf gshut_locpref; //type: uint32
        YLeaf gshut_prepends; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData : public Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAfiEnum
        YLeaf is_neighbor_route_reflector_client; //type: boolean
        YLeaf is_legacy_pe_rt; //type: boolean
        YLeaf is_neighbor_af_capable; //type: boolean
        YLeaf is_soft_reconfiguration_inbound_allowed; //type: boolean
        YLeaf is_use_soft_reconfiguration_always_on; //type: boolean
        YLeaf remove_private_as_from_updates; //type: boolean
        YLeaf remove_private_as_entire_aspath_from_updates; //type: boolean
        YLeaf remove_private_as_from_inbound_updates; //type: boolean
        YLeaf remove_private_as_entire_aspath_from_inbound_updates; //type: boolean
        YLeaf flowspec_validation_d_isable; //type: boolean
        YLeaf flowspec_redirect_validation_d_isable; //type: boolean
        YLeaf orr_group_name; //type: string
        YLeaf orr_group_index; //type: uint32
        YLeaf is_orr_root_address_configured; //type: boolean
        YLeaf advertise_afi; //type: boolean
        YLeaf advertise_afi_reorg; //type: boolean
        YLeaf advertise_afi_disable; //type: boolean
        YLeaf encapsulation_type; //type: uint32
        YLeaf advertise_rt_type; //type: uint8
        YLeaf advertise_afi_def_vrf_imp_disable; //type: boolean
        YLeaf advertise_evp_nv4afi_def_vrf_imp_disable; //type: boolean
        YLeaf advertise_evp_nv6afi_def_vrf_imp_disable; //type: boolean
        YLeaf advertise_afi_vrf_re_imp_disable; //type: boolean
        YLeaf advertise_evp_nv4afi_vrf_re_imp_disable; //type: boolean
        YLeaf advertise_evp_nv6afi_vrf_re_imp_disable; //type: boolean
        YLeaf advertise_afi_eo_r_ready; //type: boolean
        YLeaf always_use_next_hop_local; //type: boolean
        YLeaf sent_community_to_neighbor; //type: boolean
        YLeaf sent_gshut_community_to_neighbor; //type: boolean
        YLeaf sent_extended_community_to_neighbor; //type: boolean
        YLeaf neighbor_default_originate; //type: boolean
        YLeaf is_orf_sent; //type: boolean
        YLeaf is_update_deferred; //type: boolean
        YLeaf is_orf_send_scheduled; //type: boolean
        YLeaf update_group_number; //type: uint32
        YLeaf filter_group_index; //type: uint32
        YLeaf is_update_throttled; //type: boolean
        YLeaf is_update_leaving; //type: boolean
        YLeaf vpn_update_gen_enabled; //type: boolean
        YLeaf vpn_update_gen_trigger_enabled; //type: boolean
        YLeaf is_addpath_send_operational; //type: boolean
        YLeaf is_addpath_receive_operational; //type: boolean
        YLeaf neighbor_version; //type: uint32
        YLeaf weight; //type: uint32
        YLeaf max_prefix_limit; //type: uint32
        YLeaf use_max_prefix_warning_only; //type: boolean
        YLeaf max_prefix_discard_extra_paths; //type: boolean
        YLeaf max_prefix_exceed_discard_paths; //type: boolean
        YLeaf max_prefix_threshold_percent; //type: uint8
        YLeaf max_prefix_restart_time; //type: uint16
        YLeaf prefixes_accepted; //type: uint32
        YLeaf prefixes_synced; //type: uint32
        YLeaf prefixes_withdrawn_not_found; //type: uint32
        YLeaf prefixes_denied; //type: uint32
        YLeaf prefixes_denied_no_policy; //type: uint32
        YLeaf prefixes_denied_rt_permit; //type: uint32
        YLeaf prefixes_denied_orf_policy; //type: uint32
        YLeaf prefixes_denied_policy; //type: uint32
        YLeaf number_of_bestpaths; //type: uint32
        YLeaf number_of_best_externalpaths; //type: uint32
        YLeaf prefixes_advertised; //type: uint32
        YLeaf prefixes_be_advertised; //type: uint32
        YLeaf prefixes_suppressed; //type: uint32
        YLeaf prefixes_withdrawn; //type: uint32
        YLeaf is_peer_orf_capable; //type: boolean
        YLeaf is_advertised_orf_send; //type: boolean
        YLeaf is_received_orf_send_capable; //type: boolean
        YLeaf is_advertised_orf_receive; //type: boolean
        YLeaf is_received_orf_receive_capable; //type: boolean
        YLeaf is_advertised_graceful_restart; //type: boolean
        YLeaf is_graceful_restart_state_flag; //type: boolean
        YLeaf is_received_graceful_restart_capable; //type: boolean
        YLeaf is_add_path_send_capability_advertised; //type: boolean
        YLeaf is_add_path_send_capability_received; //type: boolean
        YLeaf is_add_path_receive_capability_advertised; //type: boolean
        YLeaf is_add_path_receive_capability_received; //type: boolean
        YLeaf is_ext_nh_encoding_capability_received; //type: boolean
        YLeaf is_ext_nh_encoding_capability_sent; //type: boolean
        YLeaf restart_time; //type: uint32
        YLeaf local_restart_time; //type: uint32
        YLeaf stale_path_timeout; //type: uint32
        YLeaf rib_purge_timeout_value; //type: uint32
        YLeaf neighbor_preserved_forwarding_state; //type: boolean
        YLeaf long_lived_graceful_restart_stale_time_configured; //type: boolean
        YLeaf long_lived_graceful_restart_stale_time_sent; //type: uint32
        YLeaf long_lived_graceful_restart_stale_time_accept; //type: uint32
        YLeaf long_lived_graceful_restart_capability_received; //type: boolean
        YLeaf long_lived_graceful_restart_stale_time_received; //type: uint32
        YLeaf neighbor_preserved_long_lived_forwarding_state; //type: boolean
        YLeaf neighbor_long_lived_graceful_restart_capable; //type: boolean
        YLeaf neighbor_long_lived_graceful_restart_time_remaining; //type: uint32
        YLeaf route_refreshes_received; //type: uint32
        YLeaf route_refreshes_sent; //type: uint32
        YLeaf refresh_target_version; //type: uint32
        YLeaf refresh_version; //type: uint32
        YLeaf refresh_acked_version; //type: uint32
        YLeaf is_prefix_orf_present; //type: boolean
        YLeaf orf_entries_received; //type: uint32
        YLeaf is_default_originate_sent; //type: boolean
        YLeaf route_policy_prefix_orf; //type: string
        YLeaf route_policy_in; //type: string
        YLeaf route_policy_out; //type: string
        YLeaf route_policy_default_originate; //type: string
        YLeaf is_neighbor_ebgp_without_inbound_policy; //type: boolean
        YLeaf is_neighbor_ebgp_without_outbound_policy; //type: boolean
        YLeaf is_as_override_set; //type: boolean
        YLeaf is_allow_as_in_set; //type: boolean
        YLeaf allow_as_in_count; //type: uint32
        YLeaf address_family_long_lived_time; //type: uint32
        YLeaf eo_r_received_in_read_only; //type: boolean
        YLeaf acked_version; //type: uint32
        YLeaf synced_acked_version; //type: uint32
        YLeaf outstanding_version; //type: uint32
        YLeaf outstanding_version_max; //type: uint32
        YLeaf is_aigp_set; //type: boolean
        YLeaf is_rt_present; //type: boolean
        YLeaf is_rt_present_standby; //type: boolean
        YLeaf accept_own_enabled; //type: boolean
        YLeaf selective_multipath_eligible; //type: boolean
        YLeaf afrpki_disable; //type: boolean
        YLeaf afrpki_use_validity; //type: boolean
        YLeaf afrpki_allow_invalid; //type: boolean
        YLeaf afrpki_signal_ibgp; //type: boolean
        YLeaf is_advertise_permanent_network; //type: boolean
        YLeaf is_send_mcast_attr; //type: boolean
        YLeaf import_stitching; //type: boolean
        YLeaf import_reoriginate; //type: boolean
        YLeaf import_reoriginate_stitching; //type: boolean
        YLeaf advertise_v4_flags; //type: uint32
        YLeaf advertise_v6_flags; //type: uint32
        YLeaf advertise_local_labeled_route_unicast; //type: boolean
        YLeaf prefixes_denied_non_cumulative; //type: uint32

        class NeighborAfPerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity
        class ExtendedCommunityStandby; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby> > extended_community_standby;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics> neighbor_af_performance_statistics;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics : public Entity
{
    public:
        NeighborAfPerformanceStatistics();
        ~NeighborAfPerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_pending_message_count; //type: uint32
        YLeaf processed_messages; //type: uint32
        YLeaf sent_messages; //type: uint32
        YLeaf split_horizon_update_transmit; //type: uint32
        YLeaf split_horizon_update_blocked; //type: uint32
        YLeaf split_horizon_withdraw_transmit; //type: uint32
        YLeaf split_horizon_withdraw_blocked; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby : public Entity
{
    public:
        ExtendedCommunityStandby();
        ~ExtendedCommunityStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf : public Entity
{
    public:
        NextHopVrf();
        ~NextHopVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_processing_time; //type: uint32
        YLeaf max_proc_notification_time; //type: uint32
        YLeaf max_notification_bestpath_deletes; //type: uint32
        YLeaf max_notification_bestpath_changes; //type: uint32
        YLeaf maximum_processing_time; //type: uint32
        YLeaf last_notificationication_time; //type: uint32
        YLeaf last_notification_processing_time; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges : public Entity
{
    public:
        NeighborRanges();
        ~NeighborRanges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborRange; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange> > neighbor_range;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange : public Entity
{
    public:
        NeighborRange();
        ~NeighborRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_range_address; //type: string
        YLeaf speaker_id; //type: uint8
        YLeaf description; //type: string
        YLeaf local_as; //type: uint32
        YLeaf remote_as; //type: uint32
        YLeaf has_internal_link; //type: boolean
        YLeaf is_local_address_configured; //type: boolean
        YLeaf neighbor_range_prefix_length; //type: uint8
        YLeaf is_administratively_shut_down; //type: boolean
        YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        YLeaf is_out_of_memory_forced_up; //type: boolean
        YLeaf ttl_security_enabled; //type: boolean
        YLeaf suppress4_byte_as; //type: boolean
        YLeaf bfd_session_enable_mode; //type: BgpBfdEnableModeEnum
        YLeaf bfd_minintervalval; //type: uint32
        YLeaf bfd_multiplierval; //type: uint32
        YLeaf ebgp_time_to_live; //type: uint32
        YLeaf is_ebgp_multihop_bgpmpls_forwarding_disabled; //type: boolean
        YLeaf tcpmss; //type: uint32
        YLeaf msg_log_in; //type: uint32
        YLeaf msg_log_out; //type: uint32
        YLeaf neighbor_local_as; //type: uint32
        YLeaf local_as_no_prepend; //type: boolean
        YLeaf is_capability_negotiation_performed; //type: boolean
        YLeaf configured_hold_time; //type: uint16
        YLeaf configured_keepalive; //type: uint16
        YLeaf configured_min_acc_hold_time; //type: uint16
        YLeaf min_advertise_interval; //type: uint32
        YLeaf min_advertise_interval_msecs; //type: uint32
        YLeaf min_origination_interval; //type: uint16
        YLeaf remote_as_number; //type: uint32
        YLeaf dmz_link_bandwidth; //type: uint32
        YLeaf ebgp_recv_dmz; //type: boolean
        YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf tos_type; //type: uint8
        YLeaf tos_value; //type: uint8
        YLeaf tcp_session_open_mode; //type: BgpTcpModeEnum
        YLeaf vrf_name; //type: string
        YLeaf standby_rp; //type: boolean
        YLeaf nsr_enabled; //type: boolean
        YLeaf graceful_restart_enabled_nbr; //type: boolean
        YLeaf gr_restart_time; //type: uint32
        YLeaf gr_stale_path_time; //type: uint32
        YLeaf is_passive_close; //type: boolean
        YLeaf nbr_enforce_first_as; //type: boolean
        YLeaf active_bmp_servers; //type: uint8
        YLeaf nbr_cluster_id; //type: uint32
        YLeaf nbr_in_cluster; //type: uint8
        YLeaf ignore_connected; //type: boolean
        YLeaf internal_vpn_client; //type: boolean
        YLeaf local_as_replace_as; //type: boolean
        YLeaf local_as_dual_as; //type: boolean
        YLeaf local_as_dual_as_mode_native; //type: boolean
        YLeaf egress_peer_engineering_enabled; //type: boolean
        YLeaf discard_as4_path; //type: uint32
        YLeaf rpki_disable; //type: boolean
        YLeaf rpki_use_validity; //type: boolean
        YLeaf rpki_allow_invalid; //type: boolean
        YLeaf rpki_signal_ibgp; //type: boolean
        YLeaf remote_as_list_name; //type: string
        YLeaf nbr_rcv_size; //type: uint32
        YLeaf nbr_send_size; //type: uint32
        YLeaf islocal_address_cfg; //type: boolean
        YLeaf update_source; //type: string
        YLeaf addpath_send_enable; //type: boolean
        YLeaf addpath_receive_enable; //type: boolean
        YLeaf addpath_send_disable; //type: boolean
        YLeaf addpath_receive_disable; //type: boolean
        YLeaf upd_errh_noreset; //type: boolean
        YLeaf msg_buf_count; //type: uint32
        YLeaf msg_bug_circular; //type: boolean
        YLeaf syslog_enable; //type: boolean
        YLeaf oper_attrf_enable; //type: boolean
        YLeaf attrf_group_name; //type: string
        YLeaf max_peers; //type: uint32
        YLeaf idle_watch_time; //type: uint32
        YLeaf current_peers; //type: uint32
        YLeaf range_open_match; //type: uint32
        YLeaf range_open_accepted; //type: uint32
        YLeaf range_max_drop; //type: uint32
        YLeaf range_inst_error; //type: uint32

        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance
        class CfgLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData
        class Instance_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData> > af_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress> cfg_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance> graceful_maintenance;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_> > instance;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress : public Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress : public Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance : public Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gshut_exists; //type: boolean
        YLeaf gshut_local_active; //type: boolean
        YLeaf gshut_active; //type: boolean
        YLeaf gshut_locpref_set; //type: boolean
        YLeaf gshut_locpref; //type: uint32
        YLeaf gshut_prepends; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress : public Entity
{
    public:
        CfgLocalAddress();
        ~CfgLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData : public Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAfiEnum
        YLeaf is_neighbor_route_reflector_client; //type: boolean
        YLeaf is_legacy_pe_rt; //type: boolean
        YLeaf is_neighbor_af_capable; //type: boolean
        YLeaf is_soft_reconfiguration_inbound_allowed; //type: boolean
        YLeaf is_use_soft_reconfiguration_always_on; //type: boolean
        YLeaf remove_private_as_from_updates; //type: boolean
        YLeaf remove_private_as_entire_aspath_from_updates; //type: boolean
        YLeaf remove_private_as_from_inbound_updates; //type: boolean
        YLeaf remove_private_as_entire_aspath_from_inbound_updates; //type: boolean
        YLeaf flowspec_validation_d_isable; //type: boolean
        YLeaf flowspec_redirect_validation_d_isable; //type: boolean
        YLeaf orr_group_name; //type: string
        YLeaf orr_group_index; //type: uint32
        YLeaf is_orr_root_address_configured; //type: boolean
        YLeaf advertise_afi; //type: boolean
        YLeaf advertise_afi_reorg; //type: boolean
        YLeaf advertise_afi_local; //type: boolean
        YLeaf advertise_afi_disable; //type: boolean
        YLeaf always_use_next_hop_local; //type: boolean
        YLeaf next_hop_unchanged; //type: boolean
        YLeaf sent_community_to_neighbor; //type: boolean
        YLeaf sent_gshut_community_to_neighbor; //type: boolean
        YLeaf sent_extended_community_to_neighbor; //type: boolean
        YLeaf neighbor_default_originate; //type: boolean
        YLeaf is_orf_sent; //type: boolean
        YLeaf is_update_deferred; //type: boolean
        YLeaf is_orf_send_scheduled; //type: boolean
        YLeaf vpn_update_gen_enabled; //type: boolean
        YLeaf vpn_update_gen_trigger_enabled; //type: boolean
        YLeaf is_addpath_send_operational; //type: boolean
        YLeaf is_addpath_receive_operational; //type: boolean
        YLeaf weight; //type: uint32
        YLeaf max_prefix_limit; //type: uint32
        YLeaf use_max_prefix_warning_only; //type: boolean
        YLeaf max_prefix_discard_extra_paths; //type: boolean
        YLeaf max_prefix_exceed_discard_paths; //type: boolean
        YLeaf max_prefix_threshold_percent; //type: uint8
        YLeaf max_prefix_restart_time; //type: uint16
        YLeaf is_peer_orf_capable; //type: boolean
        YLeaf is_advertised_orf_send; //type: boolean
        YLeaf is_received_orf_send_capable; //type: boolean
        YLeaf is_advertised_orf_receive; //type: boolean
        YLeaf is_received_orf_receive_capable; //type: boolean
        YLeaf is_advertised_graceful_restart; //type: boolean
        YLeaf is_graceful_restart_state_flag; //type: boolean
        YLeaf is_received_graceful_restart_capable; //type: boolean
        YLeaf is_add_path_send_capability_advertised; //type: boolean
        YLeaf is_add_path_send_capability_received; //type: boolean
        YLeaf is_add_path_receive_capability_advertised; //type: boolean
        YLeaf is_add_path_receive_capability_received; //type: boolean
        YLeaf restart_time; //type: uint32
        YLeaf local_restart_time; //type: uint32
        YLeaf stale_path_timeout; //type: uint32
        YLeaf rib_purge_timeout_value; //type: uint32
        YLeaf neighbor_preserved_forwarding_state; //type: boolean
        YLeaf long_lived_graceful_restart_stale_time_configured; //type: boolean
        YLeaf long_lived_graceful_restart_stale_time_sent; //type: uint32
        YLeaf long_lived_graceful_restart_stale_time_accept; //type: uint32
        YLeaf long_lived_graceful_restart_capability_received; //type: boolean
        YLeaf long_lived_graceful_restart_stale_time_received; //type: uint32
        YLeaf neighbor_preserved_long_lived_forwarding_state; //type: boolean
        YLeaf neighbor_long_lived_graceful_restart_capable; //type: boolean
        YLeaf neighbor_long_lived_graceful_restart_time_remaining; //type: uint32
        YLeaf is_prefix_orf_present; //type: boolean
        YLeaf orf_entries_received; //type: uint32
        YLeaf route_policy_prefix_orf; //type: string
        YLeaf route_policy_in; //type: string
        YLeaf route_policy_out; //type: string
        YLeaf route_policy_default_originate; //type: string
        YLeaf is_neighbor_ebgp_without_inbound_policy; //type: boolean
        YLeaf is_neighbor_ebgp_without_outbound_policy; //type: boolean
        YLeaf is_as_override_set; //type: boolean
        YLeaf is_allow_as_in_set; //type: boolean
        YLeaf allow_as_in_count; //type: uint32
        YLeaf address_family_long_lived_time; //type: uint32
        YLeaf is_aigp_set; //type: boolean
        YLeaf is_rt_present; //type: boolean
        YLeaf is_rt_present_standby; //type: boolean
        YLeaf accept_own_enabled; //type: boolean
        YLeaf selective_multipath_eligible; //type: boolean
        YLeaf afrpki_disable; //type: boolean
        YLeaf afrpki_use_validity; //type: boolean
        YLeaf afrpki_allow_invalid; //type: boolean
        YLeaf afrpki_signal_ibgp; //type: boolean
        YLeaf is_advertise_permanent_network; //type: boolean
        YLeaf is_send_mcast_attr; //type: boolean
        YLeaf import_stitching; //type: boolean
        YLeaf import_reoriginate; //type: boolean
        YLeaf import_reoriginate_stitching; //type: boolean
        YLeaf advertise_v4_flags; //type: uint32
        YLeaf advertise_v6_flags; //type: uint32

        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity
        class ExtendedCommunityStandby; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby> > extended_community_standby;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby : public Entity
{
    public:
        ExtendedCommunityStandby();
        ~ExtendedCommunityStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_ : public Entity
{
    public:
        Instance_();
        ~Instance_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_idle_watch_timer_running; //type: boolean
        YLeaf connection_state; //type: BgpConnStateEnum

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress
        class NeighborAge; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge
        class IdleWatchTimerRemainingValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue> idle_watch_timer_remaining_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress> neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge> neighbor_age;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge : public Entity
{
    public:
        NeighborAge();
        ~NeighborAge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue : public Entity
{
    public:
        IdleWatchTimerRemainingValue();
        ~IdleWatchTimerRemainingValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs : public Entity
{
    public:
        MessageLogs();
        ~MessageLogs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MessageLog; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog> > message_log;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog : public Entity
{
    public:
        MessageLog();
        ~MessageLog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf direction; //type: int32

        class NeighborMessage; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage> > neighbor_message;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage : public Entity
{
    public:
        NeighborMessage();
        ~NeighborMessage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf message_type_received; //type: uint8
        YLeaf total_logged_message_count; //type: uint32
        YLeaf message_data_length; //type: uint16

        class MessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp
        class LoggedMessageData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData> > logged_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp> message_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp : public Entity
{
    public:
        MessageTimestamp();
        ~MessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData : public Entity
{
    public:
        LoggedMessageData();
        ~LoggedMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UpdateInboundErrorVrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf
        class Afs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs
        class Information; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information
        class UpdateInboundFilterVrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf
        class Postits; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits
        class GlobalProcessInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo
        class UpdateInboundErrorNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors
        class UpdateInboundFilterNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors
        class Bmp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp
        class ProcessInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo
        class Sessions; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions
        class Neighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors
        class NextHopVrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf
        class NeighborRanges; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges
        class MessageLogs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp> bmp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo> global_process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs> message_logs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges> neighbor_ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf> next_hop_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits> postits;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo> process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors> update_inbound_error_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf> update_inbound_error_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors> update_inbound_filter_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf> update_inbound_filter_vrf;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf : public Entity
{
    public:
        UpdateInboundErrorVrf();
        ~UpdateInboundErrorVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_vrf_name; //type: string
        YLeaf update_malformed_message_count; //type: uint32
        YLeaf update_malformed_neighbor_count; //type: uint32
        YLeaf last_update_malformed_age; //type: uint32

        class LastUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp> last_update_malformed_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp : public Entity
{
    public:
        LastUpdateMalformedTimestamp();
        ~LastUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af> > af;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum

        class NetworkLookupAllRds; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds
        class Policies; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Policies
        class Convergence; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Convergence
        class AfProcessInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AfProcessInfo
        class PathUsedTable; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathUsedTable
        class RpcSets; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RpcSets
        class GlobalAfProcessInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::GlobalAfProcessInfo
        class NetworkPrefixes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes
        class AdvertisedPathXr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr
        class SourcedNetworks; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks
        class UpdateGroups; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups
        class UpdateGenerationSubGroups; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups
        class NextHopAddressFamilies; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies
        class RtSetCounters; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters
        class BmpPaths; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths
        class UpdateGenerationUpdateGroups; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups
        class UpdateGenerationFilterGroups; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups
        class Networks; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Networks
        class PathTable; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathTable
        class Epes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Epes
        class AdvertisedPathCounts; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts
        class PathLabeledTable; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathLabeledTable
        class AdvertisedPaths; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths
        class NeighborAfTable; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NeighborAfTable
        class NetworkAllRds; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds
        class UpdateGenerationNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationNeighbors
        class UpdateGenerationAddressFamily; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationAddressFamily
        class Dampenings; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings
        class PrefixFilters; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters
        class Attributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts> advertised_path_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr> advertised_path_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths> advertised_paths;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AfProcessInfo> af_process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths> bmp_paths;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Convergence> convergence;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings> dampenings;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Epes> epes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::GlobalAfProcessInfo> global_af_process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NeighborAfTable> neighbor_af_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds> network_all_rds;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds> network_lookup_all_rds;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes> network_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Networks> networks;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies> next_hop_address_families;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathLabeledTable> path_labeled_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathTable> path_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathUsedTable> path_used_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Policies> policies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters> prefix_filters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RpcSets> rpc_sets;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters> rt_set_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks> sourced_networks;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationAddressFamily> update_generation_address_family;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups> update_generation_filter_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationNeighbors> update_generation_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups> update_generation_sub_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups> update_generation_update_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups> update_groups;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds : public Entity
{
    public:
        NetworkLookupAllRds();
        ~NetworkLookupAllRds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetworkLookupAllRd; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd> > network_lookup_all_rd;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd : public Entity
{
    public:
        NetworkLookupAllRd();
        ~NetworkLookupAllRd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf network_prefix; //type: string

        class NetworkLookupRds; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds> network_lookup_rds;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds : public Entity
{
    public:
        NetworkLookupRds();
        ~NetworkLookupRds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetworkLookupRd; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd> > network_lookup_rd;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd : public Entity
{
    public:
        NetworkLookupRd();
        ~NetworkLookupRd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: string
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf process_instance_id; //type: uint8
        YLeaf has_inconsistent_paths; //type: boolean
        YLeaf is_net_aggregation_suppressed; //type: boolean
        YLeaf is_net_ldp_signaled; //type: boolean
        YLeaf table_version; //type: uint32
        YLeaf table_brib_version; //type: uint32
        YLeaf advertisedto_pe; //type: boolean
        YLeaf has_local_label; //type: boolean
        YLeaf net_local_label; //type: uint32
        YLeaf net_local_label_rewrite; //type: boolean
        YLeaf net_local_label_srgb; //type: boolean
        YLeaf has_lbl_retained; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf vrf_name; //type: string
        YLeaf net_flags; //type: uint32
        YLeaf net_extended_flags; //type: uint32
        YLeaf net_multipath; //type: boolean
        YLeaf net_eibgp_multipath; //type: boolean
        YLeaf net_backup_available; //type: boolean
        YLeaf net_backup_label_rewrite_available; //type: boolean
        YLeaf rib_failed; //type: boolean
        YLeaf gateway_array; //type: uint32
        YLeaf resilient_nexthop_set; //type: uint32
        YLeaf is_permanent_network; //type: boolean
        YLeaf num_of_path; //type: uint32
        YLeaf version; //type: uint32
        YLeaf bit; //type: uint16
        YLeaf flags; //type: uint8

        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield
        class LocalProcessInstancePath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath
        class ActiveProcessInstancePath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath
        class LocalPathElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement
        class ActivePathElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement> > active_path_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath> > active_process_instance_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement> > local_path_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath> > local_process_instance_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge> version_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp> version_timestamp;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix : public Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint16

        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix> prefix;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp : public Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge : public Entity
{
    public:
        VersionAge();
        ~VersionAge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo : public Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo : public Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield : public Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_67_ */

