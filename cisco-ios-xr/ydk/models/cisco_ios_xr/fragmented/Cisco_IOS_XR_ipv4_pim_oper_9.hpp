#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_9_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_8.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public ydk::Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public ydk::Entity
{
    public:
        RpfNexthop();
        ~RpfNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Pim::Standby::Vrfs::Vrf::Summary : public ydk::Entity
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

        ydk::YLeaf route_limit; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf route_low_water_mark; //type: uint32
        ydk::YLeaf is_route_limit_reached; //type: boolean
        ydk::YLeaf topology_interface_state_limit; //type: uint32
        ydk::YLeaf topology_interface_state_count; //type: uint32
        ydk::YLeaf rxi_low_water_mark; //type: uint32
        ydk::YLeaf rxi_limit_reached; //type: boolean
        ydk::YLeaf register_limit; //type: uint32
        ydk::YLeaf register_count; //type: uint32
        ydk::YLeaf register_limit_reached; //type: boolean
        ydk::YLeaf ranges_limit; //type: uint32
        ydk::YLeaf ranges_count; //type: uint32
        ydk::YLeaf ranges_threshold; //type: uint32
        ydk::YLeaf is_ranges_limit_reached; //type: boolean
        ydk::YLeaf bsr_ranges_limit; //type: uint32
        ydk::YLeaf bsr_ranges_count; //type: uint32
        ydk::YLeaf bsr_range_threshold; //type: uint32
        ydk::YLeaf is_bsr_ranges_threshold_reached; //type: boolean
        ydk::YLeaf bsr_candidate_rp_set_limit; //type: uint32
        ydk::YLeaf bsr_candidate_rp_set_count; //type: uint32
        ydk::YLeaf bsr_candidate_rp_set_threshold; //type: uint32
        ydk::YLeaf is_maximum_enforcement_disabled; //type: boolean
        ydk::YLeaf is_node_low_memory; //type: boolean
        ydk::YLeaf route_threshold; //type: uint32
        ydk::YLeaf global_auto_rp_ranges_limit; //type: uint32
        ydk::YLeaf is_global_auto_rp_ranges_limit_reached; //type: boolean
        ydk::YLeaf global_bsr_ranges_limit; //type: uint32
        ydk::YLeaf global_bsr_ranges_count; //type: uint32
        ydk::YLeaf global_bsr_ranges_threshold; //type: uint32
        ydk::YLeaf is_global_bsr_ranges_limit_reached; //type: boolean
        ydk::YLeaf global_bsr_candidate_rp_set_limit; //type: uint32
        ydk::YLeaf global_bsr_candidate_rp_set_count; //type: uint32
        ydk::YLeaf global_bsr_candidate_rp_set_threshold; //type: uint32
        ydk::YLeaf is_global_route_limit_reached; //type: boolean
        ydk::YLeaf topology_interface_state_threshold; //type: uint32
        ydk::YLeaf is_global_rxi_limit_reached; //type: boolean
        ydk::YLeaf register_threshold; //type: uint32
        ydk::YLeaf global_register_limit; //type: uint32
        ydk::YLeaf is_global_register_limit_reached; //type: boolean

}; // Pim::Standby::Vrfs::Vrf::Summary


class Pim::Standby::Vrfs::Vrf::TableContexts : public ydk::Entity
{
    public:
        TableContexts();
        ~TableContexts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TableContext; //type: Pim::Standby::Vrfs::Vrf::TableContexts::TableContext

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TableContexts::TableContext> > table_context;
        
}; // Pim::Standby::Vrfs::Vrf::TableContexts


class Pim::Standby::Vrfs::Vrf::TableContexts::TableContext : public ydk::Entity
{
    public:
        TableContext();
        ~TableContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf saf_name; //type: PimSafi
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf is_ital_registration_done; //type: boolean
        ydk::YLeaf is_rib_registration_done; //type: boolean
        ydk::YLeaf is_rib_convergence_received; //type: boolean
        ydk::YLeaf is_rib_convergence; //type: boolean
        ydk::YLeaf rpf_registrations; //type: uint32

}; // Pim::Standby::Vrfs::Vrf::TableContexts::TableContext


class Pim::Standby::Vrfs::Vrf::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology> > topology;
        
}; // Pim::Standby::Vrfs::Vrf::Topologies


