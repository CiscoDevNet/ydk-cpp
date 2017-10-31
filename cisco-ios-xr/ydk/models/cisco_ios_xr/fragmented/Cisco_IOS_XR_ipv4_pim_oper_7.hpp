#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_7_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_6.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes : public ydk::Entity
{
    public:
        MulticastStaticRoutes();
        ~MulticastStaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastStaticRoute; //type: Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute> > multicast_static_route;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute : public ydk::Entity
{
    public:
        MulticastStaticRoute();
        ~MulticastStaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf is_via_lsm; //type: boolean
        class Prefix; //type: Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Ipv6Pim::Standby::Vrfs::Vrf::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Neighbors


class Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf expiry_timer; //type: uint64
        ydk::YLeaf is_this_neighbor_us; //type: boolean
        ydk::YLeaf is_this_neighbor_dr; //type: boolean
        ydk::YLeaf is_dr_priority_capable; //type: boolean
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf is_ecmp_redirect_capable; //type: boolean
        ydk::YLeaf is_bfd_state; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        class NeighborAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr> > neighbor_address_xr;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor


class Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr


class Ipv6Pim::Active : public ydk::Entity
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

        class DefaultContext; //type: Ipv6Pim::Active::DefaultContext
        class Process; //type: Ipv6Pim::Active::Process
        class Vrfs; //type: Ipv6Pim::Active::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext> default_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Process> process;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs> vrfs;
        
}; // Ipv6Pim::Active


class Ipv6Pim::Active::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

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

        class GlobalInterfaces; //type: Ipv6Pim::Active::DefaultContext::GlobalInterfaces
        class IfrsInterfaces; //type: Ipv6Pim::Active::DefaultContext::IfrsInterfaces
        class Safs; //type: Ipv6Pim::Active::DefaultContext::Safs
        class InterfaceStatistics; //type: Ipv6Pim::Active::DefaultContext::InterfaceStatistics
        class TopologyRouteCount; //type: Ipv6Pim::Active::DefaultContext::TopologyRouteCount
        class JpStatistics; //type: Ipv6Pim::Active::DefaultContext::JpStatistics
        class MibDatabases; //type: Ipv6Pim::Active::DefaultContext::MibDatabases
        class NeighborOldFormats; //type: Ipv6Pim::Active::DefaultContext::NeighborOldFormats
        class IfrsSummary; //type: Ipv6Pim::Active::DefaultContext::IfrsSummary
        class Ranges; //type: Ipv6Pim::Active::DefaultContext::Ranges
        class InterfaceOldFormats; //type: Ipv6Pim::Active::DefaultContext::InterfaceOldFormats
        class Bsr; //type: Ipv6Pim::Active::DefaultContext::Bsr
        class RoutePolicy; //type: Ipv6Pim::Active::DefaultContext::RoutePolicy
        class RpfSummary; //type: Ipv6Pim::Active::DefaultContext::RpfSummary
        class Interfaces; //type: Ipv6Pim::Active::DefaultContext::Interfaces
        class NetIoTunnels; //type: Ipv6Pim::Active::DefaultContext::NetIoTunnels
        class BidirDfStates; //type: Ipv6Pim::Active::DefaultContext::BidirDfStates
        class Topologies; //type: Ipv6Pim::Active::DefaultContext::Topologies
        class BgpAfs; //type: Ipv6Pim::Active::DefaultContext::BgpAfs
        class AutoRp; //type: Ipv6Pim::Active::DefaultContext::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Ipv6Pim::Active::DefaultContext::GroupMapSources
        class TrafficCounters; //type: Ipv6Pim::Active::DefaultContext::TrafficCounters
        class GroupMapRpfs; //type: Ipv6Pim::Active::DefaultContext::GroupMapRpfs
        class Summary; //type: Ipv6Pim::Active::DefaultContext::Summary
        class Gre; //type: Ipv6Pim::Active::DefaultContext::Gre
        class BidirDfWinners; //type: Ipv6Pim::Active::DefaultContext::BidirDfWinners
        class TableContexts; //type: Ipv6Pim::Active::DefaultContext::TableContexts
        class NeighborSummaries; //type: Ipv6Pim::Active::DefaultContext::NeighborSummaries
        class Context; //type: Ipv6Pim::Active::DefaultContext::Context
        class TopologyEntryFlagRouteCounts; //type: Ipv6Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Ipv6Pim::Active::DefaultContext::RpfRedirect
        class Tunnels; //type: Ipv6Pim::Active::DefaultContext::Tunnels
        class MulticastStaticRoutes; //type: Ipv6Pim::Active::DefaultContext::MulticastStaticRoutes
        class Neighbors; //type: Ipv6Pim::Active::DefaultContext::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GlobalInterfaces> global_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs> safs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TopologyRouteCount> topology_route_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::JpStatistics> jp_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MibDatabases> mib_databases;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::IfrsSummary> ifrs_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RoutePolicy> route_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RpfSummary> rpf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfStates> bidir_df_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies> topologies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BgpAfs> bgp_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::AutoRp> auto_rp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapSources> group_map_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TrafficCounters> traffic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre> gre;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TableContexts> table_contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Context> context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RpfRedirect> rpf_redirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Neighbors> neighbors;
        
}; // Ipv6Pim::Active::DefaultContext


