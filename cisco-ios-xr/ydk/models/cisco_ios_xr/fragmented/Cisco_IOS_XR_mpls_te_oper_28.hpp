#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_28_
#define _CISCO_IOS_XR_MPLS_TE_OPER_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_27.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo : public Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_enabled; //type: boolean
        YLeaf collection_type; //type: BandwidthAccountingCollectionEnum
        YLeaf sample_time_remaining_timestamp_nano_sec; //type: uint64
        YLeaf last_sample_collection_timestamp_nano_sec; //type: uint64
        YLeaf next_sample_collection_nano_sec; //type: uint64
        YLeaf application_time_remaining_nano_sec; //type: uint64
        YLeaf last_application_timestamp_nano_sec; //type: uint64
        YLeaf next_application_timestamp_nano_sec; //type: uint64
        YLeaf effective_maximum_reservable_bandwidth; //type: uint64

        class BandwidthUtilization; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization> bandwidth_utilization;


}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization : public Entity
{
    public:
        BandwidthUtilization();
        ~BandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_link_bandwidth_utilization; //type: uint64
        YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf applied_non_rsvp_te_bandwidth_utilization; //type: uint64



}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory : public Entity
{
    public:
        SampleHistory();
        ~SampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_samples; //type: uint32
        YLeaf total_applications; //type: uint32

        class ActiveIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample
        class PreviousIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample> > active_interval_sample;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample> > previous_interval_sample;


}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample : public Entity
{
    public:
        ActiveIntervalSample();
        ~ActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp_nano_sec; //type: uint64
        YLeaf total_rate; //type: uint64
        YLeaf total_packet_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf rsvp_te_packet_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_packet_rate; //type: uint64



}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample : public Entity
{
    public:
        PreviousIntervalSample();
        ~PreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp_nano_sec; //type: uint64
        YLeaf total_rate; //type: uint64
        YLeaf total_packet_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf rsvp_te_packet_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_packet_rate; //type: uint64



}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample


class MplsLcac::LinkSummary : public Entity
{
    public:
        LinkSummary();
        ~LinkSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf links; //type: uint16
        YLeaf maximum_links; //type: uint16
        YLeaf is_flooding_enabled; //type: boolean

        class BandwidthAccountSummary; //type: MplsLcac::LinkSummary::BandwidthAccountSummary
        class AreasSummary; //type: MplsLcac::LinkSummary::AreasSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary::AreasSummary> > areas_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary::BandwidthAccountSummary> bandwidth_account_summary;


}; // MplsLcac::LinkSummary


class MplsLcac::LinkSummary::BandwidthAccountSummary : public Entity
{
    public:
        BandwidthAccountSummary();
        ~BandwidthAccountSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_bandwidth_account_enabled; //type: boolean
        YLeaf sample_interval; //type: uint32
        YLeaf sample_time_remaining; //type: uint32
        YLeaf application_interval; //type: uint32
        YLeaf application_time_remaining; //type: uint32



}; // MplsLcac::LinkSummary::BandwidthAccountSummary


class MplsLcac::LinkSummary::AreasSummary : public Entity
{
    public:
        AreasSummary();
        ~AreasSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: string
        YLeaf protocol; //type: IgpProtocolEnum
        YLeaf is_flooded; //type: boolean
        YLeaf is_periodic_flooding_on; //type: boolean
        YLeaf periodic_flooding_interval; //type: uint16
        YLeaf links_flooded; //type: uint16
        YLeaf system_id; //type: string
        YLeaf local_node_router_id; //type: string
        YLeaf igp_neighbors; //type: uint16



}; // MplsLcac::LinkSummary::AreasSummary


class MplsLcac::LinkInformation : public Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsLcac::LinkInformation::Global
        class Links; //type: MplsLcac::LinkInformation::Links

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links> links;


}; // MplsLcac::LinkInformation


class MplsLcac::LinkInformation::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf links; //type: uint16
        YLeaf maximum_links; //type: uint16



}; // MplsLcac::LinkInformation::Global


class MplsLcac::LinkInformation::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Link; //type: MplsLcac::LinkInformation::Links::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link> > link;


}; // MplsLcac::LinkInformation::Links


class MplsLcac::LinkInformation::Links::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf reason_not_flooded; //type: string
        YLeaf maximum_reservation_bandwidth_rdm; //type: uint64
        YLeaf reservable_pool0_bandwidth_rdm; //type: uint64
        YLeaf reservable_pool1_bandwidth_rdm; //type: uint64
        YLeaf maximum_reservation_bandwidth_mam; //type: uint64
        YLeaf reservable_pool0_bandwidth_mam; //type: uint64
        YLeaf reservable_pool1_bandwidth_mam; //type: uint64
        YLeaf link_attributes; //type: uint32
        YLeaf is_attribute_incomplete; //type: boolean
        YLeaf is_name_based_attribute; //type: boolean
        YLeaf te_metric; //type: uint32
        YLeaf is_te_metric_valid; //type: boolean
        YLeafList link_extended_attribute; //type: list of  uint32
        YLeafList link_forwad_ref_value; //type: list of  uint32

        class LinkCommon; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon
        class BandwidthAccount; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount
        class HwOor; //type: MplsLcac::LinkInformation::Links::Link::HwOor
        class AffinityMap; //type: MplsLcac::LinkInformation::Links::Link::AffinityMap
        class Areas; //type: MplsLcac::LinkInformation::Links::Link::Areas
        class Lockout; //type: MplsLcac::LinkInformation::Links::Link::Lockout

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::AffinityMap> > affinity_map;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::Areas> > areas;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount> bandwidth_account;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::HwOor> hw_oor;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon> link_common;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::Lockout> > lockout;


}; // MplsLcac::LinkInformation::Links::Link


class MplsLcac::LinkInformation::Links::Link::LinkCommon : public Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: string
        YLeaf link_address; //type: string
        YLeaf is_unnumbered; //type: boolean
        YLeaf has_protection; //type: boolean
        YLeaf capability; //type: uint32
        YLeaf working_priority; //type: uint32
        YLeaf resource_provider; //type: ResourceProviderEnum
        YLeaf is_resource_provider_installed; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum
        YLeaf physical_bandwidth; //type: uint64
        YLeaf bcm_id; //type: uint16
        YLeaf maximum_reservable_bandwidth; //type: uint64
        YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf inbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf outbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf igp_neighbors; //type: uint16

        class LinkFlags; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;


}; // MplsLcac::LinkInformation::Links::Link::LinkCommon


class MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags : public Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_te_on; //type: boolean
        YLeaf signaling_agent; //type: SignalingAgentEnumEnum
        YLeaf is_admin_up; //type: boolean



}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags


class MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup


class MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint8
        YLeaf switching_capability; //type: uint8
        YLeaf encoding; //type: uint8



}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas : public Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flooded_area; //type: string



}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount : public Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAccountCommonInfo; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo
        class BandwidthSampleHistory; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo> bandwidth_account_common_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory> bandwidth_sample_history;


}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo : public Entity
{
    public:
        BandwidthAccountCommonInfo();
        ~BandwidthAccountCommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_bandwidth_account_enabled; //type: boolean
        YLeaf application_enabled; //type: boolean
        YLeaf collection_type; //type: BandwidthAccountingCollectionEnum
        YLeaf sample_interval; //type: uint32
        YLeaf sample_time_remaining; //type: uint32
        YLeaf last_sample_collection_timestamp; //type: uint32
        YLeaf next_sample_collection; //type: uint32
        YLeaf application_interval; //type: uint32
        YLeaf application_time_remaining; //type: uint32
        YLeaf last_application_timestamp; //type: uint32
        YLeaf next_application; //type: uint32
        YLeaf adjustment_factor; //type: uint32
        YLeaf max_reservable_bandwidth_threshold_are_default; //type: boolean
        YLeaf up_threshold_max_reservable_bandwidth; //type: uint8
        YLeaf down_threshold_max_reservable_bandwidth; //type: uint8

        class BandwidthUtilization; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization> bandwidth_utilization;


}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization : public Entity
{
    public:
        BandwidthUtilization();
        ~BandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_link_bandwidth_utilization; //type: uint64
        YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf applied_non_rsvp_te_bandwidth_utilization; //type: uint64



}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory : public Entity
{
    public:
        BandwidthSampleHistory();
        ~BandwidthSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_samples; //type: uint32
        YLeaf total_applications; //type: uint32

        class ActiveIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample
        class PreviousIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample> > active_interval_sample;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample> > previous_interval_sample;


}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample : public Entity
{
    public:
        ActiveIntervalSample();
        ~ActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf total_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64



}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample : public Entity
{
    public:
        PreviousIntervalSample();
        ~PreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf total_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64



}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample


