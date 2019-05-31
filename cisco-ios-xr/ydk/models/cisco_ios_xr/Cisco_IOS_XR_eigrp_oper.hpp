#ifndef _CISCO_IOS_XR_EIGRP_OPER_
#define _CISCO_IOS_XR_EIGRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_eigrp_oper {

class Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

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

        class Processes; //type: Eigrp::Processes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes> processes;
        
}; // Eigrp


class Eigrp::Processes : public ydk::Entity
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

        class Process; //type: Eigrp::Processes::Process

        ydk::YList process;
        
}; // Eigrp::Processes


class Eigrp::Processes::Process : public ydk::Entity
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

        ydk::YLeaf process_id; //type: string
        class VrfsXr; //type: Eigrp::Processes::Process::VrfsXr
        class Vrfs; //type: Eigrp::Processes::Process::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::VrfsXr> vrfs_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs> vrfs;
        
}; // Eigrp::Processes::Process


class Eigrp::Processes::Process::VrfsXr : public ydk::Entity
{
    public:
        VrfsXr();
        ~VrfsXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Eigrp::Processes::Process::VrfsXr::Vrf

        ydk::YList vrf;
        
}; // Eigrp::Processes::Process::VrfsXr


class Eigrp::Processes::Process::VrfsXr::Vrf : public ydk::Entity
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
        ydk::YLeaf vrf_name_xr; //type: string

}; // Eigrp::Processes::Process::VrfsXr::Vrf


class Eigrp::Processes::Process::Vrfs : public ydk::Entity
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

        class Vrf; //type: Eigrp::Processes::Process::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Eigrp::Processes::Process::Vrfs


class Eigrp::Processes::Process::Vrfs::Vrf : public ydk::Entity
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
        class Afs; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs> afs;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf


class Eigrp::Processes::Process::Vrfs::Vrf::Afs : public ydk::Entity
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

        class Af; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af

        ydk::YList af;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af : public ydk::Entity
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

        ydk::YLeaf af_name; //type: EigrpAf
        class Protocol; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol
        class Ases; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases> ases;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_summarization; //type: boolean
        ydk::YLeaf log_neighbor_changes; //type: boolean
        ydk::YLeaf log_neighbor_warnings; //type: boolean
        ydk::YLeaf rib_table_limit_reached; //type: boolean
        ydk::YLeaf outbound_filter_policy; //type: string
        ydk::YLeaf inbound_filter_policy; //type: string
        ydk::YLeaf outgoing_candidate_default_flagged; //type: boolean
        ydk::YLeaf outgoing_candidate_default_policy; //type: string
        ydk::YLeaf incoming_candidate_default_flagged; //type: boolean
        ydk::YLeaf incoming_candidate_default_policy; //type: string
        ydk::YLeaf internal_distance; //type: uint8
        ydk::YLeaf external_distance; //type: uint8
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf variance; //type: uint8
        ydk::YLeaf metric_weight_k1; //type: uint32
        ydk::YLeaf metric_weight_k2; //type: uint32
        ydk::YLeaf metric_weight_k3; //type: uint32
        ydk::YLeaf metric_weight_k4; //type: uint32
        ydk::YLeaf metric_weight_k5; //type: uint32
        ydk::YLeaf metric_weight_k6; //type: uint32
        ydk::YLeaf rib_scale; //type: uint32
        ydk::YLeaf metric_version; //type: EigrpBdMetricVersion
        ydk::YLeaf metric_maximum_hopcount; //type: uint32
        ydk::YLeaf default_metric_configured; //type: boolean
        ydk::YLeaf default_bandwidth; //type: uint32
        ydk::YLeaf default_delay; //type: uint32
        ydk::YLeaf default_reliability; //type: uint32
        ydk::YLeaf default_load; //type: uint32
        ydk::YLeaf default_mtu; //type: uint32
        ydk::YLeaf stub_configured; //type: boolean
        ydk::YLeaf stub_receive_only; //type: boolean
        ydk::YLeaf stub_allow_connected_routes; //type: boolean
        ydk::YLeaf stub_allow_static_routes; //type: boolean
        ydk::YLeaf stub_allow_summary_routes; //type: boolean
        ydk::YLeaf stub_allow_redistributed_routes; //type: boolean
        ydk::YLeaf nsf_enabled; //type: boolean
        ydk::YLeaf nsf_route_hold_time; //type: uint32
        ydk::YLeaf nsf_signal_time; //type: uint32
        ydk::YLeaf nsf_converge_time; //type: uint32
        ydk::YLeaf restart_configured; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf sia_active_time; //type: uint32
        ydk::YLeaf rib_protocol_id; //type: uint32
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf ital_activation_received; //type: boolean
        ydk::YLeaf vrf_activated; //type: boolean
        ydk::YLeaf up; //type: boolean
        ydk::YLeaf rib_initialized; //type: boolean
        ydk::YLeaf rib_converged; //type: boolean
        ydk::YLeaf rib_converged_reload; //type: boolean
        ydk::YLeaf socket_request; //type: boolean
        ydk::YLeaf socket_setup; //type: boolean
        ydk::YLeaf default_vrf; //type: boolean
        ydk::YLeaf af_enabled; //type: boolean
        ydk::YLeaf is_passive_default; //type: boolean
        ydk::YLeaf configured_items; //type: uint32
        ydk::YLeaf af_configured_items; //type: uint32
        ydk::YLeaf ip_arm_router_id; //type: uint32
        ydk::YLeaf first_interface_up_address; //type: uint32
        ydk::YLeaf nsf_in_progress; //type: uint32
        ydk::YLeaf rib_table_converged; //type: uint32
        class RedistributedProtocol; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol
        class Interface; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface

        ydk::YList redistributed_protocol;
        ydk::YList interface;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol : public ydk::Entity
{
    public:
        RedistributedProtocol();
        ~RedistributedProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf redistributed_protocol; //type: string
        ydk::YLeaf redistributed_protocol_tag; //type: string
        ydk::YLeaf redristribute_policy; //type: string
        ydk::YLeaf redistribute_protocol_id; //type: uint32
        ydk::YLeaf rib_handle; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface : public ydk::Entity
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

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf outbound_filter_policy; //type: string
        ydk::YLeaf inbound_filter_policy; //type: string
        ydk::YLeaf inactive; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases : public ydk::Entity
{
    public:
        Ases();
        ~Ases();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As

        ydk::YList as;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint32
        class StaticNeighbors; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors
        class TopologyRoutes; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes
        class EigrpAccounting; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting
        class EigrpTraffic; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic
        class EigrpTopologySummary; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary
        class Interfaces; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces
        class EigrpEvents; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents
        class Neighbors; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors
        class EigrpStatistics; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors> static_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes> topology_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting> eigrp_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic> eigrp_traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary> eigrp_topology_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents> eigrp_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics> eigrp_statistics;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors : public ydk::Entity
{
    public:
        StaticNeighbors();
        ~StaticNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticNeighbor; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor

        ydk::YList static_neighbor;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor : public ydk::Entity
{
    public:
        StaticNeighbor();
        ~StaticNeighbor();

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
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf interface_list; //type: string
        class Source; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source> source;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes : public ydk::Entity
{
    public:
        TopologyRoutes();
        ~TopologyRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyRoute; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute

        ydk::YList topology_route;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute : public ydk::Entity
{
    public:
        TopologyRoute();
        ~TopologyRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf successors; //type: uint32
        ydk::YLeaf successors_present; //type: boolean
        ydk::YLeaf old_metric; //type: uint32
        ydk::YLeaf old_metric64; //type: uint64
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric64; //type: uint64
        ydk::YLeaf rib_metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf send_flag; //type: EigrpBdPathSendFlag
        ydk::YLeaf transmit_serial_number; //type: uint64
        ydk::YLeaf transmit_refcount; //type: uint32
        ydk::YLeaf transmit_anchored; //type: boolean
        ydk::YLeaf reply_handles; //type: uint32
        ydk::YLeaf active_time_secs; //type: uint32
        ydk::YLeaf active_time_nsecs; //type: uint32
        ydk::YLeaf origin; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf active_stats; //type: boolean
        ydk::YLeaf min_time; //type: uint32
        ydk::YLeaf max_time; //type: uint32
        ydk::YLeaf average_time; //type: uint32
        ydk::YLeaf ack_count; //type: uint32
        ydk::YLeaf replies; //type: uint32
        ydk::YLeaf route_in_sia; //type: boolean
        ydk::YLeaf sia_reply_handles; //type: uint32
        class PrefixXr; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr
        class Paths; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths
        class ActivePeer; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer
        class SiaPeer; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr> prefix_xr;
        ydk::YList paths;
        ydk::YList active_peer;
        ydk::YList sia_peer;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr : public ydk::Entity
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

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths : public ydk::Entity
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

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf next_hop_present; //type: boolean
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf origin; //type: EigrpBdPathOrigin
        ydk::YLeaf send_flag; //type: EigrpBdPathSendFlag
        ydk::YLeaf reply_outstanding; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric64; //type: uint64
        ydk::YLeaf successor_metric; //type: uint32
        ydk::YLeaf successor_metric64; //type: uint64
        ydk::YLeaf reply_status; //type: boolean
        ydk::YLeaf sia_status; //type: boolean
        ydk::YLeaf transmit_serial_number; //type: uint64
        ydk::YLeaf anchored; //type: boolean
        ydk::YLeaf external_path; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf bandwidth64; //type: uint64
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf delay64; //type: uint64
        ydk::YLeaf delay_unit; //type: EigrpBdDelayUnit
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf hop_count; //type: uint32
        ydk::YLeaf reliability; //type: uint8
        ydk::YLeaf load; //type: uint8
        ydk::YLeaf internal_router_id; //type: string
        ydk::YLeaf internal_tag; //type: uint8
        ydk::YLeaf extended_communities_present; //type: boolean
        ydk::YLeaf extended_communities_length; //type: uint32
        ydk::YLeaf extended_communities; //type: string
        ydk::YLeaf external_information_present; //type: boolean
        ydk::YLeaf external_router_id; //type: uint32
        ydk::YLeaf external_this_system; //type: boolean
        ydk::YLeaf external_as; //type: uint32
        ydk::YLeaf external_protocol; //type: string
        ydk::YLeaf external_metric; //type: uint32
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf conditional_default_path; //type: boolean
        ydk::YLeaf rib_state; //type: EigrpBdPathRibState
        class NextHopAddress; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress
        class Infosource; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource> infosource;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource : public ydk::Entity
{
    public:
        Infosource();
        ~Infosource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer : public ydk::Entity
{
    public:
        ActivePeer();
        ~ActivePeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_available; //type: boolean
        ydk::YLeaf interface_list; //type: string
        ydk::YLeaf handle_number; //type: uint32
        class Source; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source> source;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer : public ydk::Entity
{
    public:
        SiaPeer();
        ~SiaPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_available; //type: boolean
        ydk::YLeaf interface_list; //type: string
        ydk::YLeaf handle_number; //type: uint32
        class Source; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source> source;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting : public ydk::Entity
{
    public:
        EigrpAccounting();
        ~EigrpAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf aggregate_count; //type: uint32
        ydk::YLeaf state; //type: int8
        ydk::YLeaf redist_prefix_count; //type: uint32
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf time_left; //type: uint32
        ydk::YLeaf redist_prefix_present; //type: boolean
        class PeerStatistics; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics

        ydk::YList peer_statistics;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics : public ydk::Entity
{
    public:
        PeerStatistics();
        ~PeerStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf state; //type: int8
        ydk::YLeaf interface_list; //type: string
        ydk::YLeaf peer_prefix_count; //type: uint32
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf time_left; //type: uint32
        class Source; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source> source;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic : public ydk::Entity
{
    public:
        EigrpTraffic();
        ~EigrpTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf hellos_sent; //type: uint32
        ydk::YLeaf hellos_received; //type: uint32
        ydk::YLeaf updates_sent; //type: uint32
        ydk::YLeaf updates_received; //type: uint32
        ydk::YLeaf queries_sent; //type: uint32
        ydk::YLeaf queries_received; //type: uint32
        ydk::YLeaf replies_sent; //type: uint32
        ydk::YLeaf replies_received; //type: uint32
        ydk::YLeaf acks_sent; //type: uint32
        ydk::YLeaf acks_received; //type: uint32
        ydk::YLeaf sia_queries_sent; //type: uint32
        ydk::YLeaf sia_queries_received; //type: uint32
        ydk::YLeaf sia_replies_sent; //type: uint32
        ydk::YLeaf sia_replies_received; //type: uint32
        ydk::YLeaf max_queue_depth; //type: uint32
        ydk::YLeaf queue_drops; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary : public ydk::Entity
{
    public:
        EigrpTopologySummary();
        ~EigrpTopologySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf thread_present; //type: boolean
        ydk::YLeaf transmit_serial_number; //type: uint64
        ydk::YLeaf next_serial_number; //type: uint64
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf dummy_count; //type: uint32
        ydk::YLeaf ddb_name; //type: string
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf handles_used; //type: uint32
        ydk::YLeaf active_interface_count; //type: uint32
        class Quiescent; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent

        ydk::YList quiescent;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent : public ydk::Entity
{
    public:
        Quiescent();
        ~Quiescent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quiescent_interface_list; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces : public ydk::Entity
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

        class Interface; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface

        ydk::YList interface;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf peer_count; //type: uint32
        ydk::YLeaf classic_peer_count; //type: uint32
        ydk::YLeaf wide_peer_count; //type: uint32
        ydk::YLeaf unreliable_transmits; //type: uint32
        ydk::YLeaf reliable_transmits; //type: uint32
        ydk::YLeaf total_srtt; //type: uint32
        ydk::YLeaf unreliable_send_interval; //type: uint32
        ydk::YLeaf reliable_send_interval; //type: uint32
        ydk::YLeaf last_mc_flow_delay; //type: uint32
        ydk::YLeaf pending_routes; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf holdtime; //type: uint32
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf serial_number_present; //type: boolean
        ydk::YLeaf transmit_serial_number; //type: uint64
        ydk::YLeaf packetize_pending; //type: boolean
        ydk::YLeaf unreliable_multicast_sent; //type: uint32
        ydk::YLeaf reliable_multicast_sent; //type: uint32
        ydk::YLeaf unreliable_unicast_sent; //type: uint32
        ydk::YLeaf reliable_unicast_sent; //type: uint32
        ydk::YLeaf multicast_exceptions_sent; //type: uint32
        ydk::YLeaf cr_packets_sent; //type: uint32
        ydk::YLeaf acks_suppressed; //type: uint32
        ydk::YLeaf retransmissions_sent; //type: uint32
        ydk::YLeaf out_of_sequence_received; //type: uint32
        ydk::YLeaf stub_interface; //type: boolean
        ydk::YLeaf next_hop_self_enabled; //type: boolean
        ydk::YLeaf split_horizon_enabled; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf bandwidth_percent; //type: uint32
        ydk::YLeaf site_of_origin_type; //type: EigrpBdSoo
        ydk::YLeaf site_of_origin; //type: string
        ydk::YLeaf auth_mode; //type: uint32
        ydk::YLeaf auth_keychain; //type: string
        ydk::YLeaf auth_key_exists; //type: boolean
        ydk::YLeaf auth_key_md5; //type: boolean
        ydk::YLeaf auth_key_id; //type: uint64
        ydk::YLeaf total_pkt_recvd; //type: uint32
        ydk::YLeaf pkt_drop_wrong_kc; //type: uint32
        ydk::YLeaf pkt_drop_no_auth; //type: uint32
        ydk::YLeaf pkt_drop_invalid_auth; //type: uint32
        ydk::YLeaf pkt_accepted_valid_auth; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf bandwidth64; //type: uint64
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf delay64; //type: uint64
        ydk::YLeaf delay_unit; //type: EigrpBdDelayUnit
        ydk::YLeaf reliability; //type: uint32
        ydk::YLeaf load; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth64; //type: uint64
        ydk::YLeaf configured_delay; //type: uint32
        ydk::YLeaf configured_delay64; //type: uint64
        ydk::YLeaf configured_delay_unit; //type: EigrpBdDelayUnit
        ydk::YLeaf configured_reliability; //type: uint32
        ydk::YLeaf configured_load; //type: uint32
        ydk::YLeaf configured_bandwidth_flag; //type: boolean
        ydk::YLeaf configured_delay_flag; //type: boolean
        ydk::YLeaf configured_reliability_flag; //type: boolean
        ydk::YLeaf configured_load_flag; //type: boolean
        ydk::YLeaf up; //type: boolean
        ydk::YLeaf type_supported; //type: boolean
        ydk::YLeaf ital_record_found; //type: boolean
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf multicast_enabled; //type: boolean
        ydk::YLeaf socket_setup; //type: boolean
        ydk::YLeaf lpts_socket_setup; //type: boolean
        ydk::YLeaf primary_ipv4_address; //type: string
        ydk::YLeaf ipv6_link_local_addr; //type: string
        ydk::YLeaf primary_prefix_length; //type: uint32
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf interface_type; //type: uint32
        ydk::YLeaf configured_items; //type: uint32
        ydk::YLeaf is_passive_enabled; //type: boolean
        ydk::YLeaf is_passive_disabled; //type: boolean
        class StaticNeighbor; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor

        ydk::YList static_neighbor;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor : public ydk::Entity
{
    public:
        StaticNeighbor();
        ~StaticNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents : public ydk::Entity
{
    public:
        EigrpEvents();
        ~EigrpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf current_event_index; //type: uint32
        ydk::YLeaf eigrp_start_absolute_seconds; //type: uint32
        ydk::YLeaf eigrp_start_absolute_nanoseconds; //type: uint32
        ydk::YLeaf eigrp_start_relative_seconds; //type: uint32
        ydk::YLeaf eigrp_start_relative_nanoseconds; //type: uint32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf peer_suspended; //type: boolean
        ydk::YLeaf peer_handle; //type: uint32
        ydk::YLeaf interface_list; //type: string
        ydk::YLeaf holdtime; //type: uint32
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf srtt; //type: uint32
        ydk::YLeaf rto; //type: uint32
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf queue_count; //type: uint32
        ydk::YLeaf last_sequence_number; //type: uint32
        ydk::YLeaf static_neighbor; //type: boolean
        ydk::YLeaf remote_neighbor; //type: boolean
        ydk::YLeaf hop_count; //type: uint8
        ydk::YLeaf restart_configured; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf last_startup_serial_number; //type: uint64
        ydk::YLeaf ios_major_version; //type: uint8
        ydk::YLeaf ios_minor_version; //type: uint8
        ydk::YLeaf eigrp_major_version; //type: uint8
        ydk::YLeaf eigrp_minor_version; //type: uint8
        ydk::YLeaf retransmission_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf need_init; //type: boolean
        ydk::YLeaf need_init_ack; //type: boolean
        ydk::YLeaf reinitialization_needed; //type: boolean
        ydk::YLeaf reinit_start; //type: uint32
        ydk::YLeaf peer_prefix_count; //type: uint32
        ydk::YLeaf stubbed; //type: boolean
        ydk::YLeaf allow_connected; //type: boolean
        ydk::YLeaf allow_static; //type: boolean
        ydk::YLeaf allow_summaries; //type: boolean
        ydk::YLeaf allow_redistributed; //type: boolean
        ydk::YLeaf test_handle; //type: boolean
        ydk::YLeaf stubbed_interface; //type: boolean
        ydk::YLeaf suspended_reset; //type: boolean
        ydk::YLeaf suspended_time_left; //type: uint32
        class Source; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source
        class NeighborQueue; //type: Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_eigrp_oper::Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source> source;
        ydk::YList neighbor_queue;
        
}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue : public ydk::Entity
{
    public:
        NeighborQueue();
        ~NeighborQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_code; //type: uint32
        ydk::YLeaf ack_sequnce_number; //type: uint32
        ydk::YLeaf start_serial_number; //type: uint64
        ydk::YLeaf end_serial_number; //type: uint64
        ydk::YLeaf pregenerated; //type: boolean
        ydk::YLeaf packet_length; //type: uint32
        ydk::YLeaf time_sent_flag; //type: boolean
        ydk::YLeaf time_sent; //type: uint32
        ydk::YLeaf init_bit_set; //type: boolean
        ydk::YLeaf sequenced; //type: boolean

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue


class Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics : public ydk::Entity
{
    public:
        EigrpStatistics();
        ~EigrpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf configured_interface_count; //type: uint32
        ydk::YLeaf active_interfaces_count; //type: uint32
        ydk::YLeaf activate_count; //type: uint64
        ydk::YLeaf activate_error; //type: uint64
        ydk::YLeaf activate_last_error; //type: int32
        ydk::YLeaf deactivate_count; //type: uint64
        ydk::YLeaf deactivate_error; //type: uint64
        ydk::YLeaf deactivate_last_error; //type: int32
        ydk::YLeaf socket_set; //type: uint64
        ydk::YLeaf socket_set_error; //type: uint64
        ydk::YLeaf sock_set_last_error; //type: int32
        ydk::YLeaf raw_packet_in; //type: uint64
        ydk::YLeaf raw_packet_in_error; //type: uint64
        ydk::YLeaf raw_packet_in_last_error; //type: int32
        ydk::YLeaf raw_packet_out; //type: uint64
        ydk::YLeaf raw_packet_out_error; //type: uint64
        ydk::YLeaf raw_packet_out_last_error; //type: int32

}; // Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics

class EigrpBdSoo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf four_byte_as;

};

class EigrpBdPathRibState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active_path;
        static const ydk::Enum::YLeaf backup_path;
        static const ydk::Enum::YLeaf path_sent_to_rib;
        static const ydk::Enum::YLeaf path_not_selected;
        static const ydk::Enum::YLeaf error_state;

};

class EigrpBdDelayUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ten_microsecond;
        static const ydk::Enum::YLeaf picosecond;
        static const ydk::Enum::YLeaf microsecond;

};

class EigrpBdPathOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_redistributed;
        static const ydk::Enum::YLeaf connected_redistributed;
        static const ydk::Enum::YLeaf subscriber_redistributed;
        static const ydk::Enum::YLeaf redistributed;
        static const ydk::Enum::YLeaf vpnv4_sourced;
        static const ydk::Enum::YLeaf vpnv6_sourced;
        static const ydk::Enum::YLeaf summary;
        static const ydk::Enum::YLeaf dummy;
        static const ydk::Enum::YLeaf eigrp_destination;
        static const ydk::Enum::YLeaf origin_count;

};

class EigrpBdPathSendFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_send_pending;
        static const ydk::Enum::YLeaf multicast_update_pending;
        static const ydk::Enum::YLeaf multicast_query_pending;
        static const ydk::Enum::YLeaf reply_pending;
        static const ydk::Enum::YLeaf sia_query_pending;
        static const ydk::Enum::YLeaf sia_reply_pending;

};

class EigrpBdMetricVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_version32_bit;
        static const ydk::Enum::YLeaf metric_version64_bit;

};


}
}

#endif /* _CISCO_IOS_XR_EIGRP_OPER_ */