class Ipv6Pim::Active::DefaultContext::GlobalInterfaces : public ydk::Entity
{
    public:
        GlobalInterfaces();
        ~GlobalInterfaces();

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

        class GlobalInterface; //type: Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface> > global_interface;
        
}; // Ipv6Pim::Active::DefaultContext::GlobalInterfaces


class Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface : public ydk::Entity
{
    public:
        GlobalInterface();
        ~GlobalInterface();

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
        ydk::YLeaf interface_address_mask; //type: uint8
        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf neighbor_count; //type: uint16
        ydk::YLeaf external_neighbor_count; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf hello_expiry; //type: uint64
        ydk::YLeaf are_we_dr; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_interface; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf join_prune_interval; //type: uint16
        ydk::YLeaf prune_delay_enabled; //type: boolean
        ydk::YLeaf configured_propagation_delay; //type: uint16
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf configured_override_interval; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        ydk::YLeaf generation_id; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf idb_oor_enabled; //type: boolean
        ydk::YLeaf idb_acl_provided; //type: boolean
        ydk::YLeaf idb_max_count; //type: uint32
        ydk::YLeaf idb_threshold_count; //type: uint32
        ydk::YLeaf idb_current_count; //type: uint32
        ydk::YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface


class Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress : public ydk::Entity
{
    public:
        DrAddress();
        ~DrAddress();

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

}; // Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress


class Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Ipv6Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress


class Ipv6Pim::Active::DefaultContext::IfrsInterfaces : public ydk::Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

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

        class IfrsInterface; //type: Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Ipv6Pim::Active::DefaultContext::IfrsInterfaces


class Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface : public ydk::Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

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
        ydk::YLeaf interface_address_mask; //type: uint8
        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf neighbor_count; //type: uint16
        ydk::YLeaf external_neighbor_count; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf hello_expiry; //type: uint64
        ydk::YLeaf are_we_dr; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_interface; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf join_prune_interval; //type: uint16
        ydk::YLeaf prune_delay_enabled; //type: boolean
        ydk::YLeaf configured_propagation_delay; //type: uint16
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf configured_override_interval; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        ydk::YLeaf generation_id; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf idb_oor_enabled; //type: boolean
        ydk::YLeaf idb_acl_provided; //type: boolean
        ydk::YLeaf idb_max_count; //type: uint32
        ydk::YLeaf idb_threshold_count; //type: uint32
        ydk::YLeaf idb_current_count; //type: uint32
        ydk::YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface


class Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress : public ydk::Entity
{
    public:
        DrAddress();
        ~DrAddress();

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

}; // Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress


class Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Ipv6Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress


class Ipv6Pim::Active::DefaultContext::Safs : public ydk::Entity
{
    public:
        Safs();
        ~Safs();

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

        class Saf; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf> > saf;
        
}; // Ipv6Pim::Active::DefaultContext::Safs


class Ipv6Pim::Active::DefaultContext::Safs::Saf : public ydk::Entity
{
    public:
        Saf();
        ~Saf();

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

        ydk::YLeaf saf_name; //type: PimSafi
        ydk::YLeaf topology_name; //type: string
        class RpfHashSourceGroups; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources
        class Rpfs; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs> rpfs;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups : public ydk::Entity
{
    public:
        RpfHashSourceGroups();
        ~RpfHashSourceGroups();

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

