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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process> > process;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms> srms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs> vrfs;
        
}; // Ospf::Processes::Process


class Ospf::Processes::Process::DefaultVrf : public ydk::Entity
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

        class FloodListTable; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable
        class MplsTe; //type: Ospf::Processes::Process::DefaultVrf::MplsTe
        class Statistics; //type: Ospf::Processes::Process::DefaultVrf::Statistics
        class AdjacencyInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation
        class RouteInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation
        class InterfaceInformation; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation
        class BorderRouters; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters
        class ProcessInformation; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation
        class Areas; //type: Ospf::Processes::Process::DefaultVrf::Areas
        class Database; //type: Ospf::Processes::Process::DefaultVrf::Database
        class SummaryPrefixes; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes
        class AreaStatistics; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics
        class OspfSummary; //type: Ospf::Processes::Process::DefaultVrf::OspfSummary
        class FastReroute; //type: Ospf::Processes::Process::DefaultVrf::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation> adjacency_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas> areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::BorderRouters> border_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FloodListTable> flood_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation> interface_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe> mpls_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::OspfSummary> ospf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation> process_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation> route_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
        
}; // Ospf::Processes::Process::DefaultVrf


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation : public ydk::Entity
{
    public:
        AdjacencyInformation();
        ~AdjacencyInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors
        class Requests; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests
        class Retransmissions; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions
        class NeighborDetails; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails> neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions> retransmissions;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails : public ydk::Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail> > neighbor_detail;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail : public ydk::Entity
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
        ydk::YLeaf neighbor_area_id; //type: string
        ydk::YLeaf state_change_count; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf neighbor_filter; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint8
        ydk::YLeaf pending_events; //type: uint16
        ydk::YLeaf neighbor_lls_option; //type: uint32
        ydk::YLeaf oob_resynchronization; //type: boolean
        ydk::YLeaf nsf_router_state; //type: NsfRtr
        ydk::YLeaf last_oob_time; //type: uint32
        ydk::YLeaf lfa_interface; //type: string
        ydk::YLeaf lfa_next_hop; //type: string
        ydk::YLeaf lfa_neighbor_id; //type: string
        ydk::YLeaf lfa_neighbor_revision; //type: uint32
        ydk::YLeaf neighbor_ack_list_count; //type: uint32
        ydk::YLeaf neighbor_ack_list_high_watermark; //type: uint32
        ydk::YLeaf adjacency_sid_label; //type: uint32
        ydk::YLeaf adjacency_sid_protected; //type: boolean
        ydk::YLeaf adjacency_sid_unprotected_label; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint16
        class NeighborSummary; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public ydk::Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request> > request;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request : public ydk::Entity
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
        ydk::YLeaf request_neighbor_id; //type: string
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf request_interface_name; //type: string
        class Request_; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_> > request;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_ : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions : public ydk::Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission> > retransmission;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission : public ydk::Entity
{
    public:
        Retransmission();
        ~Retransmission();

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
        ydk::YLeaf retransmission_neighbor_id; //type: string
        ydk::YLeaf retransmission_neighbor_ip_address; //type: string
        ydk::YLeaf retransmission_interface_name; //type: string
        ydk::YLeaf retransmission_timer; //type: uint32
        ydk::YLeaf retransmission_count; //type: uint32
        class RetransmissionAreaDb; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        
}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb : public ydk::Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

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

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb : public ydk::Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

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

}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::DefaultVrf::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

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
        ydk::YLeaf handle; //type: string
        ydk::YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf madj_intf; //type: boolean
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_id_str; //type: string
        class IfStat; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
{
    public:
        IfStat();
        ~IfStat();

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

}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::DefaultVrf::Areas : public ydk::Entity
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

        class Area; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area> > area;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas


class Ospf::Processes::Process::DefaultVrf::Areas::Area : public ydk::Entity
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
        class FloodListAreaTable; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors
        class InterfaceBriefs; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs
        class Requests; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests
        class Retransmissions; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions
        class AreaStatistics; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics
        class NeighborDetails; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails
        class Interfaces; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable> flood_list_area_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails> neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions> retransmissions;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

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
        ydk::YLeaf handle; //type: string
        ydk::YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf madj_intf; //type: boolean
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_id_str; //type: string
        class IfStat; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
{
    public:
        IfStat();
        ~IfStat();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable : public ydk::Entity
{
    public:
        FloodListAreaTable();
        ~FloodListAreaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood> > flood;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood : public ydk::Entity
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
        class AreaFlood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood> > as_flood;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief : public ydk::Entity
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj> > interface_madj;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface> > interface;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_state; //type: InterfaceState
        ydk::YLeaf interface_line_state; //type: boolean
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_sid; //type: uint32
        ydk::YLeaf interface_sid_php_off; //type: boolean
        ydk::YLeaf interface_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_strict_spf_sid; //type: uint32
        ydk::YLeaf interface_strict_spf_sid_php_off; //type: boolean
        ydk::YLeaf interface_strict_spf_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_router_id; //type: string
        ydk::YLeaf network_type; //type: Interface
        ydk::YLeaf ip_mtu; //type: uint16
        ydk::YLeaf maximum_packet_size; //type: uint16
        ydk::YLeaf interface_tunnel_flags; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf interface_bandwidth; //type: uint32
        ydk::YLeaf cfg_cost_fallback; //type: boolean
        ydk::YLeaf interface_cost_fallback; //type: uint16
        ydk::YLeaf cost_fallback_active; //type: boolean
        ydk::YLeaf configured_ldp_sync; //type: boolean
        ydk::YLeaf configured_ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf interface_ldp_sync; //type: boolean
        ydk::YLeaf configured_demand_circuit; //type: boolean
        ydk::YLeaf interface_demand_circuit; //type: boolean
        ydk::YLeaf interface_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf transmission_delay; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf designated_router; //type: boolean
        ydk::YLeaf designated_router_id; //type: string
        ydk::YLeaf designated_router_address; //type: string
        ydk::YLeaf backup_designated_router; //type: boolean
        ydk::YLeaf backup_designated_router_id; //type: string
        ydk::YLeaf backup_designated_router_address; //type: string
        ydk::YLeaf network_lsa_flush_timer; //type: uint32
        ydk::YLeaf interface_lsa_filter; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_interval_ms; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf wait_interval; //type: uint32
        ydk::YLeaf interface_retransmission_interrval; //type: uint32
        ydk::YLeaf interface_nsf_enabled; //type: boolean
        ydk::YLeaf interface_nsf; //type: boolean
        ydk::YLeaf interface_last_nsf; //type: uint32
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf next_hello_time; //type: uint32
        ydk::YLeaf next_hello_time_ms; //type: uint32
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf ttl_security_hop_count; //type: uint32
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        ydk::YLeaf prefix_suppress_primary_addresses; //type: boolean
        ydk::YLeaf prefix_suppress_secondary_addresses; //type: boolean
        ydk::YLeaf is_loopback_stub_network; //type: boolean
        ydk::YLeaf interface_ack_list_count; //type: uint32
        ydk::YLeaf interface_ack_list_high_watermark; //type: uint32
        ydk::YLeaf registered_for_link_down_fast_detection; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time; //type: uint32
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time_remaining; //type: uint32
        ydk::YLeaf fast_reroute_type; //type: Ipfrr
        ydk::YLeaf fast_reroute_topology_independent_lfa; //type: boolean
        ydk::YLeaf interface_unnum; //type: string
        ydk::YLeaf interface_forw; //type: boolean
        ydk::YLeaf interface_pri_labels; //type: uint8
        ydk::YLeaf interface_bkp_labels; //type: uint8
        ydk::YLeaf interface_srte_labels; //type: uint8
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface
        class Srlg; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg
        class InterfaceNeighbor; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers
        class IpSecAddr; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface> active_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj> > interface_madj;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor> > interface_neighbor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr> > ip_sec_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg> > srlg;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface : public ydk::Entity
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
        ydk::YLeaf interface_flood_length; //type: uint32
        ydk::YLeaf interface_area_next_flood; //type: uint32
        ydk::YLeaf interface_area_next_flood_index; //type: uint32
        ydk::YLeaf interface_as_next_flood; //type: uint32
        ydk::YLeaf interface_as_next_flood_index; //type: uint32
        ydk::YLeaf flood_scan_length; //type: uint32
        ydk::YLeaf maximum_flood_length; //type: uint32
        ydk::YLeaf last_flood_time; //type: uint32
        ydk::YLeaf maximum_flood_time; //type: uint32
        ydk::YLeaf interface_flood_pacing_timer; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf suppress_hello_count; //type: uint16
        ydk::YLeaf interface_authentication_type; //type: Authentication
        ydk::YLeaf youngest_md_key; //type: boolean
        ydk::YLeaf old_md5_key_neighbor_count; //type: uint32
        ydk::YLeaf youngest_md_key_id; //type: uint16
        ydk::YLeaf keychain_id; //type: uint64
        class MdKeys; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys> > md_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys : public ydk::Entity
{
    public:
        MdKeys();
        ~MdKeys();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation : public ydk::Entity
{
    public:
        InterfaceBfdInformation();
        ~InterfaceBfdInformation();

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
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor : public ydk::Entity
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
        ydk::YLeaf neighbor_dr; //type: boolean
        ydk::YLeaf neighbor_bdr; //type: boolean
        ydk::YLeaf suppress_hello; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr : public ydk::Entity
{
    public:
        IpSecAddr();
        ~IpSecAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary_addr; //type: string
        ydk::YLeaf secondary_prefix; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers : public ydk::Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: IpfrrTbrkr
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails : public ydk::Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail> > neighbor_detail;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail : public ydk::Entity
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
        ydk::YLeaf neighbor_area_id; //type: string
        ydk::YLeaf state_change_count; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf neighbor_filter; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint8
        ydk::YLeaf pending_events; //type: uint16
        ydk::YLeaf neighbor_lls_option; //type: uint32
        ydk::YLeaf oob_resynchronization; //type: boolean
        ydk::YLeaf nsf_router_state; //type: NsfRtr
        ydk::YLeaf last_oob_time; //type: uint32
        ydk::YLeaf lfa_interface; //type: string
        ydk::YLeaf lfa_next_hop; //type: string
        ydk::YLeaf lfa_neighbor_id; //type: string
        ydk::YLeaf lfa_neighbor_revision; //type: uint32
        ydk::YLeaf neighbor_ack_list_count; //type: uint32
        ydk::YLeaf neighbor_ack_list_high_watermark; //type: uint32
        ydk::YLeaf adjacency_sid_label; //type: uint32
        ydk::YLeaf adjacency_sid_protected; //type: boolean
        ydk::YLeaf adjacency_sid_unprotected_label; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint16
        class NeighborSummary; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public ydk::Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request> > request;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request : public ydk::Entity
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
        ydk::YLeaf request_neighbor_id; //type: string
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf request_interface_name; //type: string
        class Request_; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_> > request;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_ : public ydk::Entity
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

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions : public ydk::Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission> > retransmission;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission : public ydk::Entity
{
    public:
        Retransmission();
        ~Retransmission();

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
        ydk::YLeaf retransmission_neighbor_id; //type: string
        ydk::YLeaf retransmission_neighbor_ip_address; //type: string
        ydk::YLeaf retransmission_interface_name; //type: string
        ydk::YLeaf retransmission_timer; //type: uint32
        ydk::YLeaf retransmission_count; //type: uint32
        class RetransmissionAreaDb; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb : public ydk::Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb : public ydk::Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

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

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::DefaultVrf::BorderRouters : public ydk::Entity
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

        class BorderRouter; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter> > border_router;
        
}; // Ospf::Processes::Process::DefaultVrf::BorderRouters


class Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter : public ydk::Entity
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
        ydk::YLeaf border_router_id_xr; //type: string
        class BorderRouterPath; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath> > border_router_path;
        
}; // Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter


class Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath : public ydk::Entity
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

        ydk::YLeaf border_router_route_type; //type: OspfRoute
        ydk::YLeaf border_router_route_metric; //type: uint32
        ydk::YLeaf border_router_next_hop; //type: string
        ydk::YLeaf border_router_next_hop_interface_name; //type: string
        ydk::YLeaf border_router_type; //type: OspfBr
        ydk::YLeaf border_router_area_id; //type: string
        ydk::YLeaf spf_version; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath


class Ospf::Processes::Process::DefaultVrf::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseAreas; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas
        class DatabaseSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries
        class DatabaseSummaryAs; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs
        class Lsas; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas> database_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries> database_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs> database_summary_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries> lsa_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas> lsas;
        
}; // Ospf::Processes::Process::DefaultVrf::Database


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas : public ydk::Entity
{
    public:
        DatabaseAreas();
        ~DatabaseAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseArea; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea> > database_area;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea : public ydk::Entity
{
    public:
        DatabaseArea();
        ~DatabaseArea();

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
        class Lsas; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries> lsa_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas> lsas;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries : public ydk::Entity
{
    public:
        LsaSummaries();
        ~LsaSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaSummary; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary> > lsa_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary : public ydk::Entity
{
    public:
        LsaSummary();
        ~LsaSummary();

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
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf link_count; //type: uint16
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader> lsa_header;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas : public ydk::Entity
{
    public:
        Lsas();
        ~Lsas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa> > lsa;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa : public ydk::Entity
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
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader
        class LsaDetailData; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData
        class LsaInternalData; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData : public ydk::Entity
{
    public:
        LsaDetailData();
        ~LsaDetailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_capable; //type: boolean
        ydk::YLeaf nssa_translation; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf dn_bit; //type: boolean
        ydk::YLeaf lsa_rate_limit_due_time; //type: uint32
        ydk::YLeaf lsadb_base_clock; //type: uint64
        ydk::YLeaf routing_bit; //type: boolean
        ydk::YLeaf advertising_router_reachable; //type: boolean
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf sum_origin; //type: uint16
        ydk::YLeaf ase_origin; //type: uint16
        ydk::YLeaf in_sync; //type: uint8
        ydk::YLeaf lsa_prefix_priority; //type: uint8
        ydk::YLeaf new_lsa_prefix_priority; //type: uint8
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        class LsaThrottleTimer; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer
        class LsaLastUpdatedTime; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime
        class LsadbBaseTimeStamp; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp
        class NotDelete; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime : public ydk::Entity
{
    public:
        LsaLastUpdatedTime();
        ~LsaLastUpdatedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer : public ydk::Entity
{
    public:
        LsaThrottleTimer();
        ~LsaThrottleTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_location; //type: TimerTable
        ydk::YLeaf timer_type; //type: Timer
        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf last_inst_second_table_index; //type: uint8
        ydk::YLeaf last_inst_minute_table_index; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp : public ydk::Entity
{
    public:
        LsadbBaseTimeStamp();
        ~LsadbBaseTimeStamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete : public ydk::Entity
{
    public:
        NotDelete();
        ~NotDelete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf no_delete; //type: boolean
        ydk::YLeaf neighbor_exchange; //type: boolean
        ydk::YLeaf routing_table; //type: boolean
        ydk::YLeaf acknowledgement; //type: boolean
        ydk::YLeaf maximum_age; //type: boolean
        ydk::YLeaf partial_spf; //type: boolean
        ydk::YLeaf flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf nsr_ack_pending; //type: boolean
        ydk::YLeaf sum_orig_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData : public ydk::Entity
{
    public:
        LsaInternalData();
        ~LsaInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_lsa_type; //type: OspfInternalLsaTypes
        class RouterLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType
        class NetworkLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType
        class SummaryLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType
        class ExternalLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType
        class OpaqueLinkLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType
        class OpaqueMplsTeLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType
        class OpaqueGraceLsa; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa
        class OpaqueRouterInfoLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType
        class OpaqueEpLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType
        class OpaqueElLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType : public ydk::Entity
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

        ydk::YLeaf external_prefix_length; //type: uint32
        ydk::YLeaf internal_external_lsa; //type: boolean
        class ExternalTosMetric; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric> > external_tos_metric;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric : public ydk::Entity
{
    public:
        ExternalTosMetric();
        ~ExternalTosMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_metric; //type: uint32
        ydk::YLeaf external_metric_type; //type: ExMetric
        ydk::YLeaf external_tos; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType : public ydk::Entity
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

        ydk::YLeaf network_prefix_length; //type: uint32
        class NeighborRouter; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter> > neighbor_router;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter : public ydk::Entity
{
    public:
        NeighborRouter();
        ~NeighborRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType : public ydk::Entity
{
    public:
        OpaqueElLsaType();
        ~OpaqueElLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: uint32
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType : public ydk::Entity
{
    public:
        OpaqueEpLsaType();
        ~OpaqueEpLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: uint32
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa : public ydk::Entity
{
    public:
        OpaqueGraceLsa();
        ~OpaqueGraceLsa();

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
        ydk::YLeaf grace_reason; //type: OspfGrReason
        ydk::YLeaf ip_address; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType : public ydk::Entity
{
    public:
        OpaqueLinkLsaType();
        ~OpaqueLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_interface_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType : public ydk::Entity
{
    public:
        OpaqueMplsTeLsaType();
        ~OpaqueMplsTeLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: uint32
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType : public ydk::Entity
{
    public:
        OpaqueRouterInfoLsaType();
        ~OpaqueRouterInfoLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_rilsa_scope; //type: OspfLsaOpqRiScope
        ydk::YLeaf opaque_ri_interface_name; //type: string
        class OpaqueRitlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv> > opaque_ritlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv : public ydk::Entity
{
    public:
        OpaqueRitlv();
        ~OpaqueRitlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ritlv_internal_type; //type: OspfShOpqRiTlvTypes
        class UnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv
        class RtrCapTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv
        class Pcedtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv
        class SrAlgoTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv
        class SrRangeTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv
        class NodeMsdtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv> node_msdtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv : public ydk::Entity
{
    public:
        NodeMsdtlv();
        ~NodeMsdtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_msdtlv_length; //type: uint16
        class NodeMsdSubTypes; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes> node_msd_sub_types;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes : public ydk::Entity
{
    public:
        NodeMsdSubTypes();
        ~NodeMsdSubTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msd_sub_type; //type: uint8
        ydk::YLeaf msd_value; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv : public ydk::Entity
{
    public:
        Pcedtlv();
        ~Pcedtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcedtlv_length; //type: uint16
        class PcedAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr
        class PcedScope; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr> pced_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope> pced_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr : public ydk::Entity
{
    public:
        PcedAddr();
        ~PcedAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_addr_type; //type: OspfShOpqRiPceAddrTypes
        class PceAddrUnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv
        class Ipv4PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr
        class Ipv6PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr> ipv4pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr> ipv6pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr : public ydk::Entity
{
    public:
        Ipv4PceAddr();
        ~Ipv4PceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv4_addr; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr : public ydk::Entity
{
    public:
        Ipv6PceAddr();
        ~Ipv6PceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv6_addr; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv : public ydk::Entity
{
    public:
        PceAddrUnknownTlv();
        ~PceAddrUnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope : public ydk::Entity
{
    public:
        PcedScope();
        ~PcedScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lbit; //type: boolean
        ydk::YLeaf rbit; //type: boolean
        ydk::YLeaf rd_bit; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf sd_bit; //type: boolean
        ydk::YLeaf ybit; //type: boolean
        ydk::YLeaf pref_l; //type: uint8
        ydk::YLeaf pref_r; //type: uint8
        ydk::YLeaf pref_s; //type: uint8
        ydk::YLeaf pref_y; //type: uint8
        ydk::YLeaf all_scope_info_bits; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv : public ydk::Entity
{
    public:
        RtrCapTlv();
        ~RtrCapTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_cap_tlv_length; //type: uint16
        ydk::YLeaf rtr_cap_graceful_restart; //type: boolean
        ydk::YLeaf rtr_cap_graceful_restart_helper; //type: boolean
        ydk::YLeaf rtr_cap_stub_rtr; //type: boolean
        ydk::YLeaf rtr_cap_area_te; //type: boolean
        ydk::YLeaf rtr_cap_p2plan; //type: boolean
        ydk::YLeaf rtr_cap_te_exp; //type: boolean
        ydk::YLeaf rtr_cap_all_bits; //type: uint32
        ydk::YLeaf rtr_cap_additional_info; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv : public ydk::Entity
{
    public:
        SrAlgoTlv();
        ~SrAlgoTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_algo_length; //type: uint16
        ydk::YLeaf sr_algo_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv : public ydk::Entity
{
    public:
        SrRangeTlv();
        ~SrRangeTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_range_length; //type: uint16
        ydk::YLeaf sr_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv : public ydk::Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_sid_length; //type: uint16
        ydk::YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType : public ydk::Entity
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

        ydk::YLeaf router_asbr; //type: boolean
        ydk::YLeaf router_abr; //type: boolean
        ydk::YLeaf internal_lsa; //type: boolean
        class Link; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link
        class InternalLink; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink> > internal_link;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link> > link;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink : public ydk::Entity
{
    public:
        InternalLink();
        ~InternalLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link : public ydk::Entity
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

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType : public ydk::Entity
{
    public:
        SummaryLsaType();
        ~SummaryLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_prefix_length; //type: uint32
        ydk::YLeaf internal_sum_lsa; //type: boolean
        class SummaryLsaMetric; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric> > summary_lsa_metric;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric : public ydk::Entity
{
    public:
        SummaryLsaMetric();
        ~SummaryLsaMetric();

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

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries : public ydk::Entity
{
    public:
        DatabaseSummaries();
        ~DatabaseSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseSummary; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary> > database_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary : public ydk::Entity
{
    public:
        DatabaseSummary();
        ~DatabaseSummary();

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
        ydk::YLeaf dbase_sum_area_id_string; //type: string
        class AreaLsaCounter; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter> > area_lsa_counter;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter : public ydk::Entity
{
    public:
        AreaLsaCounter();
        ~AreaLsaCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: Lsa
        ydk::YLeaf lsa_count; //type: int32
        ydk::YLeaf lsa_delete_count; //type: int32
        ydk::YLeaf lsa_maxage_count; //type: int32
        ydk::YLeaf lsa_self_count; //type: int32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs : public ydk::Entity
{
    public:
        DatabaseSummaryAs();
        ~DatabaseSummaryAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsLsaCounter; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter> > as_lsa_counter;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter : public ydk::Entity
{
    public:
        AsLsaCounter();
        ~AsLsaCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: Lsa
        ydk::YLeaf lsa_count; //type: int32
        ydk::YLeaf lsa_delete_count; //type: int32
        ydk::YLeaf lsa_maxage_count; //type: int32
        ydk::YLeaf lsa_self_count; //type: int32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter


class Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries : public ydk::Entity
{
    public:
        LsaSummaries();
        ~LsaSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaSummary; //type: Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary> > lsa_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries


class Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary : public ydk::Entity
{
    public:
        LsaSummary();
        ~LsaSummary();

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
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf link_count; //type: uint16
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader> lsa_header;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary


class Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::Lsas : public ydk::Entity
{
    public:
        Lsas();
        ~Lsas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa> > lsa;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa : public ydk::Entity
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
        ydk::YLeaf ls_type; //type: OspfLs
        ydk::YLeaf ls_id; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf interface_name; //type: string
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader
        class LsaDetailData; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData
        class LsaInternalData; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData : public ydk::Entity
{
    public:
        LsaDetailData();
        ~LsaDetailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_capable; //type: boolean
        ydk::YLeaf nssa_translation; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf dn_bit; //type: boolean
        ydk::YLeaf lsa_rate_limit_due_time; //type: uint32
        ydk::YLeaf lsadb_base_clock; //type: uint64
        ydk::YLeaf routing_bit; //type: boolean
        ydk::YLeaf advertising_router_reachable; //type: boolean
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf sum_origin; //type: uint16
        ydk::YLeaf ase_origin; //type: uint16
        ydk::YLeaf in_sync; //type: uint8
        ydk::YLeaf lsa_prefix_priority; //type: uint8
        ydk::YLeaf new_lsa_prefix_priority; //type: uint8
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        class LsaThrottleTimer; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer
        class LsaLastUpdatedTime; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime
        class LsadbBaseTimeStamp; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp
        class NotDelete; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime : public ydk::Entity
{
    public:
        LsaLastUpdatedTime();
        ~LsaLastUpdatedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer : public ydk::Entity
{
    public:
        LsaThrottleTimer();
        ~LsaThrottleTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timer_location; //type: TimerTable
        ydk::YLeaf timer_type; //type: Timer
        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf last_inst_second_table_index; //type: uint8
        ydk::YLeaf last_inst_minute_table_index; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp : public ydk::Entity
{
    public:
        LsadbBaseTimeStamp();
        ~LsadbBaseTimeStamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete : public ydk::Entity
{
    public:
        NotDelete();
        ~NotDelete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf no_delete; //type: boolean
        ydk::YLeaf neighbor_exchange; //type: boolean
        ydk::YLeaf routing_table; //type: boolean
        ydk::YLeaf acknowledgement; //type: boolean
        ydk::YLeaf maximum_age; //type: boolean
        ydk::YLeaf partial_spf; //type: boolean
        ydk::YLeaf flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf nsr_ack_pending; //type: boolean
        ydk::YLeaf sum_orig_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader : public ydk::Entity
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

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData : public ydk::Entity
{
    public:
        LsaInternalData();
        ~LsaInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_lsa_type; //type: OspfInternalLsaTypes
        class RouterLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType
        class NetworkLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType
        class SummaryLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType
        class ExternalLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType
        class OpaqueLinkLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType
        class OpaqueMplsTeLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType
        class OpaqueGraceLsa; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa
        class OpaqueRouterInfoLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType
        class OpaqueEpLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType
        class OpaqueElLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType : public ydk::Entity
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

        ydk::YLeaf external_prefix_length; //type: uint32
        ydk::YLeaf internal_external_lsa; //type: boolean
        class ExternalTosMetric; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric> > external_tos_metric;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric : public ydk::Entity
{
    public:
        ExternalTosMetric();
        ~ExternalTosMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_metric; //type: uint32
        ydk::YLeaf external_metric_type; //type: ExMetric
        ydk::YLeaf external_tos; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType : public ydk::Entity
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

        ydk::YLeaf network_prefix_length; //type: uint32
        class NeighborRouter; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter> > neighbor_router;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter : public ydk::Entity
{
    public:
        NeighborRouter();
        ~NeighborRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType : public ydk::Entity
{
    public:
        OpaqueElLsaType();
        ~OpaqueElLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: uint32
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType : public ydk::Entity
{
    public:
        OpaqueEpLsaType();
        ~OpaqueEpLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: uint32
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa : public ydk::Entity
{
    public:
        OpaqueGraceLsa();
        ~OpaqueGraceLsa();

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
        ydk::YLeaf grace_reason; //type: OspfGrReason
        ydk::YLeaf ip_address; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType : public ydk::Entity
{
    public:
        OpaqueLinkLsaType();
        ~OpaqueLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_interface_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType

class GsState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_gs_init;
        static const ydk::Enum::YLeaf mgmt_gs_normal;
        static const ydk::Enum::YLeaf mgmt_gs_delay;
        static const ydk::Enum::YLeaf mgmt_gs_flush;
        static const ydk::Enum::YLeaf mgmt_gs_hello;
        static const ydk::Enum::YLeaf mgmt_gs_quiet;

};

class OspfMaxMetricAbrOffReasons : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_none;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_no_nbr;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_new_nbr;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_nbr_full;
        static const ydk::Enum::YLeaf ospf_max_metric_abr_off_reason_flush_p_end;

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

};

class NsfRtr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_nsf_rtr_none;
        static const ydk::Enum::YLeaf mgmt_nsf_rtr_requester;
        static const ydk::Enum::YLeaf mgmt_nsf_rtr_receiver;

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

};

class Ipfrr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

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
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_uni_delay;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_max_reservable_bw_sub;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_unreserved_bw_sub;
        static const ydk::Enum::YLeaf mgmt_rrr_link_igp_metric;
        static const ydk::Enum::YLeaf mgmt_ospf_rrr_link_ext_admin_sub;

};

class Timer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_db_stop;
        static const ydk::Enum::YLeaf mgmt_db_refresh;
        static const ydk::Enum::YLeaf mgmt_db_checksum;
        static const ydk::Enum::YLeaf mgmt_db_max_age;

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

};

class DrBdrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_dbdr_none;
        static const ydk::Enum::YLeaf mgmt_dbdr_dr;
        static const ydk::Enum::YLeaf mgmt_dbdr_bdr;
        static const ydk::Enum::YLeaf mgmt_dbdr_dr_other;

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

};

class OspfGrReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_gr_reason_unknown;
        static const ydk::Enum::YLeaf mgmt_gr_reason_sw_restart;
        static const ydk::Enum::YLeaf mgmt_gr_reason_sw_upgrade;
        static const ydk::Enum::YLeaf mgmt_gr_reason_switchover;

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

};

class IgpteLibBwModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf mam;
        static const ydk::Enum::YLeaf not_set;

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

};

class OspfSrgbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_allocated;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf allocated;

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

};

class OspfShOpqRiPceAddrTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_opq_pce_addr_type_invalid;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_pce_addr_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_ospf_opq_pce_addr_type_ipv6;

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
        static const ydk::Enum::YLeaf post_convergence;

};

class UloopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf protected_prefixes;
        static const ydk::Enum::YLeaf all_prefixes;
        static const ydk::Enum::YLeaf segment_routing_uloop;

};

class OspfLsaOpqRiScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsa_opq_ri_scope_link;
        static const ydk::Enum::YLeaf mgmt_lsa_opq_ri_scope_area;
        static const ydk::Enum::YLeaf mgmt_lsa_opq_ri_scope_as;

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

};

class SrmsMiAfEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class OspfLinkTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_rtr_link;
        static const ydk::Enum::YLeaf mgmt_trans_link;
        static const ydk::Enum::YLeaf mgmt_stub_net;
        static const ydk::Enum::YLeaf mgmt_vitural_link;

};

class Authentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ospf_auth_none;
        static const ydk::Enum::YLeaf mgmt_ospf_auth_ct;
        static const ydk::Enum::YLeaf mgmt_ospf_auth_md;
        static const ydk::Enum::YLeaf mgmt_ospf_auth_kc;

};

class InterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ifs_unknown;
        static const ydk::Enum::YLeaf mgmt_ifs_admin_down;
        static const ydk::Enum::YLeaf mgmt_ifs_down;
        static const ydk::Enum::YLeaf mgmt_ifs_up;
        static const ydk::Enum::YLeaf mgmt_ifs_shutdown;

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

};

class ExMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_ex_metric_type_none;
        static const ydk::Enum::YLeaf mgmt_ex_metric_type_1;
        static const ydk::Enum::YLeaf mgmt_ex_metric_type_2;

};

class MplsTeOptTlv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_none;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_srlg;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_bc;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_ixcd;
        static const ydk::Enum::YLeaf mpls_te_opt_tlv_type_uni_delay;

};

class SrUloopEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf link_up;

};

class OspfBr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_d_type_abr_asbr;
        static const ydk::Enum::YLeaf mgmt_d_type_asbr;
        static const ydk::Enum::YLeaf mgmt_d_type_abr;

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

};

class TimerTable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_db_no_table;
        static const ydk::Enum::YLeaf mgmt_db_sec_table;
        static const ydk::Enum::YLeaf mgmt_db_buffer_table;
        static const ydk::Enum::YLeaf mgmt_db_min_table;

};

class SrmsMiSrcEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class SrmsMiFlagEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_0_ */