class MplsLcac::LinkInformation::Links::Link::HwOor : public Entity
{
    public:
        HwOor();
        ~HwOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf hw_oor_timestamp; //type: uint32
        YLeaf hw_o_or_green_recovery_time; //type: uint32

        class HwOOrLinkStatistic; //type: MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic> > hw_o_or_link_statistic;


}; // MplsLcac::LinkInformation::Links::Link::HwOor


class MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic : public Entity
{
    public:
        HwOOrLinkStatistic();
        ~HwOOrLinkStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf transitions; //type: uint32
        YLeaf node_protection_disable_number; //type: uint32
        YLeaf rejected_ls_ps_number; //type: uint32
        YLeaf accepted_ls_ps_number; //type: uint32
        YLeaf accepted_reopt_ls_ps_number; //type: uint32
        YLeaf rejected_reopt_ls_ps_number; //type: uint32



}; // MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic


class MplsLcac::LinkInformation::Links::Link::AffinityMap : public Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_name; //type: string
        YLeaf affinity_value; //type: uint32
        YLeaf affinity_bit_position; //type: uint8
        YLeaf affinity_table_id; //type: TeAffinityTableEnum
        YLeafList affinity_extended_value; //type: list of  uint32



}; // MplsLcac::LinkInformation::Links::Link::AffinityMap


class MplsLcac::LinkInformation::Links::Link::Areas : public Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf is_neighbor_up; //type: boolean
        YLeaf igp_metric; //type: uint32



}; // MplsLcac::LinkInformation::Links::Link::Areas


class MplsLcac::LinkInformation::Links::Link::Lockout : public Entity
{
    public:
        Lockout();
        ~Lockout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_lockout; //type: boolean
        YLeaf lockout_on_timestamp; //type: uint32
        YLeaf lockout_off_timestamp; //type: uint32



}; // MplsLcac::LinkInformation::Links::Link::Lockout


class MplsLcac::AdmissionControl : public Entity
{
    public:
        AdmissionControl();
        ~AdmissionControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsLcac::AdmissionControl::Global
        class AdmittedTunnels; //type: MplsLcac::AdmissionControl::AdmittedTunnels
        class LinkInterfaces; //type: MplsLcac::AdmissionControl::LinkInterfaces

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::AdmittedTunnels> admitted_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::LinkInterfaces> link_interfaces;


}; // MplsLcac::AdmissionControl


class MplsLcac::AdmissionControl::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf total_tunnels; //type: uint32
        YLeaf total_p2mp_tunnels; //type: uint32
        YLeaf selected_tunnels; //type: uint32
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum



}; // MplsLcac::AdmissionControl::Global


class MplsLcac::AdmissionControl::AdmittedTunnels : public Entity
{
    public:
        AdmittedTunnels();
        ~AdmittedTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdmittedTunnel; //type: MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel> > admitted_tunnel;


}; // MplsLcac::AdmissionControl::AdmittedTunnels


class MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel : public Entity
{
    public:
        AdmittedTunnel();
        ~AdmittedTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf source_port; //type: int32
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf p2mp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf bandwidth_state; //type: BandwidthStateEnumEnum
        YLeaf bandwidth_pool; //type: BandwidthTypeEnumEnum
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf up_link_name; //type: string
        YLeaf down_link_name; //type: string
        YLeaf tunnel_state; //type: TunnelStateEnumEnum
        YLeaf bandwidth; //type: uint64
        YLeaf local_label; //type: uint32
        YLeaf outgoing_label; //type: uint32
        YLeaf backup_interface; //type: string
        YLeaf is_rerouted; //type: boolean



}; // MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel


class MplsLcac::AdmissionControl::LinkInterfaces : public Entity
{
    public:
        LinkInterfaces();
        ~LinkInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkInterface; //type: MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface> > link_interface;


}; // MplsLcac::AdmissionControl::LinkInterfaces


class MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface : public Entity
{
    public:
        LinkInterface();
        ~LinkInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_role_standby; //type: boolean
        YLeaf total_tunnels; //type: uint32
        YLeaf total_p2mp_tunnels; //type: uint32
        YLeaf selected_tunnels; //type: uint32
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum



}; // MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface


class MplsLcac::SoftPreemptionGlobalInfo : public Entity
{
    public:
        SoftPreemptionGlobalInfo();
        ~SoftPreemptionGlobalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf is_timeout_interval_configured; //type: boolean
        YLeaf timeout_interval; //type: uint32



}; // MplsLcac::SoftPreemptionGlobalInfo


class MplsLcac::SoftPreemptions : public Entity
{
    public:
        SoftPreemptions();
        ~SoftPreemptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SoftPreemption; //type: MplsLcac::SoftPreemptions::SoftPreemption

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions::SoftPreemption> > soft_preemption;


}; // MplsLcac::SoftPreemptions


class MplsLcac::SoftPreemptions::SoftPreemption : public Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_address; //type: string
        YLeaf total_soft_preempted_bandwidth_bc0; //type: uint64
        YLeaf total_soft_preempted_bandwidth_bc1; //type: uint64
        YLeaf current_soft_preempted_bandwidth_bc0; //type: uint64
        YLeaf current_soft_preempted_bandwidth_bc1; //type: uint64
        YLeaf release_soft_preempted_bandwidth_bc0; //type: uint64
        YLeaf release_soft_preempted_bandwidth_bc1; //type: uint64
        YLeaf current_over_subscribed_bandwidth_bc0; //type: uint64
        YLeaf current_over_subscribed_bandwidth_bc1; //type: uint64

        class CurrentSoftPreemptionLsp; //type: MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp> > current_soft_preemption_lsp;


}; // MplsLcac::SoftPreemptions::SoftPreemption


class MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp : public Entity
{
    public:
        CurrentSoftPreemptionLsp();
        ~CurrentSoftPreemptionLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf requested_bandwidth; //type: uint64
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf bandwidth_type; //type: uint8
        YLeaf soft_preempted; //type: boolean
        YLeaf soft_preemption_timeout; //type: uint16
        YLeaf bandwidth_preempted; //type: boolean
        YLeaf soft_preempted_fr_rrewrite; //type: boolean



}; // MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

class MplsPce : public Entity
{
    public:
        MplsPce();
        ~MplsPce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Lsps; //type: MplsPce::Lsps
        class Statistics; //type: MplsPce::Statistics
        class Peers; //type: MplsPce::Peers
        class Topology; //type: MplsPce::Topology
        class Tunnels; //type: MplsPce::Tunnels

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps> lsps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers> peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology> topology;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Tunnels> tunnels;


}; // MplsPce


class MplsPce::Lsps : public Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf symbolic_name_xr; //type: string
        YLeaf session_internal_lsp_id; //type: uint32
        YLeaf stateful_request_parameter_id; //type: uint32
        YLeaf request_queue_size; //type: uint8
        YLeaf delegatable; //type: boolean
        YLeaf operational; //type: PceLspOperStateEnum
        YLeaf administrative; //type: boolean
        YLeaf cleanup_timer_exp; //type: int32
        YLeaf delegation_timer_exp; //type: int32
        YLeaf create; //type: boolean
        YLeaf state_timer_exp; //type: int32
        YLeaf lspo_is_used; //type: boolean
        YLeaf forward_class_id; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf path_setup_type; //type: uint8
        YLeaf binding_sid; //type: uint32
        YLeafList backup_path; //type: list of  string

        class Lsp; //type: MplsPce::Lsps::Lsp
        class Creator; //type: MplsPce::Lsps::Creator
        class Delegated; //type: MplsPce::Lsps::Delegated
        class Identifiers; //type: MplsPce::Lsps::Identifiers
        class Autoroute; //type: MplsPce::Lsps::Autoroute
        class Paths; //type: MplsPce::Lsps::Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Creator> creator;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Delegated> delegated;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Identifiers> identifiers;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp> > lsp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths> > paths;


}; // MplsPce::Lsps


