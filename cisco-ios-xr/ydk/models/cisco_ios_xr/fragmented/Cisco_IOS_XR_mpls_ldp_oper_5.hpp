#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_5_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics : public ydk::Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaGlobal; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal : public ydk::Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InitSync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync : public ydk::Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_cfged; //type: boolean
        ydk::YLeaf nsr_synced; //type: boolean
        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_peers; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_pfx; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_lcl_addr_wd; //type: uint32
        ydk::YLeaf num_lbl_adv; //type: uint32
        ydk::YLeaf ipc_msg_tx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_tx_bytes; //type: uint32
        ydk::YLeaf ipc_msg_rx_cnt; //type: uint32
        ydk::YLeaf ipc_msg_rx_bytes; //type: uint32
        ydk::YLeaf ipc_max_tx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_max_rx_batch_bytes; //type: uint32
        ydk::YLeaf ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf total_ipc_tx_fail_cnt; //type: uint32
        ydk::YLeaf ipc_restart_cnt; //type: uint32
        ydk::YLeaf ipc_default_mtu; //type: uint32
        ydk::YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors : public ydk::Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        ydk::YList ha_neighbor;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public ydk::Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf lsr_id_xr; //type: uint32
        ydk::YLeaf lbl_spc_id; //type: uint16
        ydk::YLeaf nsr_sync_state; //type: int32
        ydk::YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public ydk::Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf init_sync_start; //type: uint32
        ydk::YLeaf init_sync_end; //type: uint32
        ydk::YLeaf num_addr; //type: uint32
        ydk::YLeaf num_duplicate_addr; //type: uint32
        ydk::YLeaf num_rx_bytes; //type: uint32
        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf num_lbl; //type: uint32
        ydk::YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public ydk::Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_cap_sent; //type: uint32
        ydk::YLeaf num_cap_rcvd; //type: uint32
        ydk::YLeaf rem_lbl_wd; //type: uint32
        ydk::YLeaf rem_lbl_rq; //type: uint32
        ydk::YLeaf num_stdby_adj_join; //type: uint32
        ydk::YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities : public ydk::Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborCapability; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability

        ydk::YList neighbor_capability;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability : public ydk::Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received

        ydk::YList sent;
        ydk::YList received;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        ydk::YList ldp_nbr_bound_ipv4_address_info;
        ydk::YList ldp_nbr_bound_ipv6_address_info;
        ydk::YList ldp_nbr_ipv4_adj_info;
        ydk::YList ldp_nbr_ipv6_adj_info;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation : public ydk::Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ta_holdtime; //type: uint32
        ydk::YLeaf ta_state; //type: string
        ydk::YLeaf ta_pies_sent; //type: uint32
        ydk::YLeaf ta_pies_rcvd; //type: uint32
        ydk::YLeaf ta_up_time_seconds; //type: uint32
        ydk::YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public ydk::Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation : public ydk::Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public ydk::Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost : public ydk::Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation : public ydk::Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_holdtime; //type: uint32
        ydk::YLeaf keep_alive_interval; //type: uint32
        ydk::YLeaf peer_state; //type: string
        ydk::YLeaf has_ipv4_inbound; //type: boolean
        ydk::YLeaf inbound_ipv4acl; //type: string
        ydk::YLeaf has_ipv6_inbound; //type: boolean
        ydk::YLeaf inbound_ipv6acl; //type: string
        ydk::YLeaf has_ipv4_outbound; //type: boolean
        ydk::YLeaf outbound_ipv4acl; //type: string
        ydk::YLeaf has_ipv6_outbound; //type: boolean
        ydk::YLeaf outbound_ipv6acl; //type: string
        ydk::YLeaf has_sp; //type: boolean
        ydk::YLeaf sp_state; //type: string
        ydk::YLeaf sp_has_acl; //type: boolean
        ydk::YLeaf spacl; //type: string
        ydk::YLeaf sp_has_duration; //type: boolean
        ydk::YLeaf sp_duration; //type: uint32
        ydk::YLeaf spht_running; //type: boolean
        ydk::YLeaf spht_remaining; //type: uint32
        ydk::YLeaf nsr_sync_state; //type: MgmtLdpNsrPeerSyncState
        ydk::YLeaf nsr_last_sync_error; //type: MgmtLdpNsrPeerSyncErr
        ydk::YLeaf nsr_last_sync_nack_reason; //type: MgmtLdpNsrPeerLdpSyncNackRsn
        ydk::YLeaf bgp_advertisement_state; //type: MgmtLdpNbrBgpAdvtState
        ydk::YLeaf advertise_bgp_prefixes; //type: boolean
        class Capabilities; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        ydk::YList client;
        ydk::YList ipv4_duplicate_address;
        ydk::YList ipv6_duplicate_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        ydk::YList sent;
        ydk::YList received;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public ydk::Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public ydk::Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public ydk::Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public ydk::Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public ydk::Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public ydk::Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public ydk::Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencyGroup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public ydk::Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_type; //type: LdpAdjUnionDiscrim
        class LinkHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public ydk::Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public ydk::Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: DhcbState
        class LocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::LdpId : public ydk::Entity
{
    public:
        LdpId();
        ~LdpId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Global::Active::Vrfs::Vrf::LdpId


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistic; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic

        ydk::YList statistic;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf iccp_enabled; //type: boolean
        class MessageOut; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut> message_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn> message_in;
        
}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut : public ydk::Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageOut


class MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn : public ydk::Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::Global::Active::Vrfs::Vrf::Statistics::Statistic::MessageIn


class MplsLdp::Global::Active::DiscoverySummaryAll : public ydk::Entity
{
    public:
        DiscoverySummaryAll();
        ~DiscoverySummaryAll();

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

        ydk::YLeaf local_ldp_id; //type: string
        ydk::YLeaf num_of_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_active_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_lnk_disc_xmit; //type: uint32
        ydk::YLeaf num_of_tgt_disc_xmit; //type: uint32
        ydk::YLeaf num_of_lnk_disc_recv; //type: uint32
        ydk::YLeaf num_of_tgt_disc_recv; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        ydk::YLeaf num_of_disc_with_same_router_id; //type: uint32
        ydk::YLeaf num_of_disc_with_wrong_router_id; //type: uint32
        class Vrf; //type: MplsLdp::Global::Active::DiscoverySummaryAll::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::DiscoverySummaryAll::Vrf> vrf;
        
}; // MplsLdp::Global::Active::DiscoverySummaryAll


class MplsLdp::Global::Active::DiscoverySummaryAll::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Global::Active::DiscoverySummaryAll::Vrf


class MplsLdp::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: MplsLdp::Nodes::Node

        ydk::YList node;
        
}; // MplsLdp::Nodes


class MplsLdp::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class DefaultVrf; //type: MplsLdp::Nodes::Node::DefaultVrf
        class ForwardingSummaryAll; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::BindingsSummaryAll
        class AtoMdbTableEntries; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries
        class NsrSummaryAll; //type: MplsLdp::Nodes::Node::NsrSummaryAll
        class Summary; //type: MplsLdp::Nodes::Node::Summary
        class Vrfs; //type: MplsLdp::Nodes::Node::Vrfs
        class DiscoverySummaryAll; //type: MplsLdp::Nodes::Node::DiscoverySummaryAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll> forwarding_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries> ato_mdb_table_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll> nsr_summary_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DiscoverySummaryAll> discovery_summary_all;
        
}; // MplsLdp::Nodes::Node


class MplsLdp::Nodes::Node::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities
        class Summary; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary
        class Afs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs
        class NeighborBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Nodes::Node::DefaultVrf::Backoffs
        class Nsr; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr
        class Parameters; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters
        class Issu; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors
        class LdpId; //type: MplsLdp::Nodes::Node::DefaultVrf::LdpId
        class Statistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities> capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Backoffs> backoffs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters> parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::LdpId> ldp_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics> statistics;
        
}; // MplsLdp::Nodes::Node::DefaultVrf


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        ydk::YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf
        class GracefulRestartableNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf> vrf;
        ydk::YList graceful_restartable_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor : public ydk::Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_count; //type: uint32
        ydk::YLeaf is_neighbor_up; //type: boolean
        ydk::YLeaf is_liveness_timer_running; //type: boolean
        ydk::YLeaf liveness_timer_remaining_seconds; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf recovery_timer_remaining_seconds; //type: uint32
        ydk::YLeaf down_nbr_flap_count; //type: uint8
        ydk::YLeaf down_nbr_flags; //type: uint32
        ydk::YLeaf down_nbr_down_reason; //type: uint32
        class GrPeer; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;
        ydk::YList down_nbr_interface;
        ydk::YList down_nbr_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public ydk::Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public ydk::Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAfId
        ydk::YLeaf interface_handle; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public ydk::Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Capability; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability

        ydk::YList capability;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability_type; //type: uint32
        ydk::YLeaf capability_owner; //type: string
        class Capability_; //type: MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_> capability;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability


class MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_ : public ydk::Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Capabilities::Capability::Capability_