        class RpfHashSourceGroup; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup> > rpf_hash_source_group;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public ydk::Entity
{
    public:
        RpfHashSourceGroup();
        ~RpfHashSourceGroup();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf mask_length; //type: int32
        ydk::YLeaf mofrr; //type: int32
        ydk::YLeaf next_hop_multipath_enabled; //type: boolean
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public ydk::Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources : public ydk::Entity
{
    public:
        RpfHashSources();
        ~RpfHashSources();

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

        class RpfHashSource; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource> > rpf_hash_source;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource : public ydk::Entity
{
    public:
        RpfHashSource();
        ~RpfHashSource();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf mofrr; //type: int32
        ydk::YLeaf next_hop_multipath_enabled; //type: boolean
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public ydk::Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs : public ydk::Entity
{
    public:
        Rpfs();
        ~Rpfs();

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

        class Rpf; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf> > rpf;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs


class Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

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

        ydk::YLeaf registered_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_preference; //type: uint32
        ydk::YLeaf is_connected; //type: uint8
        ydk::YLeaf is_rpf_bgp_route; //type: boolean
        class RegisteredAddressXr; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath> > rpf_path;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf


class Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public ydk::Entity
{
    public:
        RegisteredAddressXr();
        ~RegisteredAddressXr();

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

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath : public ydk::Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf is_rpf_interface_disabled; //type: boolean
        ydk::YLeaf is_via_lsm; //type: boolean
        ydk::YLeaf is_via_mlsm; //type: boolean
        ydk::YLeaf is_connector_attribute_present; //type: boolean
        ydk::YLeaf connector; //type: string
        ydk::YLeaf extranet_vrf_name; //type: string
        class RpfNeighbor; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;
        
}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath


class Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public ydk::Entity
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

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public ydk::Entity
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

}; // Ipv6Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Ipv6Pim::Active::DefaultContext::InterfaceStatistics : public ydk::Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

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

        class InterfaceStatistic; //type: Ipv6Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic> > interface_statistic;
        
}; // Ipv6Pim::Active::DefaultContext::InterfaceStatistics


class Ipv6Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic : public ydk::Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

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
        ydk::YLeaf input_hello; //type: uint32
        ydk::YLeaf output_hello; //type: uint32
        ydk::YLeaf input_register; //type: uint32
        ydk::YLeaf output_register; //type: uint32
        ydk::YLeaf input_register_stop; //type: uint32
        ydk::YLeaf output_register_stop; //type: uint32
        ydk::YLeaf input_jp; //type: uint32
        ydk::YLeaf output_jp; //type: uint32
        ydk::YLeaf input_bsr_message; //type: uint32
        ydk::YLeaf output_bsr_message; //type: uint32
        ydk::YLeaf input_assert; //type: uint32
        ydk::YLeaf output_assert; //type: uint32
        ydk::YLeaf input_graft_message; //type: uint32
        ydk::YLeaf output_graft_message; //type: uint32
        ydk::YLeaf input_graft_ack_message; //type: uint32
        ydk::YLeaf output_graft_ack_message; //type: uint32
        ydk::YLeaf input_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf output_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf input_df_election; //type: uint32
        ydk::YLeaf output_df_election; //type: uint32
        ydk::YLeaf input_miscellaneous; //type: uint32

}; // Ipv6Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic


class Ipv6Pim::Active::DefaultContext::TopologyRouteCount : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Ipv6Pim::Active::DefaultContext::TopologyRouteCount


class Ipv6Pim::Active::DefaultContext::JpStatistics : public ydk::Entity
{
    public:
        JpStatistics();
        ~JpStatistics();

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

        class JpStatistic; //type: Ipv6Pim::Active::DefaultContext::JpStatistics::JpStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::JpStatistics::JpStatistic> > jp_statistic;
        
}; // Ipv6Pim::Active::DefaultContext::JpStatistics


class Ipv6Pim::Active::DefaultContext::JpStatistics::JpStatistic : public ydk::Entity
{
    public:
        JpStatistic();
        ~JpStatistic();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf transmitted; //type: uint32
        ydk::YLeaf transmitted100; //type: uint16
        ydk::YLeaf transmitted_1k; //type: uint16
        ydk::YLeaf transmitted_10k; //type: uint16
        ydk::YLeaf transmitted_50k; //type: uint16
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf received100; //type: uint16
        ydk::YLeaf received_1k; //type: uint16
        ydk::YLeaf received_10k; //type: uint16
        ydk::YLeaf received_50k; //type: uint16

}; // Ipv6Pim::Active::DefaultContext::JpStatistics::JpStatistic


class Ipv6Pim::Active::DefaultContext::MibDatabases : public ydk::Entity
{
    public:
        MibDatabases();
        ~MibDatabases();

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