class MplsPce::Lsps::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf symbolic_name; //type: string
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf symbolic_name_xr; //type: string
        YLeaf session_internal_lsp_id; //type: uint32
        YLeaf stateful_request_parameter_id; //type: uint32
        YLeaf request_queue_size; //type: uint8
        YLeaf delegatable; //type: boolean
        YLeaf operational; //type: PceLspOperStateEnum
        YLeaf administrative; //type: boolean
        YLeaf cleanup_timer_exp; //type: int32
        YLeaf delegation_timer_exp; //type: int32
        YLeaf create; //type: boolean
        YLeaf state_timer_exp; //type: int32
        YLeaf lspo_is_used; //type: boolean
        YLeaf forward_class_id; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf path_setup_type; //type: uint8
        YLeaf binding_sid; //type: uint32
        YLeafList backup_path; //type: list of  string

        class Creator; //type: MplsPce::Lsps::Lsp::Creator
        class Delegated; //type: MplsPce::Lsps::Lsp::Delegated
        class Identifiers; //type: MplsPce::Lsps::Lsp::Identifiers
        class Autoroute; //type: MplsPce::Lsps::Lsp::Autoroute
        class Paths; //type: MplsPce::Lsps::Lsp::Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Creator> creator;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Delegated> delegated;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Identifiers> identifiers;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths> > paths;


}; // MplsPce::Lsps::Lsp


class MplsPce::Lsps::Lsp::Creator : public Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPce::Lsps::Lsp::Creator


class MplsPce::Lsps::Lsp::Delegated : public Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPce::Lsps::Lsp::Delegated


class MplsPce::Lsps::Lsp::Identifiers : public Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf sender; //type: string
        YLeaf te_lsp_id; //type: uint16
        YLeaf tunnel_id; //type: uint16
        YLeaf ext_tunnel_id; //type: uint32



}; // MplsPce::Lsps::Lsp::Identifiers


class MplsPce::Lsps::Lsp::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf announced; //type: boolean
        YLeaf metric_type; //type: PceLspAutorouteMetricEnum
        YLeaf metric; //type: uint32
        YLeafList destination; //type: list of  string



}; // MplsPce::Lsps::Lsp::Autoroute


class MplsPce::Lsps::Lsp::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bw; //type: uint32
        YLeaf is_bw_used; //type: boolean
        YLeaf reopt_bw; //type: uint32
        YLeaf is_reopt_bw_used; //type: boolean
        YLeaf applied_bw; //type: uint32
        YLeaf is_applied_bw_used; //type: boolean

        class Ero; //type: MplsPce::Lsps::Lsp::Paths::Ero
        class Lspa; //type: MplsPce::Lsps::Lsp::Paths::Lspa
        class Rro; //type: MplsPce::Lsps::Lsp::Paths::Rro
        class Metric; //type: MplsPce::Lsps::Lsp::Paths::Metric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Ero> ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Metric> > metric;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Rro> rro;


}; // MplsPce::Lsps::Lsp::Paths


class MplsPce::Lsps::Lsp::Paths::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPce::Lsps::Lsp::Paths::Ero::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Ero::Subobject> > subobject;


}; // MplsPce::Lsps::Lsp::Paths::Ero


class MplsPce::Lsps::Lsp::Paths::Ero::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPce::Lsps::Lsp::Paths::Ero::Subobject


class MplsPce::Lsps::Lsp::Paths::Lspa : public Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf exlude_any; //type: uint32
        YLeaf include_any; //type: uint32
        YLeaf include_all; //type: uint32
        YLeaf setup; //type: uint8
        YLeaf hold; //type: uint8
        YLeaf lbit; //type: boolean



}; // MplsPce::Lsps::Lsp::Paths::Lspa


class MplsPce::Lsps::Lsp::Paths::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPce::Lsps::Lsp::Paths::Rro::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Rro::Subobject> > subobject;


}; // MplsPce::Lsps::Lsp::Paths::Rro


class MplsPce::Lsps::Lsp::Paths::Rro::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPce::Lsps::Lsp::Paths::Rro::Subobject


class MplsPce::Lsps::Lsp::Paths::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf cost; //type: uint32



}; // MplsPce::Lsps::Lsp::Paths::Metric


class MplsPce::Lsps::Creator : public Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPce::Lsps::Creator


class MplsPce::Lsps::Delegated : public Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPce::Lsps::Delegated


class MplsPce::Lsps::Identifiers : public Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf sender; //type: string
        YLeaf te_lsp_id; //type: uint16
        YLeaf tunnel_id; //type: uint16
        YLeaf ext_tunnel_id; //type: uint32



}; // MplsPce::Lsps::Identifiers


class MplsPce::Lsps::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf announced; //type: boolean
        YLeaf metric_type; //type: PceLspAutorouteMetricEnum
        YLeaf metric; //type: uint32
        YLeafList destination; //type: list of  string



}; // MplsPce::Lsps::Autoroute


class MplsPce::Lsps::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bw; //type: uint32
        YLeaf is_bw_used; //type: boolean
        YLeaf reopt_bw; //type: uint32
        YLeaf is_reopt_bw_used; //type: boolean
        YLeaf applied_bw; //type: uint32
        YLeaf is_applied_bw_used; //type: boolean

        class Ero; //type: MplsPce::Lsps::Paths::Ero
        class Lspa; //type: MplsPce::Lsps::Paths::Lspa
        class Rro; //type: MplsPce::Lsps::Paths::Rro
        class Metric; //type: MplsPce::Lsps::Paths::Metric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Ero> ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Metric> > metric;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Rro> rro;


}; // MplsPce::Lsps::Paths


class MplsPce::Lsps::Paths::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPce::Lsps::Paths::Ero::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Ero::Subobject> > subobject;


}; // MplsPce::Lsps::Paths::Ero


class MplsPce::Lsps::Paths::Ero::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPce::Lsps::Paths::Ero::Subobject


class MplsPce::Lsps::Paths::Lspa : public Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf exlude_any; //type: uint32
        YLeaf include_any; //type: uint32
        YLeaf include_all; //type: uint32
        YLeaf setup; //type: uint8
        YLeaf hold; //type: uint8
        YLeaf lbit; //type: boolean



}; // MplsPce::Lsps::Paths::Lspa


class MplsPce::Lsps::Paths::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPce::Lsps::Paths::Rro::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Rro::Subobject> > subobject;


}; // MplsPce::Lsps::Paths::Rro


class MplsPce::Lsps::Paths::Rro::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPce::Lsps::Paths::Rro::Subobject


class MplsPce::Lsps::Paths::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf cost; //type: uint32



}; // MplsPce::Lsps::Paths::Metric


class MplsPce::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbors; //type: uint32
        YLeaf tunnels; //type: uint32
        YLeaf pce_req_total; //type: uint32
        YLeaf pce_req_pending; //type: uint32
        YLeaf pce_req_timed_out; //type: uint32
        YLeaf max_file_descriptors; //type: uint32
        YLeaf current_file_descriptors; //type: uint32
        YLeaf current_pceq_length; //type: uint32
        YLeaf current_teq_length; //type: uint32
        YLeaf max_pceq_length; //type: uint32
        YLeaf max_teq_length; //type: uint32
        YLeafList maximum_in_queue_depth; //type: list of  uint32
        YLeafList average_in_queue_depth; //type: list of  uint32

        class IgpStatistics; //type: MplsPce::Statistics::IgpStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Statistics::IgpStatistics> igp_statistics;


}; // MplsPce::Statistics


