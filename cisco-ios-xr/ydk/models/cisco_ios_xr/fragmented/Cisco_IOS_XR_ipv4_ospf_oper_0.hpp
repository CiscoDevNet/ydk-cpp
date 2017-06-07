#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_0_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

class Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Processes; //type: Ospf::Processes

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes> processes;
        
}; // Ospf


class Ospf::Processes : public Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Process; //type: Ospf::Processes::Process

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process> > process;
        
}; // Ospf::Processes


class Ospf::Processes::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_name; //type: string
        class Vrfs; //type: Ospf::Processes::Process::Vrfs
        class Srms; //type: Ospf::Processes::Process::Srms
        class DefaultVrf; //type: Ospf::Processes::Process::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms> srms;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs> vrfs;
        
}; // Ospf::Processes::Process


class Ospf::Processes::Process::Vrfs : public Entity
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

        class Vrf; //type: Ospf::Processes::Process::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf> > vrf;
        
}; // Ospf::Processes::Process::Vrfs


class Ospf::Processes::Process::Vrfs::Vrf : public Entity
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
        class InterfaceVrfInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation
        class FloodListTable; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable
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

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation> adjacency_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics> area_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas> areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::BorderRouters> border_routers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database> database;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FloodListTable> flood_list_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation> interface_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation> interface_vrf_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe> mpls_te;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::OspfSummary> ospf_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation> process_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation> route_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        
}; // Ospf::Processes::Process::Vrfs::Vrf


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation : public Entity
{
    public:
        InterfaceVrfInformation();
        ~InterfaceVrfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShamLinks; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks> sham_links;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks : public Entity
{
    public:
        ShamLinks();
        ~ShamLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShamLink; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink> > sham_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sham_link_name; //type: string
        YLeaf sham_link_name_xr; //type: string
        YLeaf sham_link_neighbor_id; //type: string
        YLeaf sham_link_source_address; //type: string
        YLeaf sham_link_dest_address; //type: string
        YLeaf sham_link_state; //type: OspfInterfaceStateEnum
        YLeaf sham_link_demand_circuit; //type: boolean
        YLeaf sham_link_dc_bitless_lsa; //type: uint32
        YLeaf sham_link_ifindex; //type: uint32
        YLeaf sham_link_area; //type: string
        YLeaf sham_link_cost; //type: uint16
        YLeaf sham_link_transmission_delay; //type: uint16
        YLeaf sham_link_hello_interval; //type: uint32
        YLeaf sham_link_hello_interval_ms; //type: uint32
        YLeaf sham_link_dead_interval; //type: uint32
        YLeaf sham_link_wait_interval; //type: uint32
        YLeaf sham_link_retransmission_interval; //type: uint32
        YLeaf sham_link_next_hello; //type: uint32
        YLeaf sham_link_next_hello_ms; //type: uint32
        YLeaf sham_link_passive; //type: boolean
        YLeaf sham_link_authentication_type; //type: AuthenticationEnum
        YLeaf sham_link_youngest_md_key; //type: boolean
        YLeaf sham_link_youngest_md_key_id; //type: uint16
        YLeaf sham_link_old_md_key_count; //type: uint32
        YLeaf sham_link_keychain_id; //type: uint64
        YLeaf sham_link_nsf_enabled; //type: boolean
        YLeaf sham_link_nsf; //type: boolean
        YLeaf sham_link_last_nsf; //type: uint32
        YLeafList sham_link_md_key; //type: list of  uint16
        class ShamLinkNeighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor> sham_link_neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor : public Entity
{
    public:
        ShamLinkNeighbor();
        ~ShamLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sham_link_suppress_hello; //type: boolean
        YLeaf sham_link_state; //type: NeighborStateEnum
        class ShamLinkRetransmissoin; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin> sham_link_retransmissoin;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin : public Entity
{
    public:
        ShamLinkRetransmissoin();
        ~ShamLinkRetransmissoin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dbd_retransmission_count; //type: uint32
        YLeaf dbd_retransmission_total_count; //type: uint32
        YLeaf area_flooding_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf neighbor_retransmission_count; //type: uint32
        YLeaf number_of_retransmissions; //type: uint32
        YLeaf area_first_flood_information; //type: uint32
        YLeaf area_first_flood_information_index; //type: uint32
        YLeaf as_first_flood_information; //type: uint32
        YLeaf as_first_flood_information_index; //type: uint32
        YLeaf area_next_flood_information; //type: uint32
        YLeaf area_next_flood_information_index; //type: uint32
        YLeaf as_next_flood_information; //type: uint32
        YLeaf as_next_flood_information_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable : public Entity
{
    public:
        FloodListTable();
        ~FloodListTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flood; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood> > flood;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood : public Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf flood_interface_name; //type: string
        YLeaf flood_pacing_timer; //type: uint32
        YLeaf flood_lsa_count; //type: uint32
        class AreaFlood; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood> > as_flood;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood : public Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood


class Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood : public Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe : public Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsTeLinks; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks
        class MplsTeFragments; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments> mpls_te_fragments;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks> mpls_te_links;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks : public Entity
{
    public:
        MplsTeLinks();
        ~MplsTeLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsTeLink; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink> > mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink : public Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf mpls_te_router_id; //type: string
        YLeaf mpls_te_enabled; //type: boolean
        YLeaf mpls_te_initialized; //type: boolean
        YLeaf mpls_te_area_id; //type: string
        YLeaf mpls_te_area_instance; //type: uint32
        YLeaf mpls_te_router_address; //type: string
        YLeaf mpls_te_next_fragment_id; //type: uint32
        YLeaf spacious_fragment; //type: boolean
        class MplsTeLink_; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_
        class MplsTeFragment; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment> > mpls_te_fragment;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_> > mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_ : public Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf new_link; //type: boolean
        YLeaf fragment_id; //type: uint32
        YLeaf mpls_link_instance; //type: uint32
        YLeaf mpls_link_type; //type: LinkSubnetEnum
        YLeaf neighbor_system_id; //type: string
        YLeaf link_address; //type: string
        YLeaf neighbor_ip_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bw; //type: uint32
        YLeaf maximum_link_reservable_bw; //type: uint32
        YLeaf maximum_link_sub_reservable_bw; //type: uint32
        YLeaf priority_count; //type: int32
        YLeaf affinity; //type: uint32
        YLeaf output_interface_id; //type: uint32
        YLeaf input_interface_id; //type: uint32
        YLeaf dste_in_use; //type: boolean
        YLeaf dste_allocation_model_id; //type: IgpteLibBwModelEnum
        YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority : public Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority : public Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability : public Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_protocol_capability; //type: uint8
        YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability : public Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_switching_capability; //type: uint8
        YLeaf link_encoding; //type: uint8
        YLeaf minimum_lsp_bw; //type: uint64
        YLeaf link_mtu; //type: uint16
        YLeafList maximum_lsp_bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList : public Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_admin_size; //type: uint32
        YLeafList ext_admin_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv : public Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlvEnum
        YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opaque_tlv_type; //type: MplsTeOptTlvEnum
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf model_id; //type: uint8
        YLeaf num_b_cs; //type: uint32
        YLeafList mplste_link_bc_bandwidth; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_len; //type: uint32
        YLeaf num_srl_gs; //type: uint32
        YLeafList mplste_link_srlg_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap; //type: uint8
        YLeaf rile_len_code; //type: uint8
        YLeaf fixed_scsi_count; //type: uint32
        YLeaf flex_scsi_count; //type: uint32
        YLeafList max_lspbw; //type: list of  int64
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_lsp_bandwidth; //type: uint64
        YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bw_sub_tlv_type; //type: uint16
        YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_oduj_prio; //type: list of  uint32
        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_lspbw; //type: list of  uint64
        YLeafList max_lspbw; //type: list of  uint64
        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment : public Entity
{
    public:
        MplsTeFragment();
        ~MplsTeFragment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fragment_instance; //type: uint32
        YLeaf fragment_id; //type: uint32
        YLeaf dste_model_id; //type: uint8
        YLeaf same_fragment_count; //type: uint8
        class MplsTeLink_; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_> > mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_ : public Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf new_link; //type: boolean
        YLeaf fragment_id; //type: uint32
        YLeaf mpls_link_instance; //type: uint32
        YLeaf mpls_link_type; //type: LinkSubnetEnum
        YLeaf neighbor_system_id; //type: string
        YLeaf link_address; //type: string
        YLeaf neighbor_ip_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bw; //type: uint32
        YLeaf maximum_link_reservable_bw; //type: uint32
        YLeaf maximum_link_sub_reservable_bw; //type: uint32
        YLeaf priority_count; //type: int32
        YLeaf affinity; //type: uint32
        YLeaf output_interface_id; //type: uint32
        YLeaf input_interface_id; //type: uint32
        YLeaf dste_in_use; //type: boolean
        YLeaf dste_allocation_model_id; //type: IgpteLibBwModelEnum
        YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority : public Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority : public Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability : public Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_protocol_capability; //type: uint8
        YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability : public Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_switching_capability; //type: uint8
        YLeaf link_encoding; //type: uint8
        YLeaf minimum_lsp_bw; //type: uint64
        YLeaf link_mtu; //type: uint16
        YLeafList maximum_lsp_bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList : public Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_admin_size; //type: uint32
        YLeafList ext_admin_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv : public Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlvEnum
        YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opaque_tlv_type; //type: MplsTeOptTlvEnum
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf model_id; //type: uint8
        YLeaf num_b_cs; //type: uint32
        YLeafList mplste_link_bc_bandwidth; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_len; //type: uint32
        YLeaf num_srl_gs; //type: uint32
        YLeafList mplste_link_srlg_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap; //type: uint8
        YLeaf rile_len_code; //type: uint8
        YLeaf fixed_scsi_count; //type: uint32
        YLeaf flex_scsi_count; //type: uint32
        YLeafList max_lspbw; //type: list of  int64
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_lsp_bandwidth; //type: uint64
        YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bw_sub_tlv_type; //type: uint16
        YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_oduj_prio; //type: list of  uint32
        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_lspbw; //type: list of  uint64
        YLeafList max_lspbw; //type: list of  uint64
        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments : public Entity
{
    public:
        MplsTeFragments();
        ~MplsTeFragments();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsTeFragment; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment> > mpls_te_fragment;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment : public Entity
{
    public:
        MplsTeFragment();
        ~MplsTeFragment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf mpls_te_router_id; //type: string
        YLeaf mpls_te_enabled; //type: boolean
        YLeaf mpls_te_initialized; //type: boolean
        YLeaf mpls_te_area_id; //type: string
        YLeaf mpls_te_area_instance; //type: uint32
        YLeaf mpls_te_router_address; //type: string
        YLeaf mpls_te_next_fragment_id; //type: uint32
        YLeaf spacious_fragment; //type: boolean
        class MplsTeLink; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink
        class MplsTeFragment_; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_> > mpls_te_fragment;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink> > mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink : public Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf new_link; //type: boolean
        YLeaf fragment_id; //type: uint32
        YLeaf mpls_link_instance; //type: uint32
        YLeaf mpls_link_type; //type: LinkSubnetEnum
        YLeaf neighbor_system_id; //type: string
        YLeaf link_address; //type: string
        YLeaf neighbor_ip_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bw; //type: uint32
        YLeaf maximum_link_reservable_bw; //type: uint32
        YLeaf maximum_link_sub_reservable_bw; //type: uint32
        YLeaf priority_count; //type: int32
        YLeaf affinity; //type: uint32
        YLeaf output_interface_id; //type: uint32
        YLeaf input_interface_id; //type: uint32
        YLeaf dste_in_use; //type: boolean
        YLeaf dste_allocation_model_id; //type: IgpteLibBwModelEnum
        YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority : public Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority : public Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability : public Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_protocol_capability; //type: uint8
        YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability : public Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_switching_capability; //type: uint8
        YLeaf link_encoding; //type: uint8
        YLeaf minimum_lsp_bw; //type: uint64
        YLeaf link_mtu; //type: uint16
        YLeafList maximum_lsp_bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList : public Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_admin_size; //type: uint32
        YLeafList ext_admin_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv : public Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlvEnum
        YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opaque_tlv_type; //type: MplsTeOptTlvEnum
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf model_id; //type: uint8
        YLeaf num_b_cs; //type: uint32
        YLeafList mplste_link_bc_bandwidth; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_len; //type: uint32
        YLeaf num_srl_gs; //type: uint32
        YLeafList mplste_link_srlg_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap; //type: uint8
        YLeaf rile_len_code; //type: uint8
        YLeaf fixed_scsi_count; //type: uint32
        YLeaf flex_scsi_count; //type: uint32
        YLeafList max_lspbw; //type: list of  int64
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_lsp_bandwidth; //type: uint64
        YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bw_sub_tlv_type; //type: uint16
        YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_oduj_prio; //type: list of  uint32
        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_lspbw; //type: list of  uint64
        YLeafList max_lspbw; //type: list of  uint64
        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_ : public Entity
{
    public:
        MplsTeFragment_();
        ~MplsTeFragment_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fragment_instance; //type: uint32
        YLeaf fragment_id; //type: uint32
        YLeaf dste_model_id; //type: uint8
        YLeaf same_fragment_count; //type: uint8
        class MplsTeLink; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink> > mpls_te_link;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink : public Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf new_link; //type: boolean
        YLeaf fragment_id; //type: uint32
        YLeaf mpls_link_instance; //type: uint32
        YLeaf mpls_link_type; //type: LinkSubnetEnum
        YLeaf neighbor_system_id; //type: string
        YLeaf link_address; //type: string
        YLeaf neighbor_ip_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bw; //type: uint32
        YLeaf maximum_link_reservable_bw; //type: uint32
        YLeaf maximum_link_sub_reservable_bw; //type: uint32
        YLeaf priority_count; //type: int32
        YLeaf affinity; //type: uint32
        YLeaf output_interface_id; //type: uint32
        YLeaf input_interface_id; //type: uint32
        YLeaf dste_in_use; //type: boolean
        YLeaf dste_allocation_model_id; //type: IgpteLibBwModelEnum
        YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority : public Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority : public Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability : public Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_protocol_capability; //type: uint8
        YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability : public Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_switching_capability; //type: uint8
        YLeaf link_encoding; //type: uint8
        YLeaf minimum_lsp_bw; //type: uint64
        YLeaf link_mtu; //type: uint16
        YLeafList maximum_lsp_bw_per_priority; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList : public Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_admin_size; //type: uint32
        YLeafList ext_admin_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv : public Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlvEnum
        YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opaque_tlv_type; //type: MplsTeOptTlvEnum
        class BctlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf model_id; //type: uint8
        YLeaf num_b_cs; //type: uint32
        YLeafList mplste_link_bc_bandwidth; //type: list of  uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_len; //type: uint32
        YLeaf num_srl_gs; //type: uint32
        YLeafList mplste_link_srlg_data; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap; //type: uint8
        YLeaf rile_len_code; //type: uint8
        YLeaf fixed_scsi_count; //type: uint32
        YLeaf flex_scsi_count; //type: uint32
        YLeafList max_lspbw; //type: list of  int64
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_lsp_bandwidth; //type: uint64
        YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bw_sub_tlv_type; //type: uint16
        YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_oduj_prio; //type: list of  uint32
        class FixedSubTlvValue; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unres_lspbw; //type: list of  uint64
        YLeafList max_lspbw; //type: list of  uint64
        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: uint8
        YLeaf num_stages; //type: uint8
        YLeaf tbit; //type: uint8
        YLeaf sbit; //type: uint8
        YLeaf tsg; //type: uint8
        YLeaf res; //type: uint8
        YLeaf priority_bit0; //type: uint8
        YLeaf priority_bit1; //type: uint8
        YLeaf priority_bit2; //type: uint8
        YLeaf priority_bit3; //type: uint8
        YLeaf priority_bit4; //type: uint8
        YLeaf priority_bit5; //type: uint8
        YLeaf priority_bit6; //type: uint8
        YLeaf priority_bit7; //type: uint8
        YLeaf stage; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpfStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats
        class RibBatchStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats
        class IssuStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats
        class RibThreadStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats
        class NsrPlStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats
        class NsrStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats
        class FrrStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats
        class TeStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats
        class ProtocolStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats
        class RawIoStats; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats
        class InterfaceStatsEntries; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats> frr_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries> interface_stats_entries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats> issu_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats> nsr_pl_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats> nsr_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats> protocol_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats> raw_io_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats> rib_batch_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats> rib_thread_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats> spf_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats> te_stats;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats : public Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpfHeader; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader
        class OsRuntime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime
        class OsSumRuntime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime
        class OsExRuntime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime
        class Runtime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime> > os_ex_runtime;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime> > os_runtime;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime> > os_sum_runtime;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime> > runtime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader> spf_header;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader : public Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf spf_count; //type: uint32
        class AreaSumm; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm> > area_summ;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm : public Entity
{
    public:
        AreaSumm();
        ~AreaSumm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: uint32
        YLeaf spf_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime : public Entity
{
    public:
        OsRuntime();
        ~OsRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si_area_id_str; //type: string
        YLeaf si_change_flags; //type: uint16
        class SiStartTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime
        class SiDuration; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration> si_duration;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime> si_start_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime : public Entity
{
    public:
        SiStartTime();
        ~SiStartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration : public Entity
{
    public:
        SiDuration();
        ~SiDuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime : public Entity
{
    public:
        OsSumRuntime();
        ~OsSumRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sp_adv_rtr_id; //type: uint32
        YLeaf sp_dest_count; //type: uint32
        YLeaf sp_dest_addr; //type: uint32
        class SpStartTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime
        class SpDuration; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration> sp_duration;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime> sp_start_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime : public Entity
{
    public:
        SpStartTime();
        ~SpStartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration : public Entity
{
    public:
        SpDuration();
        ~SpDuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime : public Entity
{
    public:
        OsExRuntime();
        ~OsExRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sp_adv_rtr_id; //type: uint32
        YLeaf sp_dest_count; //type: uint32
        YLeaf sp_dest_addr; //type: uint32
        class SpStartTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime
        class SpDuration; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration> sp_duration;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime> sp_start_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime : public Entity
{
    public:
        SpStartTime();
        ~SpStartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration : public Entity
{
    public:
        SpDuration();
        ~SpDuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime : public Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf_start_time; //type: uint32
        YLeaf lsa_change_cnt; //type: int16
        class GblSpfTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime
        class LsaInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo
        class AreaStat; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat> > area_stat;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime> gbl_spf_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo> > lsa_info;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime : public Entity
{
    public:
        GblSpfTime();
        ~GblSpfTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf_dijkstra; //type: uint32
        YLeaf spf_intra_prefix; //type: uint32
        YLeaf spf_intra_prefix_del; //type: uint32
        YLeaf spf_inter_prefix; //type: uint32
        YLeaf spf_inter_prefix_del; //type: uint32
        YLeaf spf_ext_prefix; //type: uint32
        YLeaf spf_ext_prefix_del; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: uint32
        YLeaf adv_rtr; //type: string
        YLeaf id; //type: string
        YLeaf type; //type: uint8
        YLeaf flush; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat : public Entity
{
    public:
        AreaStat();
        ~AreaStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: uint32
        YLeafList lsa_type_cnt; //type: list of  uint32
        class SpfTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime> spf_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime : public Entity
{
    public:
        SpfTime();
        ~SpfTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf_dijkstra; //type: uint32
        YLeaf spf_intra_prefix; //type: uint32
        YLeaf spf_intra_prefix_del; //type: uint32
        YLeaf spf_inter_prefix; //type: uint32
        YLeaf spf_inter_prefix_del; //type: uint32
        YLeaf spf_ext_prefix; //type: uint32
        YLeaf spf_ext_prefix_del; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats : public Entity
{
    public:
        RibBatchStats();
        ~RibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PriorityBatch; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch> > priority_batch;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch : public Entity
{
    public:
        PriorityBatch();
        ~PriorityBatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf batches_sent; //type: uint32
        YLeaf routes_sent; //type: uint32
        YLeaf routes_pending; //type: uint32
        YLeaf max_routes; //type: uint32
        YLeaf paths_sent; //type: uint32
        YLeaf paths_pending; //type: uint32
        YLeaf paths_add; //type: uint32
        YLeaf paths_add_errs; //type: uint32
        YLeaf paths_del; //type: uint32
        YLeaf paths_del_errs; //type: uint32
        YLeaf lfas_pending; //type: uint32
        YLeaf lfas_add; //type: uint32
        YLeaf lfas_del; //type: uint32
        YLeaf lfas_sent; //type: uint32
        YLeaf priority_level; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats : public Entity
{
    public:
        IssuStats();
        ~IssuStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_rev; //type: int32
        YLeaf nsr_fsm_state; //type: int32
        YLeaf nsr_version; //type: uint32
        YLeaf nsr_nodeid; //type: uint32
        YLeaf nsr_peer_version; //type: uint32
        YLeaf nsr_peer_nodeid; //type: uint32
        YLeaf nsr_mtu; //type: uint32
        YLeaf nsr_nbr_qad_qid; //type: uint32
        YLeaf nsr_lsa_qad_qid; //type: uint32
        YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        YLeaf nsr_nbr_seq_no; //type: uint32
        YLeaf nsr_intf_seq_no; //type: uint32
        YLeaf nsr_tmr_quant; //type: int32
        YLeaf nsr_conn_to_active_attempts; //type: uint64
        YLeaf nsr_conn_to_active_fails; //type: uint64
        YLeaf nsr_conn_to_active_opens; //type: uint64
        YLeaf nsr_conn_to_active_closes; //type: uint64
        YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched> nsr_thd_sched;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched : public Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched : public Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats : public Entity
{
    public:
        RibThreadStats();
        ~RibThreadStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Internalwq; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq
        class Ribqueue; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq> internalwq;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue> > ribqueue;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq : public Entity
{
    public:
        Internalwq();
        ~Internalwq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wq_thread_active; //type: boolean
        YLeaf wq_dqtime; //type: uint64
        YLeaf wqe_qtime; //type: uint64
        YLeaf wq_len_cur; //type: int32
        YLeaf wq_len_max; //type: int32
        YLeaf wq_total_queued; //type: uint32
        YLeaf wq_total_dequeued; //type: uint32
        YLeaf rib_version; //type: uint32
        YLeaf rib_pkts_sent; //type: uint32
        YLeaf rib_signals; //type: uint32
        YLeaf rib_send_errs; //type: uint32
        YLeaf rib_queue_errs; //type: uint32
        YLeaf rib_pfx_limit_errs; //type: uint32
        YLeaf rib_dequeue_errs; //type: uint32
        YLeaf rib_empty_batches; //type: uint32
        YLeaf rib_drop_before; //type: uint32
        YLeaf rib_drop_after; //type: uint32
        YLeaf rib_drop_conn; //type: uint32
        YLeaf rib_table_not_created; //type: uint32
        YLeaf priority_level; //type: string
        YLeaf rib_base_clock; //type: uint64
        class RibBaseTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime> rib_base_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime : public Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue : public Entity
{
    public:
        Ribqueue();
        ~Ribqueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wq_thread_active; //type: boolean
        YLeaf wq_dqtime; //type: uint64
        YLeaf wqe_qtime; //type: uint64
        YLeaf wq_len_cur; //type: int32
        YLeaf wq_len_max; //type: int32
        YLeaf wq_total_queued; //type: uint32
        YLeaf wq_total_dequeued; //type: uint32
        YLeaf rib_version; //type: uint32
        YLeaf rib_pkts_sent; //type: uint32
        YLeaf rib_signals; //type: uint32
        YLeaf rib_send_errs; //type: uint32
        YLeaf rib_queue_errs; //type: uint32
        YLeaf rib_pfx_limit_errs; //type: uint32
        YLeaf rib_dequeue_errs; //type: uint32
        YLeaf rib_empty_batches; //type: uint32
        YLeaf rib_drop_before; //type: uint32
        YLeaf rib_drop_after; //type: uint32
        YLeaf rib_drop_conn; //type: uint32
        YLeaf rib_table_not_created; //type: uint32
        YLeaf priority_level; //type: string
        YLeaf rib_base_clock; //type: uint64
        class RibBaseTime; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime> rib_base_time;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime : public Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats : public Entity
{
    public:
        NsrPlStats();
        ~NsrPlStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NcdPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri> > ncd_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri : public Entity
{
    public:
        NcdPri();
        ~NcdPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList num_sent; //type: list of  uint64
        YLeafList num_recv; //type: list of  uint64
        class NumSentDrop; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop
        class NumRecvDrop; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop> > num_sent_drop;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop : public Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList nsr_pl_send_drop_array; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop : public Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList nsr_pl_recv_drop_array; //type: list of  uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats : public Entity
{
    public:
        NsrStats();
        ~NsrStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_rev; //type: int32
        YLeaf nsr_fsm_state; //type: int32
        YLeaf nsr_version; //type: uint32
        YLeaf nsr_nodeid; //type: uint32
        YLeaf nsr_peer_version; //type: uint32
        YLeaf nsr_peer_nodeid; //type: uint32
        YLeaf nsr_mtu; //type: uint32
        YLeaf nsr_nbr_qad_qid; //type: uint32
        YLeaf nsr_lsa_qad_qid; //type: uint32
        YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        YLeaf nsr_nbr_seq_no; //type: uint32
        YLeaf nsr_intf_seq_no; //type: uint32
        YLeaf nsr_tmr_quant; //type: int32
        YLeaf nsr_conn_to_active_attempts; //type: uint64
        YLeaf nsr_conn_to_active_fails; //type: uint64
        YLeaf nsr_conn_to_active_opens; //type: uint64
        YLeaf nsr_conn_to_active_closes; //type: uint64
        YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched> nsr_thd_sched;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched : public Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched : public Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats : public Entity
{
    public:
        FrrStats();
        ~FrrStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fs_paths; //type: uint32
        YLeaf fs_paths_eligible; //type: uint32
        YLeaf fs_paths_protected; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats : public Entity
{
    public:
        TeStats();
        ~TeStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_connected; //type: boolean
        YLeaf control_disconnects; //type: uint32
        YLeaf te_disconnects; //type: uint32
        YLeaf adj_gets; //type: uint32
        YLeaf link_floods; //type: uint32
        YLeaf link_fragment_floods; //type: uint32
        YLeaf lsp_gets; //type: uint32
        YLeaf tunnel_announces; //type: uint32
        YLeaf total_tunnels; //type: uint32
        YLeaf control_batch_reads; //type: uint32
        YLeaf control_batch_writes; //type: uint32
        YLeaf link_batch_reads; //type: uint32
        YLeaf link_batch_writes; //type: uint32
        YLeaf adj_changes; //type: uint32
        YLeaf fragment_deletes; //type: uint32
        YLeaf fragment_announces; //type: uint32
        YLeaf data_trans_completes; //type: uint32
        YLeaf pce_listen; //type: uint32
        YLeaf pce_stoplisten; //type: uint32
        YLeaf pce_flood; //type: uint32
        YLeaf pce_get; //type: uint32
        YLeaf pce_br_lookup; //type: uint32
        YLeaf pce_br_lkup_num_dests; //type: uint32
        YLeaf pce_br_resp_fails; //type: uint32
        YLeaf pce_node_announce_batches; //type: uint32
        YLeaf pce_node_delete_batches; //type: uint32
        YLeaf pce_num_node_announce; //type: uint32
        YLeaf pce_num_node_delete; //type: uint32
        YLeaf pce_node_send_fails; //type: uint32
        YLeaf te_sr_path_reg_idt_recvd; //type: boolean
        YLeaf te_sr_idt_sent; //type: boolean
        YLeaf sr_num_area_enabled; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats : public Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inputs; //type: uint32
        YLeaf input_hello; //type: uint32
        YLeaf input_dbdes; //type: uint32
        YLeaf input_dbdes_lsa; //type: uint32
        YLeaf input_req; //type: uint32
        YLeaf input_req_lsa; //type: uint32
        YLeaf input_lsupd; //type: uint32
        YLeaf input_lsupd_lsa; //type: uint32
        YLeaf input_ack; //type: uint32
        YLeaf input_ack_lsa; //type: uint32
        YLeaf checksumerr; //type: uint32
        YLeaf input_autherr; //type: uint32
        YLeaf outputs; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf output_dbdes; //type: uint32
        YLeaf output_dbdes_lsa; //type: uint32
        YLeaf output_req; //type: uint32
        YLeaf output_req_lsa; //type: uint32
        YLeaf output_lsupd; //type: uint32
        YLeaf output_lsupd_lsa; //type: uint32
        YLeaf output_ack; //type: uint32
        YLeaf output_ack_lsa; //type: uint32
        YLeaf output_autherr; //type: uint32
        YLeaf h_input_dbdes; //type: uint32
        YLeaf h_input_req; //type: uint32
        YLeaf h_input_lsupd; //type: uint32
        YLeaf h_input_ack; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats : public Entity
{
    public:
        RawIoStats();
        ~RawIoStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_sent; //type: uint32
        YLeaf out_bytes_sent; //type: uint32
        YLeaf out_no_conn_discarded; //type: uint32
        YLeaf out_null_src_discarded; //type: uint32
        YLeaf out_no_pak_discarded; //type: uint32
        YLeaf out_ipv4_hdr_err_discarded; //type: uint32
        YLeaf out_send_pak_err_discarded; //type: uint32
        YLeaf in_rcv; //type: uint32
        YLeaf in_bytes_rcv; //type: uint32
        YLeaf in_short_msg_discarded; //type: uint32
        YLeaf in_no_mem_discarded; //type: uint32
        YLeaf in_raw_event; //type: uint32
        YLeaf disconnects; //type: uint32
        YLeaf in_standby_discarded; //type: uint32
        YLeaf nsr_not_ready_discarded; //type: uint32
        YLeaf raw_connected; //type: boolean
        YLeaf sl_raw_connected; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries : public Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry : public Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf handle; //type: string
        YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry

class NsfRtrEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_nsf_rtr_none;
        static const Enum::YLeaf mgmt_nsf_rtr_requester;
        static const Enum::YLeaf mgmt_nsf_rtr_receiver;

};

class IpfrrTbrkrEnum : public Enum
{
    public:
        static const Enum::YLeaf downstream;
        static const Enum::YLeaf line_card_disjoint;
        static const Enum::YLeaf backup_metric;
        static const Enum::YLeaf node_protect;
        static const Enum::YLeaf primary_path;
        static const Enum::YLeaf secondary_path;
        static const Enum::YLeaf srlg_disjoint;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf post_convergence;

};

class IgpteLibBwModelEnum : public Enum
{
    public:
        static const Enum::YLeaf rdm;
        static const Enum::YLeaf mam;
        static const Enum::YLeaf not_set;

};

class LinkSubnetEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_igp_subnet_type_none;
        static const Enum::YLeaf mgmt_igp_subnet_type_p2p;
        static const Enum::YLeaf mgmt_igp_subnet_type_broadcast;
        static const Enum::YLeaf mgmt_igp_subnet_type_nbma;
        static const Enum::YLeaf mgmt_igp_subnet_type_p2mp;
        static const Enum::YLeaf mgmt_igp_subnet_type_loop_back;
        static const Enum::YLeaf mgmt_igp_subnet_type_max;

};

class AuthenticationEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ospf_auth_none;
        static const Enum::YLeaf mgmt_ospf_auth_ct;
        static const Enum::YLeaf mgmt_ospf_auth_md;
        static const Enum::YLeaf mgmt_ospf_auth_kc;

};

class UloopAvoidanceEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf protected_prefixes;
        static const Enum::YLeaf all_prefixes;
        static const Enum::YLeaf segment_routing_uloop;

};

class OspfLinkTypesEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_rtr_link;
        static const Enum::YLeaf mgmt_trans_link;
        static const Enum::YLeaf mgmt_stub_net;
        static const Enum::YLeaf mgmt_vitural_link;

};

class SrmsMiSrcEBEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};

class OspfInterfaceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ospf_ifs_down;
        static const Enum::YLeaf mgmt_ospf_ifs_loop_back;
        static const Enum::YLeaf mgmt_ospf_ifs_waiting;
        static const Enum::YLeaf mgmt_ospf_ifs_point_to_m_point;
        static const Enum::YLeaf mgmt_ospf_ifs_point_to_point;
        static const Enum::YLeaf mgmt_ospf_ifs_dr;
        static const Enum::YLeaf mgmt_ospf_ifs_backup;
        static const Enum::YLeaf mgmt_ospf_ifs_other;

};

class IpfrrEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf per_link;
        static const Enum::YLeaf per_prefix;

};

class OspfSrgbStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_allocated;
        static const Enum::YLeaf pending;
        static const Enum::YLeaf allocated;

};

class InterfaceEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_if_broadcast;
        static const Enum::YLeaf mgmt_if_nonbroadcast;
        static const Enum::YLeaf mgmt_if_point_to_point;
        static const Enum::YLeaf mgmt_if_point_to_m_point;
        static const Enum::YLeaf mgmt_if_p2mp_non_bcast;
        static const Enum::YLeaf mgmt_if_virtual_link;
        static const Enum::YLeaf mgmt_if_sham_link;
        static const Enum::YLeaf mgmt_if_loop_back;

};

class InterfaceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ifs_unknown;
        static const Enum::YLeaf mgmt_ifs_admin_down;
        static const Enum::YLeaf mgmt_ifs_down;
        static const Enum::YLeaf mgmt_ifs_up;
        static const Enum::YLeaf mgmt_ifs_shutdown;

};

class ExMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ex_metric_type_none;
        static const Enum::YLeaf mgmt_ex_metric_type_1;
        static const Enum::YLeaf mgmt_ex_metric_type_2;

};

class GsStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_gs_init;
        static const Enum::YLeaf mgmt_gs_normal;
        static const Enum::YLeaf mgmt_gs_delay;
        static const Enum::YLeaf mgmt_gs_flush;
        static const Enum::YLeaf mgmt_gs_hello;
        static const Enum::YLeaf mgmt_gs_quiet;

};

class OspfShOpqRiPceAddrTypesEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ospf_opq_pce_addr_type_invalid;
        static const Enum::YLeaf mgmt_ospf_opq_pce_addr_type_ipv4;
        static const Enum::YLeaf mgmt_ospf_opq_pce_addr_type_ipv6;

};

class MaxMetricSetReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_max_metric_on_proc_migration;
        static const Enum::YLeaf mgmt_max_metric_on_proc_restart;
        static const Enum::YLeaf mgmt_max_metric_on_switchover;
        static const Enum::YLeaf mgmt_max_metric_on_startup;
        static const Enum::YLeaf mgmt_max_metric_always;
        static const Enum::YLeaf mgmt_max_metric_reason_none;

};

class OspfRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_r_type_none;
        static const Enum::YLeaf mgmt_r_type_other;
        static const Enum::YLeaf mgmt_r_type_intra;
        static const Enum::YLeaf mgmt_r_type_inter;
        static const Enum::YLeaf mgmt_r_type_extern1;
        static const Enum::YLeaf mgmt_r_type_extern2;
        static const Enum::YLeaf mgmt_r_type_isis_sum;
        static const Enum::YLeaf mgmt_r_type_isis_l1;
        static const Enum::YLeaf mgmt_r_type_isis_l2;
        static const Enum::YLeaf mgmt_r_type_isis_l1_ia;
        static const Enum::YLeaf mgmt_r_type_bgp_int;
        static const Enum::YLeaf mgmt_r_type_bgp_ext;
        static const Enum::YLeaf mgmt_r_type_bgp_loc;
        static const Enum::YLeaf mgmt_r_type_nssa1;
        static const Enum::YLeaf mgmt_r_type_nssa2;
        static const Enum::YLeaf mgmt_r_type_i_grp2_int;
        static const Enum::YLeaf mgmt_r_type_i_grp2_ext;

};

class SrUloopEventEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf link_down;
        static const Enum::YLeaf link_up;

};

class OspfShOpqRiTlvTypesEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_unknown;
        static const Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_rtrcap;
        static const Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_pce_discovery;
        static const Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_sr_algo;
        static const Enum::YLeaf mgmt_ospf_opq_ri_tlv_type_sr_range;

};

class TimerEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_db_stop;
        static const Enum::YLeaf mgmt_db_refresh;
        static const Enum::YLeaf mgmt_db_checksum;
        static const Enum::YLeaf mgmt_db_max_age;

};

class MaxMetricUnsetReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_max_metric_unset_none;
        static const Enum::YLeaf mgmt_max_metric_unset_bgp;
        static const Enum::YLeaf mgmt_max_metric_unset_timer;
        static const Enum::YLeaf mgmt_max_metric_unset_cfg;
        static const Enum::YLeaf mgmt_max_metric_unset_process_cleared;
        static const Enum::YLeaf mgmt_max_metric_unset_over_write;

};

class OspfBrEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_d_type_abr_asbr;
        static const Enum::YLeaf mgmt_d_type_asbr;
        static const Enum::YLeaf mgmt_d_type_abr;

};

class StlvEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_rrr_link_type;
        static const Enum::YLeaf mgmt_rrr_link_id;
        static const Enum::YLeaf mgmt_rrr_link_local_if_addr;
        static const Enum::YLeaf mgmt_rrr_link_remote_if_addr;
        static const Enum::YLeaf mgmt_rrr_link_metric;
        static const Enum::YLeaf mgmt_rrr_link_max_bw;
        static const Enum::YLeaf mgmt_rrr_link_max_reservable_bw;
        static const Enum::YLeaf mgmt_rrr_link_unreserved_bw;
        static const Enum::YLeaf mgmt_rrr_link_re_source_class;
        static const Enum::YLeaf mgmt_rrr_link_in_out_if_id;
        static const Enum::YLeaf mgmt_rrr_link_if_switching_cap_desc;
        static const Enum::YLeaf mgmt_ospf_rrr_link_srlg;
        static const Enum::YLeaf mgmt_rrr_link_bw_constraints_sub;
        static const Enum::YLeaf mgmt_ospf_rrr_link_uni_delay;
        static const Enum::YLeaf mgmt_ospf_rrr_link_max_reservable_bw_sub;
        static const Enum::YLeaf mgmt_ospf_rrr_link_unreserved_bw_sub;
        static const Enum::YLeaf mgmt_rrr_link_igp_metric;
        static const Enum::YLeaf mgmt_ospf_rrr_link_ext_admin_sub;

};

class SrmsMiFlagEBEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class SrmsMiAfEBEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class NeighborStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_nbr_down;
        static const Enum::YLeaf mgmt_nbr_attempt;
        static const Enum::YLeaf mgmt_nbr_init;
        static const Enum::YLeaf mgmt_nbr_2way;
        static const Enum::YLeaf mgmt_nbr_ex_start;
        static const Enum::YLeaf mgmt_nbr_ex_change;
        static const Enum::YLeaf mgmt_nbr_load_ing;
        static const Enum::YLeaf mgmt_nbr_full;
        static const Enum::YLeaf mgmt_nbr_sc_virtual;

};

class OspfInternalLsaTypesEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_rtr_type;
        static const Enum::YLeaf mgmt_ntwk_type;
        static const Enum::YLeaf mgmt_sum_type;
        static const Enum::YLeaf mgmt_ext_type;
        static const Enum::YLeaf mgmt_opq_type;
        static const Enum::YLeaf mgmt_opq_link_type;
        static const Enum::YLeaf mgmt_opq_rrr_type;
        static const Enum::YLeaf mgmt_opq_gr_type;
        static const Enum::YLeaf mgmt_opq_ri_type;
        static const Enum::YLeaf mgmt_opq_epl_type;
        static const Enum::YLeaf mgmt_opq_ell_type;

};

class MplsTeOptTlvEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_opt_tlv_type_none;
        static const Enum::YLeaf mpls_te_opt_tlv_type_srlg;
        static const Enum::YLeaf mpls_te_opt_tlv_type_bc;
        static const Enum::YLeaf mpls_te_opt_tlv_type_ixcd;
        static const Enum::YLeaf mpls_te_opt_tlv_type_uni_delay;

};

class RedistProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_rib_protocol_all;
        static const Enum::YLeaf mgmt_rib_protocol_connected;
        static const Enum::YLeaf mgmt_rib_protocol_local;
        static const Enum::YLeaf mgmt_rib_protocol_static;
        static const Enum::YLeaf mgmt_rib_protocol_bgp;
        static const Enum::YLeaf mgmt_rib_protocol_rip;
        static const Enum::YLeaf mgmt_rib_protocol_isis;
        static const Enum::YLeaf mgmt_rib_protocol_ospf;
        static const Enum::YLeaf mgmt_rib_protocol_eigrp;
        static const Enum::YLeaf mgmt_rib_protocol_dagr;
        static const Enum::YLeaf mgmt_rib_protocol_subscriber;
        static const Enum::YLeaf mgmt_rib_protocol_application;
        static const Enum::YLeaf mgmt_rib_protocol_mobile;

};

class OspfLsaOpqRiScopeEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsa_opq_ri_scope_link;
        static const Enum::YLeaf mgmt_lsa_opq_ri_scope_area;
        static const Enum::YLeaf mgmt_lsa_opq_ri_scope_as;

};

class LsaEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsa_type_rtr;
        static const Enum::YLeaf mgmt_lsa_type_net;
        static const Enum::YLeaf mgmt_lsa_type_sum_net;
        static const Enum::YLeaf mgmt_lsa_type_sum_asb;
        static const Enum::YLeaf mgmt_lsa_type_ext;
        static const Enum::YLeaf mgmt_lsa_type_mospf;
        static const Enum::YLeaf mgmt_lsa_type_7_ase;
        static const Enum::YLeaf mgmt_lsa_type_8_ignore;
        static const Enum::YLeaf mgmt_lsa_type_opq_link;
        static const Enum::YLeaf mgmt_lsa_type_opq_area;
        static const Enum::YLeaf mgmt_lsa_type_opq_as;

};

class DrBdrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_dbdr_none;
        static const Enum::YLeaf mgmt_dbdr_dr;
        static const Enum::YLeaf mgmt_dbdr_bdr;
        static const Enum::YLeaf mgmt_dbdr_dr_other;

};

class TimerTableEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_db_no_table;
        static const Enum::YLeaf mgmt_db_sec_table;
        static const Enum::YLeaf mgmt_db_buffer_table;
        static const Enum::YLeaf mgmt_db_min_table;

};

class OspfGrReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_gr_reason_unknown;
        static const Enum::YLeaf mgmt_gr_reason_sw_restart;
        static const Enum::YLeaf mgmt_gr_reason_sw_upgrade;
        static const Enum::YLeaf mgmt_gr_reason_switchover;

};

class OspfMaxMetricAbrOffReasonsEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf_max_metric_abr_off_reason_none;
        static const Enum::YLeaf ospf_max_metric_abr_off_reason_no_nbr;
        static const Enum::YLeaf ospf_max_metric_abr_off_reason_new_nbr;
        static const Enum::YLeaf ospf_max_metric_abr_off_reason_nbr_full;
        static const Enum::YLeaf ospf_max_metric_abr_off_reason_flush_p_end;

};

class OspfLsEnum : public Enum
{
    public:
        static const Enum::YLeaf router;
        static const Enum::YLeaf network;
        static const Enum::YLeaf summary;
        static const Enum::YLeaf asbr_summary;
        static const Enum::YLeaf external;
        static const Enum::YLeaf nssa_external;
        static const Enum::YLeaf opaque_link;
        static const Enum::YLeaf opaque_area;
        static const Enum::YLeaf opaque_as;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_0_ */