        class MibDatabase; //type: Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase> > mib_database;
        
}; // Ipv6Pim::Active::DefaultContext::MibDatabases


class Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase : public ydk::Entity
{
    public:
        MibDatabase();
        ~MibDatabase();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_netmask; //type: int32
        ydk::YLeaf upstream_assert_timer; //type: int32
        ydk::YLeaf assert_metric; //type: uint32
        ydk::YLeaf assert_metric_preference; //type: uint32
        ydk::YLeaf assert_rpt_bit; //type: boolean
        ydk::YLeaf spt_bit; //type: boolean
        ydk::YLeaf rpf_mask; //type: uint32
        ydk::YLeaf rpf_safi; //type: uint8
        ydk::YLeaf rpf_table_name; //type: string
        ydk::YLeaf rpf_drop; //type: boolean
        ydk::YLeaf rpf_extranet; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        ydk::YLeaf bidirectional_route; //type: boolean
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf protocol; //type: PimShowProtocol
        class SourceAddressXr; //type: Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr
        class RpfNeighbor; //type: Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr> source_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot> rpf_root;
        
}; // Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase


class Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr


class Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr


class Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor


class Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot


class Ipv6Pim::Active::DefaultContext::NeighborOldFormats : public ydk::Entity
{
    public:
        NeighborOldFormats();
        ~NeighborOldFormats();

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

        class NeighborOldFormat; //type: Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat> > neighbor_old_format;
        
}; // Ipv6Pim::Active::DefaultContext::NeighborOldFormats


class Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat : public ydk::Entity
{
    public:
        NeighborOldFormat();
        ~NeighborOldFormat();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf expiry_timer; //type: uint64
        ydk::YLeaf is_this_neighbor_us; //type: boolean
        ydk::YLeaf is_this_neighbor_dr; //type: boolean
        ydk::YLeaf is_dr_priority_capable; //type: boolean
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf is_ecmp_redirect_capable; //type: boolean
        ydk::YLeaf is_bfd_state; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        class NeighborAddressXr; //type: Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr> > neighbor_address_xr;
        
}; // Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat


class Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Ipv6Pim::Active::DefaultContext::IfrsSummary : public ydk::Entity
{
    public:
        IfrsSummary();
        ~IfrsSummary();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf configuration_count; //type: uint32

}; // Ipv6Pim::Active::DefaultContext::IfrsSummary


class Ipv6Pim::Active::DefaultContext::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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

        class Range; //type: Ipv6Pim::Active::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges::Range> > range;
        
}; // Ipv6Pim::Active::DefaultContext::Ranges


class Ipv6Pim::Active::DefaultContext::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf client_xr; //type: PimShowRangeClient
        ydk::YLeaf expires; //type: uint64
        class RpAddressXr; //type: Ipv6Pim::Active::DefaultContext::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Ipv6Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation> source_of_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange> > group_range;
        
}; // Ipv6Pim::Active::DefaultContext::Ranges::Range


class Ipv6Pim::Active::DefaultContext::Ranges::Range::RpAddressXr : public ydk::Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Ranges::Range::RpAddressXr


class Ipv6Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation : public ydk::Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation


class Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange : public ydk::Entity
{
    public:
        GroupRange();
        ~GroupRange();

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

        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expires; //type: uint64
        class Prefix; //type: Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange


class Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix


class Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation : public ydk::Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation


class Ipv6Pim::Active::DefaultContext::InterfaceOldFormats : public ydk::Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

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

        class InterfaceOldFormat; //type: Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Ipv6Pim::Active::DefaultContext::InterfaceOldFormats


class Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public ydk::Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

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
        ydk::YLeaf interface_address_mask; //type: uint8
        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf neighbor_count; //type: uint16
        ydk::YLeaf external_neighbor_count; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf hello_expiry; //type: uint64
        ydk::YLeaf are_we_dr; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_interface; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf join_prune_interval; //type: uint16
        ydk::YLeaf prune_delay_enabled; //type: boolean
        ydk::YLeaf configured_propagation_delay; //type: uint16
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf configured_override_interval; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        ydk::YLeaf generation_id; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf idb_oor_enabled; //type: boolean
        ydk::YLeaf idb_acl_provided; //type: boolean
        ydk::YLeaf idb_max_count; //type: uint32
        ydk::YLeaf idb_threshold_count; //type: uint32
        ydk::YLeaf idb_current_count; //type: uint32
        ydk::YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public ydk::Entity
{
    public:
        DrAddress();
        ~DrAddress();

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

}; // Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Ipv6Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Ipv6Pim::Active::DefaultContext::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

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

        class RpCaches; //type: Ipv6Pim::Active::DefaultContext::Bsr::RpCaches
        class CandidateRps; //type: Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps
        class BsrElections; //type: Ipv6Pim::Active::DefaultContext::Bsr::BsrElections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::RpCaches> rp_caches;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::BsrElections> bsr_elections;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr


class Ipv6Pim::Active::DefaultContext::Bsr::RpCaches : public ydk::Entity
{
    public:
        RpCaches();
        ~RpCaches();

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