class MplsPce::Statistics::IgpStatistics : public Entity
{
    public:
        IgpStatistics();
        ~IgpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf abr_lookup_min; //type: uint64
        YLeaf abr_lookup_max; //type: uint64
        YLeaf abr_lookup_avg; //type: uint64
        YLeaf abr_lookup_timeout; //type: uint64
        YLeaf abr_lookup_complete; //type: uint64



}; // MplsPce::Statistics::IgpStatistics


class MplsPce::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: MplsPce::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer> > peer;


}; // MplsPce::Peers


class MplsPce::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf error; //type: string
        YLeaf pce_state; //type: PceStateEnum
        YLeaf precedence; //type: uint32
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf triggered_sync_capability; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf delta_sync_capability; //type: boolean
        YLeaf pcep_up_time; //type: uint32
        YLeaf keepalives; //type: uint32
        YLeaf candidate; //type: boolean
        YLeaf statically_configured; //type: boolean
        YLeaf md5_enabled; //type: boolean
        YLeaf keychain_enabled; //type: boolean
        YLeaf negotiated_keepalive; //type: uint32
        YLeaf negotated_dead_time; //type: uint32
        YLeaf pce_req_rx; //type: uint32
        YLeaf pce_req_tx; //type: uint32
        YLeaf pce_rep_rx; //type: uint32
        YLeaf pce_rep_tx; //type: uint32
        YLeaf pce_err_rx; //type: uint32
        YLeaf pce_err_tx; //type: uint32
        YLeaf pce_open_tx; //type: uint32
        YLeaf pce_open_rx; //type: uint32
        YLeaf pce_rpt_rx; //type: uint32
        YLeaf pce_rpt_tx; //type: uint32
        YLeaf pce_upd_rx; //type: uint32
        YLeaf pce_upd_tx; //type: uint32
        YLeaf pce_init_rx; //type: uint32
        YLeaf pce_init_tx; //type: uint32
        YLeaf pce_keepalive_tx; //type: uint64
        YLeaf pce_keepalive_rx; //type: uint64
        YLeaf req_reply_min; //type: uint64
        YLeaf req_reply_max; //type: uint64
        YLeaf req_reply_avg; //type: uint64
        YLeaf request_timeouts; //type: uint64
        YLeaf local_sid; //type: uint8
        YLeaf remote_sid; //type: uint8
        YLeaf min_keepalive_interval; //type: uint8
        YLeaf max_dead_interval; //type: uint8

        class LastTxPceErr; //type: MplsPce::Peers::Peer::LastTxPceErr
        class LastRxPceErr; //type: MplsPce::Peers::Peer::LastRxPceErr
        class IgPs; //type: MplsPce::Peers::Peer::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::IgPs> > ig_ps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::LastRxPceErr> last_rx_pce_err;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::LastTxPceErr> last_tx_pce_err;


}; // MplsPce::Peers::Peer


class MplsPce::Peers::Peer::LastTxPceErr : public Entity
{
    public:
        LastTxPceErr();
        ~LastTxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pce_err_type; //type: uint32
        YLeaf pce_err_value; //type: uint32
        YLeaf has_open_object; //type: boolean
        YLeaf openversion; //type: uint32
        YLeaf open_keepalive; //type: uint32
        YLeaf open_dead_time; //type: uint32
        YLeaf has_rp_object; //type: boolean
        YLeaf rp_request_id; //type: uint32



}; // MplsPce::Peers::Peer::LastTxPceErr


class MplsPce::Peers::Peer::LastRxPceErr : public Entity
{
    public:
        LastRxPceErr();
        ~LastRxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pce_err_type; //type: uint32
        YLeaf pce_err_value; //type: uint32
        YLeaf has_open_object; //type: boolean
        YLeaf openversion; //type: uint32
        YLeaf open_keepalive; //type: uint32
        YLeaf open_dead_time; //type: uint32
        YLeaf has_rp_object; //type: boolean
        YLeaf rp_request_id; //type: uint32



}; // MplsPce::Peers::Peer::LastRxPceErr


class MplsPce::Peers::Peer::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance_id; //type: string



}; // MplsPce::Peers::Peer::IgPs


class MplsPce::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsPce::Topology::Global

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology::Global> global;


}; // MplsPce::Topology


class MplsPce::Topology::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: MplsPce::Topology::Global::Nodes

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology::Global::Nodes> > nodes;


}; // MplsPce::Topology::Global


class MplsPce::Topology::Global::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf igp_area_id; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum
        YLeaf pce_cost; //type: uint32
        YLeaf node_id; //type: string
        YLeaf is_pce_border_node; //type: boolean



}; // MplsPce::Topology::Global::Nodes


class MplsPce::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf is_curr_path_option_pce; //type: boolean
        YLeaf curr_path_option_index; //type: uint32
        YLeaf configured_pce_address; //type: string
        YLeaf sender_pce_address; //type: string
        YLeaf path_state; //type: PceTunPathStateEnum
        YLeaf tunnel_state; //type: PceTunnelStateEnum
        YLeaf admin_weight; //type: uint32
        YLeaf hop_count; //type: uint32

        class Tunnel; //type: MplsPce::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPce::Tunnels::Tunnel> > tunnel;


}; // MplsPce::Tunnels


class MplsPce::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf is_curr_path_option_pce; //type: boolean
        YLeaf curr_path_option_index; //type: uint32
        YLeaf configured_pce_address; //type: string
        YLeaf sender_pce_address; //type: string
        YLeaf path_state; //type: PceTunPathStateEnum
        YLeaf tunnel_state; //type: PceTunnelStateEnum
        YLeaf admin_weight; //type: uint32
        YLeaf hop_count; //type: uint32



}; // MplsPce::Tunnels::Tunnel

class MplsPceStdby : public Entity
{
    public:
        MplsPceStdby();
        ~MplsPceStdby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Lsps; //type: MplsPceStdby::Lsps
        class Statistics; //type: MplsPceStdby::Statistics
        class Peers; //type: MplsPceStdby::Peers
        class Topology; //type: MplsPceStdby::Topology
        class Tunnels; //type: MplsPceStdby::Tunnels

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps> lsps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers> peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology> topology;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Tunnels> tunnels;


}; // MplsPceStdby


class MplsPceStdby::Lsps : public Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf symbolic_name_xr; //type: string
        YLeaf session_internal_lsp_id; //type: uint32
        YLeaf stateful_request_parameter_id; //type: uint32
        YLeaf request_queue_size; //type: uint8
        YLeaf delegatable; //type: boolean
        YLeaf operational; //type: PceLspOperStateEnum
        YLeaf administrative; //type: boolean
        YLeaf cleanup_timer_exp; //type: int32
        YLeaf delegation_timer_exp; //type: int32
        YLeaf create; //type: boolean
        YLeaf state_timer_exp; //type: int32
        YLeaf lspo_is_used; //type: boolean
        YLeaf forward_class_id; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf path_setup_type; //type: uint8
        YLeaf binding_sid; //type: uint32
        YLeafList backup_path; //type: list of  string

        class Lsp; //type: MplsPceStdby::Lsps::Lsp
        class Creator; //type: MplsPceStdby::Lsps::Creator
        class Delegated; //type: MplsPceStdby::Lsps::Delegated
        class Identifiers; //type: MplsPceStdby::Lsps::Identifiers
        class Autoroute; //type: MplsPceStdby::Lsps::Autoroute
        class Paths; //type: MplsPceStdby::Lsps::Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Creator> creator;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Delegated> delegated;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Identifiers> identifiers;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp> > lsp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths> > paths;


}; // MplsPceStdby::Lsps


