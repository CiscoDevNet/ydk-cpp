#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_6_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea : public ydk::Entity
{
    public:
        ProtocolArea();
        ~ProtocolArea();

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
        ydk::YLeaf address; //type: string
        ydk::YLeaf protcol_area; //type: string
        ydk::YLeaf protocol_mpls; //type: boolean
        ydk::YLeaf protocol_area_dist_list_in; //type: string
        class ProtocolInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface> > protocol_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface : public ydk::Entity
{
    public:
        ProtocolInterface();
        ~ProtocolInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_interface_name; //type: string
        ydk::YLeaf protocol_authentication_type; //type: Authentication
        ydk::YLeaf protocol_interface_dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary : public ydk::Entity
{
    public:
        ProtocolSummary();
        ~ProtocolSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_router_id; //type: string
        ydk::YLeaf protocol_distance; //type: uint32
        ydk::YLeaf administrative_distance_inter_area; //type: uint32
        ydk::YLeaf administrative_distance_external; //type: uint32
        ydk::YLeaf protocol_nsf; //type: boolean
        ydk::YLeaf dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions : public ydk::Entity
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

        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution> > redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution : public ydk::Entity
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
        ydk::YLeaf metric_flag; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf classless; //type: boolean
        ydk::YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas : public ydk::Entity
{
    public:
        ProcessAreas();
        ~ProcessAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea> > process_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea : public ydk::Entity
{
    public:
        ProcessArea();
        ~ProcessArea();

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
        ydk::YLeaf address; //type: string
        ydk::YLeaf area_id_string; //type: string
        ydk::YLeaf backbone_area_active; //type: boolean
        ydk::YLeaf area_interface_count; //type: uint16
        ydk::YLeaf area_stub; //type: boolean
        ydk::YLeaf area_total_stub; //type: boolean
        ydk::YLeaf stub_default_cost; //type: uint16
        ydk::YLeaf area_nssa; //type: boolean
        ydk::YLeaf nssa_no_redistribution; //type: boolean
        ydk::YLeaf nssa_translate; //type: boolean
        ydk::YLeaf nssa_default; //type: boolean
        ydk::YLeaf te_enabled; //type: boolean
        ydk::YLeaf te_topology_version; //type: uint32
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: uint32
        ydk::YLeaf sr_strict_spf_cap; //type: boolean
        ydk::YLeaf sr_strict_spfsids_available; //type: boolean
        ydk::YLeaf sr_microloop_avoidance_active; //type: boolean
        ydk::YLeaf sr_microloop_avoidance_event_type; //type: SrUloopEvent
        ydk::YLeaf sr_microloop_avoidance_near_end_id; //type: string
        ydk::YLeaf sr_microloop_avoidance_far_end_id; //type: string
        ydk::YLeaf sr_microloop_avoidance_pseudonode_id; //type: string
        ydk::YLeaf authentication_type; //type: Authentication
        ydk::YLeaf spf_count; //type: uint32
        ydk::YLeaf area_policy_in; //type: boolean
        ydk::YLeaf area_policy_in_name; //type: string
        ydk::YLeaf area_policy_out; //type: boolean
        ydk::YLeaf area_policy_out_name; //type: string
        ydk::YLeaf area_lsa_count; //type: uint32
        ydk::YLeaf area_lsa_checksum; //type: uint32
        ydk::YLeaf area_opaque_lsa_count; //type: uint32
        ydk::YLeaf area_opaque_lsa_checksum; //type: uint32
        ydk::YLeaf area_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf indication_lsa_count; //type: uint32
        ydk::YLeaf dna_lsa_count; //type: uint32
        ydk::YLeaf flood_list_length; //type: uint32
        ydk::YLeaf area_lfa_interface_count; //type: uint32
        ydk::YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        ydk::YLeaf area_lfa_revision; //type: uint32
        ydk::YLeaf area_adj_stag_num_nbr_forming; //type: uint16
        ydk::YLeaf area_num_nbr_full; //type: uint16
        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange> > area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange : public ydk::Entity
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
        ydk::YLeaf range_mask; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf advertise_flag; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary : public ydk::Entity
{
    public:
        ProcessSummary();
        ~ProcessSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role_standby; //type: boolean
        ydk::YLeaf role; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_switchover_on_restart; //type: boolean
        ydk::YLeaf igp_intact_on; //type: boolean
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf tos_options; //type: uint8
        ydk::YLeaf opaque_capable; //type: boolean
        ydk::YLeaf area_border_router; //type: boolean
        ydk::YLeaf as_border_router; //type: boolean
        ydk::YLeaf vrf_lite_enabled; //type: boolean
        ydk::YLeaf maximum_metric_start; //type: boolean
        ydk::YLeaf maximum_metric_start_timer; //type: uint32
        ydk::YLeaf maximum_metric_set_reason; //type: MaxMetricSetReason
        ydk::YLeaf maximum_metric_abr_off_mode; //type: boolean
        ydk::YLeaf maximum_metric_abr_off_reasons; //type: OspfMaxMetricAbrOffReasons
        ydk::YLeaf maximum_metric_abr_off_buffer_time; //type: uint32
        ydk::YLeaf spf_start_time; //type: uint16
        ydk::YLeaf spf_hold_time; //type: uint16
        ydk::YLeaf spf_maximum_time; //type: uint16
        ydk::YLeaf spf_start_time_u32; //type: uint32
        ydk::YLeaf spf_hold_time_u32; //type: uint32
        ydk::YLeaf spf_maximum_time_u32; //type: uint32
        ydk::YLeaf spf_prefix_priority; //type: boolean
        ydk::YLeaf spf_prefix_priority_route_policy; //type: string
        ydk::YLeaf lsa_start_time; //type: int32
        ydk::YLeaf lsa_hold_time; //type: uint32
        ydk::YLeaf lsa_maximum_time; //type: uint32
        ydk::YLeaf minimum_lsa_interval; //type: uint16
        ydk::YLeaf minimum_lsa_interval_u32; //type: uint32
        ydk::YLeaf lsa_refresh_interval; //type: uint32
        ydk::YLeaf minimum_lsa_arrival_interval; //type: uint16
        ydk::YLeaf minimum_lsa_arrival_interval_u32; //type: uint32
        ydk::YLeaf if_flood_pacing_interval; //type: uint16
        ydk::YLeaf if_retrans_pacing_interval; //type: uint16
        ydk::YLeaf adj_stag_init_num_nbr; //type: uint16
        ydk::YLeaf adj_stag_max_num_nbr; //type: uint16
        ydk::YLeaf adj_stagger_enabled; //type: boolean
        ydk::YLeaf adj_stag_num_nbr_forming; //type: uint16
        ydk::YLeaf number_nbrs_full; //type: uint16
        ydk::YLeaf as_lsa_count; //type: uint32
        ydk::YLeaf as_lsa_checksum; //type: uint32
        ydk::YLeaf opaque_lsa_count; //type: uint32
        ydk::YLeaf opaque_lsa_checksum; //type: uint32
        ydk::YLeaf as_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf as_dna_lsa_count; //type: uint32
        ydk::YLeaf area_count; //type: uint16
        ydk::YLeaf normal_area_count; //type: uint16
        ydk::YLeaf stub_area_count; //type: uint16
        ydk::YLeaf nssa_area_count; //type: uint16
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf as_lsa_flood_list_length; //type: uint32
        ydk::YLeaf nsf_enabled; //type: boolean
        ydk::YLeaf last_nsf_time; //type: uint32
        ydk::YLeaf nsf_time; //type: uint32
        ydk::YLeaf redistribution_limit; //type: uint32
        ydk::YLeaf redistribution_threshold; //type: uint32
        ydk::YLeaf redistribution_limit_warn; //type: boolean
        ydk::YLeaf graceful_shutdown_retention_time; //type: uint32
        ydk::YLeaf graceful_shutdown_state; //type: GsState
        ydk::YLeaf table_prefix_limit_reached; //type: boolean
        ydk::YLeaf non_self_lsa_count; //type: uint32
        ydk::YLeaf max_lsa_enabled; //type: boolean
        ydk::YLeaf max_lsa_limit; //type: uint32
        ydk::YLeaf max_lsa_treshold; //type: uint32
        ydk::YLeaf max_lsa_warning_only; //type: boolean
        ydk::YLeaf max_lsa_ignore_time; //type: uint32
        ydk::YLeaf max_lsa_reset_time; //type: uint32
        ydk::YLeaf max_lsa_ignore_limit; //type: uint32
        ydk::YLeaf max_lsa_ignore_count; //type: uint32
        ydk::YLeaf max_lsa_ignore_timer; //type: uint32
        ydk::YLeaf max_lsa_reset_timer; //type: uint32
        ydk::YLeaf context_name; //type: string
        ydk::YLeaf snmp_trap_enabled; //type: boolean
        ydk::YLeaf ucmp; //type: boolean
        ydk::YLeaf ucmp_prefix_list; //type: string
        ydk::YLeaf ucmp_variance; //type: int32
        ydk::YLeaf ucmp_delay; //type: uint32
        ydk::YLeaf microloop_avoidance_type; //type: UloopAvoidance
        ydk::YLeaf microloop_avoidance_delay; //type: uint32
        ydk::YLeaf microloop_avoidance_active; //type: boolean
        ydk::YLeaf microloop_avoidance_delay_expiry; //type: uint32
        ydk::YLeaf lsd_connected; //type: boolean
        ydk::YLeaf lsd_registered; //type: boolean
        ydk::YLeaf lsd_bound; //type: boolean
        ydk::YLeaf lsd_connection_revision; //type: uint32
        ydk::YLeaf srgb_configured; //type: boolean
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_end; //type: uint32
        ydk::YLeaf srgb_status; //type: OspfSrgbStatus
        ydk::YLeaf sr_strict_spf_cap; //type: boolean
        class DomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId
        class MaximumMetric; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId> domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric> > maximum_metric;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution> > redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrimaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId> > secondary_domain_id;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric : public ydk::Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_metric_reason; //type: uint8
        ydk::YLeaf max_metric_enabled; //type: boolean
        ydk::YLeaf unset_maximum_metric; //type: boolean
        ydk::YLeaf saved_unset_maximum_metric; //type: boolean
        ydk::YLeaf maximum_metric_start_time; //type: uint32
        ydk::YLeaf saved_startup_time; //type: uint32
        ydk::YLeaf maximum_metric_include_stubs; //type: boolean
        ydk::YLeaf maximum_metric_summary_lsa; //type: boolean
        ydk::YLeaf maximum_metric_summary_lsa_metric; //type: uint32
        ydk::YLeaf maximum_metric_external_lsa; //type: boolean
        ydk::YLeaf maximum_metric_external_lsa_metric; //type: uint32
        ydk::YLeaf maximum_metric_originated_for; //type: uint32
        ydk::YLeaf maximum_metric_unset_reason; //type: MaxMetricUnsetReason
        class MaximumMetricTimeUnset; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset> maximum_metric_time_unset;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset : public ydk::Entity
{
    public:
        MaximumMetricTimeUnset();
        ~MaximumMetricTimeUnset();

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

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution : public ydk::Entity
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

        ydk::YLeaf metric_flag; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf classless; //type: boolean
        ydk::YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable> flood_list_area_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions> retransmissions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails> neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces> interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface> active_interface;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg> > srlg;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor> > interface_neighbor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj> > interface_madj;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr> > ip_sec_addr;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas> lsas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries> lsa_summaries;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas> lsas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries> lsa_summaries;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link> > link;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink> > internal_link;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv> node_msdtlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr> ipv4pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr> ipv6pce_addr;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType : public ydk::Entity
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
        class Link; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link
        class InternalLink; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link> > link;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink> > internal_link;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link : public ydk::Entity
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
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink : public ydk::Entity
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
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos


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


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType : public ydk::Entity
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
        class SummaryLsaMetric; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric> > summary_lsa_metric;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric


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


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType : public ydk::Entity
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

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv : public ydk::Entity
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
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv


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


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType : public ydk::Entity
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
        class OpaqueRitlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv> > opaque_ritlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv : public ydk::Entity
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
        class UnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv
        class RtrCapTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv
        class Pcedtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv
        class SrAlgoTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv
        class SrRangeTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv
        class NodeMsdtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv> node_msdtlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv : public ydk::Entity
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
        class PcedAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr
        class PcedScope; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr> pced_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope> pced_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr : public ydk::Entity
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
        class PceAddrUnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv
        class Ipv4PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr
        class Ipv6PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr> ipv4pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr> ipv6pce_addr;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_6_ */