        class RpCache; //type: Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache> > rp_cache;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::RpCaches


class Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache : public ydk::Entity
{
    public:
        RpCache();
        ~RpCache();

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

        ydk::YLeaf group_prefix; //type: string
        ydk::YLeaf group_prefix_length; //type: uint32
        ydk::YLeaf candidate_rp_group_count; //type: uint32
        class GroupPrefixXr; //type: Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache


class Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr : public ydk::Entity
{
    public:
        GroupPrefixXr();
        ~GroupPrefixXr();

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

}; // Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr


class Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList : public ydk::Entity
{
    public:
        CandidateRpList();
        ~CandidateRpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PimBsrCrpBag; //type: Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList


class Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public ydk::Entity
{
    public:
        PimBsrCrpBag();
        ~PimBsrCrpBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_rp_holdtime; //type: uint16
        ydk::YLeaf candidate_rp_priority; //type: uint8
        ydk::YLeaf candidate_rp_up_time; //type: uint16
        ydk::YLeaf candidate_rp_expires; //type: uint16
        ydk::YLeaf protocol; //type: PimShowProtocol
        class CandidateRpAddress; //type: Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public ydk::Entity
{
    public:
        CandidateRpAddress();
        ~CandidateRpAddress();

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

}; // Ipv6Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps : public ydk::Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

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

        class CandidateRp; //type: Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp> > candidate_rp;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps


class Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf candidate_rp_mode; //type: PimShowProtocol
        ydk::YLeaf candidate_rp_scope; //type: int32
        ydk::YLeaf crp_priority; //type: uint8
        ydk::YLeaf crp_holdtime; //type: uint16
        ydk::YLeaf candidate_rp_advance_interval; //type: uint16
        ydk::YLeaf candidate_rp_uptime; //type: uint16
        ydk::YLeaf acl_name; //type: string
        class CandidateRp_; //type: Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp


class Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public ydk::Entity
{
    public:
        CandidateRp_();
        ~CandidateRp_();

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

}; // Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess : public ydk::Entity
{
    public:
        CrpAccess();
        ~CrpAccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_rp_mode; //type: PimShowProtocol
        ydk::YLeaf acl_name; //type: string

}; // Ipv6Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess


class Ipv6Pim::Active::DefaultContext::Bsr::BsrElections : public ydk::Entity
{
    public:
        BsrElections();
        ~BsrElections();

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

        class BsrElection; //type: Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection> > bsr_election;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::BsrElections


class Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection : public ydk::Entity
{
    public:
        BsrElection();
        ~BsrElection();

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

        ydk::YLeaf pim_scope; //type: int32
        ydk::YLeaf bsr_priority; //type: uint8
        ydk::YLeaf bsr_mask_length; //type: uint8
        ydk::YLeaf bsr_up_time; //type: uint16
        ydk::YLeaf bootstrap_timeout; //type: uint16
        ydk::YLeaf candidate_bsr_state; //type: uint32
        ydk::YLeaf bsr_election_state; //type: uint32
        ydk::YLeaf bsr_scope; //type: uint16
        ydk::YLeaf candidate_bsr_flag; //type: boolean
        ydk::YLeaf candidate_bsr_priority; //type: uint8
        ydk::YLeaf candidate_bsr_mask_length; //type: uint8
        class BsrAddress; //type: Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;
        
}; // Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection


class Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress : public ydk::Entity
{
    public:
        BsrAddress();
        ~BsrAddress();

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

}; // Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress


class Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public ydk::Entity
{
    public:
        CandidateBsrAddress();
        ~CandidateBsrAddress();

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

}; // Ipv6Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Ipv6Pim::Active::DefaultContext::RoutePolicy : public ydk::Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

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

        class RoutePolicyStatistics; //type: Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests> route_policy_tests;
        
}; // Ipv6Pim::Active::DefaultContext::RoutePolicy


class Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics : public ydk::Entity
{
    public:
        RoutePolicyStatistics();
        ~RoutePolicyStatistics();

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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf pass; //type: uint32
        ydk::YLeaf drop; //type: uint32
        ydk::YLeaf default_table; //type: uint32
        ydk::YLeaf any_table; //type: uint32

}; // Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics


class Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests : public ydk::Entity
{
    public:
        RoutePolicyTests();
        ~RoutePolicyTests();

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