class MplsLdp::Nodes::Node::DefaultVrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf
        class Common; //type: MplsLdp::Nodes::Node::DefaultVrf::Summary::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Summary::Common> common;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Summary


class MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Summary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Summary::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_families; //type: LdpAf
        ydk::YLeaf number_of_ipv4af; //type: uint32
        ydk::YLeaf number_of_ipv6af; //type: uint32
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_nsr_synced_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf number_of_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv6_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv6_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ipv6_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_local_bindings_ipv6; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv4; //type: uint32
        ydk::YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Summary::Common


class MplsLdp::Nodes::Node::DefaultVrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af

        ydk::YList af;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MplsLdpOperAfName
        class InterfaceSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery
        class Forwardings; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp> igp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary> forwarding_summary;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf known_ip_interface_count; //type: uint32
        ydk::YLeaf known_ip_interface_ldp_enabled; //type: uint32
        ydk::YLeaf ldp_configured_attached_interface; //type: uint32
        ydk::YLeaf ldp_configured_te_interface; //type: uint32
        ydk::YLeaf forward_references; //type: uint32
        ydk::YLeaf auto_config_disabled; //type: uint32
        ydk::YLeaf auto_config; //type: uint32
        ydk::YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::InterfaceSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding

        ydk::YList binding;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf le_local_binding_revision; //type: uint32
        ydk::YLeaf le_local_label_state; //type: LocalLabelState
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf advertise_prefix_acl; //type: string
        ydk::YLeaf advertise_tsr_acl; //type: string
        ydk::YLeaf config_enforced_local_label_value; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf
        class PrefixXr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        ydk::YList remote_binding;
        ydk::YList peers_advertised_to;
        ydk::YList peers_acked;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr : public ydk::Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding : public ydk::Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_elc; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public ydk::Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public ydk::Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked : public ydk::Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Syncs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs> syncs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs : public ydk::Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync

        ydk::YList sync;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf igp_sync_state; //type: LdpIgpSyncState
        ydk::YLeaf igp_sync_delay; //type: uint32
        ydk::YLeaf is_delay_timer_running; //type: boolean
        ydk::YLeaf delay_timer_remaining; //type: uint32
        ydk::YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReason
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf
        class Peers; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf> vrf;
        ydk::YList peers;
        ydk::YList gr_only_peer;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf is_gr_enabled; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public ydk::Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf is_chkpt_created; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart : public ydk::Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf delay_secs; //type: uint32
        ydk::YLeaf timer_running; //type: boolean
        ydk::YLeaf remaining_secs; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary : public ydk::Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf> vrf;
        ydk::YList bind_af;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf : public ydk::Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf last_lib_update; //type: uint32
        ydk::YLeaf lib_minimum_revision_sent_all; //type: uint32
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface

        ydk::YList interface;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf ldp_enabled; //type: boolean
        ydk::YLeaf is_im_stale; //type: boolean
        ydk::YLeaf ldp_config_mode; //type: boolean
        ydk::YLeaf ldp_autoconfig_disable; //type: boolean
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf
        class TeMeshGrp; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf> vrf;
        ydk::YList te_mesh_grp;
        ydk::YList auto_config;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public ydk::Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        ydk::YLeaf ldp_mesh_group_enabled; //type: boolean
        ydk::YLeaf te_mesh_group_id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig : public ydk::Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHellos; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats> stats;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos : public ydk::Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHello; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello

        ydk::YList link_hello;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello : public ydk::Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf next_hello; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf quick_start_disabled; //type: boolean
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf> vrf;
        ydk::YList hello_information;
        ydk::YList discovery_link_af;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public ydk::Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf local_hold_time; //type: uint32
        ydk::YLeaf neighbor_hold_time; //type: uint32
        ydk::YLeaf disc_expiry; //type: uint32
        ydk::YLeaf is_targeted; //type: boolean
        ydk::YLeaf session_up; //type: boolean
        ydk::YLeaf established_time; //type: uint64
        ydk::YLeaf established_age; //type: uint64
        ydk::YLeaf session_bringup_failure_reason; //type: string
        class NeighborSrcAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;
        ydk::YList last_session_down_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public ydk::Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public ydk::Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public ydk::Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_session_down_reason; //type: string
        ydk::YLeaf last_session_down_time; //type: uint64
        ydk::YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public ydk::Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        class LocalSrcAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public ydk::Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public ydk::Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ldp_id; //type: string
        ydk::YLeaf num_of_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_active_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_lnk_disc_xmit; //type: uint32
        ydk::YLeaf num_of_tgt_disc_xmit; //type: uint32
        ydk::YLeaf num_of_lnk_disc_recv; //type: uint32
        ydk::YLeaf num_of_tgt_disc_recv; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        ydk::YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        ydk::YLeaf num_of_disc_with_same_router_id; //type: uint32
        ydk::YLeaf num_of_disc_with_wrong_router_id; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Summary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos : public ydk::Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetedHello; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        ydk::YList targeted_hello;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public ydk::Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf state; //type: DhcbState
        ydk::YLeaf adjacency_ldp_identifier; //type: string
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf next_hello; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf local_hold_time; //type: uint32
        ydk::YLeaf neighbor_hold_time; //type: uint32
        ydk::YLeaf disc_expiry; //type: uint32
        ydk::YLeaf quick_start_disabled; //type: boolean
        ydk::YLeaf established_time; //type: uint64
        ydk::YLeaf established_age; //type: uint64
        ydk::YLeaf session_up; //type: boolean
        ydk::YLeaf session_bringup_failure_reason; //type: string
        class DhcbLocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        ydk::YList last_session_down_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public ydk::Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public ydk::Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public ydk::Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_session_down_reason; //type: string
        ydk::YLeaf last_session_down_time; //type: uint64
        ydk::YLeaf last_session_up_time; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHelloBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public ydk::Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkHelloBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        ydk::YList link_hello_brief;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public ydk::Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf address_family; //type: LdpAf
        ydk::YLeaf address_family_set; //type: LdpAf
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf> vrf;
        ydk::YList hello_information;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public ydk::Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf session_up; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public ydk::Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetedHelloBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        ydk::YList targeted_hello_brief;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public ydk::Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf address_family; //type: LdpAf
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf
        class DhcbTargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        ydk::YList hello_information;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public ydk::Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public ydk::Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf session_up; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stat; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat

        ydk::YList stat;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat : public ydk::Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf adjacency_group_up_time; //type: uint32
        ydk::YLeaf tcp_open_count; //type: uint32
        ydk::YLeaf tcp_arb_chg_count; //type: uint32
        ydk::YLeaf tcp_role; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings : public ydk::Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Forwarding; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding

        ydk::YList forwarding;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix_length; //type: uint8
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf
        class PrefixXr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route> route;
        ydk::YList paths;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public ydk::Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routing; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf source; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_local_vrf_leaked; //type: boolean
        ydk::YLeaf routing_update_count; //type: uint32
        ydk::YLeaf routing_update_timestamp; //type: uint64
        ydk::YLeaf routing_update_age; //type: uint64
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf forwarding_update_count; //type: uint32
        ydk::YLeaf forwarding_update_timestamp; //type: uint64
        ydk::YLeaf forwarding_update_age; //type: uint64

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routing; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf nh_is_overriden; //type: boolean
        ydk::YLeaf nexthop_id; //type: uint32
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf bkup_path_id; //type: uint8
        ydk::YLeaf path_flags; //type: LdpRoutePathFlags
        class NextHop; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_remote_lfa_bkup; //type: boolean
        ydk::YLeaf needs_tldp; //type: boolean
        ydk::YLeaf has_q_node; //type: boolean
        class RemotePNodeId; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public ydk::Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public ydk::Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LdpAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public ydk::Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_rsn; //type: LdpFwdUnlblRsn
        ydk::YLeaf out_label_type; //type: LabelValue
        ydk::YLeaf out_label_owner; //type: LdpRoutePathLblOwner
        ydk::YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public ydk::Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_remote_lfa_bkup; //type: boolean
        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public ydk::Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        ydk::YList stack;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_rsn; //type: LdpFwdUnlblRsn
        ydk::YLeaf out_label_type; //type: LabelValue
        ydk::YLeaf out_label_owner; //type: LdpRoutePathLblOwner
        ydk::YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public ydk::Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16
        ydk::YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec : public ydk::Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllocationAcl; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;
        ydk::YList advt_acl;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public ydk::Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_acl; //type: boolean
        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf is_host_route_only; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public ydk::Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_acl; //type: string
        ydk::YLeaf peer_acl; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary : public ydk::Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_lsd_bound; //type: boolean
        ydk::YLeaf fsht; //type: uint16
        ydk::YLeaf intfs; //type: uint16
        ydk::YLeaf lbls; //type: uint16
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf
        class Rws; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws> rws;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws : public ydk::Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pfxs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public ydk::Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_pfxs; //type: uint16
        ydk::YLeaf ecmp_pfxs; //type: uint16
        ydk::YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public ydk::Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_5_ */