class MplsPceStdby::Lsps::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf symbolic_name; //type: string
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf symbolic_name_xr; //type: string
        YLeaf session_internal_lsp_id; //type: uint32
        YLeaf stateful_request_parameter_id; //type: uint32
        YLeaf request_queue_size; //type: uint8
        YLeaf delegatable; //type: boolean
        YLeaf operational; //type: PceLspOperStateEnum
        YLeaf administrative; //type: boolean
        YLeaf cleanup_timer_exp; //type: int32
        YLeaf delegation_timer_exp; //type: int32
        YLeaf create; //type: boolean
        YLeaf state_timer_exp; //type: int32
        YLeaf lspo_is_used; //type: boolean
        YLeaf forward_class_id; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf path_setup_type; //type: uint8
        YLeaf binding_sid; //type: uint32
        YLeafList backup_path; //type: list of  string

        class Creator; //type: MplsPceStdby::Lsps::Lsp::Creator
        class Delegated; //type: MplsPceStdby::Lsps::Lsp::Delegated
        class Identifiers; //type: MplsPceStdby::Lsps::Lsp::Identifiers
        class Autoroute; //type: MplsPceStdby::Lsps::Lsp::Autoroute
        class Paths; //type: MplsPceStdby::Lsps::Lsp::Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Creator> creator;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Delegated> delegated;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Identifiers> identifiers;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths> > paths;


}; // MplsPceStdby::Lsps::Lsp


class MplsPceStdby::Lsps::Lsp::Creator : public Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPceStdby::Lsps::Lsp::Creator


class MplsPceStdby::Lsps::Lsp::Delegated : public Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPceStdby::Lsps::Lsp::Delegated


class MplsPceStdby::Lsps::Lsp::Identifiers : public Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf sender; //type: string
        YLeaf te_lsp_id; //type: uint16
        YLeaf tunnel_id; //type: uint16
        YLeaf ext_tunnel_id; //type: uint32



}; // MplsPceStdby::Lsps::Lsp::Identifiers


class MplsPceStdby::Lsps::Lsp::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf announced; //type: boolean
        YLeaf metric_type; //type: PceLspAutorouteMetricEnum
        YLeaf metric; //type: uint32
        YLeafList destination; //type: list of  string



}; // MplsPceStdby::Lsps::Lsp::Autoroute


class MplsPceStdby::Lsps::Lsp::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bw; //type: uint32
        YLeaf is_bw_used; //type: boolean
        YLeaf reopt_bw; //type: uint32
        YLeaf is_reopt_bw_used; //type: boolean
        YLeaf applied_bw; //type: uint32
        YLeaf is_applied_bw_used; //type: boolean

        class Ero; //type: MplsPceStdby::Lsps::Lsp::Paths::Ero
        class Lspa; //type: MplsPceStdby::Lsps::Lsp::Paths::Lspa
        class Rro; //type: MplsPceStdby::Lsps::Lsp::Paths::Rro
        class Metric; //type: MplsPceStdby::Lsps::Lsp::Paths::Metric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Ero> ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Metric> > metric;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Rro> rro;


}; // MplsPceStdby::Lsps::Lsp::Paths


class MplsPceStdby::Lsps::Lsp::Paths::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject> > subobject;


}; // MplsPceStdby::Lsps::Lsp::Paths::Ero


class MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject


class MplsPceStdby::Lsps::Lsp::Paths::Lspa : public Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf exlude_any; //type: uint32
        YLeaf include_any; //type: uint32
        YLeaf include_all; //type: uint32
        YLeaf setup; //type: uint8
        YLeaf hold; //type: uint8
        YLeaf lbit; //type: boolean



}; // MplsPceStdby::Lsps::Lsp::Paths::Lspa


class MplsPceStdby::Lsps::Lsp::Paths::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject> > subobject;


}; // MplsPceStdby::Lsps::Lsp::Paths::Rro


class MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject


class MplsPceStdby::Lsps::Lsp::Paths::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf cost; //type: uint32



}; // MplsPceStdby::Lsps::Lsp::Paths::Metric


class MplsPceStdby::Lsps::Creator : public Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPceStdby::Lsps::Creator


class MplsPceStdby::Lsps::Delegated : public Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: string
        YLeaf address; //type: string



}; // MplsPceStdby::Lsps::Delegated


class MplsPceStdby::Lsps::Identifiers : public Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf sender; //type: string
        YLeaf te_lsp_id; //type: uint16
        YLeaf tunnel_id; //type: uint16
        YLeaf ext_tunnel_id; //type: uint32



}; // MplsPceStdby::Lsps::Identifiers


class MplsPceStdby::Lsps::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf announced; //type: boolean
        YLeaf metric_type; //type: PceLspAutorouteMetricEnum
        YLeaf metric; //type: uint32
        YLeafList destination; //type: list of  string



}; // MplsPceStdby::Lsps::Autoroute


class MplsPceStdby::Lsps::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bw; //type: uint32
        YLeaf is_bw_used; //type: boolean
        YLeaf reopt_bw; //type: uint32
        YLeaf is_reopt_bw_used; //type: boolean
        YLeaf applied_bw; //type: uint32
        YLeaf is_applied_bw_used; //type: boolean

        class Ero; //type: MplsPceStdby::Lsps::Paths::Ero
        class Lspa; //type: MplsPceStdby::Lsps::Paths::Lspa
        class Rro; //type: MplsPceStdby::Lsps::Paths::Rro
        class Metric; //type: MplsPceStdby::Lsps::Paths::Metric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Ero> ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Lspa> lspa;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Metric> > metric;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Rro> rro;


}; // MplsPceStdby::Lsps::Paths


class MplsPceStdby::Lsps::Paths::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPceStdby::Lsps::Paths::Ero::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Ero::Subobject> > subobject;


}; // MplsPceStdby::Lsps::Paths::Ero


class MplsPceStdby::Lsps::Paths::Ero::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPceStdby::Lsps::Paths::Ero::Subobject


class MplsPceStdby::Lsps::Paths::Lspa : public Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf exlude_any; //type: uint32
        YLeaf include_any; //type: uint32
        YLeaf include_all; //type: uint32
        YLeaf setup; //type: uint8
        YLeaf hold; //type: uint8
        YLeaf lbit; //type: boolean



}; // MplsPceStdby::Lsps::Paths::Lspa


class MplsPceStdby::Lsps::Paths::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_used; //type: boolean
        YLeaf cost; //type: uint32
        YLeafList address; //type: list of  string

        class Subobject; //type: MplsPceStdby::Lsps::Paths::Rro::Subobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Rro::Subobject> > subobject;


}; // MplsPceStdby::Lsps::Paths::Rro


class MplsPceStdby::Lsps::Paths::Rro::Subobject : public Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subobj_type; //type: uint8
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_prefix_len; //type: uint32
        YLeaf strict; //type: boolean
        YLeaf global; //type: boolean
        YLeaf mpls_label; //type: uint32
        YLeaf segment_id_type; //type: PceSrSidEnum
        YLeaf only_valid_mpls_label; //type: boolean
        YLeaf complete_mpls_label_entry; //type: boolean
        YLeaf missing_segment_id; //type: boolean
        YLeaf missing_node_adjcency_id; //type: boolean
        YLeaf segment_id_exists; //type: boolean
        YLeaf segment_id_value; //type: uint32
        YLeaf node_adjacency_id_exists; //type: boolean
        YLeaf node_id; //type: string
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string



}; // MplsPceStdby::Lsps::Paths::Rro::Subobject


class MplsPceStdby::Lsps::Paths::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf cost; //type: uint32



}; // MplsPceStdby::Lsps::Paths::Metric


class MplsPceStdby::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbors; //type: uint32
        YLeaf tunnels; //type: uint32
        YLeaf pce_req_total; //type: uint32
        YLeaf pce_req_pending; //type: uint32
        YLeaf pce_req_timed_out; //type: uint32
        YLeaf max_file_descriptors; //type: uint32
        YLeaf current_file_descriptors; //type: uint32
        YLeaf current_pceq_length; //type: uint32
        YLeaf current_teq_length; //type: uint32
        YLeaf max_pceq_length; //type: uint32
        YLeaf max_teq_length; //type: uint32
        YLeafList maximum_in_queue_depth; //type: list of  uint32
        YLeafList average_in_queue_depth; //type: list of  uint32

        class IgpStatistics; //type: MplsPceStdby::Statistics::IgpStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Statistics::IgpStatistics> igp_statistics;


}; // MplsPceStdby::Statistics


