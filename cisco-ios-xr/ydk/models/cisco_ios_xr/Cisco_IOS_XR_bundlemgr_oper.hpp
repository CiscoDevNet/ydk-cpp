#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

class LacpBundles : public Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

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

        class Bundles; //type: LacpBundles::Bundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles> bundles;
        
}; // LacpBundles


class LacpBundles::Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: LacpBundles::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle> > bundle;
        
}; // LacpBundles::Bundles


class LacpBundles::Bundles::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class Data; //type: LacpBundles::Bundles::Bundle::Data
        class Members; //type: LacpBundles::Bundles::Bundle::Members

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data> data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members> members;
        
}; // LacpBundles::Bundles::Bundle


class LacpBundles::Bundles::Bundle::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData
        class BundleSystemId; //type: LacpBundles::Bundles::Bundle::Data::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId> bundle_system_id;
        
}; // LacpBundles::Bundles::Bundle::Data


class LacpBundles::Bundles::Bundle::Data::ActorBundleData : public Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress
        class BfdConfig; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress> mac_address;
        
}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress


class LacpBundles::Bundles::Bundle::Data::BundleSystemId : public Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // LacpBundles::Bundles::Bundle::Data::BundleSystemId


class LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr


class LacpBundles::Bundles::Bundle::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: LacpBundles::Bundles::Bundle::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member> > member;
        
}; // LacpBundles::Bundles::Bundle::Members


class LacpBundles::Bundles::Bundle::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: LacpBundles::Bundles::Bundle::Members::Member::Counters
        class LinkData; //type: LacpBundles::Bundles::Bundle::Members::Member::LinkData
        class MemberMuxData; //type: LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData
        class MacAddress; //type: LacpBundles::Bundles::Bundle::Members::Member::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData> member_mux_data;
        
}; // LacpBundles::Bundles::Bundle::Members::Member


class LacpBundles::Bundles::Bundle::Members::Member::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // LacpBundles::Bundles::Bundle::Members::Member::Counters


class LacpBundles::Bundles::Bundle::Members::Member::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // LacpBundles::Bundles::Bundle::Members::Member::LinkData


class LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData


class LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData


class LacpBundles::Bundles::Bundle::Members::Member::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // LacpBundles::Bundles::Bundle::Members::Member::MacAddress

class BundleInformation : public Entity
{
    public:
        BundleInformation();
        ~BundleInformation();

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

        class BfdCounters; //type: BundleInformation::BfdCounters
        class ScheduledActions; //type: BundleInformation::ScheduledActions
        class Bundle; //type: BundleInformation::Bundle
        class EventsRg; //type: BundleInformation::EventsRg
        class Lacp; //type: BundleInformation::Lacp
        class MlacpBundleCounters; //type: BundleInformation::MlacpBundleCounters
        class Protect; //type: BundleInformation::Protect
        class MlacpBrief; //type: BundleInformation::MlacpBrief
        class Mlacp; //type: BundleInformation::Mlacp
        class MacAllocation; //type: BundleInformation::MacAllocation
        class Events; //type: BundleInformation::Events
        class EventsBdl; //type: BundleInformation::EventsBdl
        class BundleBriefs; //type: BundleInformation::BundleBriefs
        class EventsMbr; //type: BundleInformation::EventsMbr
        class MlacpIccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters
        class SystemId; //type: BundleInformation::SystemId
        class MlacpMemberCounters; //type: BundleInformation::MlacpMemberCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters> bfd_counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle> bundle;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs> bundle_briefs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events> events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl> events_bdl;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr> events_mbr;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg> events_rg;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp> lacp;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation> mac_allocation;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp> mlacp;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief> mlacp_brief;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters> mlacp_bundle_counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters> mlacp_iccp_group_counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters> mlacp_member_counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect> protect;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions> scheduled_actions;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId> system_id;
        
}; // BundleInformation


class BundleInformation::BfdCounters : public Entity
{
    public:
        BfdCounters();
        ~BfdCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdCountersBundles; //type: BundleInformation::BfdCounters::BfdCountersBundles
        class BfdCountersMembers; //type: BundleInformation::BfdCounters::BfdCountersMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles> bfd_counters_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers> bfd_counters_members;
        
}; // BundleInformation::BfdCounters


