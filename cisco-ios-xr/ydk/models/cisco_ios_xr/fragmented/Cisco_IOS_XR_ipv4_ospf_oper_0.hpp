#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_0_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

class Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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

        class Processes; //type: Ospf::Processes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes> processes;
        
}; // Ospf


class Ospf::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

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

        class Process; //type: Ospf::Processes::Process

        ydk::YList process;
        
}; // Ospf::Processes


class Ospf::Processes::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

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

        ydk::YLeaf process_name; //type: string
        class Vrfs; //type: Ospf::Processes::Process::Vrfs
        class Srms; //type: Ospf::Processes::Process::Srms
        class DefaultVrf; //type: Ospf::Processes::Process::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms> srms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf> default_vrf;
        
}; // Ospf::Processes::Process


class Ospf::Processes::Process::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ospf::Processes::Process::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ospf::Processes::Process::Vrfs


class Ospf::Processes::Process::Vrfs::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        class InterfaceVrfInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation
        class FloodListTable; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable
        class SegmentRouting; //type: Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting
        class MplsTe; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe
        class Statistics; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics
        class AdjacencyInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation
        class RouteInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation
        class InterfaceInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation
        class BorderRouters; //type: Ospf::Processes::Process::Vrfs::Vrf::BorderRouters
        class ProcessInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation
        class Areas; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas
        class Database; //type: Ospf::Processes::Process::Vrfs::Vrf::Database
        class SummaryPrefixes; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class AreaStatistics; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics
        class OspfSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::OspfSummary
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation> interface_vrf_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FloodListTable> flood_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe> mpls_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation> adjacency_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation> route_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation> interface_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::BorderRouters> border_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation> process_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas> areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::OspfSummary> ospf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        
}; // Ospf::Processes::Process::Vrfs::Vrf


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation : public ydk::Entity
{
    public:
        InterfaceVrfInformation();
        ~InterfaceVrfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLinks; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks> sham_links;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks : public ydk::Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShamLink; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink

        ydk::YList sham_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_name; //type: string
        ydk::YLeaf sham_link_name_xr; //type: string
        ydk::YLeaf sham_link_neighbor_id; //type: string
        ydk::YLeaf sham_link_source_address; //type: string
        ydk::YLeaf sham_link_dest_address; //type: string
        ydk::YLeaf sham_link_state; //type: OspfInterfaceState
        ydk::YLeaf sham_link_demand_circuit; //type: boolean
        ydk::YLeaf sham_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf sham_link_ifindex; //type: uint32
        ydk::YLeaf sham_link_area; //type: string
        ydk::YLeaf sham_link_cost; //type: uint16
        ydk::YLeaf sham_link_transmission_delay; //type: uint16
        ydk::YLeaf sham_link_hello_interval; //type: uint32
        ydk::YLeaf sham_link_hello_interval_ms; //type: uint32
        ydk::YLeaf sham_link_dead_interval; //type: uint32
        ydk::YLeaf sham_link_wait_interval; //type: uint32
        ydk::YLeaf sham_link_retransmission_interval; //type: uint32
        ydk::YLeaf sham_link_next_hello; //type: uint32
        ydk::YLeaf sham_link_next_hello_ms; //type: uint32
        ydk::YLeaf sham_link_passive; //type: boolean
        ydk::YLeaf sham_link_authentication_type; //type: Authentication
        ydk::YLeaf sham_link_youngest_md_key; //type: boolean
        ydk::YLeaf sham_link_youngest_md_key_id; //type: uint16
        ydk::YLeaf sham_link_old_md_key_count; //type: uint32
        ydk::YLeaf keychain_name; //type: string
        ydk::YLeaf sham_link_keychain_key_conf; //type: boolean
        ydk::YLeaf sham_link_keychain_id; //type: uint64
        ydk::YLeaf sham_link_keychain_alg; //type: OspfCrytographicAlgo
        ydk::YLeaf sham_link_nsf_enabled; //type: boolean
        ydk::YLeaf sham_link_nsf; //type: boolean
        ydk::YLeaf sham_link_last_nsf; //type: uint32
        class ShamLinkNeighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor
        class ShamLinkMdKey; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkMdKey

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor> sham_link_neighbor;
        ydk::YList sham_link_md_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor : public ydk::Entity
{
    public:
        ShamLinkNeighbor();
        ~ShamLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_suppress_hello; //type: boolean
        ydk::YLeaf sham_link_state; //type: NeighborState
        class ShamLinkRetransmissoin; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin> sham_link_retransmissoin;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin : public ydk::Entity
{
    public:
        ShamLinkRetransmissoin();
        ~ShamLinkRetransmissoin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dbd_retransmission_count; //type: uint32
        ydk::YLeaf dbd_retransmission_total_count; //type: uint32
        ydk::YLeaf area_flooding_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmission_count; //type: uint32
        ydk::YLeaf number_of_retransmissions; //type: uint32
        ydk::YLeaf area_first_flood_information; //type: uint32
        ydk::YLeaf area_first_flood_information_index; //type: uint32
        ydk::YLeaf as_first_flood_information; //type: uint32
        ydk::YLeaf as_first_flood_information_index; //type: uint32
        ydk::YLeaf area_next_flood_information; //type: uint32
        ydk::YLeaf area_next_flood_information_index; //type: uint32
        ydk::YLeaf as_next_flood_information; //type: uint32
        ydk::YLeaf as_next_flood_information_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkMdKey : public ydk::Entity
{
    public:
        ShamLinkMdKey();
        ~ShamLinkMdKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkMdKey


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable : public ydk::Entity
{
    public:
        FloodListTable();
        ~FloodListTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood

        ydk::YList flood;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood : public ydk::Entity
{
    public:
        Flood();
        ~Flood();

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
        ydk::YLeaf flood_interface_name; //type: string
        ydk::YLeaf flood_pacing_timer; //type: uint32
        ydk::YLeaf flood_lsa_count; //type: uint32
        class AreaFlood; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood

        ydk::YList area_flood;
        ydk::YList as_flood;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood : public ydk::Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood : public ydk::Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood


class Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrEndpointPolicies; //type: Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies> sr_endpoint_policies;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting


class Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies : public ydk::Entity
{
    public:
        SrEndpointPolicies();
        ~SrEndpointPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrEndpointPolicy; //type: Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy

        ydk::YList sr_endpoint_policy;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies


class Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy : public ydk::Entity
{
    public:
        SrEndpointPolicy();
        ~SrEndpointPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf endpoint_ip; //type: string
        ydk::YLeaf sr_endpoint; //type: string
        ydk::YLeaf sr_router_id; //type: uint32
        ydk::YLeaf sr_area_id_string; //type: string
        ydk::YLeaf sr_policy_count; //type: uint32
        ydk::YLeaf sr_valid_policy_count; //type: uint32
        ydk::YLeaf sr_endp_state_is_valid; //type: boolean
        ydk::YLeaf sr_endp_state_is_stale; //type: boolean
        ydk::YLeaf sr_endp_state_is_unres; //type: boolean
        ydk::YLeaf sr_endp_resolution_fail_reason; //type: OspfSrEndpResFailReason
        class SrPolicy; //type: Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy

        ydk::YList sr_policy;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy


class Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy : public ydk::Entity
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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf policy_if_handle; //type: string
        ydk::YLeaf policy_metric; //type: int32
        ydk::YLeaf policy_metric_mode; //type: OspfSrPolMetricMode
        ydk::YLeaf policy_is_sspf; //type: boolean
        ydk::YLeaf policy_is_autoroute_include; //type: boolean
        ydk::YLeaf policy_state_is_valid; //type: boolean
        ydk::YLeaf policy_state_is_stale; //type: boolean
        ydk::YLeaf policy_state_is_ifh_error; //type: boolean
        ydk::YLeaf policy_state_is_idb_pending; //type: boolean
        ydk::YLeaf policy_update_timestamp; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe : public ydk::Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeLinks; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks
        class MplsTeFragments; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks> mpls_te_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments> mpls_te_fragments;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks : public ydk::Entity
{
    public:
        MplsTeLinks();
        ~MplsTeLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeLink; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink

        ydk::YList mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf mpls_te_router_id; //type: string
        ydk::YLeaf mpls_te_enabled; //type: boolean
        ydk::YLeaf mpls_te_initialized; //type: boolean
        ydk::YLeaf mpls_te_area_id; //type: string
        ydk::YLeaf mpls_te_area_instance; //type: uint32
        ydk::YLeaf mpls_te_router_address; //type: string
        ydk::YLeaf mpls_te_next_fragment_id; //type: uint32
        ydk::YLeaf spacious_fragment; //type: boolean
        class MplsTeLink_; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_
        class MplsTeFragment; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment

        ydk::YList mpls_te_link;
        ydk::YList mpls_te_fragment;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_ : public ydk::Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        ydk::YList mplste_link_opt_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority

        ydk::YList maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData

        ydk::YList ext_admin_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        ydk::YList mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        ydk::YList mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        ydk::YList mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        ydk::YList arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        ydk::YList unres_oduj_prio;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        ydk::YList unres_lspbw;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment : public ydk::Entity
{
    public:
        MplsTeFragment();
        ~MplsTeFragment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fragment_instance; //type: uint32
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf dste_model_id; //type: uint8
        ydk::YLeaf same_fragment_count; //type: uint8
        class MplsTeLink_; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_

        ydk::YList mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_ : public ydk::Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        ydk::YList mplste_link_opt_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority

        ydk::YList maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData

        ydk::YList ext_admin_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        ydk::YList mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        ydk::YList mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        ydk::YList mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        ydk::YList arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        ydk::YList unres_oduj_prio;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        ydk::YList unres_lspbw;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments : public ydk::Entity
{
    public:
        MplsTeFragments();
        ~MplsTeFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeFragment; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment

        ydk::YList mpls_te_fragment;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment : public ydk::Entity
{
    public:
        MplsTeFragment();
        ~MplsTeFragment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf mpls_te_router_id; //type: string
        ydk::YLeaf mpls_te_enabled; //type: boolean
        ydk::YLeaf mpls_te_initialized; //type: boolean
        ydk::YLeaf mpls_te_area_id; //type: string
        ydk::YLeaf mpls_te_area_instance; //type: uint32
        ydk::YLeaf mpls_te_router_address; //type: string
        ydk::YLeaf mpls_te_next_fragment_id; //type: uint32
        ydk::YLeaf spacious_fragment; //type: boolean
        class MplsTeLink; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink
        class MplsTeFragment_; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_

        ydk::YList mpls_te_link;
        ydk::YList mpls_te_fragment;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability> link_sw_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList> extended_admin_group_list;
        ydk::YList mplste_link_opt_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority

        ydk::YList maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData

        ydk::YList ext_admin_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        ydk::YList mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        ydk::YList mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        ydk::YList mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        ydk::YList arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        ydk::YList unres_oduj_prio;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        ydk::YList unres_lspbw;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_ : public ydk::Entity
{
    public:
        MplsTeFragment_();
        ~MplsTeFragment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fragment_instance; //type: uint32
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf dste_model_id; //type: uint8
        ydk::YLeaf same_fragment_count; //type: uint8
        class MplsTeLink; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink

        ydk::YList mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability> link_sw_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList> extended_admin_group_list;
        ydk::YList mplste_link_opt_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority

        ydk::YList bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority

        ydk::YList maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData

        ydk::YList ext_admin_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        ydk::YList mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        ydk::YList mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        ydk::YList mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        ydk::YList arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        ydk::YList unres_oduj_prio;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

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

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        ydk::YList unres_lspbw;
        ydk::YList max_lspbw;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

class NsfRtr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_nsf_rtr_none;
        static const ydk::Enum::YLeaf mgmt_nsf_rtr_requester;
        static const ydk::Enum::YLeaf mgmt_nsf_rtr_receiver;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-nsf-rtr-none") return 0;
            if (name == "mgmt-nsf-rtr-requester") return 1;
            if (name == "mgmt-nsf-rtr-receiver") return 2;
            return -1;
        }
};

class IpfrrTbrkr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf line_card_disjoint;
        static const ydk::Enum::YLeaf backup_metric;
        static const ydk::Enum::YLeaf node_protect;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;
        static const ydk::Enum::YLeaf interface_disjoint;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf post_convergence;

        static int get_enum_value(const std::string & name) {
            if (name == "downstream") return 0;
            if (name == "line-card-disjoint") return 1;
            if (name == "backup-metric") return 2;
            if (name == "node-protect") return 3;
            if (name == "primary-path") return 4;
            if (name == "secondary-path") return 5;
            if (name == "srlg-disjoint") return 6;
            if (name == "interface-disjoint") return 7;
            if (name == "tunnel") return 8;
            if (name == "post-convergence") return 9;
            return -1;
        }
};

class IgpteLibBwModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf mam;
        static const ydk::Enum::YLeaf not_set;

        static int get_enum_value(const std::string & name) {
            if (name == "rdm") return 0;
            if (name == "mam") return 1;
            if (name == "not-set") return 2;
            return -1;
        }
};

class LinkSubnet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_none;
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_p2p;
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_broadcast;
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_nbma;
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_p2mp;
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_loop_back;
        static const ydk::Enum::YLeaf mgmt_igp_subnet_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-igp-subnet-type-none") return 0;
            if (name == "mgmt-igp-subnet-type-p2p") return 1;
            if (name == "mgmt-igp-subnet-type-broadcast") return 2;
            if (name == "mgmt-igp-subnet-type-nbma") return 3;
            if (name == "mgmt-igp-subnet-type-p2mp") return 4;
            if (name == "mgmt-igp-subnet-type-loop-back") return 5;
            if (name == "mgmt-igp-subnet-type-max") return 6;
            return -1;
        }
};

class Authentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_auth_none;
        static const ydk::Enum::YLeaf mgmt_ospf_auth_ct;
        static const ydk::Enum::YLeaf mgmt_ospf_auth_md;
        static const ydk::Enum::YLeaf mgmt_ospf_auth_kc;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-auth-none") return 0;
            if (name == "mgmt-ospf-auth-ct") return 1;
            if (name == "mgmt-ospf-auth-md") return 2;
            if (name == "mgmt-ospf-auth-kc") return 3;
            return -1;
        }
};

class OspfShNnhValTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_nnh_val_type_ip_addr;
        static const ydk::Enum::YLeaf mgmt_nnh_val_type_if_index;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-nnh-val-type-ip-addr") return 1;
            if (name == "mgmt-nnh-val-type-if-index") return 2;
            return -1;
        }
};

class UloopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf protected_prefixes;
        static const ydk::Enum::YLeaf all_prefixes;
        static const ydk::Enum::YLeaf segment_routing_uloop;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "protected-prefixes") return 1;
            if (name == "all-prefixes") return 2;
            if (name == "segment-routing-uloop") return 3;
            return -1;
        }
};

class OspfLinkTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_rtr_link;
        static const ydk::Enum::YLeaf mgmt_trans_link;
        static const ydk::Enum::YLeaf mgmt_stub_net;
        static const ydk::Enum::YLeaf mgmt_vitural_link;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-rtr-link") return 1;
            if (name == "mgmt-trans-link") return 2;
            if (name == "mgmt-stub-net") return 3;
            if (name == "mgmt-vitural-link") return 4;
            return -1;
        }
};

class SrmsMiSrcEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "local") return 1;
            if (name == "remote") return 2;
            return -1;
        }
};

class OspfInterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_down;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_loop_back;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_waiting;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_point_to_m_point;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_point_to_point;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_dr;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_backup;
        static const ydk::Enum::YLeaf mgmt_ospf_ifs_other;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-ifs-down") return 0;
            if (name == "mgmt-ospf-ifs-loop-back") return 1;
            if (name == "mgmt-ospf-ifs-waiting") return 2;
            if (name == "mgmt-ospf-ifs-point-to-m-point") return 3;
            if (name == "mgmt-ospf-ifs-point-to-point") return 4;
            if (name == "mgmt-ospf-ifs-dr") return 5;
            if (name == "mgmt-ospf-ifs-backup") return 6;
            if (name == "mgmt-ospf-ifs-other") return 7;
            return -1;
        }
};