        class RoutePolicyTest; //type: Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;
        
}; // Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests


class Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public ydk::Entity
{
    public:
        RoutePolicyTest();
        ~RoutePolicyTest();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf ext_comm; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf extended_community_rt; //type: string
        ydk::YLeaf pass; //type: boolean
        ydk::YLeaf default_table; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf table_exists; //type: boolean
        ydk::YLeaf table_active; //type: boolean
        class SourceAddressXr; //type: Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        
}; // Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Ipv6Pim::Active::DefaultContext::RpfSummary : public ydk::Entity
{
    public:
        RpfSummary();
        ~RpfSummary();

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

        ydk::YLeaf default_safi; //type: uint32
        ydk::YLeaf default_table_name; //type: string
        ydk::YLeaf is_mbgp_configured; //type: boolean
        ydk::YLeaf is_ospf_te_configured; //type: boolean
        ydk::YLeaf is_isis_te_configured; //type: boolean
        ydk::YLeaf is_isis_mtr_configured; //type: boolean
        ydk::YLeaf mo_frr_configured; //type: boolean
        ydk::YLeaf rib_mo_frr_configured; //type: boolean
        ydk::YLeaf rump_enabled; //type: boolean
        ydk::YLeaf rib_convergence_timeout; //type: uint32
        ydk::YLeaf rib_convergence_time_left; //type: uint32
        ydk::YLeaf is_multipath_enabled; //type: boolean
        ydk::YLeaf is_multipath_interface_hash_enabled; //type: boolean
        ydk::YLeaf is_multipath_source_hash_enabled; //type: boolean
        ydk::YLeaf is_multipath_source_next_hop_hash_enabled; //type: boolean
        ydk::YLeaf rpf_registrations; //type: uint32
        ydk::YLeaf is_rib_convergence; //type: boolean

}; // Ipv6Pim::Active::DefaultContext::RpfSummary


class Ipv6Pim::Active::DefaultContext::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Ipv6Pim::Active::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Interfaces::Interface> > interface;
        
}; // Ipv6Pim::Active::DefaultContext::Interfaces


class Ipv6Pim::Active::DefaultContext::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_address_mask; //type: uint8
        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf neighbor_count; //type: uint16
        ydk::YLeaf external_neighbor_count; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf hello_expiry; //type: uint64
        ydk::YLeaf are_we_dr; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_interface; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf join_prune_interval; //type: uint16
        ydk::YLeaf prune_delay_enabled; //type: boolean
        ydk::YLeaf configured_propagation_delay; //type: uint16
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf configured_override_interval; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        ydk::YLeaf generation_id; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf idb_oor_enabled; //type: boolean
        ydk::YLeaf idb_acl_provided; //type: boolean
        ydk::YLeaf idb_max_count; //type: uint32
        ydk::YLeaf idb_threshold_count; //type: uint32
        ydk::YLeaf idb_current_count; //type: uint32
        ydk::YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::DefaultContext::Interfaces::Interface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Interfaces::Interface::DrAddress> dr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::DefaultContext::Interfaces::Interface


class Ipv6Pim::Active::DefaultContext::Interfaces::Interface::DrAddress : public ydk::Entity
{
    public:
        DrAddress();
        ~DrAddress();

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

}; // Ipv6Pim::Active::DefaultContext::Interfaces::Interface::DrAddress


class Ipv6Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Ipv6Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress


class Ipv6Pim::Active::DefaultContext::NetIoTunnels : public ydk::Entity
{
    public:
        NetIoTunnels();
        ~NetIoTunnels();

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

        class NetIoTunnel; //type: Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel> > net_io_tunnel;
        
}; // Ipv6Pim::Active::DefaultContext::NetIoTunnels


class Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel : public ydk::Entity
{
    public:
        NetIoTunnel();
        ~NetIoTunnel();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        class SourceAddress; //type: Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress
        class RpAddress; //type: Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress
        class SourceAddressNetio; //type: Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio> source_address_netio;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio> group_address_netio;
        
}; // Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel


class Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress : public ydk::Entity
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

}; // Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress


class Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress : public ydk::Entity
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

}; // Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress


class Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Ipv6Pim::Active::DefaultContext::BidirDfStates : public ydk::Entity
{
    public:
        BidirDfStates();
        ~BidirDfStates();

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