class MplsPceStdby::Statistics::IgpStatistics : public Entity
{
    public:
        IgpStatistics();
        ~IgpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf abr_lookup_min; //type: uint64
        YLeaf abr_lookup_max; //type: uint64
        YLeaf abr_lookup_avg; //type: uint64
        YLeaf abr_lookup_timeout; //type: uint64
        YLeaf abr_lookup_complete; //type: uint64



}; // MplsPceStdby::Statistics::IgpStatistics


class MplsPceStdby::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: MplsPceStdby::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer> > peer;


}; // MplsPceStdby::Peers


class MplsPceStdby::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf error; //type: string
        YLeaf pce_state; //type: PceStateEnum
        YLeaf precedence; //type: uint32
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf triggered_sync_capability; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf delta_sync_capability; //type: boolean
        YLeaf pcep_up_time; //type: uint32
        YLeaf keepalives; //type: uint32
        YLeaf candidate; //type: boolean
        YLeaf statically_configured; //type: boolean
        YLeaf md5_enabled; //type: boolean
        YLeaf keychain_enabled; //type: boolean
        YLeaf negotiated_keepalive; //type: uint32
        YLeaf negotated_dead_time; //type: uint32
        YLeaf pce_req_rx; //type: uint32
        YLeaf pce_req_tx; //type: uint32
        YLeaf pce_rep_rx; //type: uint32
        YLeaf pce_rep_tx; //type: uint32
        YLeaf pce_err_rx; //type: uint32
        YLeaf pce_err_tx; //type: uint32
        YLeaf pce_open_tx; //type: uint32
        YLeaf pce_open_rx; //type: uint32
        YLeaf pce_rpt_rx; //type: uint32
        YLeaf pce_rpt_tx; //type: uint32
        YLeaf pce_upd_rx; //type: uint32
        YLeaf pce_upd_tx; //type: uint32
        YLeaf pce_init_rx; //type: uint32
        YLeaf pce_init_tx; //type: uint32
        YLeaf pce_keepalive_tx; //type: uint64
        YLeaf pce_keepalive_rx; //type: uint64
        YLeaf req_reply_min; //type: uint64
        YLeaf req_reply_max; //type: uint64
        YLeaf req_reply_avg; //type: uint64
        YLeaf request_timeouts; //type: uint64
        YLeaf local_sid; //type: uint8
        YLeaf remote_sid; //type: uint8
        YLeaf min_keepalive_interval; //type: uint8
        YLeaf max_dead_interval; //type: uint8

        class LastTxPceErr; //type: MplsPceStdby::Peers::Peer::LastTxPceErr
        class LastRxPceErr; //type: MplsPceStdby::Peers::Peer::LastRxPceErr
        class IgPs; //type: MplsPceStdby::Peers::Peer::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::IgPs> > ig_ps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::LastRxPceErr> last_rx_pce_err;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::LastTxPceErr> last_tx_pce_err;


}; // MplsPceStdby::Peers::Peer


class MplsPceStdby::Peers::Peer::LastTxPceErr : public Entity
{
    public:
        LastTxPceErr();
        ~LastTxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pce_err_type; //type: uint32
        YLeaf pce_err_value; //type: uint32
        YLeaf has_open_object; //type: boolean
        YLeaf openversion; //type: uint32
        YLeaf open_keepalive; //type: uint32
        YLeaf open_dead_time; //type: uint32
        YLeaf has_rp_object; //type: boolean
        YLeaf rp_request_id; //type: uint32



}; // MplsPceStdby::Peers::Peer::LastTxPceErr


class MplsPceStdby::Peers::Peer::LastRxPceErr : public Entity
{
    public:
        LastRxPceErr();
        ~LastRxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pce_err_type; //type: uint32
        YLeaf pce_err_value; //type: uint32
        YLeaf has_open_object; //type: boolean
        YLeaf openversion; //type: uint32
        YLeaf open_keepalive; //type: uint32
        YLeaf open_dead_time; //type: uint32
        YLeaf has_rp_object; //type: boolean
        YLeaf rp_request_id; //type: uint32



}; // MplsPceStdby::Peers::Peer::LastRxPceErr


class MplsPceStdby::Peers::Peer::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance_id; //type: string



}; // MplsPceStdby::Peers::Peer::IgPs


class MplsPceStdby::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsPceStdby::Topology::Global

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology::Global> global;


}; // MplsPceStdby::Topology


class MplsPceStdby::Topology::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: MplsPceStdby::Topology::Global::Nodes

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology::Global::Nodes> > nodes;


}; // MplsPceStdby::Topology::Global


class MplsPceStdby::Topology::Global::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf igp_area_id; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum
        YLeaf pce_cost; //type: uint32
        YLeaf node_id; //type: string
        YLeaf is_pce_border_node; //type: boolean



}; // MplsPceStdby::Topology::Global::Nodes


class MplsPceStdby::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf is_curr_path_option_pce; //type: boolean
        YLeaf curr_path_option_index; //type: uint32
        YLeaf configured_pce_address; //type: string
        YLeaf sender_pce_address; //type: string
        YLeaf path_state; //type: PceTunPathStateEnum
        YLeaf tunnel_state; //type: PceTunnelStateEnum
        YLeaf admin_weight; //type: uint32
        YLeaf hop_count; //type: uint32

        class Tunnel; //type: MplsPceStdby::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Tunnels::Tunnel> > tunnel;


}; // MplsPceStdby::Tunnels


class MplsPceStdby::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf is_curr_path_option_pce; //type: boolean
        YLeaf curr_path_option_index; //type: uint32
        YLeaf configured_pce_address; //type: string
        YLeaf sender_pce_address; //type: string
        YLeaf path_state; //type: PceTunPathStateEnum
        YLeaf tunnel_state; //type: PceTunnelStateEnum
        YLeaf admin_weight; //type: uint32
        YLeaf hop_count; //type: uint32



}; // MplsPceStdby::Tunnels::Tunnel

class MplsTp : public Entity
{
    public:
        MplsTp();
        ~MplsTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class TpLinks; //type: MplsTp::TpLinks
        class TpTunnels; //type: MplsTp::TpTunnels
        class TpMidpoints; //type: MplsTp::TpMidpoints
        class TpGlobalParameters; //type: MplsTp::TpGlobalParameters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpGlobalParameters> tp_global_parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks> tp_links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints> tp_midpoints;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels> tp_tunnels;


}; // MplsTp


class MplsTp::TpLinks : public Entity
{
    public:
        TpLinks();
        ~TpLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpDetailLinks; //type: MplsTp::TpLinks::TpDetailLinks
        class TpLinkSummary; //type: MplsTp::TpLinks::TpLinkSummary
        class TpLinks_; //type: MplsTp::TpLinks::TpLinks_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpDetailLinks> tp_detail_links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinkSummary> tp_link_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinks_> tp_links;


}; // MplsTp::TpLinks


class MplsTp::TpLinks::TpDetailLinks : public Entity
{
    public:
        TpDetailLinks();
        ~TpDetailLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpDetailLink; //type: MplsTp::TpLinks::TpDetailLinks::TpDetailLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpDetailLinks::TpDetailLink> > tp_detail_link;


}; // MplsTp::TpLinks::TpDetailLinks


class MplsTp::TpLinks::TpDetailLinks::TpDetailLink : public Entity
{
    public:
        TpDetailLink();
        ~TpDetailLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tp_link_id; //type: int32
        YLeaf link_id; //type: uint32
        YLeaf interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf link_state; //type: TpLinkStateEnum
        YLeaf ls_ps; //type: uint32
        YLeaf reserved_bandwidth; //type: uint64
        YLeaf available_bandwidth; //type: uint64
        YLeaf unsupported_linecard; //type: boolean



}; // MplsTp::TpLinks::TpDetailLinks::TpDetailLink


class MplsTp::TpLinks::TpLinkSummary : public Entity
{
    public:
        TpLinkSummary();
        ~TpLinkSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint32



}; // MplsTp::TpLinks::TpLinkSummary