class BundleInformation::BfdCounters::BfdCountersBundles : public Entity
{
    public:
        BfdCountersBundles();
        ~BfdCountersBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdCountersBundle; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle> > bfd_counters_bundle;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle : public Entity
{
    public:
        BfdCountersBundle();
        ~BfdCountersBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class BfdCountersBundleDescendant; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant
        class BfdCountersBundleChildrenMembers; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers
        class BfdCountersBundleItem; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers> bfd_counters_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant> bfd_counters_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem> bfd_counters_bundle_item;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant : public Entity
{
    public:
        BfdCountersBundleDescendant();
        ~BfdCountersBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleName; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName
        class BfdCounter; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter> > bfd_counter;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName> bundle_name;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName : public Entity
{
    public:
        BundleName();
        ~BundleName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter : public Entity
{
    public:
        BfdCounter();
        ~BfdCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_name; //type: string
        YLeaf last_time_cleared; //type: uint64
        YLeaf starting; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf neighbor_unconfigured; //type: uint32
        YLeaf start_timeouts; //type: uint32
        YLeaf neighbor_unconfigured_timeouts; //type: uint32
        YLeaf time_since_cleared; //type: uint64

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers : public Entity
{
    public:
        BfdCountersBundleChildrenMembers();
        ~BfdCountersBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdCountersBundleChildrenMember; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember> > bfd_counters_bundle_children_member;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember : public Entity
{
    public:
        BfdCountersBundleChildrenMember();
        ~BfdCountersBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf member_name; //type: string
        YLeaf last_time_cleared; //type: uint64
        YLeaf starting; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf neighbor_unconfigured; //type: uint32
        YLeaf start_timeouts; //type: uint32
        YLeaf neighbor_unconfigured_timeouts; //type: uint32
        YLeaf time_since_cleared; //type: uint64

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem : public Entity
{
    public:
        BfdCountersBundleItem();
        ~BfdCountersBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem


class BundleInformation::BfdCounters::BfdCountersMembers : public Entity
{
    public:
        BfdCountersMembers();
        ~BfdCountersMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdCountersMember; //type: BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember> > bfd_counters_member;
        
}; // BundleInformation::BfdCounters::BfdCountersMembers


class BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember : public Entity
{
    public:
        BfdCountersMember();
        ~BfdCountersMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class BfdCountersMemberItem; //type: BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem> bfd_counters_member_item;
        
}; // BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember


class BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem : public Entity
{
    public:
        BfdCountersMemberItem();
        ~BfdCountersMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_name; //type: string
        YLeaf last_time_cleared; //type: uint64
        YLeaf starting; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf neighbor_unconfigured; //type: uint32
        YLeaf start_timeouts; //type: uint32
        YLeaf neighbor_unconfigured_timeouts; //type: uint32
        YLeaf time_since_cleared; //type: uint64

}; // BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem


class BundleInformation::ScheduledActions : public Entity
{
    public:
        ScheduledActions();
        ~ScheduledActions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ScheduledActionsBundles; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles> scheduled_actions_bundles;
        
}; // BundleInformation::ScheduledActions


class BundleInformation::ScheduledActions::ScheduledActionsBundles : public Entity
{
    public:
        ScheduledActionsBundles();
        ~ScheduledActionsBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ScheduledActionsBundle; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle> > scheduled_actions_bundle;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle : public Entity
{
    public:
        ScheduledActionsBundle();
        ~ScheduledActionsBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class ScheduledActionsBundleItem; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem> scheduled_actions_bundle_item;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem : public Entity
{
    public:
        ScheduledActionsBundleItem();
        ~ScheduledActionsBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class ScheduledAction; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction> > scheduled_action;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction : public Entity
{
    public:
        ScheduledAction();
        ~ScheduledAction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mlacp_action; //type: BmdBagMlacpSchActionItemEnum
        YLeaf time_remaining; //type: uint64
        YLeaf action_state; //type: BmdSwitchReasonEnum

}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction


class BundleInformation::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleBundles; //type: BundleInformation::Bundle::BundleBundles
        class BundleMembers; //type: BundleInformation::Bundle::BundleMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles> bundle_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers> bundle_members;
        
}; // BundleInformation::Bundle


class BundleInformation::Bundle::BundleBundles : public Entity
{
    public:
        BundleBundles();
        ~BundleBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleBundle; //type: BundleInformation::Bundle::BundleBundles::BundleBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle> > bundle_bundle;
        
}; // BundleInformation::Bundle::BundleBundles


class BundleInformation::Bundle::BundleBundles::BundleBundle : public Entity
{
    public:
        BundleBundle();
        ~BundleBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class BundleBundleDescendant; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant
        class BundleBundleChildrenMembers; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers
        class BundleBundleItem; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers> bundle_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant> bundle_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem> bundle_bundle_item;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant : public Entity
{
    public:
        BundleBundleDescendant();
        ~BundleBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData
        class MemberData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData> > member_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress> mac_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers : public Entity
{
    public:
        BundleBundleChildrenMembers();
        ~BundleBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleBundleChildrenMember; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember> > bundle_bundle_children_member;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember : public Entity
{
    public:
        BundleBundleChildrenMember();
        ~BundleBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem : public Entity
{
    public:
        BundleBundleItem();
        ~BundleBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress
        class BfdConfig; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress> mac_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress


class BundleInformation::Bundle::BundleMembers : public Entity
{
    public:
        BundleMembers();
        ~BundleMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleMember; //type: BundleInformation::Bundle::BundleMembers::BundleMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember> > bundle_member;
        
}; // BundleInformation::Bundle::BundleMembers


class BundleInformation::Bundle::BundleMembers::BundleMember : public Entity
{
    public:
        BundleMember();
        ~BundleMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class BundleMemberAncestor; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor
        class BundleMemberItem; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor> bundle_member_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem> bundle_member_item;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor : public Entity
{
    public:
        BundleMemberAncestor();
        ~BundleMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData
        class MemberData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData> > member_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress> mac_address;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem : public Entity
{
    public:
        BundleMemberItem();
        ~BundleMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress


class BundleInformation::EventsRg : public Entity
{
    public:
        EventsRg();
        ~EventsRg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsRgMembers; //type: BundleInformation::EventsRg::EventsRgMembers
        class EventsRgIccpGroups; //type: BundleInformation::EventsRg::EventsRgIccpGroups
        class EventsRgBundles; //type: BundleInformation::EventsRg::EventsRgBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles> events_rg_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups> events_rg_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers> events_rg_members;
        
}; // BundleInformation::EventsRg


class BundleInformation::EventsRg::EventsRgMembers : public Entity
{
    public:
        EventsRgMembers();
        ~EventsRgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsRgMember; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember> > events_rg_member;
        
}; // BundleInformation::EventsRg::EventsRgMembers


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember : public Entity
{
    public:
        EventsRgMember();
        ~EventsRgMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class EventsRgMemberAncestor; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor> events_rg_member_ancestor;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor : public Entity
{
    public:
        EventsRgMemberAncestor();
        ~EventsRgMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups : public Entity
{
    public:
        EventsRgIccpGroups();
        ~EventsRgIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsRgIccpGroup; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup> > events_rg_iccp_group;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup : public Entity
{
    public:
        EventsRgIccpGroup();
        ~EventsRgIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class EventsRgBundleItemIccpGroup; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup> events_rg_bundle_item_iccp_group;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup : public Entity
{
    public:
        EventsRgBundleItemIccpGroup();
        ~EventsRgBundleItemIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles : public Entity
{
    public:
        EventsRgBundles();
        ~EventsRgBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsRgBundle; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle> > events_rg_bundle;
        
}; // BundleInformation::EventsRg::EventsRgBundles


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle : public Entity
{
    public:
        EventsRgBundle();
        ~EventsRgBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class EventsRgBundleAncestor; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor> events_rg_bundle_ancestor;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor : public Entity
{
    public:
        EventsRgBundleAncestor();
        ~EventsRgBundleAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data


class BundleInformation::Lacp : public Entity
{
    public:
        Lacp();
        ~Lacp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LacpBundles; //type: BundleInformation::Lacp::LacpBundles
        class LacpMembers; //type: BundleInformation::Lacp::LacpMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles> lacp_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers> lacp_members;
        
}; // BundleInformation::Lacp


class BundleInformation::Lacp::LacpBundles : public Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LacpBundle; //type: BundleInformation::Lacp::LacpBundles::LacpBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle> > lacp_bundle;
        
}; // BundleInformation::Lacp::LacpBundles


class BundleInformation::Lacp::LacpBundles::LacpBundle : public Entity
{
    public:
        LacpBundle();
        ~LacpBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class LacpBundleItem; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem
        class LacpBundleDescendant; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant
        class LacpBundleChildrenMembers; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers> lacp_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant> lacp_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem> lacp_bundle_item;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem : public Entity
{
    public:
        LacpBundleItem();
        ~LacpBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData : public Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId : public Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant : public Entity
{
    public:
        LacpBundleDescendant();
        ~LacpBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData
        class MemberData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData> > member_data;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData : public Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId : public Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf selection_state; //type: LacpSelStateEnum
        YLeaf period_state; //type: LacpPeriodStateEnum
        YLeaf receive_machine_state; //type: RxstatesEnum
        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf actor_churn_state; //type: LacpChurnstatesEnum
        YLeaf partner_churn_state; //type: LacpChurnstatesEnum
        YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo : public Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo : public Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum
        class Local; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers : public Entity
{
    public:
        LacpBundleChildrenMembers();
        ~LacpBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LacpBundleChildrenMember; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember> > lacp_bundle_children_member;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember : public Entity
{
    public:
        LacpBundleChildrenMember();
        ~LacpBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf selection_state; //type: LacpSelStateEnum
        YLeaf period_state; //type: LacpPeriodStateEnum
        YLeaf receive_machine_state; //type: RxstatesEnum
        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf actor_churn_state; //type: LacpChurnstatesEnum
        YLeaf partner_churn_state; //type: LacpChurnstatesEnum
        YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo : public Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo : public Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum
        class Local; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpMembers : public Entity
{
    public:
        LacpMembers();
        ~LacpMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LacpMember; //type: BundleInformation::Lacp::LacpMembers::LacpMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember> > lacp_member;
        
}; // BundleInformation::Lacp::LacpMembers


class BundleInformation::Lacp::LacpMembers::LacpMember : public Entity
{
    public:
        LacpMember();
        ~LacpMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class LacpMemberAncestor; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor
        class LacpMemberItem; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor> lacp_member_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem> lacp_member_item;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor : public Entity
{
    public:
        LacpMemberAncestor();
        ~LacpMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData
        class MemberData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData> > member_data;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData : public Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId : public Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf selection_state; //type: LacpSelStateEnum
        YLeaf period_state; //type: LacpPeriodStateEnum
        YLeaf receive_machine_state; //type: RxstatesEnum
        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf actor_churn_state; //type: LacpChurnstatesEnum
        YLeaf partner_churn_state; //type: LacpChurnstatesEnum
        YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo : public Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo : public Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum
        class Local; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem : public Entity
{
    public:
        LacpMemberItem();
        ~LacpMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf selection_state; //type: LacpSelStateEnum
        YLeaf period_state; //type: LacpPeriodStateEnum
        YLeaf receive_machine_state; //type: RxstatesEnum
        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf actor_churn_state; //type: LacpChurnstatesEnum
        YLeaf partner_churn_state; //type: LacpChurnstatesEnum
        YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo : public Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo : public Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint16
        YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum
        class Local; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign


class BundleInformation::MlacpBundleCounters : public Entity
{
    public:
        MlacpBundleCounters();
        ~MlacpBundleCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroups; //type: BundleInformation::MlacpBundleCounters::IccpGroups
        class Bundles; //type: BundleInformation::MlacpBundleCounters::Bundles
        class Nodes; //type: BundleInformation::MlacpBundleCounters::Nodes

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles> bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups> iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes> nodes;
        
}; // BundleInformation::MlacpBundleCounters


class BundleInformation::MlacpBundleCounters::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class IccpGroupItem; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem : public Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle> > bundle;
        
}; // BundleInformation::MlacpBundleCounters::Bundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class BundleItem; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem> bundle_item;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem : public Entity
{
    public:
        BundleItem();
        ~BundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData> > node_data;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: BundleInformation::MlacpBundleCounters::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node> > node;
        
}; // BundleInformation::MlacpBundleCounters::Nodes


class BundleInformation::MlacpBundleCounters::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class NodeItem; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem> node_item;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem : public Entity
{
    public:
        NodeItem();
        ~NodeItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::Protect : public Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtectBundles; //type: BundleInformation::Protect::ProtectBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles> protect_bundles;
        
}; // BundleInformation::Protect


class BundleInformation::Protect::ProtectBundles : public Entity
{
    public:
        ProtectBundles();
        ~ProtectBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtectBundle; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle> > protect_bundle;
        
}; // BundleInformation::Protect::ProtectBundles


class BundleInformation::Protect::ProtectBundles::ProtectBundle : public Entity
{
    public:
        ProtectBundle();
        ~ProtectBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class ProtectBundleItem; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem> protect_bundle_item;
        
}; // BundleInformation::Protect::ProtectBundles::ProtectBundle


class BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem : public Entity
{
    public:
        ProtectBundleItem();
        ~ProtectBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_handle; //type: string
        YLeaf interface_up; //type: boolean
        YLeaf registered; //type: boolean
        YLeaf slow_path_up; //type: boolean
        YLeaf slow_path_trigger; //type: boolean
        YLeaf minimum_active_links; //type: uint32
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf event_type; //type: BmdBagTargetEnum
        YLeaf time_stamp; //type: uint64
        class MemberInfo; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo> > member_info;
        
}; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem


class BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo : public Entity
{
    public:
        MemberInfo();
        ~MemberInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf bandwidth; //type: uint32
        YLeaf node; //type: string
        YLeaf active; //type: boolean
        YLeaf notification_received; //type: boolean
        YLeaf slow_path_up; //type: boolean
        YLeaf time_stamp; //type: uint64

}; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo


class BundleInformation::MlacpBrief : public Entity
{
    public:
        MlacpBrief();
        ~MlacpBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpBundleBriefs; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs
        class MlacpBriefIccpGroups; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups> mlacp_brief_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs> mlacp_bundle_briefs;
        
}; // BundleInformation::MlacpBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs : public Entity
{
    public:
        MlacpBundleBriefs();
        ~MlacpBundleBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpBundleBrief; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief> > mlacp_bundle_brief;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief : public Entity
{
    public:
        MlacpBundleBrief();
        ~MlacpBundleBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class MlacpBundleItemBrief; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief> mlacp_bundle_item_brief;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief : public Entity
{
    public:
        MlacpBundleItemBrief();
        ~MlacpBundleItemBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData> > mlacp_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData : public Entity
{
    public:
        MlacpData();
        ~MlacpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData
        class BundleData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum
        class SystemId; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum

}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups : public Entity
{
    public:
        MlacpBriefIccpGroups();
        ~MlacpBriefIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpBriefIccpGroup; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup> > mlacp_brief_iccp_group;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup : public Entity
{
    public:
        MlacpBriefIccpGroup();
        ~MlacpBriefIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class MlacpBriefIccpGroupItem; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem> mlacp_brief_iccp_group_item;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem : public Entity
{
    public:
        MlacpBriefIccpGroupItem();
        ~MlacpBriefIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData
        class BundleData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum
        class SystemId; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum

}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData


class BundleInformation::Mlacp : public Entity
{
    public:
        Mlacp();
        ~Mlacp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpBundles; //type: BundleInformation::Mlacp::MlacpBundles
        class MlacpIccpGroups; //type: BundleInformation::Mlacp::MlacpIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles> mlacp_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups> mlacp_iccp_groups;
        
}; // BundleInformation::Mlacp


class BundleInformation::Mlacp::MlacpBundles : public Entity
{
    public:
        MlacpBundles();
        ~MlacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpBundle; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle> > mlacp_bundle;
        
}; // BundleInformation::Mlacp::MlacpBundles


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle : public Entity
{
    public:
        MlacpBundle();
        ~MlacpBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class MlacpBundleItem; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem> mlacp_bundle_item;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem : public Entity
{
    public:
        MlacpBundleItem();
        ~MlacpBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData> > mlacp_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData : public Entity
{
    public:
        MlacpData();
        ~MlacpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData
        class BundleData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum
        class SystemId; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum

}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData


class BundleInformation::Mlacp::MlacpIccpGroups : public Entity
{
    public:
        MlacpIccpGroups();
        ~MlacpIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MlacpIccpGroup; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup> > mlacp_iccp_group;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup : public Entity
{
    public:
        MlacpIccpGroup();
        ~MlacpIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class MlacpIccpGroupItem; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem> mlacp_iccp_group_item;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem : public Entity
{
    public:
        MlacpIccpGroupItem();
        ~MlacpIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroupData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData
        class BundleData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum
        class SystemId; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum

}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData


class BundleInformation::MacAllocation : public Entity
{
    public:
        MacAllocation();
        ~MacAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacAllocationGlobal; //type: BundleInformation::MacAllocation::MacAllocationGlobal

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal> mac_allocation_global;
        
}; // BundleInformation::MacAllocation


class BundleInformation::MacAllocation::MacAllocationGlobal : public Entity
{
    public:
        MacAllocationGlobal();
        ~MacAllocationGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacAllocationGlobalItem; //type: BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem> mac_allocation_global_item;
        
}; // BundleInformation::MacAllocation::MacAllocationGlobal


class BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem : public Entity
{
    public:
        MacAllocationGlobalItem();
        ~MacAllocationGlobalItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacAddress; //type: BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress> > mac_address;
        
}; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem


class BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress


class BundleInformation::Events : public Entity
{
    public:
        Events();
        ~Events();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMembers; //type: BundleInformation::Events::EventsMembers
        class EventsBundles; //type: BundleInformation::Events::EventsBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles> events_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers> events_members;
        
}; // BundleInformation::Events


class BundleInformation::Events::EventsMembers : public Entity
{
    public:
        EventsMembers();
        ~EventsMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMember; //type: BundleInformation::Events::EventsMembers::EventsMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember> > events_member;
        
}; // BundleInformation::Events::EventsMembers


class BundleInformation::Events::EventsMembers::EventsMember : public Entity
{
    public:
        EventsMember();
        ~EventsMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class EventsMemberItem; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem
        class EventsMemberAncestor; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor> events_member_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem> events_member_item;
        
}; // BundleInformation::Events::EventsMembers::EventsMember


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem : public Entity
{
    public:
        EventsMemberItem();
        ~EventsMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items> > items;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor : public Entity
{
    public:
        EventsMemberAncestor();
        ~EventsMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items> > items;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles : public Entity
{
    public:
        EventsBundles();
        ~EventsBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsBundle; //type: BundleInformation::Events::EventsBundles::EventsBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle> > events_bundle;
        
}; // BundleInformation::Events::EventsBundles


class BundleInformation::Events::EventsBundles::EventsBundle : public Entity
{
    public:
        EventsBundle();
        ~EventsBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class EventsBundleAncestor; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor
        class EventsBundleItem; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem
        class EventsBundleDescendant; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant
        class EventsBundleChildrenMembers; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor> events_bundle_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers> events_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant> events_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem> events_bundle_item;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor : public Entity
{
    public:
        EventsBundleAncestor();
        ~EventsBundleAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items> > items;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem : public Entity
{
    public:
        EventsBundleItem();
        ~EventsBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items> > items;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant : public Entity
{
    public:
        EventsBundleDescendant();
        ~EventsBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsItem; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem> > events_item;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items> > items;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers : public Entity
{
    public:
        EventsBundleChildrenMembers();
        ~EventsBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsBundleChildrenMember; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember> > events_bundle_children_member;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember : public Entity
{
    public:
        EventsBundleChildrenMember();
        ~EventsBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items> > items;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data


class BundleInformation::EventsBdl : public Entity
{
    public:
        EventsBdl();
        ~EventsBdl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsBdlMembers; //type: BundleInformation::EventsBdl::EventsBdlMembers
        class EventsBdlBundles; //type: BundleInformation::EventsBdl::EventsBdlBundles
        class EventsBdlIccpGroups; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles> events_bdl_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups> events_bdl_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers> events_bdl_members;
        
}; // BundleInformation::EventsBdl


class BundleInformation::EventsBdl::EventsBdlMembers : public Entity
{
    public:
        EventsBdlMembers();
        ~EventsBdlMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsBdlMember; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember> > events_bdl_member;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember : public Entity
{
    public:
        EventsBdlMember();
        ~EventsBdlMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class EventsBdlMemberAncestor; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor> events_bdl_member_ancestor;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor : public Entity
{
    public:
        EventsBdlMemberAncestor();
        ~EventsBdlMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items> > items;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlBundles : public Entity
{
    public:
        EventsBdlBundles();
        ~EventsBdlBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsBdlBundle; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle> > events_bdl_bundle;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle : public Entity
{
    public:
        EventsBdlBundle();
        ~EventsBdlBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class EventsBdlBundleItem; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem> events_bdl_bundle_item;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem : public Entity
{
    public:
        EventsBdlBundleItem();
        ~EventsBdlBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items> > items;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlIccpGroups : public Entity
{
    public:
        EventsBdlIccpGroups();
        ~EventsBdlIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsBdlIccpGroup; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup> > events_bdl_iccp_group;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup : public Entity
{
    public:
        EventsBdlIccpGroup();
        ~EventsBdlIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class EventsBdlBundleDescendantIccpGroup; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup> events_bdl_bundle_descendant_iccp_group;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup : public Entity
{
    public:
        EventsBdlBundleDescendantIccpGroup();
        ~EventsBdlBundleDescendantIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsItem; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem> > events_item;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items> > items;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::BundleBriefs : public Entity
{
    public:
        BundleBriefs();
        ~BundleBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleBrief; //type: BundleInformation::BundleBriefs::BundleBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief> > bundle_brief;
        
}; // BundleInformation::BundleBriefs


class BundleInformation::BundleBriefs::BundleBrief : public Entity
{
    public:
        BundleBrief();
        ~BundleBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class BundleBriefItem; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem> bundle_brief_item;
        
}; // BundleInformation::BundleBriefs::BundleBrief


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem : public Entity
{
    public:
        BundleBriefItem();
        ~BundleBriefItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress
        class BfdConfig; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress> mac_address;
        
}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress


class BundleInformation::EventsMbr : public Entity
{
    public:
        EventsMbr();
        ~EventsMbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMbrBundles; //type: BundleInformation::EventsMbr::EventsMbrBundles
        class EventsMbrMembers; //type: BundleInformation::EventsMbr::EventsMbrMembers
        class EventsMbrIccpGroups; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles> events_mbr_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups> events_mbr_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers> events_mbr_members;
        
}; // BundleInformation::EventsMbr


class BundleInformation::EventsMbr::EventsMbrBundles : public Entity
{
    public:
        EventsMbrBundles();
        ~EventsMbrBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMbrBundle; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle> > events_mbr_bundle;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle : public Entity
{
    public:
        EventsMbrBundle();
        ~EventsMbrBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class EventsMbrBundleChildrenMembers; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers
        class EventsMbrBundleDescendant; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers> events_mbr_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant> events_mbr_bundle_descendant;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers : public Entity
{
    public:
        EventsMbrBundleChildrenMembers();
        ~EventsMbrBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMbrBundleChildrenMember; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember> > events_mbr_bundle_children_member;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember : public Entity
{
    public:
        EventsMbrBundleChildrenMember();
        ~EventsMbrBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant : public Entity
{
    public:
        EventsMbrBundleDescendant();
        ~EventsMbrBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsItem; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem> > events_item;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers : public Entity
{
    public:
        EventsMbrMembers();
        ~EventsMbrMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMbrMember; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember> > events_mbr_member;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember : public Entity
{
    public:
        EventsMbrMember();
        ~EventsMbrMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class EventsMbrMemberItem; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem> events_mbr_member_item;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem : public Entity
{
    public:
        EventsMbrMemberItem();
        ~EventsMbrMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups : public Entity
{
    public:
        EventsMbrIccpGroups();
        ~EventsMbrIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMbrIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup> > events_mbr_iccp_group;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup : public Entity
{
    public:
        EventsMbrIccpGroup();
        ~EventsMbrIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class EventsMbrBundleChildrenMemberIccpGroups; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups
        class EventsMbrBundleDescendantIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups> events_mbr_bundle_children_member_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup> events_mbr_bundle_descendant_iccp_group;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups : public Entity
{
    public:
        EventsMbrBundleChildrenMemberIccpGroups();
        ~EventsMbrBundleChildrenMemberIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsMbrBundleChildrenMemberIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup> > events_mbr_bundle_children_member_iccp_group;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup : public Entity
{
    public:
        EventsMbrBundleChildrenMemberIccpGroup();
        ~EventsMbrBundleChildrenMemberIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup : public Entity
{
    public:
        EventsMbrBundleDescendantIccpGroup();
        ~EventsMbrBundleDescendantIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventsItem; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem> > events_item;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::MlacpIccpGroupCounters : public Entity
{
    public:
        MlacpIccpGroupCounters();
        ~MlacpIccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroups; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups> iccp_groups;
        
}; // BundleInformation::MlacpIccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class IccpGroupAncestorBundle; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle
        class IccpGroupAncestorMember; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember
        class IccpGroupAncestorNode; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode
        class IccpGroupItem; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle> iccp_group_ancestor_bundle;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember> iccp_group_ancestor_member;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode> iccp_group_ancestor_node;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle : public Entity
{
    public:
        IccpGroupAncestorBundle();
        ~IccpGroupAncestorBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember : public Entity
{
    public:
        IccpGroupAncestorMember();
        ~IccpGroupAncestorMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode : public Entity
{
    public:
        IccpGroupAncestorNode();
        ~IccpGroupAncestorNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem : public Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents


class BundleInformation::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemIdGlobal; //type: BundleInformation::SystemId::SystemIdGlobal
        class SystemIdIccpGroups; //type: BundleInformation::SystemId::SystemIdIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal> system_id_global;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups> system_id_iccp_groups;
        
}; // BundleInformation::SystemId


class BundleInformation::SystemId::SystemIdGlobal : public Entity
{
    public:
        SystemIdGlobal();
        ~SystemIdGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemIdGlobalItem; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem> system_id_global_item;
        
}; // BundleInformation::SystemId::SystemIdGlobal


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem : public Entity
{
    public:
        SystemIdGlobalItem();
        ~SystemIdGlobalItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf system_priority; //type: uint16
        YLeaf system_mac_address; //type: string
        class SystemId_; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_> system_id;
        
}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_ : public Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr


class BundleInformation::SystemId::SystemIdIccpGroups : public Entity
{
    public:
        SystemIdIccpGroups();
        ~SystemIdIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemIdIccpGroup; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup> > system_id_iccp_group;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup : public Entity
{
    public:
        SystemIdIccpGroup();
        ~SystemIdIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class SystemIdIccpGroupItem; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem> system_id_iccp_group_item;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem : public Entity
{
    public:
        SystemIdIccpGroupItem();
        ~SystemIdIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf system_priority; //type: uint16
        YLeaf system_mac_address; //type: string
        class SystemId_; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_> system_id;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_ : public Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr


class BundleInformation::MlacpMemberCounters : public Entity
{
    public:
        MlacpMemberCounters();
        ~MlacpMemberCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroups; //type: BundleInformation::MlacpMemberCounters::IccpGroups
        class Members; //type: BundleInformation::MlacpMemberCounters::Members
        class Bundles; //type: BundleInformation::MlacpMemberCounters::Bundles
        class Nodes; //type: BundleInformation::MlacpMemberCounters::Nodes

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles> bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups> iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members> members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes> nodes;
        
}; // BundleInformation::MlacpMemberCounters


class BundleInformation::MlacpMemberCounters::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class IccpGroupItem; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem : public Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: BundleInformation::MlacpMemberCounters::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member> > member;
        
}; // BundleInformation::MlacpMemberCounters::Members


class BundleInformation::MlacpMemberCounters::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class MemberItem; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem> member_item;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem : public Entity
{
    public:
        MemberItem();
        ~MemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle> > bundle;
        
}; // BundleInformation::MlacpMemberCounters::Bundles


class BundleInformation::MlacpMemberCounters::Bundles::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class BundleItem; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem> bundle_item;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem : public Entity
{
    public:
        BundleItem();
        ~BundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: BundleInformation::MlacpMemberCounters::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node> > node;
        
}; // BundleInformation::MlacpMemberCounters::Nodes


class BundleInformation::MlacpMemberCounters::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class NodeItem; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem> node_item;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem : public Entity
{
    public:
        NodeItem();
        ~NodeItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

class LacpData : public Entity
{
    public:
        LacpData();
        ~LacpData();

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

        class Global; //type: LacpData::Global

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global> global;
        
}; // LacpData


class LacpData::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemId; //type: LacpData::Global::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId> system_id;
        
}; // LacpData::Global


class LacpData::Global::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf system_priority; //type: uint16
        YLeaf system_mac_address; //type: string
        class SystemId_; //type: LacpData::Global::SystemId::SystemId_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId::SystemId_> system_id;
        
}; // LacpData::Global::SystemId


class LacpData::Global::SystemId::SystemId_ : public Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: LacpData::Global::SystemId::SystemId_::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // LacpData::Global::SystemId::SystemId_


class LacpData::Global::SystemId::SystemId_::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // LacpData::Global::SystemId::SystemId_::SystemMacAddr

class Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

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

        class Bundles_; //type: Bundles::Bundles_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_> bundles;
        
}; // Bundles


class Bundles::Bundles_ : public Entity
{
    public:
        Bundles_();
        ~Bundles_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: Bundles::Bundles_::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle> > bundle;
        
}; // Bundles::Bundles_


class Bundles::Bundles_::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class Data; //type: Bundles::Bundles_::Bundle::Data
        class Members; //type: Bundles::Bundles_::Bundle::Members

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data> data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members> members;
        
}; // Bundles::Bundles_::Bundle


class Bundles::Bundles_::Bundle::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: Bundles::Bundles_::Bundle::Data::MacAddress
        class BfdConfig; //type: Bundles::Bundles_::Bundle::Data::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::MacAddress> mac_address;
        
}; // Bundles::Bundles_::Bundle::Data


class Bundles::Bundles_::Bundle::Data::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Bundles::Bundles_::Bundle::Data::MacAddress


class Bundles::Bundles_::Bundle::Data::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress> destination_address;
        
}; // Bundles::Bundles_::Bundle::Data::BfdConfig


class Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress


class Bundles::Bundles_::Bundle::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: Bundles::Bundles_::Bundle::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member> > member;
        
}; // Bundles::Bundles_::Bundle::Members


class Bundles::Bundles_::Bundle::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: Bundles::Bundles_::Bundle::Members::Member::Counters
        class LinkData; //type: Bundles::Bundles_::Bundle::Members::Member::LinkData
        class MemberMuxData; //type: Bundles::Bundles_::Bundle::Members::Member::MemberMuxData
        class MacAddress; //type: Bundles::Bundles_::Bundle::Members::Member::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData> member_mux_data;
        
}; // Bundles::Bundles_::Bundle::Members::Member


class Bundles::Bundles_::Bundle::Members::Member::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // Bundles::Bundles_::Bundle::Members::Member::Counters


class Bundles::Bundles_::Bundle::Members::Member::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // Bundles::Bundles_::Bundle::Members::Member::LinkData


class Bundles::Bundles_::Bundle::Members::Member::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData


class Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData


class Bundles::Bundles_::Bundle::Members::Member::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Bundles::Bundles_::Bundle::Members::Member::MacAddress

class LacpBundleMembers : public Entity
{
    public:
        LacpBundleMembers();
        ~LacpBundleMembers();

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

        class Nodes; //type: LacpBundleMembers::Nodes
        class Members; //type: LacpBundleMembers::Members

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members> members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes> nodes;
        
}; // LacpBundleMembers


class LacpBundleMembers::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: LacpBundleMembers::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node> > node;
        
}; // LacpBundleMembers::Nodes


class LacpBundleMembers::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class Counters; //type: LacpBundleMembers::Nodes::Node::Counters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node::Counters> counters;
        
}; // LacpBundleMembers::Nodes::Node


class LacpBundleMembers::Nodes::Node::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wrong_port_count; //type: uint32
        YLeaf last_wrong_port; //type: uint32
        YLeaf unknown_port_count; //type: uint32
        YLeaf undecodable_packets; //type: uint32
        YLeaf time_since_cleared; //type: uint64
        YLeaf time_since_unexpected_event; //type: uint64
        YLeaf time_since_last_updated; //type: uint64

}; // LacpBundleMembers::Nodes::Node::Counters


class LacpBundleMembers::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: LacpBundleMembers::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member> > member;
        
}; // LacpBundleMembers::Members


class LacpBundleMembers::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class Data; //type: LacpBundleMembers::Members::Member::Data
        class Counters; //type: LacpBundleMembers::Members::Member::Counters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Data> data;
        
}; // LacpBundleMembers::Members::Member


class LacpBundleMembers::Members::Member::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // LacpBundleMembers::Members::Member::Data


class LacpBundleMembers::Members::Member::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf time_since_last_lacpdu_received; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf time_since_unexpected_event; //type: uint64
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // LacpBundleMembers::Members::Member::Counters

class BundlesAdjacency : public Entity
{
    public:
        BundlesAdjacency();
        ~BundlesAdjacency();

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

        class Nodes; //type: BundlesAdjacency::Nodes

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes> nodes;
        
}; // BundlesAdjacency


class BundlesAdjacency::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: BundlesAdjacency::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node> > node;
        
}; // BundlesAdjacency::Nodes


class BundlesAdjacency::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Brief; //type: BundlesAdjacency::Nodes::Node::Brief
        class Bundles; //type: BundlesAdjacency::Nodes::Node::Bundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles> bundles;
        
}; // BundlesAdjacency::Nodes::Node


class BundlesAdjacency::Nodes::Node::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData> > bundle_data;
        
}; // BundlesAdjacency::Nodes::Node::Brief


class BundlesAdjacency::Nodes::Node::Brief::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf sub_interface_count; //type: uint32
        YLeaf member_count; //type: uint32
        YLeaf total_weight; //type: uint32
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Brief::BundleData


class BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface : public Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface


class BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData : public Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoadBalanceEnum
        YLeaf value_; //type: uint32
        YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle> > bundle;
        
}; // BundlesAdjacency::Nodes::Node::Bundles


class BundlesAdjacency::Nodes::Node::Bundles::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        class BundleInfo; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo> bundle_info;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo : public Entity
{
    public:
        BundleInfo();
        ~BundleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf media; //type: BundleMedia1Enum
        YLeaf max_member_count; //type: uint32
        YLeaf avoid_rebalance; //type: boolean
        class Brief; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData
        class Member; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData> load_balance_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member> > member;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf sub_interface_count; //type: uint32
        YLeaf member_count; //type: uint32
        YLeaf total_weight; //type: uint32
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface : public Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData : public Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoadBalanceEnum
        YLeaf value_; //type: uint32
        YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData : public Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoadBalanceEnum
        YLeaf value_; //type: uint32
        YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf link_id; //type: uint8
        YLeaf link_order_number; //type: uint8
        YLeaf bandwidth; //type: uint8

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface : public Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData : public Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: LoadBalanceEnum
        YLeaf value_; //type: uint32
        YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData

class BmdMlacpSwitchoverEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_mlacp_switchover_nonrevertive;
        static const Enum::YLeaf bmd_mlacp_switchover_brute_force;
        static const Enum::YLeaf bmd_mlacp_switchover_revertive;
        static const Enum::YLeaf bmd_mlacp_switchover_count;

};

class LoadBalanceEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf value_;
        static const Enum::YLeaf source_ip;
        static const Enum::YLeaf destination_ip;
        static const Enum::YLeaf unknown;

};

class BmBdlStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_bdl_state_admin_down;
        static const Enum::YLeaf bm_bdl_state_down;
        static const Enum::YLeaf bm_bdl_state_client_down;
        static const Enum::YLeaf bm_bdl_state_ptnr_down;
        static const Enum::YLeaf bm_bdl_state_bundle_shutdown;
        static const Enum::YLeaf bm_bdl_state_pe_isolated;
        static const Enum::YLeaf bm_bdl_state_nak;
        static const Enum::YLeaf bm_bdl_state_up_active;
        static const Enum::YLeaf bm_bdl_state_mlacp_hot_standby;
        static const Enum::YLeaf bm_bdl_state_mlacp_cold_standby;
        static const Enum::YLeaf bm_bdl_state_unknown;
        static const Enum::YLeaf bm_bdl_state_cold_standby;
        static const Enum::YLeaf bm_bdl_state_error_disabled;
        static const Enum::YLeaf bm_bdl_state_efd_disabled;

};

class LacpPeriodStateEnum : public Enum
{
    public:
        static const Enum::YLeaf period_s_low;
        static const Enum::YLeaf period_fast;
        static const Enum::YLeaf period_none;

};

class BundleMediaEnum : public Enum
{
    public:
        static const Enum::YLeaf bundle_media_ethernet;
        static const Enum::YLeaf bundle_media_pos;
        static const Enum::YLeaf bundle_media_count;

};

class BmdMlacpBdlStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf bdl_state_nak;
        static const Enum::YLeaf bdl_state_unknown;
        static const Enum::YLeaf bdl_state_no_sync;
        static const Enum::YLeaf bdl_state_rec_delay;
        static const Enum::YLeaf bdl_state_up;
        static const Enum::YLeaf bdl_state_down;
        static const Enum::YLeaf bdl_state_admin_down;
        static const Enum::YLeaf bdl_state_test;
        static const Enum::YLeaf bdl_state_error;

};

class BundleMedia1Enum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf pos;

};

class RxstatesEnum : public Enum
{
    public:
        static const Enum::YLeaf current_rx;
        static const Enum::YLeaf expired;
        static const Enum::YLeaf defaulted;
        static const Enum::YLeaf initialize;
        static const Enum::YLeaf lacp_disabled;
        static const Enum::YLeaf port_disabled;

};

class LacpChurnstatesEnum : public Enum
{
    public:
        static const Enum::YLeaf no_churn;
        static const Enum::YLeaf churn;
        static const Enum::YLeaf churn_monitor;

};

class BmdBagEventMbrItemEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_event_mbr_idb_create;
        static const Enum::YLeaf bmd_event_mbr_bdl_add;
        static const Enum::YLeaf bmd_event_mbr_im_state;
        static const Enum::YLeaf bmd_event_mbr_sel_logic;
        static const Enum::YLeaf bmd_event_mbr_mux;
        static const Enum::YLeaf bmd_event_mbr_bfd;
        static const Enum::YLeaf bmd_event_mbr_expired;
        static const Enum::YLeaf bmd_event_mbr_defaulted;
        static const Enum::YLeaf bmd_event_mbr_first_retry;
        static const Enum::YLeaf bmd_event_mbr_msg;
        static const Enum::YLeaf bmd_event_mbr_error;
        static const Enum::YLeaf bmd_event_mbr_mlacp_tlv;
        static const Enum::YLeaf bmd_event_mbr_redundancy_role;
        static const Enum::YLeaf bmd_event_mbr_count;

};

class BmdBagEventDataEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_bag_evt_data_none;
        static const Enum::YLeaf bmd_bag_evt_data_error;
        static const Enum::YLeaf bmd_bag_evt_data_string;

};

class BmdSwitchReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_switch_reason_none;
        static const Enum::YLeaf bm_switch_reason_noop;
        static const Enum::YLeaf bm_switch_reason_not_mlacp;
        static const Enum::YLeaf bm_switch_reason_revertive;
        static const Enum::YLeaf bm_switch_reason_bdl_down;
        static const Enum::YLeaf bm_switch_reason_recovery;
        static const Enum::YLeaf bm_switch_reason_preceding_error;
        static const Enum::YLeaf bm_switch_reason_wrong_order;
        static const Enum::YLeaf bm_switch_reason_singleton;

};

class BmdMemberTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_mbr_local;
        static const Enum::YLeaf bmd_mbr_foreign;
        static const Enum::YLeaf bmd_mbr_unknown;

};

class BmAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_af_id_ipv4;
        static const Enum::YLeaf bm_af_id_ipv6;

};

class BmMbrStateReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_mbr_state_reason_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_unselectable_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_link_down;
        static const Enum::YLeaf bm_mbr_state_reason_link_deleting;
        static const Enum::YLeaf bm_mbr_state_reason_creating;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_creating;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_deleting;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_admin_down;
        static const Enum::YLeaf bm_mbr_state_reason_replicating;
        static const Enum::YLeaf bm_mbr_state_reason_bandwidth;
        static const Enum::YLeaf bm_mbr_state_reason_loop_back;
        static const Enum::YLeaf bm_mbr_state_reason_activity_type;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_shutdown;
        static const Enum::YLeaf bm_mbr_state_reason_min_selected;
        static const Enum::YLeaf bm_mbr_state_reason_max_selected;
        static const Enum::YLeaf bm_mbr_state_reason_link_limit;
        static const Enum::YLeaf bm_mbr_state_reason_active_limit;
        static const Enum::YLeaf bm_mbr_state_reason_standby_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_expired;
        static const Enum::YLeaf bm_mbr_state_reason_defaulted;
        static const Enum::YLeaf bm_mbr_state_reason_act_or_not_agg;
        static const Enum::YLeaf bm_mbr_state_reason_partner_not_agg;
        static const Enum::YLeaf bm_mbr_state_reason_lagid;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_not_cfgd;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_not_ready;
        static const Enum::YLeaf bm_mbr_state_reason_partner_ood;
        static const Enum::YLeaf bm_mbr_state_reason_partner_not_in_sync;
        static const Enum::YLeaf bm_mbr_state_reason_foreign_partner_oos;
        static const Enum::YLeaf bm_mbr_state_reason_attach_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_partner_not_collecting;
        static const Enum::YLeaf bm_mbr_state_reason_collect_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_standby_foreign;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_starting;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_down;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_nbr_unconfig;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_pe_isolated;
        static const Enum::YLeaf bm_mbr_state_reason_forced_switchover;
        static const Enum::YLeaf bm_mbr_state_reason_errdis_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_mbr_state_info;
        static const Enum::YLeaf bm_mbr_state_reason_active;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_state_info;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_config_info;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_sync;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_bdl_has_no_peer;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_nak;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_transport_unavailable;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_not_configured;
        static const Enum::YLeaf bm_mbr_state_reason_recovery_timer;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_standby;
        static const Enum::YLeaf bm_mbr_state_reason_maximized_out;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_peer_selected;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_connect_timer_running;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_not_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_no_lon;
        static const Enum::YLeaf bm_mbr_state_reason_cumul_rel_bw_limit;
        static const Enum::YLeaf bm_mbr_state_reason_no_mac;
        static const Enum::YLeaf bm_mbr_state_reason_no_system_id;
        static const Enum::YLeaf bm_mbr_state_reason_link_shutdown;
        static const Enum::YLeaf bm_mbr_state_reason_activity_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_activity_iccp;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_icpe_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_no_link_num;
        static const Enum::YLeaf bm_mbr_state_reason_standby_peer_higher_prio;
        static const Enum::YLeaf bm_mbr_state_reason_red_state_standby;
        static const Enum::YLeaf bm_mbr_state_reason_other_red_state_standby;
        static const Enum::YLeaf bm_mbr_state_reason_hold_ing;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_error_disabled;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_efd_disabled;
        static const Enum::YLeaf bm_mbr_state_reason_singleton_pe_isolated;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_starting;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_down;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_nbr_unconfig;
        static const Enum::YLeaf bm_mbr_state_reason_timer_running;
        static const Enum::YLeaf bm_mbr_state_reason_client_bundle_ctrl;
        static const Enum::YLeaf bm_mbr_state_reason_count;

};

class BmdBagEventBdlItemEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_event_bdl_idb_create;
        static const Enum::YLeaf bmd_event_bdl_configured;
        static const Enum::YLeaf bmd_event_bdl_im_state;
        static const Enum::YLeaf bmd_event_bdl_mbr_added;
        static const Enum::YLeaf bmd_event_bdl_mbr_deleted;
        static const Enum::YLeaf bmd_event_bdl_mac_addr;
        static const Enum::YLeaf bmd_event_bdl_first_retry;
        static const Enum::YLeaf bmd_event_bdl_user_config;
        static const Enum::YLeaf bmd_event_bdl_error;
        static const Enum::YLeaf bmd_event_bdl_mlacp_tlv;
        static const Enum::YLeaf bmd_event_bdl_redundancy_role;
        static const Enum::YLeaf bdl_bfd_state_change;
        static const Enum::YLeaf bmd_event_bdl_icl;
        static const Enum::YLeaf bmd_event_bdl_count;

};

class BmdMlacpNodeStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf node_state_incomplete;
        static const Enum::YLeaf node_state_conn_rejected;
        static const Enum::YLeaf node_state_connect_sent;
        static const Enum::YLeaf node_state_unconfigured;
        static const Enum::YLeaf node_state_unreachable;
        static const Enum::YLeaf node_state_iccp_down;
        static const Enum::YLeaf node_state_nak;
        static const Enum::YLeaf node_state_unknown;
        static const Enum::YLeaf node_state_mlacp_down;
        static const Enum::YLeaf node_state_admin_down;
        static const Enum::YLeaf node_state_pe_isolated;
        static const Enum::YLeaf node_state_error;
        static const Enum::YLeaf node_state_test;
        static const Enum::YLeaf node_state_up;

};

class BmdBagEventRgItemEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_event_rg_idb_create;
        static const Enum::YLeaf bmd_event_rg_configured;
        static const Enum::YLeaf bmd_event_rg_user_config;
        static const Enum::YLeaf bmd_event_rg_connect_ion;
        static const Enum::YLeaf bmd_event_rg_data;
        static const Enum::YLeaf bmd_event_rg_sync;
        static const Enum::YLeaf bmd_event_rg_first_retry;
        static const Enum::YLeaf bmd_event_rg_error;
        static const Enum::YLeaf bmd_event_rg_mlacp_tlv;
        static const Enum::YLeaf bmd_event_rg_iccp_event;
        static const Enum::YLeaf bmd_event_rg_count;

};

class BmWhichSystemEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_which_system_actr;
        static const Enum::YLeaf bm_which_system_ptnr;

};

class BmdBfdBdlStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_bfd_bdl_down;
        static const Enum::YLeaf bmd_bfd_bdl_unknown;
        static const Enum::YLeaf bmd_bfd_bdl_up;
        static const Enum::YLeaf bmd_bfd_bdl_count;

};

class BmdMlacpMbrStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf mbr_state_nak;
        static const Enum::YLeaf mbr_state_unknown;
        static const Enum::YLeaf mbr_state_up;
        static const Enum::YLeaf mbr_state_down;
        static const Enum::YLeaf mbr_state_admin_down;
        static const Enum::YLeaf mbr_state_test;
        static const Enum::YLeaf mbr_state_error;

};

class BmdBagTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_bag_target_mbr;
        static const Enum::YLeaf bm_bag_target_bdl;
        static const Enum::YLeaf bm_bag_target_node;
        static const Enum::YLeaf bm_bag_target_rg;

};

class BmMuxstateEnum : public Enum
{
    public:
        static const Enum::YLeaf detached;
        static const Enum::YLeaf waiting;
        static const Enum::YLeaf attached;
        static const Enum::YLeaf collecting;
        static const Enum::YLeaf distributing;
        static const Enum::YLeaf collecting_distributing;

};

class LacpSelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unselected;
        static const Enum::YLeaf standby;
        static const Enum::YLeaf selected;

};

class BmdMemberStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_mbr_state_configured;
        static const Enum::YLeaf bmd_mbr_state_standby;
        static const Enum::YLeaf bmd_mbr_state_hot_standby;
        static const Enum::YLeaf bmd_mbr_state_negotiating;
        static const Enum::YLeaf bmd_mbr_state_bfd_running;
        static const Enum::YLeaf bmd_mbr_state_active;

};

class BmMuxreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_mux_reason_no_reason;
        static const Enum::YLeaf bm_mux_reason_link_down;
        static const Enum::YLeaf bm_mux_reason_link_deleted;
        static const Enum::YLeaf bm_mux_reason_duplex;
        static const Enum::YLeaf bm_mux_reason_bandwidth;
        static const Enum::YLeaf bm_mux_reason_loop_back;
        static const Enum::YLeaf bm_mux_reason_activity_type;
        static const Enum::YLeaf bm_mux_reason_link_limit;
        static const Enum::YLeaf bm_mux_reason_shared;
        static const Enum::YLeaf bm_mux_reason_lagid;
        static const Enum::YLeaf bm_mux_reason_no_bundle;
        static const Enum::YLeaf bm_mux_reason_no_primary;
        static const Enum::YLeaf bm_mux_reason_bundle_down;
        static const Enum::YLeaf bm_mux_reason_individual;
        static const Enum::YLeaf bm_mux_reason_defaulted;
        static const Enum::YLeaf bm_mux_reason_in_sync;
        static const Enum::YLeaf bm_mux_reason_collecting;
        static const Enum::YLeaf bm_mux_reason_active_link_limit;
        static const Enum::YLeaf bm_mux_reason_distributing;
        static const Enum::YLeaf bm_mux_reason_count;

};

class BmFeatureStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_feature_not_configured;
        static const Enum::YLeaf bm_feature_not_operational;
        static const Enum::YLeaf bm_feature_operational;

};

class BmSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf ok;
        static const Enum::YLeaf information;
        static const Enum::YLeaf misconfiguration;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf error;

};

class BundleMlacpModeEnum : public Enum
{
    public:
        static const Enum::YLeaf bundle_mlacp_mode_standby;
        static const Enum::YLeaf bundle_mlacp_mode_active;
        static const Enum::YLeaf bundle_mlacp_mode_count;

};

class BmdBagMlacpSchActionItemEnum : public Enum
{
    public:
        static const Enum::YLeaf switchover;
        static const Enum::YLeaf switchback;

};

class BmStateReasonTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf member_reason;
        static const Enum::YLeaf bundle_reason;

};

class BmdMlacpNodeSyncEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf node_sync_req;
        static const Enum::YLeaf node_sync_done;
        static const Enum::YLeaf node_sync_start;
        static const Enum::YLeaf node_sync_init;
        static const Enum::YLeaf node_sync_singleton;

};

class BmBdlMacSourceEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_bdl_mac_source_unknown;
        static const Enum::YLeaf bm_bdl_mac_source_chassis;
        static const Enum::YLeaf bm_bdl_mac_source_configured;
        static const Enum::YLeaf bm_bdl_mac_source_member;
        static const Enum::YLeaf bm_bdl_mac_source_peer;

};


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_ */