        class BidirDfState; //type: Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState> > bidir_df_state;
        
}; // Ipv6Pim::Active::DefaultContext::BidirDfStates


class Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState : public ydk::Entity
{
    public:
        BidirDfState();
        ~BidirDfState();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pim_interface_name; //type: string
        ydk::YLeaf election_state; //type: string
        ydk::YLeaf time_seconds; //type: uint64
        ydk::YLeaf time_nano_seconds; //type: uint64
        ydk::YLeaf our_metric; //type: uint32
        ydk::YLeaf our_metric_preference; //type: uint32
        class RpAddressXr; //type: Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr> rp_address_xr;
        
}; // Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState


class Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr : public ydk::Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr


class Ipv6Pim::Active::DefaultContext::Topologies : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Topology; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology> > topology;
        
}; // Ipv6Pim::Active::DefaultContext::Topologies


class Ipv6Pim::Active::DefaultContext::Topologies::Topology : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class GroupAddressXr; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr> source_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        
}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpAddress


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfRoot : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::RpfRoot


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class AssertWinner; //type: Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;
        
}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface


class Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner


class Ipv6Pim::Active::DefaultContext::BgpAfs : public ydk::Entity
{
    public:
        BgpAfs();
        ~BgpAfs();

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

        class BgpAf; //type: Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf> > bgp_af;
        
}; // Ipv6Pim::Active::DefaultContext::BgpAfs


class Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf : public ydk::Entity
{
    public:
        BgpAf();
        ~BgpAf();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf extranet_path_count; //type: uint32
        ydk::YLeaf is_bgp_added; //type: boolean
        class Source; //type: Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Source
        class Group; //type: Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Group
        class NextHop; //type: Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop> next_hop;
        
}; // Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf


class Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Source


class Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::Group


class Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop


class Ipv6Pim::Active::DefaultContext::AutoRp : public ydk::Entity
{
    public:
        AutoRp();
        ~AutoRp();

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


}; // Ipv6Pim::Active::DefaultContext::AutoRp


class Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class TopologyInterfaceFlagRouteCount; //type: Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;
        
}; // Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts


class Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_flag; //type: PimTopologyInterfaceFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Ipv6Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Ipv6Pim::Active::DefaultContext::GroupMapSources : public ydk::Entity
{
    public:
        GroupMapSources();
        ~GroupMapSources();

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

        class GroupMapSource; //type: Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource> > group_map_source;
        
}; // Ipv6Pim::Active::DefaultContext::GroupMapSources


class Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource : public ydk::Entity
{
    public:
        GroupMapSource();
        ~GroupMapSource();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimProtocol
        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf priority; //type: int32
        ydk::YLeaf holdtime; //type: int32
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf uptime; //type: uint64
        class SourceOfInformation; //type: Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        
}; // Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource


class Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation : public ydk::Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation


class Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation : public ydk::Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

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

        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimShowRangeClient
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf mrib_active; //type: boolean
        ydk::YLeaf is_override; //type: boolean
        ydk::YLeaf priority; //type: uint32
        class Prefix; //type: Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress> rp_address;
        
}; // Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation


class Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix


class Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress


class Ipv6Pim::Active::DefaultContext::TrafficCounters : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class PacketQueue; //type: Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue> > packet_queue;
        
}; // Ipv6Pim::Active::DefaultContext::TrafficCounters


class Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_queue_priority; //type: uint32
        class PacketQueueState; //type: Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;
        
}; // Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue


class Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_queue_size; //type: uint32
        ydk::YLeaf queue_size_bytes; //type: uint32
        ydk::YLeaf queue_size_packets; //type: uint32

}; // Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState


class Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf enqueued_packets; //type: uint32
        ydk::YLeaf dequeued_packets; //type: uint32
        ydk::YLeaf high_water_mark_packets; //type: uint32
        ydk::YLeaf high_water_mark_bytes; //type: uint32
        ydk::YLeaf tail_drops; //type: uint32

}; // Ipv6Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats


class Ipv6Pim::Active::DefaultContext::GroupMapRpfs : public ydk::Entity
{
    public:
        GroupMapRpfs();
        ~GroupMapRpfs();

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

        class GroupMapRpf; //type: Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf> > group_map_rpf;
        
}; // Ipv6Pim::Active::DefaultContext::GroupMapRpfs


class Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf : public ydk::Entity
{
    public:
        GroupMapRpf();
        ~GroupMapRpf();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimProtocol
        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf rp_priority; //type: int32
        ydk::YLeaf are_we_rp; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        class RpfNeighbor; //type: Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor
        class GroupMapInformation; //type: Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation> group_map_information;
        
}; // Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf


class Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor


class Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation : public ydk::Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

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

        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimShowRangeClient
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf mrib_active; //type: boolean
        ydk::YLeaf is_override; //type: boolean
        ydk::YLeaf priority; //type: uint32
        class Prefix; //type: Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress> rp_address;
        
}; // Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation


class Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix


class Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress


class Ipv6Pim::Active::DefaultContext::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // Ipv6Pim::Active::DefaultContext::Summary


class Ipv6Pim::Active::DefaultContext::Gre : public ydk::Entity
{
    public:
        Gre();
        ~Gre();

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

        class GreHashes; //type: Ipv6Pim::Active::DefaultContext::Gre::GreHashes
        class GreNextHops; //type: Ipv6Pim::Active::DefaultContext::Gre::GreNextHops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreHashes> gre_hashes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreNextHops> gre_next_hops;
        
}; // Ipv6Pim::Active::DefaultContext::Gre


class Ipv6Pim::Active::DefaultContext::Gre::GreHashes : public ydk::Entity
{
    public:
        GreHashes();
        ~GreHashes();

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

        class GreHash; //type: Ipv6Pim::Active::DefaultContext::Gre::GreHashes::GreHash

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreHashes::GreHash> > gre_hash;
        
}; // Ipv6Pim::Active::DefaultContext::Gre::GreHashes


class Ipv6Pim::Active::DefaultContext::Gre::GreHashes::GreHash : public ydk::Entity
{
    public:
        GreHash();
        ~GreHash();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf next_hop_interface; //type: string

}; // Ipv6Pim::Active::DefaultContext::Gre::GreHashes::GreHash


class Ipv6Pim::Active::DefaultContext::Gre::GreNextHops : public ydk::Entity
{
    public:
        GreNextHops();
        ~GreNextHops();

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

        class GreNextHop; //type: Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop> > gre_next_hop;
        
}; // Ipv6Pim::Active::DefaultContext::Gre::GreNextHops


class Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop : public ydk::Entity
{
    public:
        GreNextHop();
        ~GreNextHop();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_preference; //type: uint32
        ydk::YLeaf is_connected; //type: uint8
        class RegisteredAddress; //type: Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress
        class GrePath; //type: Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress> registered_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath> > gre_path;
        
}; // Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop


class Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress : public ydk::Entity
{
    public:
        RegisteredAddress();
        ~RegisteredAddress();

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

}; // Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress


class Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath : public ydk::Entity
{
    public:
        GrePath();
        ~GrePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface_name; //type: string
        ydk::YLeaf is_gre_interface_disabled; //type: boolean
        ydk::YLeaf is_via_lsm; //type: boolean
        ydk::YLeaf is_connector_attribute_present; //type: boolean
        ydk::YLeaf extranet_vrf_name; //type: string
        class GreNeighbor; //type: Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor
        class GreNextHop_; //type: Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor> gre_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_> gre_next_hop;
        
}; // Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath


class Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor : public ydk::Entity
{
    public:
        GreNeighbor();
        ~GreNeighbor();

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

}; // Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor


class Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_ : public ydk::Entity
{
    public:
        GreNextHop_();
        ~GreNextHop_();

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

}; // Ipv6Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_


class Ipv6Pim::Active::DefaultContext::BidirDfWinners : public ydk::Entity
{
    public:
        BidirDfWinners();
        ~BidirDfWinners();

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

        class BidirDfWinner; //type: Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner> > bidir_df_winner;
        
}; // Ipv6Pim::Active::DefaultContext::BidirDfWinners


class Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner : public ydk::Entity
{
    public:
        BidirDfWinner();
        ~BidirDfWinner();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pim_interface_name; //type: string
        ydk::YLeaf are_we_df; //type: boolean
        ydk::YLeaf rp_lan; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_preference; //type: uint32
        ydk::YLeaf uptime; //type: uint64
        class RpAddressXr; //type: Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr
        class DfWinner; //type: Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr> rp_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner> df_winner;
        
}; // Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner


class Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr : public ydk::Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr


class Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner : public ydk::Entity
{
    public:
        DfWinner();
        ~DfWinner();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner


class Ipv6Pim::Active::DefaultContext::TableContexts : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class TableContext; //type: Ipv6Pim::Active::DefaultContext::TableContexts::TableContext

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::TableContexts::TableContext> > table_context;
        
}; // Ipv6Pim::Active::DefaultContext::TableContexts


class Ipv6Pim::Active::DefaultContext::TableContexts::TableContext : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // Ipv6Pim::Active::DefaultContext::TableContexts::TableContext


class Ipv6Pim::Active::DefaultContext::NeighborSummaries : public ydk::Entity
{
    public:
        NeighborSummaries();
        ~NeighborSummaries();

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

        class NeighborSummary; //type: Ipv6Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary> > neighbor_summary;
        
}; // Ipv6Pim::Active::DefaultContext::NeighborSummaries


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_7_ */

