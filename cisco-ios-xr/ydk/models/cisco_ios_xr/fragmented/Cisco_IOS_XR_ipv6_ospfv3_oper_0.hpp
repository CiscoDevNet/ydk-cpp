#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_0_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {

class Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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

        class Processes; //type: Ospfv3::Processes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes> processes;
        
}; // Ospfv3


class Ospfv3::Processes : public ydk::Entity
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

        class Process; //type: Ospfv3::Processes::Process

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process> > process;
        
}; // Ospfv3::Processes


class Ospfv3::Processes::Process : public ydk::Entity
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
        class Vrfs; //type: Ospfv3::Processes::Process::Vrfs
        class Statistics; //type: Ospfv3::Processes::Process::Statistics
        class DefaultVrf; //type: Ospfv3::Processes::Process::DefaultVrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf> default_vrf;
        
}; // Ospfv3::Processes::Process


class Ospfv3::Processes::Process::Vrfs : public ydk::Entity
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

        class Vrf; //type: Ospfv3::Processes::Process::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf> > vrf;
        
}; // Ospfv3::Processes::Process::Vrfs


class Ospfv3::Processes::Process::Vrfs::Vrf : public ydk::Entity
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
        class SummaryPrefixes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class BorderRouters; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters
        class ShamLinkTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable
        class AreaInformations; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations
        class DatabaseTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable
        class InterfaceProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable
        class Redistributions; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions
        class ExternalRoutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes
        class RequestListProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable
        class VirtualLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink
        class FloodListProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable
        class RouteSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary
        class Areas; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas
        class InternalRoutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes
        class ProtocolAreas; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas
        class ConnectedRoutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes
        class VrfStatistics; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics
        class Summary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary
        class RetransmissionListProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable
        class BadChecksums; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums
        class DatabaseSummaryTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable
        class NeighborProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable
        class FastReroutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes
        class InterfaceBriefProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable
        class NeighborDetailProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters> border_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable> sham_link_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations> area_informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable> database_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable> interface_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes> external_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable> request_list_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink> virtual_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable> flood_list_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary> route_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas> areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes> internal_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas> protocol_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes> connected_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics> vrf_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable> retransmission_list_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums> bad_checksums;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable> database_summary_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable> neighbor_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes> fast_reroutes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable> interface_brief_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable> neighbor_detail_process_table;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

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
        ydk::YLeaf prefix_metric; //type: uint32
        ydk::YLeaf prefix_metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tag; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters : public ydk::Entity
{
    public:
        BorderRouters();
        ~BorderRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BorderRouter; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter> > border_router;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters


class Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter : public ydk::Entity
{
    public:
        BorderRouter();
        ~BorderRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf border_router_id; //type: string
        class BorderRouterPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath> > border_router_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter


class Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath : public ydk::Entity
{
    public:
        BorderRouterPath();
        ~BorderRouterPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_intra_area_router; //type: boolean
        ydk::YLeaf border_router_route_metric; //type: uint32
        ydk::YLeaf border_router_next_hop; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf border_router_type; //type: Ospfv3BorderRoute
        ydk::YLeaf border_router_area_id; //type: string
        ydk::YLeaf spf_version; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath


class Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable : public ydk::Entity
{
    public:
        ShamLinkTable();
        ~ShamLinkTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_neighbor_id; //type: string
        ydk::YLeaf sham_link_source_address; //type: string
        ydk::YLeaf sham_link_dest_address; //type: string
        ydk::YLeaf sham_link_state; //type: Ospfv3InterfaceState
        ydk::YLeaf sham_link_demand_circuit; //type: boolean
        ydk::YLeaf sham_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf sham_link_ifindex; //type: uint32
        ydk::YLeaf sham_link_area; //type: string
        ydk::YLeaf sham_link_cost; //type: uint16
        ydk::YLeaf sham_link_transmission_delay; //type: uint16
        ydk::YLeaf sham_link_hello_interval; //type: uint32
        ydk::YLeaf sham_link_dead_interval; //type: uint32
        ydk::YLeaf sham_link_wait_interval; //type: uint32
        ydk::YLeaf sham_link_retransmission_interval; //type: uint32
        ydk::YLeaf sham_link_next_hello; //type: uint32
        ydk::YLeaf sham_link_passive; //type: boolean
        ydk::YLeaf is_sham_link_ip_security_required; //type: boolean
        ydk::YLeaf is_sham_link_ip_security_active; //type: boolean
        ydk::YLeaf is_sham_link_authentication_enabled; //type: boolean
        ydk::YLeaf virtual_link_authentication_spi; //type: uint32
        ydk::YLeaf sham_link_authentication_transmit; //type: uint32
        ydk::YLeaf is_sham_link_encryption_enabled; //type: boolean
        ydk::YLeaf sham_link_encryption_spi; //type: uint32
        ydk::YLeaf sham_link_encryption_transmitted; //type: uint32
        ydk::YLeaf sham_link_encrypted_authentication_transmitted; //type: uint32
        ydk::YLeaf sham_link_gr_enabled; //type: boolean
        ydk::YLeaf sham_link_gr; //type: boolean
        ydk::YLeaf sham_link_last_gr; //type: uint32
        class ShamLinkNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor> sham_link_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable


class Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor : public ydk::Entity
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
        ydk::YLeaf sham_link_state; //type: Ospfv3NeighborState
        class ShamLinkRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission> sham_link_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission : public ydk::Entity
{
    public:
        ShamLinkRetransmission();
        ~ShamLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations : public ydk::Entity
{
    public:
        AreaInformations();
        ~AreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaInformation; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation> > area_information;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation : public ydk::Entity
{
    public:
        AreaInformation();
        ~AreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf is_backbone_area_active; //type: boolean
        ydk::YLeaf area_interfaces; //type: uint16
        ydk::YLeaf is_area_stubbed; //type: boolean
        ydk::YLeaf is_area_total_stubbed; //type: boolean
        ydk::YLeaf stub_default_cost; //type: uint16
        ydk::YLeaf is_area_nssa; //type: boolean
        ydk::YLeaf nssa_no_redistribution; //type: boolean
        ydk::YLeaf is_nssa_translated; //type: boolean
        ydk::YLeaf is_nssa_default; //type: boolean
        ydk::YLeaf is_rrr_enabled; //type: boolean
        ydk::YLeaf sp_fs; //type: uint32
        ydk::YLeaf area_opaque_lsas; //type: uint32
        ydk::YLeaf area_opaque_lsa_checksum; //type: uint32
        ydk::YLeaf area_dc_bitless_ls_as; //type: uint32
        ydk::YLeaf indication_ls_as; //type: uint32
        ydk::YLeaf do_not_age_ls_as; //type: uint32
        ydk::YLeaf flood_list_length; //type: uint32
        ydk::YLeaf area_lfa_interface_count; //type: uint32
        ydk::YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        ydk::YLeaf area_lfa_revision; //type: uint32
        class AreaRange; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange> > area_range;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_prefix; //type: string
        ydk::YLeaf range_prefix_length; //type: uint32
        ydk::YLeaf net_cost; //type: uint32
        ydk::YLeaf status; //type: Ospfv3AreaRangeStatus
        ydk::YLeaf is_cost_configured; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable : public ydk::Entity
{
    public:
        DatabaseTable();
        ~DatabaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable
        class LsaInternalTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable> lsa_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable> lsa_internal_table;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable : public ydk::Entity
{
    public:
        LsaTable();
        ~LsaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ls_type; //type: Ospfv3Lsa
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf ls_id; //type: int32
        ydk::YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypes
        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo : public ydk::Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf links; //type: uint16
        ydk::YLeaf router_la_bits; //type: uint8
        ydk::YLeaf reference_type; //type: uint16
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf lsa_router_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType : public ydk::Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_la_bits; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public ydk::Entity
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

        ydk::YLeaf rpf_multicast_next_hop; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Ospfv3Link
        ydk::YLeaf link_metric; //type: uint16
        ydk::YLeaf link_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_router_id; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType : public ydk::Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList neighbor_router; //type: list of  string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public ydk::Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

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
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType : public ydk::Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType : public ydk::Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType : public ydk::Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType : public ydk::Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        ydk::YLeaf lsa_link_local; //type: string
        ydk::YLeaf router_priority; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public ydk::Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_type; //type: Ospfv3Lsa1
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf reference_advertised_router; //type: string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa : public ydk::Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grace_period; //type: uint32
        ydk::YLeaf grace_reason; //type: Ospfv3GracefulRestartReason
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType : public ydk::Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType : public ydk::Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType : public ydk::Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType : public ydk::Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable : public ydk::Entity
{
    public:
        LsaInternalTable();
        ~LsaInternalTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ls_type; //type: Ospfv3Lsa
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf ls_id; //type: int32
        ydk::YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypes
        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo : public ydk::Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf links; //type: uint16
        ydk::YLeaf router_la_bits; //type: uint8
        ydk::YLeaf reference_type; //type: uint16
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf lsa_router_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType : public ydk::Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_la_bits; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public ydk::Entity
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

        ydk::YLeaf rpf_multicast_next_hop; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Ospfv3Link
        ydk::YLeaf link_metric; //type: uint16
        ydk::YLeaf link_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_router_id; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType : public ydk::Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList neighbor_router; //type: list of  string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public ydk::Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

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
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType : public ydk::Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType : public ydk::Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType : public ydk::Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType : public ydk::Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        ydk::YLeaf lsa_link_local; //type: string
        ydk::YLeaf router_priority; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public ydk::Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_type; //type: Ospfv3Lsa1
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf reference_advertised_router; //type: string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa : public ydk::Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grace_period; //type: uint32
        ydk::YLeaf grace_reason; //type: Ospfv3GracefulRestartReason
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType : public ydk::Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType : public ydk::Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType : public ydk::Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType : public ydk::Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable : public ydk::Entity
{
    public:
        InterfaceProcessTable();
        ~InterfaceProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface> > interface;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface : public ydk::Entity
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
        ydk::YLeaf interface_state; //type: ImStateEnum
        ydk::YLeaf is_interface_line_up; //type: boolean
        ydk::YLeaf is_interface_ip_security_required; //type: boolean
        ydk::YLeaf is_interface_ip_security_active; //type: boolean
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_number; //type: uint32
        ydk::YLeaf interface_router_id; //type: string
        ydk::YLeaf network_type; //type: Ospfv3Interface
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf is_interface_flood_reduction; //type: boolean
        ydk::YLeaf is_demand_circuit_configured; //type: boolean
        ydk::YLeaf is_interface_demand_circuit; //type: boolean
        ydk::YLeaf interface_dc_bitless_ls_as; //type: uint32
        ydk::YLeaf transmission_delay; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: Ospfv3InterfaceState
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf is_designated_router; //type: boolean
        ydk::YLeaf designated_router_id; //type: string
        ydk::YLeaf designated_router_address; //type: string
        ydk::YLeaf backup_designated_router_id; //type: string
        ydk::YLeaf backup_designated_router_address; //type: string
        ydk::YLeaf network_lsa_flush_timer; //type: uint32
        ydk::YLeaf is_interface_lsa_filtered; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf wait_interval; //type: uint32
        ydk::YLeaf interface_retransmission_interval; //type: uint32
        ydk::YLeaf next_hello_time; //type: uint32
        ydk::YLeaf interface_authentication_spi; //type: uint32
        ydk::YLeaf interface_authentication_transmit; //type: uint32
        ydk::YLeaf is_interface_encryption_enabled; //type: boolean
        ydk::YLeaf is_prefix_suppress; //type: boolean
        ydk::YLeaf interface_encryption_spi; //type: uint32
        ydk::YLeaf interface_encryption_transmitted; //type: uint32
        ydk::YLeaf interface_encrypted_authentication_transmitted; //type: uint32
        ydk::YLeaf adjacent_neighbor; //type: uint32
        ydk::YLeaf interface_references; //type: uint32
        ydk::YLeaf configured_ldp_sync; //type: boolean
        ydk::YLeaf interface_ldp_sync; //type: boolean
        class ActiveInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface
        class InterfaceBfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd
        class InterfaceNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface> active_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd> interface_bfd;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor> > interface_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface : public ydk::Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf interface_area_flood_index; //type: uint32
        ydk::YLeaf interface_as_flood_index; //type: uint32
        ydk::YLeaf interface_link_flood_index; //type: uint32
        ydk::YLeaf flood_queue_length; //type: uint32
        ydk::YLeaf interface_area_next_flood; //type: uint32
        ydk::YLeaf interface_area_next_flood_index; //type: uint32
        ydk::YLeaf interface_as_next_flood; //type: uint32
        ydk::YLeaf interface_as_next_flood_index; //type: uint32
        ydk::YLeaf interface_link_next_flood; //type: uint32
        ydk::YLeaf interface_link_next_index; //type: uint32
        ydk::YLeaf flood_scan_length; //type: uint32
        ydk::YLeaf maximum_flood_length; //type: uint32
        ydk::YLeaf last_flood_time; //type: uint32
        ydk::YLeaf maximum_flood_time; //type: uint32
        ydk::YLeaf interface_flood_pacing_timer; //type: uint32
        ydk::YLeaf interface_neighbors; //type: uint16
        ydk::YLeaf suppressed_hellos; //type: uint16

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd : public ydk::Entity
{
    public:
        InterfaceBfd();
        ~InterfaceBfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd


class Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor : public ydk::Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_id; //type: string
        ydk::YLeaf interface_neighbor_cost; //type: uint32
        ydk::YLeaf is_neighbor_dr; //type: boolean
        ydk::YLeaf is_neighbor_bdr; //type: boolean
        ydk::YLeaf is_hello_suppressed; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution> > redistribution;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions


class Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf protocol_name_xr; //type: string
        ydk::YLeaf process_id; //type: string
        ydk::YLeaf red_metric_flag; //type: boolean
        ydk::YLeaf red_metric; //type: uint32
        ydk::YLeaf red_mtype_flag; //type: boolean
        ydk::YLeaf red_metric_type; //type: uint8
        ydk::YLeaf red_tag; //type: uint32
        ydk::YLeaf policy_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes : public ydk::Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalRoute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute> > external_route;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute : public ydk::Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

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
        class RouteTopology; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology
        class RouteExtendedCommunity; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity
        class RoutePath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology> route_topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath> > route_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology : public ydk::Entity
{
    public:
        RouteTopology();
        ~RouteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_cost; //type: uint32
        ydk::YLeaf route_type; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public ydk::Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_community_domain_id_value; //type: string
        ydk::YLeaf extended_communityl_domain_id_type; //type: uint16
        ydk::YLeaf extended_community_area_id; //type: uint32
        ydk::YLeaf extended_community_router_id; //type: string
        ydk::YLeaf extended_community_route_type; //type: uint8
        ydk::YLeaf extended_community_options; //type: uint8

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

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
        ydk::YLeaf route_path_next_hop; //type: string
        ydk::YLeaf route_path_id; //type: uint16
        class RouteBackupPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath> route_backup_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath


class Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable : public ydk::Entity
{
    public:
        RequestListProcessTable();
        ~RequestListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf is_request_virtual_link; //type: boolean
        ydk::YLeaf request_virtual_link_id; //type: uint32
        ydk::YLeaf is_request_sham_link; //type: boolean
        ydk::YLeaf request_sham_link_id; //type: uint32
        class Request_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request


class Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_ : public ydk::Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_


class Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_neighbor_id; //type: string
        ydk::YLeaf virtual_link_interface_number; //type: uint32
        ydk::YLeaf virtual_link_state; //type: Ospfv3InterfaceState
        ydk::YLeaf is_virtual_link_ip_security_required; //type: boolean
        ydk::YLeaf is_virtual_link_ip_security_active; //type: boolean
        ydk::YLeaf virtual_link_neighbor_address; //type: string
        ydk::YLeaf is_virtual_link_demand_circuit; //type: boolean
        ydk::YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf transit_area_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf virtual_link_cost; //type: uint16
        ydk::YLeaf virual_link_transmission_delay; //type: uint16
        ydk::YLeaf virtual_link_hello_interval; //type: uint32
        ydk::YLeaf virtual_link_dead_interval; //type: uint32
        ydk::YLeaf virtual_link_wait_interval; //type: uint32
        ydk::YLeaf virtual_link_retransmission_interval; //type: uint32
        ydk::YLeaf virtual_link_next_hello; //type: uint32
        ydk::YLeaf is_virtual_link_passive; //type: boolean
        ydk::YLeaf is_virtual_link_authentication_enabled; //type: boolean
        ydk::YLeaf virtual_link_authentication_spi; //type: uint32
        ydk::YLeaf virtual_link_authentication_transmit; //type: uint32
        ydk::YLeaf is_virtual_link_encryption_enabled; //type: boolean
        ydk::YLeaf virtual_link_encryption_spi; //type: uint32
        ydk::YLeaf virtual_link_encryption_transmitted; //type: uint32
        ydk::YLeaf virtual_link_encrypted_authentication_transmitted; //type: uint32
        class VirtualLinkNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink


class Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor : public ydk::Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_virtual_link_hello_suppressed; //type: boolean
        ydk::YLeaf virtual_link_state; //type: Ospfv3InterfaceState
        class VirtualLinkRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission> virtual_link_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission : public ydk::Entity
{
    public:
        VirtualLinkRetransmission();
        ~VirtualLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable : public ydk::Entity
{
    public:
        FloodListProcessTable();
        ~FloodListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood> > flood;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood : public ydk::Entity
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
        ydk::YLeaf ls_transmission_timer; //type: uint32
        ydk::YLeaf queue_length; //type: uint32
        class LinkFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood
        class AreaFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood
        class AsFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood> > link_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood> > as_flood;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood : public ydk::Entity
{
    public:
        LinkFlood();
        ~LinkFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary : public ydk::Entity
{
    public:
        RouteSummary();
        ~RouteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf intra_area_route; //type: uint32
        ydk::YLeaf inter_area_route; //type: uint32
        ydk::YLeaf extern_one_route; //type: uint32
        ydk::YLeaf extern_two_route; //type: uint32
        ydk::YLeaf nssa_one_route; //type: uint32
        ydk::YLeaf nssa_two_route; //type: uint32
        ydk::YLeaf total_sent_route; //type: uint32
        ydk::YLeaf route_connected; //type: uint32
        ydk::YLeaf redistribution_route; //type: uint32
        ydk::YLeaf total_received_route; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas : public ydk::Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Area; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area> > area;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        class NeighborDetailTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable
        class InterfaceBriefTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable
        class RequestListTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable
        class NeighborTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable
        class InterfaceTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable
        class FloodListTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable
        class RetransmissionListTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable
        class DatabaseTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable
        class DatabaseSummaryTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable> neighbor_detail_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable> interface_brief_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable> request_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable> neighbor_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable> flood_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable> retransmission_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable> database_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable> database_summary_table;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable : public ydk::Entity
{
    public:
        NeighborDetailTable();
        ~NeighborDetailTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail> > neighbor_detail;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail : public ydk::Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

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
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: Ospfv3NeighborState
        ydk::YLeaf neighbor_designated_router; //type: string
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_virtual_link_id; //type: uint32
        ydk::YLeaf is_neighbor_virtual_link; //type: boolean
        ydk::YLeaf neighbor_sham_link_id; //type: uint32
        ydk::YLeaf is_neighbor_sham_link; //type: boolean
        class NeighborDetail_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_> neighbor_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo> neighbor_bfd_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_ : public ydk::Entity
{
    public:
        NeighborDetail_();
        ~NeighborDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state_changes; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf is_neighbor_filtered; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Ospfv3Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_ignore_timer; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint32
        ydk::YLeaf pending_events; //type: uint16
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission : public ydk::Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo : public ydk::Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_status_flag; //type: uint8

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable : public ydk::Entity
{
    public:
        InterfaceBriefTable();
        ~InterfaceBriefTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief> > interface_brief;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: Ospfv3InterfaceState
        ydk::YLeaf interface_neighbors; //type: uint16
        ydk::YLeaf interface_adjacent_neighbors; //type: uint16
        ydk::YLeaf network_type; //type: Ospfv3Interface

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable : public ydk::Entity
{
    public:
        RequestListTable();
        ~RequestListTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request> > request;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable

class Ospfv3Lsa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_lsa;
        static const ydk::Enum::YLeaf grace_lsa;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf inter_area_prefix;
        static const ydk::Enum::YLeaf inter_area_router;
        static const ydk::Enum::YLeaf nssa_external;
        static const ydk::Enum::YLeaf intra_area_prefix;
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf opaque_link;
        static const ydk::Enum::YLeaf opaque_area;
        static const ydk::Enum::YLeaf opaque_as;
        static const ydk::Enum::YLeaf unknown;

};

class OspfNsrSchedPri : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_nsr_stats_sched_pri_hi;
        static const ydk::Enum::YLeaf ospf_nsr_stats_sched_pri_med;
        static const ydk::Enum::YLeaf ospf_nsr_stats_sched_pri_low;
        static const ydk::Enum::YLeaf ospf_nsr_stats_sched_pri_max;

};

class Ospfv3GracefulShutdownState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf flushing;
        static const ydk::Enum::YLeaf empty_hellos;
        static const ydk::Enum::YLeaf quiet;

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
        static const ydk::Enum::YLeaf tunnel;

};

class StubRouterAbrOffReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init_delay;
        static const ydk::Enum::YLeaf no_neighbor;
        static const ydk::Enum::YLeaf no_full_neighbor;
        static const ydk::Enum::YLeaf new_neighbor;
        static const ydk::Enum::YLeaf full_neighbor;

};

class StubRouterExitReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf timer;
        static const ydk::Enum::YLeaf configuration;
        static const ydk::Enum::YLeaf cleared;
        static const ydk::Enum::YLeaf override;

};

class StubRouterTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_proc_migration;
        static const ydk::Enum::YLeaf on_proc_restart;
        static const ydk::Enum::YLeaf on_switchover;
        static const ydk::Enum::YLeaf on_startup;
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf none;

};

class StubRouterMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rbit;
        static const ydk::Enum::YLeaf v6bit;
        static const ydk::Enum::YLeaf max_metric;
        static const ydk::Enum::YLeaf none;

};

class Ospfv3Interface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_multipoint_non_broadcast;
        static const ydk::Enum::YLeaf virtual_link;
        static const ydk::Enum::YLeaf loopback_interface;
        static const ydk::Enum::YLeaf mpls_traffic_engineering;
        static const ydk::Enum::YLeaf sham_link;

};

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

};

class Ospfv3GracefulRestartReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf grace_reason_unknown;
        static const ydk::Enum::YLeaf grace_reason_software_restart;
        static const ydk::Enum::YLeaf grace_reason_software_upgrade;
        static const ydk::Enum::YLeaf grace_reason_switchover;

};

class Ospfv3Lsa1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf grace;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf inter_area_prefix;
        static const ydk::Enum::YLeaf inter_area_router;
        static const ydk::Enum::YLeaf mospf;
        static const ydk::Enum::YLeaf type7_external;
        static const ydk::Enum::YLeaf lsa_prefix;
        static const ydk::Enum::YLeaf as_external;
        static const ydk::Enum::YLeaf unknown_link;
        static const ydk::Enum::YLeaf unknown_area;
        static const ydk::Enum::YLeaf unknown_as;
        static const ydk::Enum::YLeaf unknown_type;

};

class PrefixPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

};

class Ospfv3Link : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_router;
        static const ydk::Enum::YLeaf link_trans_net;
        static const ydk::Enum::YLeaf link_virtual_link;

};

class OspfLsaSyncState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf out_of_sync;
        static const ydk::Enum::YLeaf in_sync;
        static const ydk::Enum::YLeaf nsr_ack_pending;

};

class Ospfv3LsaInfoTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsa_lsasum_type;
        static const ydk::Enum::YLeaf mgmt_lsa_link_type;
        static const ydk::Enum::YLeaf mgmt_lsa_gr_type;
        static const ydk::Enum::YLeaf mgmt_lsa_rtr_type;
        static const ydk::Enum::YLeaf mgmt_lsa_net_type;
        static const ydk::Enum::YLeaf mgmt_lsa_iapfx_type;
        static const ydk::Enum::YLeaf mgmt_lsa_iartr_type;
        static const ydk::Enum::YLeaf mgmt_lsa_nssaext_type;
        static const ydk::Enum::YLeaf mgmt_lsa_prefix_type;
        static const ydk::Enum::YLeaf mgmt_lsa_ext_type;
        static const ydk::Enum::YLeaf mgmt_lsa_unk_link_type;
        static const ydk::Enum::YLeaf mgmt_lsa_unk_area_type;
        static const ydk::Enum::YLeaf mgmt_lsa_unk_as_type;
        static const ydk::Enum::YLeaf mgmt_lsa_unk_type;

};

class Ospfv3AreaRangeStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertise;
        static const ydk::Enum::YLeaf do_not_advertise;

};

class Ospfv3NeighborState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf neigbhor_down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf two_way;
        static const ydk::Enum::YLeaf exstart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf sc_virtual;

};

class Ospfv3InterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf designated_router;
        static const ydk::Enum::YLeaf backup_designated_router;
        static const ydk::Enum::YLeaf other_designated_router;

};

class Ospfv3BorderRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf abr;
        static const ydk::Enum::YLeaf asbr;
        static const ydk::Enum::YLeaf abr_asbr;

};

class Ospfv3DefaultMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type_none;
        static const ydk::Enum::YLeaf type1;
        static const ydk::Enum::YLeaf type2;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_0_ */