class Ipfrr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "per-link") return 1;
            if (name == "per-prefix") return 2;
            return -1;
        }
};

class OspfSrgbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_allocated;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf allocated;

        static int get_enum_value(const std::string & name) {
            if (name == "not-allocated") return 0;
            if (name == "pending") return 1;
            if (name == "allocated") return 2;
            return -1;
        }
};

class OspfSrEndpResFailReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_se_res_fail_none;
        static const ydk::Enum::YLeaf ospf_se_res_fail_no_route;
        static const ydk::Enum::YLeaf ospf_se_res_fail_inv_route_type;
        static const ydk::Enum::YLeaf ospf_se_res_fail_default_route;
        static const ydk::Enum::YLeaf ospf_se_res_fail_intra_multi_home_d;
        static const ydk::Enum::YLeaf ospf_se_res_fail_no_path;
        static const ydk::Enum::YLeaf ospf_se_res_fail_no_epl;
        static const ydk::Enum::YLeaf ospf_se_res_fail_area_not_sr_enable;
        static const ydk::Enum::YLeaf ospf_se_res_fail_epl_multi_home_d;
        static const ydk::Enum::YLeaf ospf_se_res_fail_no_n_bit_epl;
        static const ydk::Enum::YLeaf ospf_se_res_fail_no_na_bit_epl;
        static const ydk::Enum::YLeaf ospf_se_res_fail_area_mismatch;
        static const ydk::Enum::YLeaf ospf_se_res_fail_rid_mismatch;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf-se-res-fail-none") return 0;
            if (name == "ospf-se-res-fail-no-route") return 1;
            if (name == "ospf-se-res-fail-inv-route-type") return 2;
            if (name == "ospf-se-res-fail-default-route") return 3;
            if (name == "ospf-se-res-fail-intra-multi-home-d") return 4;
            if (name == "ospf-se-res-fail-no-path") return 5;
            if (name == "ospf-se-res-fail-no-epl") return 6;
            if (name == "ospf-se-res-fail-area-not-sr-enable") return 7;
            if (name == "ospf-se-res-fail-epl-multi-home-d") return 8;
            if (name == "ospf-se-res-fail-no-n-bit-epl") return 9;
            if (name == "ospf-se-res-fail-no-na-bit-epl") return 10;
            if (name == "ospf-se-res-fail-area-mismatch") return 11;
            if (name == "ospf-se-res-fail-rid-mismatch") return 12;
            return -1;
        }
};

class OspfSrlbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_allocated;
        static const ydk::Enum::YLeaf allocated;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "not-allocated") return 1;
            if (name == "allocated") return 2;
            return -1;
        }
};

class SrDp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_sr_dp_none;
        static const ydk::Enum::YLeaf mgmt_ospf_sr_dp_mpls;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-sr-dp-none") return 0;
            if (name == "mgmt-ospf-sr-dp-mpls") return 1;
            return -1;
        }
};

class Interface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_if_broadcast;
        static const ydk::Enum::YLeaf mgmt_if_nonbroadcast;
        static const ydk::Enum::YLeaf mgmt_if_point_to_point;
        static const ydk::Enum::YLeaf mgmt_if_point_to_m_point;
        static const ydk::Enum::YLeaf mgmt_if_p2mp_non_bcast;
        static const ydk::Enum::YLeaf mgmt_if_virtual_link;
        static const ydk::Enum::YLeaf mgmt_if_sham_link;
        static const ydk::Enum::YLeaf mgmt_if_loop_back;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-if-broadcast") return 1;
            if (name == "mgmt-if-nonbroadcast") return 2;
            if (name == "mgmt-if-point-to-point") return 3;
            if (name == "mgmt-if-point-to-m-point") return 4;
            if (name == "mgmt-if-p2mp-non-bcast") return 5;
            if (name == "mgmt-if-virtual-link") return 6;
            if (name == "mgmt-if-sham-link") return 7;
            if (name == "mgmt-if-loop-back") return 8;
            return -1;
        }
};

class OspfInternalLsaTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_rtr_type;
        static const ydk::Enum::YLeaf mgmt_ntwk_type;
        static const ydk::Enum::YLeaf mgmt_sum_type;
        static const ydk::Enum::YLeaf mgmt_ext_type;
        static const ydk::Enum::YLeaf mgmt_opq_type;
        static const ydk::Enum::YLeaf mgmt_opq_link_type;
        static const ydk::Enum::YLeaf mgmt_opq_rrr_type;
        static const ydk::Enum::YLeaf mgmt_opq_gr_type;
        static const ydk::Enum::YLeaf mgmt_opq_ri_type;
        static const ydk::Enum::YLeaf mgmt_opq_epl_type;
        static const ydk::Enum::YLeaf mgmt_opq_ell_type;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-rtr-type") return 1;
            if (name == "mgmt-ntwk-type") return 2;
            if (name == "mgmt-sum-type") return 3;
            if (name == "mgmt-ext-type") return 4;
            if (name == "mgmt-opq-type") return 5;
            if (name == "mgmt-opq-link-type") return 6;
            if (name == "mgmt-opq-rrr-type") return 7;
            if (name == "mgmt-opq-gr-type") return 8;
            if (name == "mgmt-opq-ri-type") return 9;
            if (name == "mgmt-opq-epl-type") return 10;
            if (name == "mgmt-opq-ell-type") return 11;
            return -1;
        }
};

class ExMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ex_metric_type_none;
        static const ydk::Enum::YLeaf mgmt_ex_metric_type_1;
        static const ydk::Enum::YLeaf mgmt_ex_metric_type_2;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ex-metric-type-none") return 0;
            if (name == "mgmt-ex-metric-type-1") return 1;
            if (name == "mgmt-ex-metric-type-2") return 2;
            return -1;
        }
};

class GsState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_gs_init;
        static const ydk::Enum::YLeaf mgmt_gs_normal;
        static const ydk::Enum::YLeaf mgmt_gs_delay;
        static const ydk::Enum::YLeaf mgmt_gs_flush;
        static const ydk::Enum::YLeaf mgmt_gs_hello;
        static const ydk::Enum::YLeaf mgmt_gs_quiet;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-gs-init") return 0;
            if (name == "mgmt-gs-normal") return 1;
            if (name == "mgmt-gs-delay") return 2;
            if (name == "mgmt-gs-flush") return 3;
            if (name == "mgmt-gs-hello") return 4;
            if (name == "mgmt-gs-quiet") return 5;
            return -1;
        }
};

class OspfShOpqRiPceAddrTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_opq_pce_addr_type_invalid;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_pce_addr_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_pce_addr_type_ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-opq-pce-addr-type-invalid") return 0;
            if (name == "mgmt-ospf-opq-pce-addr-type-ipv4") return 1;
            if (name == "mgmt-ospf-opq-pce-addr-type-ipv6") return 2;
            return -1;
        }
};

class MaxMetricSetReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_max_metric_on_proc_migration;
        static const ydk::Enum::YLeaf mgmt_max_metric_on_proc_restart;
        static const ydk::Enum::YLeaf mgmt_max_metric_on_switchover;
        static const ydk::Enum::YLeaf mgmt_max_metric_on_startup;
        static const ydk::Enum::YLeaf mgmt_max_metric_always;
        static const ydk::Enum::YLeaf mgmt_max_metric_reason_none;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-max-metric-on-proc-migration") return 0;
            if (name == "mgmt-max-metric-on-proc-restart") return 1;
            if (name == "mgmt-max-metric-on-switchover") return 2;
            if (name == "mgmt-max-metric-on-startup") return 3;
            if (name == "mgmt-max-metric-always") return 4;
            if (name == "mgmt-max-metric-reason-none") return 5;
            return -1;
        }
};

class OspfRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_r_type_none;
        static const ydk::Enum::YLeaf mgmt_r_type_other;
        static const ydk::Enum::YLeaf mgmt_r_type_intra;
        static const ydk::Enum::YLeaf mgmt_r_type_inter;
        static const ydk::Enum::YLeaf mgmt_r_type_extern1;
        static const ydk::Enum::YLeaf mgmt_r_type_extern2;
        static const ydk::Enum::YLeaf mgmt_r_type_isis_sum;
        static const ydk::Enum::YLeaf mgmt_r_type_isis_l1;
        static const ydk::Enum::YLeaf mgmt_r_type_isis_l2;
        static const ydk::Enum::YLeaf mgmt_r_type_isis_l1_ia;
        static const ydk::Enum::YLeaf mgmt_r_type_bgp_int;
        static const ydk::Enum::YLeaf mgmt_r_type_bgp_ext;
        static const ydk::Enum::YLeaf mgmt_r_type_bgp_loc;
        static const ydk::Enum::YLeaf mgmt_r_type_nssa1;
        static const ydk::Enum::YLeaf mgmt_r_type_nssa2;
        static const ydk::Enum::YLeaf mgmt_r_type_i_grp2_int;
        static const ydk::Enum::YLeaf mgmt_r_type_i_grp2_ext;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-r-type-none") return 0;
            if (name == "mgmt-r-type-other") return 1;
            if (name == "mgmt-r-type-intra") return 2;
            if (name == "mgmt-r-type-inter") return 4;
            if (name == "mgmt-r-type-extern1") return 8;
            if (name == "mgmt-r-type-extern2") return 16;
            if (name == "mgmt-r-type-isis-sum") return 32;
            if (name == "mgmt-r-type-isis-l1") return 64;
            if (name == "mgmt-r-type-isis-l2") return 128;
            if (name == "mgmt-r-type-isis-l1-ia") return 256;
            if (name == "mgmt-r-type-bgp-int") return 512;
            if (name == "mgmt-r-type-bgp-ext") return 1024;
            if (name == "mgmt-r-type-bgp-loc") return 2048;
            if (name == "mgmt-r-type-nssa1") return 4096;
            if (name == "mgmt-r-type-nssa2") return 8192;
            if (name == "mgmt-r-type-i-grp2-int") return 16384;
            if (name == "mgmt-r-type-i-grp2-ext") return 32768;
            return -1;
        }
};

class SrUloopEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf link_up;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "link-down") return 1;
            if (name == "link-up") return 2;
            return -1;
        }
};

class OspfShOpqRiTlvTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_unknown;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_rtrcap;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_pce_discovery;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_sr_algo;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_sr_range;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_node_msd;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_srlb;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-opq-ri-tlv-type-unknown") return 0;
            if (name == "mgmt-ospf-opq-ri-tlv-type-rtrcap") return 1;
            if (name == "mgmt-ospf-opq-ri-tlv-type-pce-discovery") return 2;
            if (name == "mgmt-ospf-opq-ri-tlv-type-sr-algo") return 3;
            if (name == "mgmt-ospf-opq-ri-tlv-type-sr-range") return 4;
            if (name == "mgmt-ospf-opq-ri-tlv-type-node-msd") return 5;
            if (name == "mgmt-ospf-opq-ri-tlv-type-srlb") return 6;
            return -1;
        }
};

class Timer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_db_stop;
        static const ydk::Enum::YLeaf mgmt_db_refresh;
        static const ydk::Enum::YLeaf mgmt_db_checksum;
        static const ydk::Enum::YLeaf mgmt_db_max_age;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-db-stop") return 0;
            if (name == "mgmt-db-refresh") return 1;
            if (name == "mgmt-db-checksum") return 2;
            if (name == "mgmt-db-max-age") return 3;
            return -1;
        }
};

class MaxMetricUnsetReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_max_metric_unset_none;
        static const ydk::Enum::YLeaf mgmt_max_metric_unset_bgp;
        static const ydk::Enum::YLeaf mgmt_max_metric_unset_timer;
        static const ydk::Enum::YLeaf mgmt_max_metric_unset_cfg;
        static const ydk::Enum::YLeaf mgmt_max_metric_unset_process_cleared;
        static const ydk::Enum::YLeaf mgmt_max_metric_unset_over_write;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-max-metric-unset-none") return 0;
            if (name == "mgmt-max-metric-unset-bgp") return 1;
            if (name == "mgmt-max-metric-unset-timer") return 2;
            if (name == "mgmt-max-metric-unset-cfg") return 3;
            if (name == "mgmt-max-metric-unset-process-cleared") return 4;
            if (name == "mgmt-max-metric-unset-over-write") return 5;
            return -1;
        }
};

class OspfBr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_d_type_abr_asbr;
        static const ydk::Enum::YLeaf mgmt_d_type_asbr;
        static const ydk::Enum::YLeaf mgmt_d_type_abr;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-d-type-abr-asbr") return 0;
            if (name == "mgmt-d-type-asbr") return 1;
            if (name == "mgmt-d-type-abr") return 2;
            return -1;
        }
};

class Stlv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_rrr_link_type;
        static const ydk::Enum::YLeaf mgmt_rrr_link_id;
        static const ydk::Enum::YLeaf mgmt_rrr_link_local_if_addr;
        static const ydk::Enum::YLeaf mgmt_rrr_link_remote_if_addr;
        static const ydk::Enum::YLeaf mgmt_rrr_link_metric;
        static const ydk::Enum::YLeaf mgmt_rrr_link_max_bw;
        static const ydk::Enum::YLeaf mgmt_rrr_link_max_reservable_bw;
        static const ydk::Enum::YLeaf mgmt_rrr_link_unreserved_bw;
        static const ydk::Enum::YLeaf mgmt_rrr_link_re_source_class;
        static const ydk::Enum::YLeaf mgmt_rrr_link_in_out_if_id;
        static const ydk::Enum::YLeaf mgmt_rrr_link_if_switching_cap_desc;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_srlg;
        static const ydk::Enum::YLeaf mgmt_rrr_link_bw_constraints_sub;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_ext_admin_sub;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_uni_delay;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_max_reservable_bw_sub;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_unreserved_bw_sub;
        static const ydk::Enum::YLeaf mgmt_rrr_link_igp_metric;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-rrr-link-type") return 1;
            if (name == "mgmt-rrr-link-id") return 2;
            if (name == "mgmt-rrr-link-local-if-addr") return 3;
            if (name == "mgmt-rrr-link-remote-if-addr") return 4;
            if (name == "mgmt-rrr-link-metric") return 5;
            if (name == "mgmt-rrr-link-max-bw") return 6;
            if (name == "mgmt-rrr-link-max-reservable-bw") return 7;
            if (name == "mgmt-rrr-link-unreserved-bw") return 8;
            if (name == "mgmt-rrr-link-re-source-class") return 9;
            if (name == "mgmt-rrr-link-in-out-if-id") return 11;
            if (name == "mgmt-rrr-link-if-switching-cap-desc") return 15;
            if (name == "mgmt-ospf-rrr-link-srlg") return 16;
            if (name == "mgmt-rrr-link-bw-constraints-sub") return 17;
            if (name == "mgmt-ospf-rrr-link-ext-admin-sub") return 26;
            if (name == "mgmt-ospf-rrr-link-uni-delay") return 27;
            if (name == "mgmt-ospf-rrr-link-max-reservable-bw-sub") return 32768;
            if (name == "mgmt-ospf-rrr-link-unreserved-bw-sub") return 32769;
            if (name == "mgmt-rrr-link-igp-metric") return 32770;
            return -1;
        }
};

class SrmsMiFlagEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 1;
            return -1;
        }
};

class SrmsMiAfEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class NeighborState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_nbr_down;
        static const ydk::Enum::YLeaf mgmt_nbr_attempt;
        static const ydk::Enum::YLeaf mgmt_nbr_init;
        static const ydk::Enum::YLeaf mgmt_nbr_2way;
        static const ydk::Enum::YLeaf mgmt_nbr_ex_start;
        static const ydk::Enum::YLeaf mgmt_nbr_ex_change;
        static const ydk::Enum::YLeaf mgmt_nbr_load_ing;
        static const ydk::Enum::YLeaf mgmt_nbr_full;
        static const ydk::Enum::YLeaf mgmt_nbr_sc_virtual;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-nbr-down") return 0;
            if (name == "mgmt-nbr-attempt") return 1;
            if (name == "mgmt-nbr-init") return 2;
            if (name == "mgmt-nbr-2way") return 3;
            if (name == "mgmt-nbr-ex-start") return 4;
            if (name == "mgmt-nbr-ex-change") return 5;
            if (name == "mgmt-nbr-load-ing") return 6;
            if (name == "mgmt-nbr-full") return 7;
            if (name == "mgmt-nbr-sc-virtual") return 8;
            return -1;
        }
};

class InterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ifs_unknown;
        static const ydk::Enum::YLeaf mgmt_ifs_admin_down;
        static const ydk::Enum::YLeaf mgmt_ifs_down;
        static const ydk::Enum::YLeaf mgmt_ifs_up;
        static const ydk::Enum::YLeaf mgmt_ifs_shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ifs-unknown") return 0;
            if (name == "mgmt-ifs-admin-down") return 1;
            if (name == "mgmt-ifs-down") return 2;
            if (name == "mgmt-ifs-up") return 3;
            if (name == "mgmt-ifs-shutdown") return 4;
            return -1;
        }
};

class MplsTeOptTlv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_none;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_srlg;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_bc;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_ixcd;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_uni_delay;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls-te-opt-tlv-type-none") return 0;
            if (name == "mpls-te-opt-tlv-type-srlg") return 1;
            if (name == "mpls-te-opt-tlv-type-bc") return 2;
            if (name == "mpls-te-opt-tlv-type-ixcd") return 3;
            if (name == "mpls-te-opt-tlv-type-uni-delay") return 4;
            return -1;
        }
};

class RedistProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_rib_protocol_all;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_connected;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_local;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_static;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_bgp;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_rip;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_isis;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_ospf;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_eigrp;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_dagr;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_subscriber;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_application;
        static const ydk::Enum::YLeaf mgmt_rib_protocol_mobile;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-rib-protocol-all") return 0;
            if (name == "mgmt-rib-protocol-connected") return 1;
            if (name == "mgmt-rib-protocol-local") return 2;
            if (name == "mgmt-rib-protocol-static") return 3;
            if (name == "mgmt-rib-protocol-bgp") return 4;
            if (name == "mgmt-rib-protocol-rip") return 5;
            if (name == "mgmt-rib-protocol-isis") return 6;
            if (name == "mgmt-rib-protocol-ospf") return 7;
            if (name == "mgmt-rib-protocol-eigrp") return 8;
            if (name == "mgmt-rib-protocol-dagr") return 9;
            if (name == "mgmt-rib-protocol-subscriber") return 10;
            if (name == "mgmt-rib-protocol-application") return 11;
            if (name == "mgmt-rib-protocol-mobile") return 12;
            return -1;
        }
};

class Lfa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_unknown_lfa;
        static const ydk::Enum::YLeaf mgmt_ospf_direct_lfa;
        static const ydk::Enum::YLeaf mgmt_ospf_ti_lfa;
        static const ydk::Enum::YLeaf mgmt_ospf_remote_lfa;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-unknown-lfa") return 0;
            if (name == "mgmt-ospf-direct-lfa") return 1;
            if (name == "mgmt-ospf-ti-lfa") return 2;
            if (name == "mgmt-ospf-remote-lfa") return 3;
            return -1;
        }
};

class OspfLsaOpqRiScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsa_opq_ri_scope_link;
        static const ydk::Enum::YLeaf mgmt_lsa_opq_ri_scope_area;
        static const ydk::Enum::YLeaf mgmt_lsa_opq_ri_scope_as;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsa-opq-ri-scope-link") return 9;
            if (name == "mgmt-lsa-opq-ri-scope-area") return 10;
            if (name == "mgmt-lsa-opq-ri-scope-as") return 11;
            return -1;
        }
};

class Lsa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsa_type_rtr;
        static const ydk::Enum::YLeaf mgmt_lsa_type_net;
        static const ydk::Enum::YLeaf mgmt_lsa_type_sum_net;
        static const ydk::Enum::YLeaf mgmt_lsa_type_sum_asb;
        static const ydk::Enum::YLeaf mgmt_lsa_type_ext;
        static const ydk::Enum::YLeaf mgmt_lsa_type_mospf;
        static const ydk::Enum::YLeaf mgmt_lsa_type_7_ase;
        static const ydk::Enum::YLeaf mgmt_lsa_type_8_ignore;
        static const ydk::Enum::YLeaf mgmt_lsa_type_opq_link;
        static const ydk::Enum::YLeaf mgmt_lsa_type_opq_area;
        static const ydk::Enum::YLeaf mgmt_lsa_type_opq_as;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsa-type-rtr") return 1;
            if (name == "mgmt-lsa-type-net") return 2;
            if (name == "mgmt-lsa-type-sum-net") return 3;
            if (name == "mgmt-lsa-type-sum-asb") return 4;
            if (name == "mgmt-lsa-type-ext") return 5;
            if (name == "mgmt-lsa-type-mospf") return 6;
            if (name == "mgmt-lsa-type-7-ase") return 7;
            if (name == "mgmt-lsa-type-8-ignore") return 8;
            if (name == "mgmt-lsa-type-opq-link") return 9;
            if (name == "mgmt-lsa-type-opq-area") return 10;
            if (name == "mgmt-lsa-type-opq-as") return 11;
            return -1;
        }
};

class OspfSrPolMetricMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_metric_mode_none;
        static const ydk::Enum::YLeaf mgmt_ospf_metric_mode_relative;
        static const ydk::Enum::YLeaf mgmt_ospf_metric_mode_constant;
        static const ydk::Enum::YLeaf mgmt_ospf_metric_mode_absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-ospf-metric-mode-none") return 0;
            if (name == "mgmt-ospf-metric-mode-relative") return 1;
            if (name == "mgmt-ospf-metric-mode-constant") return 3;
            if (name == "mgmt-ospf-metric-mode-absolute") return 4;
            return -1;
        }
};

class DrBdrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_dbdr_none;
        static const ydk::Enum::YLeaf mgmt_dbdr_dr;
        static const ydk::Enum::YLeaf mgmt_dbdr_bdr;
        static const ydk::Enum::YLeaf mgmt_dbdr_dr_other;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-dbdr-none") return 0;
            if (name == "mgmt-dbdr-dr") return 1;
            if (name == "mgmt-dbdr-bdr") return 2;
            if (name == "mgmt-dbdr-dr-other") return 3;
            return -1;
        }
};

class OspfCrytographicAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_not_configured;
        static const ydk::Enum::YLeaf mgmt_aes_128_cmac_96;
        static const ydk::Enum::YLeaf mgmt_hmac_sha1_12;
        static const ydk::Enum::YLeaf mgmt_md5_16;
        static const ydk::Enum::YLeaf mgmt_sha1_20;
        static const ydk::Enum::YLeaf mgmt_hmac_md5_16;
        static const ydk::Enum::YLeaf mgmt_hmac_sha1_20;
        static const ydk::Enum::YLeaf mgmt_aes_128_cmac;
        static const ydk::Enum::YLeaf mgmt_aes_256_cmac;
        static const ydk::Enum::YLeaf mgmt_hmac_sha1_96;
        static const ydk::Enum::YLeaf mgmt_hmac_sha_256;
        static const ydk::Enum::YLeaf mgmt_hmac_sha1;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-not-configured") return 0;
            if (name == "mgmt-aes-128-cmac-96") return 1;
            if (name == "mgmt-hmac-sha1-12") return 2;
            if (name == "mgmt-md5-16") return 3;
            if (name == "mgmt-sha1-20") return 4;
            if (name == "mgmt-hmac-md5-16") return 5;
            if (name == "mgmt-hmac-sha1-20") return 6;
            if (name == "mgmt-aes-128-cmac") return 7;
            if (name == "mgmt-aes-256-cmac") return 8;
            if (name == "mgmt-hmac-sha1-96") return 9;
            if (name == "mgmt-hmac-sha-256") return 10;
            if (name == "mgmt-hmac-sha1") return 11;
            return -1;
        }
};

class TimerTable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_db_no_table;
        static const ydk::Enum::YLeaf mgmt_db_sec_table;
        static const ydk::Enum::YLeaf mgmt_db_buffer_table;
        static const ydk::Enum::YLeaf mgmt_db_min_table;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-db-no-table") return 0;
            if (name == "mgmt-db-sec-table") return 1;
            if (name == "mgmt-db-buffer-table") return 2;
            if (name == "mgmt-db-min-table") return 3;
            return -1;
        }
};

class OspfGrReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_gr_reason_unknown;
        static const ydk::Enum::YLeaf mgmt_gr_reason_sw_restart;
        static const ydk::Enum::YLeaf mgmt_gr_reason_sw_upgrade;
        static const ydk::Enum::YLeaf mgmt_gr_reason_switchover;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-gr-reason-unknown") return 0;
            if (name == "mgmt-gr-reason-sw-restart") return 1;
            if (name == "mgmt-gr-reason-sw-upgrade") return 2;
            if (name == "mgmt-gr-reason-switchover") return 3;
            return -1;
        }
};

class OspfMaxMetricAbrOffReasons : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_none;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_no_nbr;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_new_nbr;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_nbr_full;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_flush_p_end;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf-max-metric-abr-off-reason-none") return 0;
            if (name == "ospf-max-metric-abr-off-reason-no-nbr") return 1;
            if (name == "ospf-max-metric-abr-off-reason-new-nbr") return 2;
            if (name == "ospf-max-metric-abr-off-reason-nbr-full") return 4;
            if (name == "ospf-max-metric-abr-off-reason-flush-p-end") return 8;
            return -1;
        }
};

class OspfLs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf summary;
        static const ydk::Enum::YLeaf asbr_summary;
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf nssa_external;
        static const ydk::Enum::YLeaf opaque_link;
        static const ydk::Enum::YLeaf opaque_area;
        static const ydk::Enum::YLeaf opaque_as;

        static int get_enum_value(const std::string & name) {
            if (name == "router") return 1;
            if (name == "network") return 2;
            if (name == "summary") return 3;
            if (name == "asbr-summary") return 4;
            if (name == "external") return 5;
            if (name == "nssa-external") return 7;
            if (name == "opaque-link") return 9;
            if (name == "opaque-area") return 10;
            if (name == "opaque-as") return 11;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_0_ */