class Pim::Standby::Vrfs::Vrf::Topologies::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf rpt; //type: int32
        ydk::YLeaf limit_reached; //type: boolean
        ydk::YLeaf low_memory; //type: boolean
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf wildcard; //type: boolean
        ydk::YLeaf rpt_xr; //type: boolean
        ydk::YLeaf spt; //type: boolean
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiry; //type: uint64
        ydk::YLeaf alive; //type: int32
        ydk::YLeaf register_received_timer; //type: int32
        ydk::YLeaf remote_source; //type: boolean
        ydk::YLeaf crossed_threshold; //type: boolean
        ydk::YLeaf data_mdt_addr_assigned; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        ydk::YLeaf rpf_safi; //type: uint8
        ydk::YLeaf rpf_table_name; //type: string
        ydk::YLeaf rpf_drop; //type: boolean
        ydk::YLeaf rpf_extranet; //type: boolean
        ydk::YLeaf is_via_lsm; //type: boolean
        ydk::YLeaf secondary_rpf_interface_name; //type: string
        ydk::YLeaf connected; //type: boolean
        ydk::YLeaf proxy; //type: boolean
        ydk::YLeaf rpf_proxy_enabled; //type: boolean
        ydk::YLeaf mofrr_enabled; //type: boolean
        ydk::YLeaf rib_mo_frr_enabled; //type: boolean
        ydk::YLeaf jp_timer; //type: int32
        ydk::YLeaf jp_status; //type: int32
        ydk::YLeaf suppress_registers; //type: int32
        ydk::YLeaf assume_alive; //type: boolean
        ydk::YLeaf probe_alive; //type: boolean
        ydk::YLeaf really_alive; //type: boolean
        ydk::YLeaf inherit_alive; //type: boolean
        ydk::YLeaf inherit_spt; //type: boolean
        ydk::YLeaf signal_sources; //type: boolean
        ydk::YLeaf dont_check_connected; //type: boolean
        ydk::YLeaf register_received; //type: boolean
        ydk::YLeaf last_hop; //type: boolean
        ydk::YLeaf sending_registers; //type: boolean
        ydk::YLeaf sending_null_registers; //type: boolean
        ydk::YLeaf sa_sent; //type: boolean
        ydk::YLeaf sa_received; //type: boolean
        ydk::YLeaf sa_joined; //type: boolean
        ydk::YLeaf anycast_rp_match; //type: boolean
        ydk::YLeaf anycast_rp_route_target; //type: string
        ydk::YLeaf bgp_join; //type: boolean
        ydk::YLeaf bgp_jp_time; //type: uint64
        ydk::YLeaf customer_routing_type; //type: int32
        ydk::YLeaf extranet_route; //type: boolean
        ydk::YLeaf mofrr_active; //type: boolean
        ydk::YLeaf mofrr_primary; //type: boolean
        ydk::YLeaf mofrr_backup; //type: boolean
        ydk::YLeaf vxlan; //type: boolean
        ydk::YLeaf kat_state; //type: boolean
        class GroupAddressXr; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr> source_address_xr;
        
}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress : public ydk::Entity
{
    public:
        OrigSrcAddress();
        ~OrigSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface : public ydk::Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

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
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiry; //type: uint64
        ydk::YLeaf bgp_c_mcast_prune_delay_timer; //type: uint64
        ydk::YLeaf jp_timer; //type: int32
        ydk::YLeaf jp_state; //type: int32
        ydk::YLeaf assert_timer; //type: int32
        ydk::YLeaf local_members; //type: int32
        ydk::YLeaf internal_interest_info; //type: int32
        ydk::YLeaf forwarding_state; //type: int32
        ydk::YLeaf immediate_state; //type: int32
        ydk::YLeaf last_hop; //type: boolean
        ydk::YLeaf mldp_inband_mdt; //type: boolean
        ydk::YLeaf mldp_stale; //type: boolean
        ydk::YLeaf sa_prune; //type: boolean
        ydk::YLeaf admin_boundary; //type: boolean
        ydk::YLeaf igmp_membership; //type: boolean
        ydk::YLeaf mdt_safi_join; //type: boolean
        ydk::YLeaf mvpn_safi_join; //type: boolean
        ydk::YLeaf local_mdt_join; //type: boolean
        ydk::YLeaf data_mdt_join; //type: boolean
        ydk::YLeaf mvpnv6_safi_join; //type: boolean
        ydk::YLeaf bgp_c_mcast_join; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf extranet_interface; //type: boolean
        ydk::YLeaf internal_interest_information; //type: PimInternalInterestInfo
        ydk::YLeaf local_members_information; //type: PimShowLocalInterest
        ydk::YLeaf assert_state; //type: boolean
        class AssertWinner; //type: Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;
        
}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner : public ydk::Entity
{
    public:
        AssertWinner();
        ~AssertWinner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress : public ydk::Entity
{
    public:
        ProxyAddress();
        ~ProxyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor : public ydk::Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot : public ydk::Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor : public ydk::Entity
{
    public:
        SecondaryRpfNeighbor();
        ~SecondaryRpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor


class Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr : public ydk::Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr


class Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts : public ydk::Entity
{
    public:
        TopologyEntryFlagRouteCounts();
        ~TopologyEntryFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyEntryFlagRouteCount; //type: Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount> > topology_entry_flag_route_count;
        
}; // Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts


class Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount : public ydk::Entity
{
    public:
        TopologyEntryFlagRouteCount();
        ~TopologyEntryFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_flag; //type: PimTopologyEntryFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount


class Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts : public ydk::Entity
{
    public:
        TopologyInterfaceFlagRouteCounts();
        ~TopologyInterfaceFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyInterfaceFlagRouteCount; //type: Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;
        
}; // Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts


class Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public ydk::Entity
{
    public:
        TopologyInterfaceFlagRouteCount();
        ~TopologyInterfaceFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_flag; //type: PimTopologyInterfaceFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Pim::Standby::Vrfs::Vrf::TopologyRouteCount : public ydk::Entity
{
    public:
        TopologyRouteCount();
        ~TopologyRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Pim::Standby::Vrfs::Vrf::TopologyRouteCount


class Pim::Standby::Vrfs::Vrf::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf inputs; //type: uint32
        ydk::YLeaf outputs; //type: uint32
        ydk::YLeaf format_error; //type: uint32
        ydk::YLeaf pakman_error; //type: uint32
        ydk::YLeaf standby_packets_error; //type: uint32
        ydk::YLeaf checksum_error; //type: uint32
        ydk::YLeaf socket_error; //type: uint32
        ydk::YLeaf send_queue_full; //type: uint32
        ydk::YLeaf boundary_acl_rx_drop; //type: uint32
        ydk::YLeaf boundary_acl_tx_drop; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf no_source_address; //type: uint32
        ydk::YLeaf input_hello; //type: uint32
        ydk::YLeaf output_hello; //type: uint32
        ydk::YLeaf input_jp; //type: uint32
        ydk::YLeaf output_jp; //type: uint32
        ydk::YLeaf input_data_register; //type: uint32
        ydk::YLeaf input_null_register; //type: uint32
        ydk::YLeaf output_data_register; //type: uint32
        ydk::YLeaf output_null_register; //type: uint32
        ydk::YLeaf input_register_stop; //type: uint32
        ydk::YLeaf output_register_stop; //type: uint32
        ydk::YLeaf input_assert; //type: uint32
        ydk::YLeaf input_assert_batched; //type: uint32
        ydk::YLeaf output_assert; //type: uint32
        ydk::YLeaf output_assert_batched; //type: uint32
        ydk::YLeaf input_df_election; //type: uint32
        ydk::YLeaf output_df_election; //type: uint32
        ydk::YLeaf input_bsr_message; //type: uint32
        ydk::YLeaf output_bsr_message; //type: uint32
        ydk::YLeaf input_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf output_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf input_ecmp_redirect; //type: uint32
        ydk::YLeaf output_ecmp_redirect; //type: uint32
        ydk::YLeaf output_loop_error; //type: uint32
        ydk::YLeaf mldp_mdt_invalid_lsm_identifier; //type: uint32
        ydk::YLeaf input_no_idb_error; //type: uint32
        ydk::YLeaf input_no_vrf_error; //type: uint32
        ydk::YLeaf input_no_pim_error; //type: uint32
        ydk::YLeaf input_pim_version_error; //type: uint32
        ydk::YLeaf output_join_group; //type: uint32
        ydk::YLeaf output_prune_group; //type: uint32
        ydk::YLeaf output_join_prune_bytes; //type: uint32
        ydk::YLeaf output_hello_bytes; //type: uint32
        ydk::YLeaf non_supported_packets; //type: uint32
        ydk::YLeaf invalid_registers; //type: uint32
        ydk::YLeaf invalid_join_prunes; //type: uint32
        ydk::YLeaf packet_packman_error; //type: uint32
        ydk::YLeaf packet_read_socket_error; //type: uint32
        ydk::YLeaf packet_queue_last_clear; //type: uint32
        ydk::YLeaf packets_standby; //type: uint32
        ydk::YLeaf no_mdt_socket_connection; //type: uint32
        ydk::YLeaf mdt_send_queue_full; //type: uint32
        ydk::YLeaf mdt_socket_error; //type: uint32
        ydk::YLeaf mdt_join_tlv_sent; //type: uint32
        ydk::YLeaf mdt_join_tlv_received; //type: uint32
        ydk::YLeaf mdt_join_bad_type; //type: uint32
        ydk::YLeaf mdt_drop_local_source_address; //type: uint32
        ydk::YLeaf mdt_drop_null_local_address; //type: uint32
        ydk::YLeaf mdt_drop_no_idb; //type: uint32
        ydk::YLeaf mdt_drop_no_vrf; //type: uint32
        ydk::YLeaf invalid_destination_packets; //type: uint32
        ydk::YLeaf mdt_joins_drop_multiple_encapsulation; //type: uint32
        ydk::YLeaf truncated_pim_packets; //type: uint32
        class PacketQueue; //type: Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue> > packet_queue;
        
}; // Pim::Standby::Vrfs::Vrf::TrafficCounters


class Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue : public ydk::Entity
{
    public:
        PacketQueue();
        ~PacketQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_queue_priority; //type: uint32
        class PacketQueueState; //type: Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;
        
}; // Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue


class Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState : public ydk::Entity
{
    public:
        PacketQueueState();
        ~PacketQueueState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_queue_size; //type: uint32
        ydk::YLeaf queue_size_bytes; //type: uint32
        ydk::YLeaf queue_size_packets; //type: uint32

}; // Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState


class Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats : public ydk::Entity
{
    public:
        PacketQueueStats();
        ~PacketQueueStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enqueued_packets; //type: uint32
        ydk::YLeaf dequeued_packets; //type: uint32
        ydk::YLeaf high_water_mark_packets; //type: uint32
        ydk::YLeaf high_water_mark_bytes; //type: uint32
        ydk::YLeaf tail_drops; //type: uint32

}; // Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats


class Pim::Standby::Vrfs::Vrf::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnel; //type: Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel> > tunnel;
        
}; // Pim::Standby::Vrfs::Vrf::Tunnels


class Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        class SourceAddress; //type: Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;
        
}; // Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel


class Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio : public ydk::Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio


class Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress


class Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress


class Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio : public ydk::Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio

class Pim6Ma : public ydk::Entity
{
    public:
        Pim6Ma();
        ~Pim6Ma();

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

        class Active; //type: Pim6Ma::Active
        class Standby; //type: Pim6Ma::Standby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby> standby;
        
}; // Pim6Ma


class Pim6Ma::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class InterfaceTable; //type: Pim6Ma::Active::InterfaceTable
        class PimMaSummary; //type: Pim6Ma::Active::PimMaSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::PimMaSummary> pim_ma_summary;
        
}; // Pim6Ma::Active


class Pim6Ma::Active::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

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

        class InterfaceByHandles; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames> interface_by_names;
        
}; // Pim6Ma::Active::InterfaceTable


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles : public ydk::Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

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

        class InterfaceByHandle; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public ydk::Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

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

        ydk::YLeaf interface_handle; //type: int32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class Pim6Ma::Active::InterfaceTable::InterfaceByNames : public ydk::Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

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

        class InterfaceByName; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames


class Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName : public ydk::Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName


class Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class Pim6Ma::Active::PimMaSummary : public ydk::Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

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

        ydk::YLeaf is_im_connection_open; //type: boolean
        ydk::YLeaf is_netio_connection_open; //type: boolean
        ydk::YLeaf is_edm_connection_open; //type: boolean
        ydk::YLeaf is_standby_edm_connection_open; //type: boolean
        ydk::YLeaf encap_interface_count; //type: uint32
        ydk::YLeaf decap_interface_count; //type: uint32
        ydk::YLeaf mdt_interface_count; //type: uint32

}; // Pim6Ma::Active::PimMaSummary


