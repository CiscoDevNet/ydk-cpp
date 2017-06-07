#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_9_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_7.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Ipv6Pim::Active::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv6Pim::Active::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf> > vrf;
        
}; // Ipv6Pim::Active::Vrfs


class Ipv6Pim::Active::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class IfrsInterfaces; //type: Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces
        class Safs; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs
        class InterfaceStatistics; //type: Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics
        class TopologyRouteCount; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount
        class JpStatistics; //type: Ipv6Pim::Active::Vrfs::Vrf::JpStatistics
        class MibDatabases; //type: Ipv6Pim::Active::Vrfs::Vrf::MibDatabases
        class GroupMapMatchRpfs; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs
        class NeighborOldFormats; //type: Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats
        class IfrsSummary; //type: Ipv6Pim::Active::Vrfs::Vrf::IfrsSummary
        class Ranges; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges
        class InterfaceOldFormats; //type: Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats
        class Bsr; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr
        class RoutePolicy; //type: Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy
        class RpfSummary; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfSummary
        class Interfaces; //type: Ipv6Pim::Active::Vrfs::Vrf::Interfaces
        class NetIoTunnels; //type: Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels
        class BidirDfStates; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates
        class Topologies; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies
        class BgpAfs; //type: Ipv6Pim::Active::Vrfs::Vrf::BgpAfs
        class AutoRp; //type: Ipv6Pim::Active::Vrfs::Vrf::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources
        class TrafficCounters; //type: Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters
        class GroupMapRpfs; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs
        class Summary; //type: Ipv6Pim::Active::Vrfs::Vrf::Summary
        class Gre; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre
        class BidirDfWinners; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners
        class TableContexts; //type: Ipv6Pim::Active::Vrfs::Vrf::TableContexts
        class NeighborSummaries; //type: Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries
        class Context; //type: Ipv6Pim::Active::Vrfs::Vrf::Context
        class TopologyEntryFlagRouteCounts; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect
        class Tunnels; //type: Ipv6Pim::Active::Vrfs::Vrf::Tunnels
        class MulticastStaticRoutes; //type: Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes
        class GroupMapMatchSources; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources
        class Neighbors; //type: Ipv6Pim::Active::Vrfs::Vrf::Neighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::AutoRp> auto_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BgpAfs> bgp_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates> bidir_df_states;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context> context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre> gre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs> group_map_match_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources> group_map_match_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources> group_map_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::IfrsSummary> ifrs_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics> interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::JpStatistics> jp_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MibDatabases> mib_databases;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy> route_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect> rpf_redirect;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfSummary> rpf_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs> safs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TableContexts> table_contexts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount> topology_route_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters> traffic_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Tunnels> tunnels;
        
}; // Ipv6Pim::Active::Vrfs::Vrf


class Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces : public Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IfrsInterface; //type: Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces


class Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress


class Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress


class Ipv6Pim::Active::Vrfs::Vrf::Safs : public Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Saf; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf> > saf;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf : public Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf saf_name; //type: PimSafiEnum
        YLeaf topology_name; //type: string
        class RpfHashSourceGroups; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources
        class Rpfs; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs> rpfs;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups : public Entity
{
    public:
        RpfHashSourceGroups();
        ~RpfHashSourceGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RpfHashSourceGroup; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup> > rpf_hash_source_group;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public Entity
{
    public:
        RpfHashSourceGroup();
        ~RpfHashSourceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf mask_length; //type: int32
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources : public Entity
{
    public:
        RpfHashSources();
        ~RpfHashSources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RpfHashSource; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource> > rpf_hash_source;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource : public Entity
{
    public:
        RpfHashSource();
        ~RpfHashSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs : public Entity
{
    public:
        Rpfs();
        ~Rpfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rpf; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf> > rpf;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf registered_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf is_connected; //type: uint8
        YLeaf is_rpf_bgp_route; //type: boolean
        class RegisteredAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath> > rpf_path;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public Entity
{
    public:
        RegisteredAddressXr();
        ~RegisteredAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rpf_interface_name; //type: string
        YLeaf is_rpf_interface_disabled; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf is_via_mlsm; //type: boolean
        YLeaf is_connector_attribute_present; //type: boolean
        YLeaf connector; //type: string
        YLeaf extranet_vrf_name; //type: string
        class RpfNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public Entity
{
    public:
        RpfNexthop();
        ~RpfNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics : public Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStatistic; //type: Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic> > interface_statistic;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics


class Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic : public Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_register; //type: uint32
        YLeaf output_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf input_graft_message; //type: uint32
        YLeaf output_graft_message; //type: uint32
        YLeaf input_graft_ack_message; //type: uint32
        YLeaf output_graft_ack_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_miscellaneous; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic


class Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount : public Entity
{
    public:
        TopologyRouteCount();
        ~TopologyRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean
        class GroupAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress> group_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount


class Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress


class Ipv6Pim::Active::Vrfs::Vrf::JpStatistics : public Entity
{
    public:
        JpStatistics();
        ~JpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class JpStatistic; //type: Ipv6Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic> > jp_statistic;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::JpStatistics


class Ipv6Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic : public Entity
{
    public:
        JpStatistic();
        ~JpStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf mtu; //type: uint32
        YLeaf transmitted; //type: uint32
        YLeaf transmitted100; //type: uint16
        YLeaf transmitted_1k; //type: uint16
        YLeaf transmitted_10k; //type: uint16
        YLeaf transmitted_50k; //type: uint16
        YLeaf received; //type: uint32
        YLeaf received100; //type: uint16
        YLeaf received_1k; //type: uint16
        YLeaf received_10k; //type: uint16
        YLeaf received_50k; //type: uint16

}; // Ipv6Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic


class Ipv6Pim::Active::Vrfs::Vrf::MibDatabases : public Entity
{
    public:
        MibDatabases();
        ~MibDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MibDatabase; //type: Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase> > mib_database;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::MibDatabases


class Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase : public Entity
{
    public:
        MibDatabase();
        ~MibDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf source_netmask; //type: int32
        YLeaf upstream_assert_timer; //type: int32
        YLeaf assert_metric; //type: uint32
        YLeaf assert_metric_preference; //type: uint32
        YLeaf assert_rpt_bit; //type: boolean
        YLeaf spt_bit; //type: boolean
        YLeaf rpf_mask; //type: uint32
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf bidirectional_route; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf protocol; //type: PimShowProtocolEnum
        class SourceAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr
        class RpfNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase


class Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs : public Entity
{
    public:
        GroupMapMatchRpfs();
        ~GroupMapMatchRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupMapMatchRpf; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf> > group_map_match_rpf;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf : public Entity
{
    public:
        GroupMapMatchRpf();
        ~GroupMapMatchRpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf are_we_rp; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        class RpfNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor
        class GroupMapInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor> rpf_neighbor;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress> rp_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats : public Entity
{
    public:
        NeighborOldFormats();
        ~NeighborOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborOldFormat; //type: Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat> > neighbor_old_format;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats


class Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat : public Entity
{
    public:
        NeighborOldFormat();
        ~NeighborOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64
        YLeaf expiry_timer; //type: uint64
        YLeaf is_this_neighbor_us; //type: boolean
        YLeaf is_this_neighbor_dr; //type: boolean
        YLeaf is_dr_priority_capable; //type: boolean
        YLeaf dr_priority; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf is_ecmp_redirect_capable; //type: boolean
        YLeaf is_bfd_state; //type: boolean
        YLeaf propagation_delay; //type: uint16
        YLeaf override_interval; //type: uint16
        class NeighborAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr> > neighbor_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat


class Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::IfrsSummary : public Entity
{
    public:
        IfrsSummary();
        ~IfrsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_count; //type: uint32
        YLeaf configuration_count; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::IfrsSummary


class Ipv6Pim::Active::Vrfs::Vrf::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges


class Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rp_address; //type: string
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf client_xr; //type: PimShowRangeClientEnum
        YLeaf expires; //type: uint64
        class RpAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange> > group_range;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range


class Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation


class Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange : public Entity
{
    public:
        GroupRange();
        ~GroupRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: int32
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange


class Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation


class Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats : public Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceOldFormat; //type: Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats


class Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat : public Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat


class Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Ipv6Pim::Active::Vrfs::Vrf::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RpCaches; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches
        class CandidateRps; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps
        class BsrElections; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections> bsr_elections;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches> rp_caches;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches : public Entity
{
    public:
        RpCaches();
        ~RpCaches();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RpCache; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache> > rp_cache;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache : public Entity
{
    public:
        RpCache();
        ~RpCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_prefix; //type: string
        YLeaf group_prefix_length; //type: uint32
        YLeaf candidate_rp_group_count; //type: uint32
        class GroupPrefixXr; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr : public Entity
{
    public:
        GroupPrefixXr();
        ~GroupPrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList : public Entity
{
    public:
        CandidateRpList();
        ~CandidateRpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PimBsrCrpBag; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public Entity
{
    public:
        PimBsrCrpBag();
        ~PimBsrCrpBag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate_rp_holdtime; //type: uint16
        YLeaf candidate_rp_priority; //type: uint8
        YLeaf candidate_rp_up_time; //type: uint16
        YLeaf candidate_rp_expires; //type: uint16
        YLeaf protocol; //type: PimShowProtocolEnum
        class CandidateRpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public Entity
{
    public:
        CandidateRpAddress();
        ~CandidateRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateRp; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp> > candidate_rp;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rp_address; //type: string
        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf candidate_rp_scope; //type: int32
        YLeaf crp_priority; //type: uint8
        YLeaf crp_holdtime; //type: uint16
        YLeaf candidate_rp_advance_interval; //type: uint16
        YLeaf candidate_rp_uptime; //type: uint16
        YLeaf acl_name; //type: string
        class CandidateRp_; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public Entity
{
    public:
        CandidateRp_();
        ~CandidateRp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess : public Entity
{
    public:
        CrpAccess();
        ~CrpAccess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf acl_name; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections : public Entity
{
    public:
        BsrElections();
        ~BsrElections();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BsrElection; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection> > bsr_election;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection : public Entity
{
    public:
        BsrElection();
        ~BsrElection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pim_scope; //type: int32
        YLeaf bsr_priority; //type: uint8
        YLeaf bsr_mask_length; //type: uint8
        YLeaf bsr_up_time; //type: uint16
        YLeaf bootstrap_timeout; //type: uint16
        YLeaf candidate_bsr_state; //type: uint32
        YLeaf bsr_election_state; //type: uint32
        YLeaf bsr_scope; //type: uint16
        YLeaf candidate_bsr_flag; //type: boolean
        YLeaf candidate_bsr_priority; //type: uint8
        YLeaf candidate_bsr_mask_length; //type: uint8
        class BsrAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress : public Entity
{
    public:
        BsrAddress();
        ~BsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress


class Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public Entity
{
    public:
        CandidateBsrAddress();
        ~CandidateBsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy : public Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutePolicyStatistics; //type: Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests> route_policy_tests;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy


class Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics : public Entity
{
    public:
        RoutePolicyStatistics();
        ~RoutePolicyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf requests; //type: uint32
        YLeaf pass; //type: uint32
        YLeaf drop; //type: uint32
        YLeaf default_table; //type: uint32
        YLeaf any_table; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics


class Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests : public Entity
{
    public:
        RoutePolicyTests();
        ~RoutePolicyTests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutePolicyTest; //type: Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests


class Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public Entity
{
    public:
        RoutePolicyTest();
        ~RoutePolicyTest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf ext_comm; //type: string
        YLeaf policy_name; //type: string
        YLeaf extended_community_rt; //type: string
        YLeaf pass; //type: boolean
        YLeaf default_table; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf table_exists; //type: boolean
        YLeaf table_active; //type: boolean
        class SourceAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::RpfSummary : public Entity
{
    public:
        RpfSummary();
        ~RpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_safi; //type: uint32
        YLeaf default_table_name; //type: string
        YLeaf is_mbgp_configured; //type: boolean
        YLeaf is_ospf_te_configured; //type: boolean
        YLeaf is_isis_te_configured; //type: boolean
        YLeaf is_isis_mtr_configured; //type: boolean
        YLeaf mo_frr_configured; //type: boolean
        YLeaf rib_mo_frr_configured; //type: boolean
        YLeaf rump_enabled; //type: boolean
        YLeaf rib_convergence_timeout; //type: uint32
        YLeaf rib_convergence_time_left; //type: uint32
        YLeaf is_multipath_enabled; //type: boolean
        YLeaf is_multipath_interface_hash_enabled; //type: boolean
        YLeaf is_multipath_source_hash_enabled; //type: boolean
        YLeaf is_multipath_source_next_hop_hash_enabled; //type: boolean
        YLeaf rpf_registrations; //type: uint32
        YLeaf is_rib_convergence; //type: boolean

}; // Ipv6Pim::Active::Vrfs::Vrf::RpfSummary


class Ipv6Pim::Active::Vrfs::Vrf::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Interfaces


class Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress> > interface_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface


class Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress


class Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress


class Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels : public Entity
{
    public:
        NetIoTunnels();
        ~NetIoTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NetIoTunnel; //type: Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel> > net_io_tunnel;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels


class Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel : public Entity
{
    public:
        NetIoTunnel();
        ~NetIoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string
        class SourceAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress
        class SourceAddressNetio; //type: Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio> source_address_netio;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel


class Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress


class Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates : public Entity
{
    public:
        BidirDfStates();
        ~BidirDfStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BidirDfState; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState> > bidir_df_state;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState : public Entity
{
    public:
        BidirDfState();
        ~BidirDfState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rp_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf pim_interface_name; //type: string
        YLeaf election_state; //type: string
        YLeaf time_seconds; //type: uint64
        YLeaf time_nano_seconds; //type: uint64
        YLeaf our_metric; //type: uint32
        YLeaf our_metric_preference; //type: uint32
        class RpAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr> rp_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::Topologies : public Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Topology; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology> > topology;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf rpt; //type: int32
        YLeaf limit_reached; //type: boolean
        YLeaf low_memory; //type: boolean
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf wildcard; //type: boolean
        YLeaf rpt_xr; //type: boolean
        YLeaf spt; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf alive; //type: int32
        YLeaf register_received_timer; //type: int32
        YLeaf remote_source; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf secondary_rpf_interface_name; //type: string
        YLeaf connected; //type: boolean
        YLeaf proxy; //type: boolean
        YLeaf rpf_proxy_enabled; //type: boolean
        YLeaf mofrr_enabled; //type: boolean
        YLeaf rib_mo_frr_enabled; //type: boolean
        YLeaf jp_timer; //type: int32
        YLeaf jp_status; //type: int32
        YLeaf suppress_registers; //type: int32
        YLeaf assume_alive; //type: boolean
        YLeaf probe_alive; //type: boolean
        YLeaf really_alive; //type: boolean
        YLeaf inherit_alive; //type: boolean
        YLeaf inherit_spt; //type: boolean
        YLeaf signal_sources; //type: boolean
        YLeaf dont_check_connected; //type: boolean
        YLeaf register_received; //type: boolean
        YLeaf last_hop; //type: boolean
        YLeaf sending_registers; //type: boolean
        YLeaf sending_null_registers; //type: boolean
        YLeaf sa_sent; //type: boolean
        YLeaf sa_received; //type: boolean
        YLeaf sa_joined; //type: boolean
        YLeaf anycast_rp_match; //type: boolean
        YLeaf anycast_rp_route_target; //type: string
        YLeaf bgp_join; //type: boolean
        YLeaf bgpjp_time; //type: uint64
        YLeaf customer_routing_type; //type: int32
        YLeaf extranet_route; //type: boolean
        YLeaf mofrr_active; //type: boolean
        YLeaf mofrr_primary; //type: boolean
        YLeaf mofrr_backup; //type: boolean
        YLeaf vxlan; //type: boolean
        class GroupAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor : public Entity
{
    public:
        SecondaryRpfNeighbor();
        ~SecondaryRpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress : public Entity
{
    public:
        ProxyAddress();
        ~ProxyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress : public Entity
{
    public:
        OrigSrcAddress();
        ~OrigSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface : public Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf bgp_c_mcast_prune_delay_timer; //type: uint64
        YLeaf jp_timer; //type: int32
        YLeaf jp_state; //type: int32
        YLeaf assert_timer; //type: int32
        YLeaf local_members; //type: int32
        YLeaf internal_interest_info; //type: int32
        YLeaf forwarding_state; //type: int32
        YLeaf immediate_state; //type: int32
        YLeaf last_hop; //type: boolean
        YLeaf mldp_inband_mdt; //type: boolean
        YLeaf mldp_stale; //type: boolean
        YLeaf sa_prune; //type: boolean
        YLeaf admin_boundary; //type: boolean
        YLeaf igmp_membership; //type: boolean
        YLeaf mdt_safi_join; //type: boolean
        YLeaf mvpn_safi_join; //type: boolean
        YLeaf local_mdt_join; //type: boolean
        YLeaf data_mdt_join; //type: boolean
        YLeaf mvp_nv6_safi_join; //type: boolean
        YLeaf bgp_c_mcast_join; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf extranet_interface; //type: boolean
        class AssertWinner; //type: Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface


class Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner : public Entity
{
    public:
        AssertWinner();
        ~AssertWinner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner


class Ipv6Pim::Active::Vrfs::Vrf::BgpAfs : public Entity
{
    public:
        BgpAfs();
        ~BgpAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpAf; //type: Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf> > bgp_af;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::BgpAfs


class Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf : public Entity
{
    public:
        BgpAf();
        ~BgpAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf route_distinguisher; //type: string
        YLeaf extranet_path_count; //type: uint32
        YLeaf is_bgp_added; //type: boolean
        class Source; //type: Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source
        class Group; //type: Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group
        class NextHop; //type: Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source> source;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf


class Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source


class Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group


class Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop


class Ipv6Pim::Active::Vrfs::Vrf::AutoRp : public Entity
{
    public:
        AutoRp();
        ~AutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Pim::Active::Vrfs::Vrf::AutoRp


class Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts : public Entity
{
    public:
        TopologyInterfaceFlagRouteCounts();
        ~TopologyInterfaceFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TopologyInterfaceFlagRouteCount; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts


class Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public Entity
{
    public:
        TopologyInterfaceFlagRouteCount();
        ~TopologyInterfaceFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_flag; //type: PimTopologyInterfaceFlagEnum
        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean
        class GroupAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress> group_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources : public Entity
{
    public:
        GroupMapSources();
        ~GroupMapSources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupMapSource; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource> > group_map_source;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource : public Entity
{
    public:
        GroupMapSource();
        ~GroupMapSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimProtocolEnum
        YLeaf rp_address; //type: string
        YLeaf priority; //type: int32
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64
        class SourceOfInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress> rp_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters : public Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf elapsed_time; //type: uint32
        YLeaf inputs; //type: uint32
        YLeaf outputs; //type: uint32
        YLeaf format_error; //type: uint32
        YLeaf pakman_error; //type: uint32
        YLeaf standby_packets_error; //type: uint32
        YLeaf checksum_error; //type: uint32
        YLeaf socket_error; //type: uint32
        YLeaf send_queue_full; //type: uint32
        YLeaf boundary_acl_rx_drop; //type: uint32
        YLeaf boundary_acl_tx_drop; //type: uint32
        YLeaf no_socket_connection; //type: uint32
        YLeaf no_source_address; //type: uint32
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_data_register; //type: uint32
        YLeaf input_null_register; //type: uint32
        YLeaf output_data_register; //type: uint32
        YLeaf output_null_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf input_assert_batched; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf output_assert_batched; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_ecmp_redirect; //type: uint32
        YLeaf output_ecmp_redirect; //type: uint32
        YLeaf output_loop_error; //type: uint32
        YLeaf mldp_mdt_invalid_lsm_identifier; //type: uint32
        YLeaf input_no_idb_error; //type: uint32
        YLeaf input_no_vrf_error; //type: uint32
        YLeaf input_no_pim_error; //type: uint32
        YLeaf input_pim_version_error; //type: uint32
        YLeaf output_join_group; //type: uint32
        YLeaf output_prune_group; //type: uint32
        YLeaf output_join_prune_bytes; //type: uint32
        YLeaf output_hello_bytes; //type: uint32
        YLeaf non_supported_packets; //type: uint32
        YLeaf invalid_registers; //type: uint32
        YLeaf invalid_join_prunes; //type: uint32
        YLeaf packet_packman_error; //type: uint32
        YLeaf packet_read_socket_error; //type: uint32
        YLeaf packet_queue_last_clear; //type: uint32
        YLeaf packets_standby; //type: uint32
        YLeaf no_mdt_socket_connection; //type: uint32
        YLeaf mdt_send_queue_full; //type: uint32
        YLeaf mdt_socket_error; //type: uint32
        YLeaf mdt_join_tlv_sent; //type: uint32
        YLeaf mdt_join_tlv_received; //type: uint32
        YLeaf mdt_join_bad_type; //type: uint32
        YLeaf mdt_drop_local_source_address; //type: uint32
        YLeaf mdt_drop_null_local_address; //type: uint32
        YLeaf mdt_drop_no_idb; //type: uint32
        YLeaf mdt_drop_no_vrf; //type: uint32
        YLeaf invalid_destination_packets; //type: uint32
        YLeaf mdt_joins_drop_multiple_encapsulation; //type: uint32
        YLeaf truncated_pim_packets; //type: uint32
        YLeafList packet_enqueued; //type: list of  uint32
        YLeafList packet_dequeued; //type: list of  uint32
        YLeafList packet_queue_length; //type: list of  uint32
        YLeafList packet_queue_size; //type: list of  uint32
        YLeafList packet_tail_drop; //type: list of  uint32
        class PacketQueue; //type: Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue> > packet_queue;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters


class Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue : public Entity
{
    public:
        PacketQueue();
        ~PacketQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_queue_priority; //type: uint32
        class PacketQueueState; //type: Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue


class Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState : public Entity
{
    public:
        PacketQueueState();
        ~PacketQueueState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_queue_size; //type: uint32
        YLeaf queue_size_bytes; //type: uint32
        YLeaf queue_size_packets; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState


class Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats : public Entity
{
    public:
        PacketQueueStats();
        ~PacketQueueStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enqueued_packets; //type: uint32
        YLeaf dequeued_packets; //type: uint32
        YLeaf high_water_mark_packets; //type: uint32
        YLeaf high_water_mark_bytes; //type: uint32
        YLeaf tail_drops; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs : public Entity
{
    public:
        GroupMapRpfs();
        ~GroupMapRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupMapRpf; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf> > group_map_rpf;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf : public Entity
{
    public:
        GroupMapRpf();
        ~GroupMapRpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimProtocolEnum
        YLeaf rp_address; //type: string
        YLeaf rp_priority; //type: int32
        YLeaf are_we_rp; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        class RpfNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor
        class GroupMapInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor> rpf_neighbor;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress> rp_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_limit; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf route_low_water_mark; //type: uint32
        YLeaf is_route_limit_reached; //type: boolean
        YLeaf topology_interface_state_limit; //type: uint32
        YLeaf topology_interface_state_count; //type: uint32
        YLeaf rxi_low_water_mark; //type: uint32
        YLeaf rxi_limit_reached; //type: boolean
        YLeaf register_limit; //type: uint32
        YLeaf register_count; //type: uint32
        YLeaf register_limit_reached; //type: boolean
        YLeaf ranges_limit; //type: uint32
        YLeaf ranges_count; //type: uint32
        YLeaf ranges_threshold; //type: uint32
        YLeaf is_ranges_limit_reached; //type: boolean
        YLeaf bsr_ranges_limit; //type: uint32
        YLeaf bsr_ranges_count; //type: uint32
        YLeaf bsr_range_threshold; //type: uint32
        YLeaf is_bsr_ranges_threshold_reached; //type: boolean
        YLeaf bsr_candidate_rp_set_limit; //type: uint32
        YLeaf bsr_candidate_rp_set_count; //type: uint32
        YLeaf bsr_candidate_rp_set_threshold; //type: uint32
        YLeaf is_maximum_enforcement_disabled; //type: boolean
        YLeaf is_node_low_memory; //type: boolean
        YLeaf route_threshold; //type: uint32
        YLeaf global_auto_rp_ranges_limit; //type: uint32
        YLeaf is_global_auto_rp_ranges_limit_reached; //type: boolean
        YLeaf global_bsr_ranges_limit; //type: uint32
        YLeaf global_bsr_ranges_count; //type: uint32
        YLeaf global_bsr_ranges_threshold; //type: uint32
        YLeaf is_global_bsr_ranges_limit_reached; //type: boolean
        YLeaf global_bsr_candidate_rp_set_limit; //type: uint32
        YLeaf global_bsr_candidate_rp_set_count; //type: uint32
        YLeaf global_bsr_candidate_rp_set_threshold; //type: uint32
        YLeaf is_global_route_limit_reached; //type: boolean
        YLeaf topology_interface_state_threshold; //type: uint32
        YLeaf is_global_rxi_limit_reached; //type: boolean
        YLeaf register_threshold; //type: uint32
        YLeaf global_register_limit; //type: uint32
        YLeaf is_global_register_limit_reached; //type: boolean

}; // Ipv6Pim::Active::Vrfs::Vrf::Summary


class Ipv6Pim::Active::Vrfs::Vrf::Gre : public Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GreHashes; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes
        class GreNextHops; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes> gre_hashes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops> gre_next_hops;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Gre


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes : public Entity
{
    public:
        GreHashes();
        ~GreHashes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GreHash; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash> > gre_hash;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash : public Entity
{
    public:
        GreHash();
        ~GreHash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf ifname; //type: string
        YLeaf next_hop_interface; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops : public Entity
{
    public:
        GreNextHops();
        ~GreNextHops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GreNextHop; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop> > gre_next_hop;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop : public Entity
{
    public:
        GreNextHop();
        ~GreNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf is_connected; //type: uint8
        class RegisteredAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress
        class GrePath; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath> > gre_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress> registered_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress : public Entity
{
    public:
        RegisteredAddress();
        ~RegisteredAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath : public Entity
{
    public:
        GrePath();
        ~GrePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gre_interface_name; //type: string
        YLeaf is_gre_interface_disabled; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf is_connector_attribute_present; //type: boolean
        YLeaf extranet_vrf_name; //type: string
        class GreNeighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor
        class GreNextHop_; //type: Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor> gre_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_> gre_next_hop;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor : public Entity
{
    public:
        GreNeighbor();
        ~GreNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor


class Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_ : public Entity
{
    public:
        GreNextHop_();
        ~GreNextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners : public Entity
{
    public:
        BidirDfWinners();
        ~BidirDfWinners();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BidirDfWinner; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner> > bidir_df_winner;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner : public Entity
{
    public:
        BidirDfWinner();
        ~BidirDfWinner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rp_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf pim_interface_name; //type: string
        YLeaf are_we_df; //type: boolean
        YLeaf rp_lan; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf uptime; //type: uint64
        class RpAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr
        class DfWinner; //type: Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner> df_winner;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr> rp_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner : public Entity
{
    public:
        DfWinner();
        ~DfWinner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner


class Ipv6Pim::Active::Vrfs::Vrf::TableContexts : public Entity
{
    public:
        TableContexts();
        ~TableContexts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TableContext; //type: Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext> > table_context;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TableContexts


class Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext : public Entity
{
    public:
        TableContext();
        ~TableContext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf saf_name; //type: PimSafiEnum
        YLeaf topology_name; //type: string
        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf is_active; //type: boolean
        YLeaf is_ital_registration_done; //type: boolean
        YLeaf is_rib_registration_done; //type: boolean
        YLeaf is_rib_convergence_received; //type: boolean
        YLeaf is_rib_convergence; //type: boolean
        YLeaf rpf_registrations; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext


class Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries : public Entity
{
    public:
        NeighborSummaries();
        ~NeighborSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborSummary; //type: Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary> > neighbor_summary;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries


class Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary : public Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf number_of_neighbors; //type: int32
        YLeaf number_of_external_neighbors; //type: int32

}; // Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary


class Ipv6Pim::Active::Vrfs::Vrf::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_id; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf murib_id; //type: uint32
        YLeaf rpf_id; //type: uint32
        YLeaf remote_table_id; //type: uint32
        YLeaf mdt_default_group; //type: string
        YLeaf mdt_interface; //type: string
        YLeaf mdt_gre_rpf_identifier; //type: uint32
        YLeaf mdt_gre_remote_rpf_identifier; //type: uint32
        YLeaf is_unicast_rib_registration; //type: boolean
        YLeaf is_multicast_rib_registration; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf is_active_ital; //type: boolean
        YLeaf is_mrib_register; //type: boolean
        YLeaf is_mdt_owner; //type: boolean
        YLeaf is_routing_enabled; //type: boolean
        YLeaf is_socket_add_required; //type: boolean
        YLeaf is_socket_added; //type: boolean
        YLeaf is_lpts_socket_add_required; //type: boolean
        YLeaf is_lpts_socket_added; //type: boolean
        YLeaf is_udp_socket_add_required; //type: boolean
        YLeaf is_udp_socket_added; //type: boolean
        YLeaf is_udp_socket_bind_required; //type: boolean
        YLeaf is_udp_socket_bind; //type: boolean
        YLeaf is_register_injection_socket_add_required; //type: boolean
        YLeaf is_register_injection_socket_added; //type: boolean
        YLeaf is_register_injection_lpts_socket_add_required; //type: boolean
        YLeaf is_register_injection_lpts_socket_added; //type: boolean
        YLeaf is_m_host_publish_pending; //type: boolean
        YLeaf mhost_interface; //type: string
        YLeaf mhost_default_interface_config; //type: string
        YLeaf mdt_mtu; //type: uint32
        YLeaf maximum_mdt_aggregation; //type: uint32
        YLeaf mdt_data_switchover_interval; //type: uint32
        YLeaf mdt_data_announce_interval; //type: uint32
        YLeaf non_default_vrf_count_on_socket; //type: uint32
        YLeaf neighbor_filter_name; //type: string
        YLeaf mdt_neighbor_filter_name; //type: string
        YLeaf allow_rp_configured; //type: boolean
        YLeaf allow_rp_group_list; //type: string
        YLeaf allow_rp_rp_list; //type: string
        YLeaf sg_expiry_timer_configured; //type: boolean
        YLeaf sg_expiry_time; //type: uint16
        YLeaf sg_expiry_timer_sg_list; //type: string
        YLeaf mldp_mdt_name; //type: string
        YLeaf mldp_mdt_interface; //type: string
        YLeaf mldp_mdt_mtu; //type: uint32
        YLeaf mldp_maximum_mdt_aggregation; //type: uint32
        YLeaf mldp_mdt_data_switchover_interval; //type: uint32
        YLeaf mldp_mdt_data_announce_interval; //type: uint32
        YLeaf mldp_mdt_rpf_identifier; //type: uint32
        YLeaf mldp_mdt_remote_rpf_identifier; //type: uint32
        YLeaf is_create_mldp_mdt_interface; //type: boolean
        YLeaf is_mldp_mdt_owner; //type: boolean
        YLeaf mldp_root_count; //type: uint32
        YLeaf mldp_head_lsm_identifier; //type: uint32
        YLeaf mldp_remote_head_lsm_identifier; //type: uint32
        YLeaf organization_unique_identifier; //type: uint32
        YLeaf vpn_index; //type: uint32
        YLeaf mldp_partitioned_mdt_configured; //type: boolean
        YLeaf mldp_remote_partitioned_mdt_configured; //type: boolean
        YLeaf mldp_partioned_mp2m_ptree; //type: boolean
        YLeaf mldp_partitioned_head_lsm_identifier; //type: uint32
        YLeaf mldp_head_local_label; //type: uint32
        YLeaf mldp_partitioned_mdt_identifier; //type: uint32
        YLeaf bgp_auto_discovery_configured; //type: boolean
        YLeaf suppress_pim_data_mdt_tlv; //type: boolean
        YLeaf inter_autonomous_system_enabled; //type: boolean
        YLeaf bgp_source_active_announce; //type: boolean
        YLeaf bgp_i_pmsi_added; //type: boolean
        YLeaf mldp_bsr_control_tree_added; //type: boolean
        YLeaf mldp_auto_rp_discovery_tree_added; //type: boolean
        YLeaf mldp_auto_rp_announce_tree_added; //type: boolean
        YLeaf bgp_auto_discovery_type; //type: uint32
        YLeaf mdt_partitioned_mdt_control_identifier; //type: uint32
        YLeaf mdt_partitioned_ir_control_identifier; //type: uint32
        YLeaf mldp_control_head_lsm_identifier; //type: uint32
        YLeaf umh; //type: boolean
        YLeaf suppress_shared_tree_join; //type: boolean
        YLeaf rsvp_te_mdt_name; //type: string
        YLeaf rsvp_te_mdt_interface; //type: string
        YLeaf rsvp_te_mdt_mtu; //type: uint32
        YLeaf rsvp_te_maximum_mdt_aggregation; //type: uint32
        YLeaf rsvp_te_mdt_data_switchover_interval; //type: uint32
        YLeaf rsvp_te_mdt_data_announce_interval; //type: uint32
        YLeaf rsvp_te_mdt_rpf_identifier; //type: uint32
        YLeaf is_create_rsvp_te_mdt_interface; //type: boolean
        YLeaf is_rsvp_te_mdt_owner; //type: boolean
        YLeaf rsvp_te_mdt_static_p2mp_count; //type: uint32
        YLeaf p2mpte_li_drop; //type: uint32
        YLeaf ir_mdt_name; //type: string
        YLeaf ir_mdt_interface; //type: string
        YLeaf ir_mdt_mtu; //type: uint32
        YLeaf ir_maximum_mdt_aggregation; //type: uint32
        YLeaf ir_mdt_data_switchover_interval; //type: uint32
        YLeaf ir_mdt_data_announce_interval; //type: uint32
        YLeaf ir_mdt_rpf_identifier; //type: uint32
        YLeaf ir_mdt_tail_label; //type: uint32
        YLeaf is_create_ir_mdt_interface; //type: boolean
        YLeaf is_ir_mdt_owner; //type: boolean
        YLeaf in_b_and_mdt_name; //type: string
        YLeaf in_b_and_mdt_interface; //type: string
        YLeaf in_b_and_mdt_mtu; //type: uint32
        YLeaf in_band_maximum_mdt_aggregation; //type: uint32
        YLeaf in_b_and_mdt_data_switchover_interval; //type: uint32
        YLeaf in_b_and_mdt_data_announce_interval; //type: uint32
        YLeaf in_b_and_mdt_rpf_identifier; //type: uint32
        YLeaf is_create_in_b_and_mdt_interface; //type: boolean
        YLeaf is_in_b_and_mdt_owner; //type: boolean
        YLeaf in_band_signaling_local_enabled; //type: boolean
        YLeaf in_band_signaling_remote_enabled; //type: boolean
        YLeaf valid_rd_present; //type: boolean
        YLeaf stale_rd_present; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf gin_b_and_mdt_name; //type: string
        YLeaf gin_b_and_mdt_interface; //type: string
        YLeaf gin_b_and_mdt_mtu; //type: uint32
        YLeaf gin_band_maximum_mdt_aggregation; //type: uint32
        YLeaf gin_b_and_mdt_data_switchover_interval; //type: uint32
        YLeaf gin_b_and_mdt_data_announce_interval; //type: uint32
        YLeaf gin_b_and_mdt_rpf_identifier; //type: uint32
        YLeaf is_create_gin_b_and_mdt_interface; //type: boolean
        YLeaf is_gin_b_and_mdt_owner; //type: boolean
        YLeaf is_pim_nsf_rib_converged; //type: boolean
        YLeaf is_pim_nsf_rib_converge_received; //type: boolean
        YLeaf is_rib_multipath_enabled; //type: boolean
        YLeaf is_rib_multipath_interface_hash; //type: boolean
        YLeaf is_rib_multipath_source_hash; //type: boolean
        YLeaf is_rib_multipath_source_next_hop_hash; //type: boolean
        YLeaf rump_enabled; //type: boolean
        YLeaf is_create_mdt_interface; //type: boolean
        YLeaf is_auto_rp_listen_enabled; //type: boolean
        YLeaf is_all_interface_disable_operation; //type: boolean
        YLeaf is_default_granges; //type: boolean
        YLeaf is_auto_rp_listen_sock_add; //type: boolean
        YLeaf is_redistribution_reset; //type: boolean
        YLeaf redistribution_reset_count; //type: uint32
        YLeaf rpf_policy_name; //type: string
        YLeaf table_count; //type: uint32
        YLeaf active_table_count; //type: uint32
        YLeaf anycast_rp_policy_name; //type: string
        YLeaf anycast_rp_configured; //type: boolean
        YLeaf bgp_remote_on; //type: boolean
        YLeaf bgp_remote_interface_name; //type: string
        YLeaf bgp_remote_interface; //type: string
        YLeaf bgp_remote_address; //type: string
        YLeaf bgp_remote_state; //type: uint32
        YLeafList mldp_root_address; //type: list of  uint32
        class RemoteDefaultGroup; //type: Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup
        class RpfDefaultTable; //type: Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable
        class ExportRouteTarget; //type: Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget
        class ImportRouteTarget; //type: Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget
        class AnycastRpRange; //type: Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange> > anycast_rp_range;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget> > export_route_target;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget> > import_route_target;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup> remote_default_group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable> rpf_default_table;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Context


class Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup : public Entity
{
    public:
        RemoteDefaultGroup();
        ~RemoteDefaultGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup


class Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable : public Entity
{
    public:
        RpfDefaultTable();
        ~RpfDefaultTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf is_active; //type: boolean
        YLeaf is_ital_registration_done; //type: boolean
        YLeaf is_rib_registration_done; //type: boolean
        YLeaf is_rib_convergence_received; //type: boolean
        YLeaf is_rib_convergence; //type: boolean
        YLeaf rpf_registrations; //type: uint32

}; // Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable


class Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget : public Entity
{
    public:
        ExportRouteTarget();
        ~ExportRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_target; //type: string
        YLeaf configured; //type: boolean
        YLeaf anycast_rp; //type: boolean
        YLeaf anycast_rp_marked; //type: boolean
        YLeaf update_pending; //type: boolean
        YLeaf bgp_auto_discovery; //type: boolean
        YLeaf segment_border; //type: boolean

}; // Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget


class Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget : public Entity
{
    public:
        ImportRouteTarget();
        ~ImportRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_target; //type: string
        YLeaf configured; //type: boolean
        YLeaf anycast_rp; //type: boolean
        YLeaf anycast_rp_marked; //type: boolean
        YLeaf update_pending; //type: boolean
        YLeaf bgp_auto_discovery; //type: boolean
        YLeaf segment_border; //type: boolean

}; // Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_9_ */