class MplsTp::TpLinks::TpLinks_ : public Entity
{
    public:
        TpLinks_();
        ~TpLinks_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpLink; //type: MplsTp::TpLinks::TpLinks_::TpLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinks_::TpLink> > tp_link;


}; // MplsTp::TpLinks::TpLinks_


class MplsTp::TpLinks::TpLinks_::TpLink : public Entity
{
    public:
        TpLink();
        ~TpLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tp_link_id; //type: int32
        YLeaf link_id; //type: uint32
        YLeaf interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf link_state; //type: TpLinkStateEnum
        YLeaf available_bandwidth; //type: uint64



}; // MplsTp::TpLinks::TpLinks_::TpLink


class MplsTp::TpTunnels : public Entity
{
    public:
        TpTunnels();
        ~TpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpTunnelSummary; //type: MplsTp::TpTunnels::TpTunnelSummary
        class TpDetailTunnels; //type: MplsTp::TpTunnels::TpDetailTunnels
        class TpTunnels_; //type: MplsTp::TpTunnels::TpTunnels_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels> tp_detail_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnelSummary> tp_tunnel_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_> tp_tunnels;


}; // MplsTp::TpTunnels


class MplsTp::TpTunnels::TpTunnelSummary : public Entity
{
    public:
        TpTunnelSummary();
        ~TpTunnelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf up_working_ls_ps; //type: uint32
        YLeaf active_working_ls_ps; //type: uint32
        YLeaf down_working_ls_ps; //type: uint32
        YLeaf locked_working_ls_ps; //type: uint32
        YLeaf up_protect_ls_ps; //type: uint32
        YLeaf active_protect_ls_ps; //type: uint32
        YLeaf down_protect_ls_ps; //type: uint32
        YLeaf locked_protect_ls_ps; //type: uint32
        YLeaf up_tunnels; //type: uint32
        YLeaf down_tunnels; //type: uint32
        YLeaf admin_down_tunnels; //type: uint32
        YLeaf complete_fec_working_ls_ps; //type: uint32
        YLeaf complete_fec_protect_ls_ps; //type: uint32
        YLeaf bfd_session_working_ls_ps; //type: uint32
        YLeaf bfd_session_protect_ls_ps; //type: uint32



}; // MplsTp::TpTunnels::TpTunnelSummary


class MplsTp::TpTunnels::TpDetailTunnels : public Entity
{
    public:
        TpDetailTunnels();
        ~TpDetailTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpDetailTunnel; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel> > tp_detail_tunnel;


}; // MplsTp::TpTunnels::TpDetailTunnels


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel : public Entity
{
    public:
        TpDetailTunnel();
        ~TpDetailTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tp_tunnel_name; //type: string
        YLeaf req_bandwidth; //type: uint32
        YLeaf oam_interval; //type: uint32
        YLeaf bfd_interval_active; //type: uint32
        YLeaf bfd_interval_active_in_micro_sec; //type: boolean
        YLeaf bfd_multiplier_active; //type: uint32
        YLeaf bfd_interval_standby; //type: uint32
        YLeaf bfd_interval_standby_in_micro_sec; //type: boolean
        YLeaf bfd_multiplier_standby; //type: uint32
        YLeaf tunnel_up_time; //type: uint32
        YLeaf switchover_trig; //type: MplsTpTunnelSwitchoverTrigEnum
        YLeaf switch_over_time; //type: uint32

        class Tunnel; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel
        class WorkingLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp
        class OamProtectionTriggers; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers> oam_protection_triggers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel> tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp> working_lsp;


}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf source_tunnel_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf source_global_id; //type: uint32
        YLeaf destination_node_id; //type: string
        YLeaf destination_global_id; //type: uint32
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf admin_status; //type: MplsTpTunnelStateEnum
        YLeaf operation_status; //type: MplsTpTunnelStateEnum
        YLeaf active_lsp; //type: MplsTpTunnelActiveLspEnum

        class WorkingLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp> working_lsp;


}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint32
        YLeaf state; //type: MplsTpLspStateEnum
        YLeaf lock_out; //type: boolean
        YLeaf rx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf tx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf bfd_state; //type: MplsTpLspBfdStateEnum



}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint32
        YLeaf state; //type: MplsTpLspStateEnum
        YLeaf lock_out; //type: boolean
        YLeaf rx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf tx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf bfd_state; //type: MplsTpLspBfdStateEnum



}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oam_refresh_interval; //type: uint32
        YLeaf tp_out_label; //type: uint32
        YLeaf link_id; //type: uint32
        YLeaf out_interface_name; //type: string
        YLeaf out_next_hop; //type: string
        YLeaf in_label; //type: uint32
        YLeaf reserved_bandwidth; //type: uint32

        class BriefInformation; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation> brief_information;


}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation : public Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint32
        YLeaf state; //type: MplsTpLspStateEnum
        YLeaf lock_out; //type: boolean
        YLeaf rx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf tx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf bfd_state; //type: MplsTpLspBfdStateEnum



}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oam_refresh_interval; //type: uint32
        YLeaf tp_out_label; //type: uint32
        YLeaf link_id; //type: uint32
        YLeaf out_interface_name; //type: string
        YLeaf out_next_hop; //type: string
        YLeaf in_label; //type: uint32
        YLeaf reserved_bandwidth; //type: uint32

        class BriefInformation; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation> brief_information;


}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation : public Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint32
        YLeaf state; //type: MplsTpLspStateEnum
        YLeaf lock_out; //type: boolean
        YLeaf rx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf tx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf bfd_state; //type: MplsTpLspBfdStateEnum



}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers : public Entity
{
    public:
        OamProtectionTriggers();
        ~OamProtectionTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ais; //type: boolean
        YLeaf ldi; //type: boolean
        YLeaf lkr; //type: boolean



}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers


class MplsTp::TpTunnels::TpTunnels_ : public Entity
{
    public:
        TpTunnels_();
        ~TpTunnels_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpTunnel; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel> > tp_tunnel;


}; // MplsTp::TpTunnels::TpTunnels_


class MplsTp::TpTunnels::TpTunnels_::TpTunnel : public Entity
{
    public:
        TpTunnel();
        ~TpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tp_tunnel_name; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf source_tunnel_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf source_global_id; //type: uint32
        YLeaf destination_node_id; //type: string
        YLeaf destination_global_id; //type: uint32
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf admin_status; //type: MplsTpTunnelStateEnum
        YLeaf operation_status; //type: MplsTpTunnelStateEnum
        YLeaf active_lsp; //type: MplsTpTunnelActiveLspEnum

        class WorkingLsp; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp> working_lsp;


}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel


class MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint32
        YLeaf state; //type: MplsTpLspStateEnum
        YLeaf lock_out; //type: boolean
        YLeaf rx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf tx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf bfd_state; //type: MplsTpLspBfdStateEnum



}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp


class MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint32
        YLeaf state; //type: MplsTpLspStateEnum
        YLeaf lock_out; //type: boolean
        YLeaf rx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf tx_oam_state; //type: MplsTpLspOamStateEnum
        YLeaf bfd_state; //type: MplsTpLspBfdStateEnum



}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp


class MplsTp::TpMidpoints : public Entity
{
    public:
        TpMidpoints();
        ~TpMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpDetailMidpoints; //type: MplsTp::TpMidpoints::TpDetailMidpoints
        class TpMidpointSummary; //type: MplsTp::TpMidpoints::TpMidpointSummary
        class TpMidpoints_; //type: MplsTp::TpMidpoints::TpMidpoints_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints> tp_detail_midpoints;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpointSummary> tp_midpoint_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpoints_> tp_midpoints;


}; // MplsTp::TpMidpoints