class Pim6Ma::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class InterfaceTable; //type: Pim6Ma::Standby::InterfaceTable
        class PimMaSummary; //type: Pim6Ma::Standby::PimMaSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::PimMaSummary> pim_ma_summary;
        
}; // Pim6Ma::Standby


class Pim6Ma::Standby::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

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

        class InterfaceByHandles; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames> interface_by_names;
        
}; // Pim6Ma::Standby::InterfaceTable


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles : public ydk::Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

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

        class InterfaceByHandle; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public ydk::Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

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

        ydk::YLeaf interface_handle; //type: int32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames : public ydk::Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

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

        class InterfaceByName; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName : public ydk::Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class Pim6Ma::Standby::PimMaSummary : public ydk::Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

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

        ydk::YLeaf is_im_connection_open; //type: boolean
        ydk::YLeaf is_netio_connection_open; //type: boolean
        ydk::YLeaf is_edm_connection_open; //type: boolean
        ydk::YLeaf is_standby_edm_connection_open; //type: boolean
        ydk::YLeaf encap_interface_count; //type: uint32
        ydk::YLeaf decap_interface_count; //type: uint32
        ydk::YLeaf mdt_interface_count; //type: uint32

}; // Pim6Ma::Standby::PimMaSummary

class PimMa : public ydk::Entity
{
    public:
        PimMa();
        ~PimMa();

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

        class Active; //type: PimMa::Active
        class Standby; //type: PimMa::Standby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby> standby;
        
}; // PimMa


class PimMa::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class InterfaceTable; //type: PimMa::Active::InterfaceTable
        class PimMaSummary; //type: PimMa::Active::PimMaSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::PimMaSummary> pim_ma_summary;
        
}; // PimMa::Active


class PimMa::Active::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

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

        class InterfaceByHandles; //type: PimMa::Active::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: PimMa::Active::InterfaceTable::InterfaceByNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames> interface_by_names;
        
}; // PimMa::Active::InterfaceTable


class PimMa::Active::InterfaceTable::InterfaceByHandles : public ydk::Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

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

        class InterfaceByHandle; //type: PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;
        
}; // PimMa::Active::InterfaceTable::InterfaceByHandles


class PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public ydk::Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

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

        ydk::YLeaf interface_handle; //type: int32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;
        
}; // PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class PimMa::Active::InterfaceTable::InterfaceByNames : public ydk::Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

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

        class InterfaceByName; //type: PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;
        
}; // PimMa::Active::InterfaceTable::InterfaceByNames


class PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName : public ydk::Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;
        
}; // PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName


class PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class PimMa::Active::PimMaSummary : public ydk::Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

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

        ydk::YLeaf is_im_connection_open; //type: boolean
        ydk::YLeaf is_netio_connection_open; //type: boolean
        ydk::YLeaf is_edm_connection_open; //type: boolean
        ydk::YLeaf is_standby_edm_connection_open; //type: boolean
        ydk::YLeaf encap_interface_count; //type: uint32
        ydk::YLeaf decap_interface_count; //type: uint32
        ydk::YLeaf mdt_interface_count; //type: uint32

}; // PimMa::Active::PimMaSummary