class MplsTp::TpMidpoints::TpDetailMidpoints : public Entity
{
    public:
        TpDetailMidpoints();
        ~TpDetailMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpDetailMidpoint; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint> > tp_detail_midpoint;


}; // MplsTp::TpMidpoints::TpDetailMidpoints


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint : public Entity
{
    public:
        TpDetailMidpoint();
        ~TpDetailMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tp_midpoint_name; //type: string
        YLeaf forward_lsp_reserved_bandwidth; //type: uint32
        YLeaf reverse_lsp_reserved_bandwidth; //type: uint32

        class BriefLspInformation; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation
        class ForwardLsp; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp
        class ReverseLsp; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp> forward_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp> reverse_lsp;


}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation : public Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf midpoint_name; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf source_node_id; //type: string
        YLeaf source_global_id; //type: uint32
        YLeaf source_tunnel_id; //type: uint32
        YLeaf lsp_id; //type: uint32
        YLeaf destination_node_id; //type: string
        YLeaf destination_global_id; //type: uint32
        YLeaf destination_tunnel_id; //type: uint32
        YLeaf forward_lsp_state; //type: TpMidLspStatusEnum
        YLeaf reverse_lsp_state; //type: TpMidLspStatusEnum



}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp : public Entity
{
    public:
        ForwardLsp();
        ~ForwardLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_link; //type: uint32
        YLeaf oam_refresh_interval; //type: uint32
        YLeaf outgoing_interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf in_label; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_link; //type: uint32
        YLeaf oam_refresh_interval; //type: uint32
        YLeaf outgoing_interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf in_label; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp


class MplsTp::TpMidpoints::TpMidpointSummary : public Entity
{
    public:
        TpMidpointSummary();
        ~TpMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mid_points; //type: uint32
        YLeaf up_forward_ls_ps; //type: uint32
        YLeaf down_forward_ls_ps; //type: uint32
        YLeaf up_reverse_ls_ps; //type: uint32
        YLeaf down_reverse_ls_ps; //type: uint32



}; // MplsTp::TpMidpoints::TpMidpointSummary


class MplsTp::TpMidpoints::TpMidpoints_ : public Entity
{
    public:
        TpMidpoints_();
        ~TpMidpoints_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TpMidpoint; //type: MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint> > tp_midpoint;


}; // MplsTp::TpMidpoints::TpMidpoints_


class MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint : public Entity
{
    public:
        TpMidpoint();
        ~TpMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tp_midpoint_name; //type: string
        YLeaf midpoint_name; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf source_node_id; //type: string
        YLeaf source_global_id; //type: uint32
        YLeaf source_tunnel_id; //type: uint32
        YLeaf lsp_id; //type: uint32
        YLeaf destination_node_id; //type: string
        YLeaf destination_global_id; //type: uint32
        YLeaf destination_tunnel_id; //type: uint32
        YLeaf forward_lsp_state; //type: TpMidLspStatusEnum
        YLeaf reverse_lsp_state; //type: TpMidLspStatusEnum



}; // MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint


class MplsTp::TpGlobalParameters : public Entity
{
    public:
        TpGlobalParameters();
        ~TpGlobalParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string
        YLeaf global_id; //type: uint32
        YLeaf oam_refresh; //type: uint32
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_interval_in_micro_sec; //type: boolean
        YLeaf bfd_interval_standby; //type: uint32
        YLeaf bfd_interval_standby_in_micro_sec; //type: boolean
        YLeaf bfd_multiplier; //type: uint32
        YLeaf bfd_multiplier_standby; //type: uint32
        YLeaf wait_to_restore_interval; //type: uint32
        YLeaf alarm_suppression; //type: boolean
        YLeaf soak_time; //type: uint32

        class OamProtectionTriggers; //type: MplsTp::TpGlobalParameters::OamProtectionTriggers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTp::TpGlobalParameters::OamProtectionTriggers> oam_protection_triggers;


}; // MplsTp::TpGlobalParameters


class MplsTp::TpGlobalParameters::OamProtectionTriggers : public Entity
{
    public:
        OamProtectionTriggers();
        ~OamProtectionTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ais; //type: boolean
        YLeaf ldi; //type: boolean
        YLeaf lkr; //type: boolean



}; // MplsTp::TpGlobalParameters::OamProtectionTriggers

class MplsTeStandby : public Entity
{
    public:
        MplsTeStandby();
        ~MplsTeStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class HardwareOutOfResources; //type: MplsTeStandby::HardwareOutOfResources
        class P2PP2MpTunnel; //type: MplsTeStandby::P2PP2MpTunnel
        class TopologyNodes; //type: MplsTeStandby::TopologyNodes
        class AnnounceTunnelsInfo; //type: MplsTeStandby::AnnounceTunnelsInfo
        class CollaboratorTimers; //type: MplsTeStandby::CollaboratorTimers
        class AutoTunnel; //type: MplsTeStandby::AutoTunnel
        class SoftPreemption; //type: MplsTeStandby::SoftPreemption
        class ForwardingAdjacencyDestinations; //type: MplsTeStandby::ForwardingAdjacencyDestinations
        class IgpAreas; //type: MplsTeStandby::IgpAreas
        class WrapProtection; //type: MplsTeStandby::WrapProtection
        class Topology; //type: MplsTeStandby::Topology
        class SignallingCounters; //type: MplsTeStandby::SignallingCounters
        class DiffServTeClasses; //type: MplsTeStandby::DiffServTeClasses
        class Issu; //type: MplsTeStandby::Issu
        class FastReroute; //type: MplsTeStandby::FastReroute
        class AttributeSets; //type: MplsTeStandby::AttributeSets
        class IgpAreaBriefs; //type: MplsTeStandby::IgpAreaBriefs
        class Tunnels; //type: MplsTeStandby::Tunnels
        class MaximumTunnels; //type: MplsTeStandby::MaximumTunnels
        class PathProtection; //type: MplsTeStandby::PathProtection
        class FibNextHopLabelRoutes; //type: MplsTeStandby::FibNextHopLabelRoutes
        class P2Mp; //type: MplsTeStandby::P2Mp
        class OpenConfig; //type: MplsTeStandby::OpenConfig
        class LspOutOfResources; //type: MplsTeStandby::LspOutOfResources
        class Bfd; //type: MplsTeStandby::Bfd
        class Nsr; //type: MplsTeStandby::Nsr
        class AutoTunnelServices; //type: MplsTeStandby::AutoTunnelServices
        class AffinityMap; //type: MplsTeStandby::AffinityMap
        class TopologyBriefs; //type: MplsTeStandby::TopologyBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AffinityMap> affinity_map;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo> announce_tunnels_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets> attribute_sets;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel> auto_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices> auto_tunnel_services;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::DiffServTeClasses> diff_serv_te_classes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FibNextHopLabelRoutes> fib_next_hop_label_routes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::ForwardingAdjacencyDestinations> forwarding_adjacency_destinations;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::HardwareOutOfResources> hardware_out_of_resources;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreaBriefs> igp_area_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas> igp_areas;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources> lsp_out_of_resources;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::MaximumTunnels> maximum_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig> open_config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp> p2mp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel> p2p_p2mp_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::PathProtection> path_protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters> signalling_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SoftPreemption> soft_preemption;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology> topology;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs> topology_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes> topology_nodes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels> tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection> wrap_protection;


}; // MplsTeStandby


class MplsTeStandby::HardwareOutOfResources : public Entity
{
    public:
        HardwareOutOfResources();
        ~HardwareOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: MplsTeStandby::HardwareOutOfResources::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::HardwareOutOfResources::Summary> summary;


}; // MplsTeStandby::HardwareOutOfResources


class MplsTeStandby::HardwareOutOfResources::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HardwareOutOfResourcesState; //type: MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState> > hardware_out_of_resources_state;


}; // MplsTeStandby::HardwareOutOfResources::Summary


class MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState : public Entity
{
    public:
        HardwareOutOfResourcesState();
        ~HardwareOutOfResourcesState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf te_metric_penalty; //type: uint32
        YLeaf available_bw_percentage; //type: uint32
        YLeaf node_protection_disable; //type: boolean
        YLeaf transition_duration; //type: uint32
        YLeaf minimum_lsp_bandwidth; //type: uint32
        YLeaf accept_reopt; //type: boolean

        class Statistics; //type: MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics> statistics;


}; // MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_28_ */