class PimMa::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class InterfaceTable; //type: PimMa::Standby::InterfaceTable
        class PimMaSummary; //type: PimMa::Standby::PimMaSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::PimMaSummary> pim_ma_summary;
        
}; // PimMa::Standby


class PimMa::Standby::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

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

        class InterfaceByHandles; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: PimMa::Standby::InterfaceTable::InterfaceByNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames> interface_by_names;
        
}; // PimMa::Standby::InterfaceTable


class PimMa::Standby::InterfaceTable::InterfaceByHandles : public ydk::Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

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

        class InterfaceByHandle; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;
        
}; // PimMa::Standby::InterfaceTable::InterfaceByHandles


class PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public ydk::Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

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

        ydk::YLeaf interface_handle; //type: int32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;
        
}; // PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class PimMa::Standby::InterfaceTable::InterfaceByNames : public ydk::Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

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

        class InterfaceByName; //type: PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;
        
}; // PimMa::Standby::InterfaceTable::InterfaceByNames


class PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName : public ydk::Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_type; //type: PimInterface
        class RpAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;
        
}; // PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName


class PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class PimMa::Standby::PimMaSummary : public ydk::Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

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

        ydk::YLeaf is_im_connection_open; //type: boolean
        ydk::YLeaf is_netio_connection_open; //type: boolean
        ydk::YLeaf is_edm_connection_open; //type: boolean
        ydk::YLeaf is_standby_edm_connection_open; //type: boolean
        ydk::YLeaf encap_interface_count; //type: uint32
        ydk::YLeaf decap_interface_count; //type: uint32
        ydk::YLeaf mdt_interface_count; //type: uint32

}; // PimMa::Standby::PimMaSummary


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_9_ */

