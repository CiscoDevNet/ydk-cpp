#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_0_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

class LacpBundles : public ydk::Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Bundles; //type: LacpBundles::Bundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles> bundles;
        
}; // LacpBundles


class LacpBundles::Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bundle; //type: LacpBundles::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle> > bundle;
        
}; // LacpBundles::Bundles


class LacpBundles::Bundles::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface; //type: string
        class Data; //type: LacpBundles::Bundles::Bundle::Data
        class Members; //type: LacpBundles::Bundles::Bundle::Members

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data> data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members> members;
        
}; // LacpBundles::Bundles::Bundle


class LacpBundles::Bundles::Bundle::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData
        class BundleSystemId; //type: LacpBundles::Bundles::Bundle::Data::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId> bundle_system_id;
        
}; // LacpBundles::Bundles::Bundle::Data


class LacpBundles::Bundles::Bundle::Data::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress
        class BfdConfig; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress> mac_address;
        
}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig


class LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress


class LacpBundles::Bundles::Bundle::Data::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // LacpBundles::Bundles::Bundle::Data::BundleSystemId


class LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr


class LacpBundles::Bundles::Bundle::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: LacpBundles::Bundles::Bundle::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member> > member;
        
}; // LacpBundles::Bundles::Bundle::Members


class LacpBundles::Bundles::Bundle::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: LacpBundles::Bundles::Bundle::Members::Member::Counters
        class LinkData; //type: LacpBundles::Bundles::Bundle::Members::Member::LinkData
        class MemberMuxData; //type: LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData
        class MacAddress; //type: LacpBundles::Bundles::Bundle::Members::Member::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData> member_mux_data;
        
}; // LacpBundles::Bundles::Bundle::Members::Member


class LacpBundles::Bundles::Bundle::Members::Member::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // LacpBundles::Bundles::Bundle::Members::Member::Counters


class LacpBundles::Bundles::Bundle::Members::Member::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // LacpBundles::Bundles::Bundle::Members::Member::LinkData


class LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData


class LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData


class LacpBundles::Bundles::Bundle::Members::Member::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // LacpBundles::Bundles::Bundle::Members::Member::MacAddress

class BundleInformation : public ydk::Entity
{
    public:
        BundleInformation();
        ~BundleInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class BundleInformation::BfdCounters : public ydk::Entity
{
    public:
        BfdCounters();
        ~BfdCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdCountersBundles; //type: BundleInformation::BfdCounters::BfdCountersBundles
        class BfdCountersMembers; //type: BundleInformation::BfdCounters::BfdCountersMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles> bfd_counters_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers> bfd_counters_members;
        
}; // BundleInformation::BfdCounters


class BundleInformation::BfdCounters::BfdCountersBundles : public ydk::Entity
{
    public:
        BfdCountersBundles();
        ~BfdCountersBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdCountersBundle; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle> > bfd_counters_bundle;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle : public ydk::Entity
{
    public:
        BfdCountersBundle();
        ~BfdCountersBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface; //type: string
        class BfdCountersBundleDescendant; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant
        class BfdCountersBundleChildrenMembers; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers
        class BfdCountersBundleItem; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers> bfd_counters_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant> bfd_counters_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem> bfd_counters_bundle_item;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant : public ydk::Entity
{
    public:
        BfdCountersBundleDescendant();
        ~BfdCountersBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleName; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName
        class BfdCounter; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter> > bfd_counter;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName> bundle_name;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName : public ydk::Entity
{
    public:
        BundleName();
        ~BundleName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter : public ydk::Entity
{
    public:
        BfdCounter();
        ~BfdCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_name; //type: string
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf starting; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf neighbor_unconfigured; //type: uint32
        ydk::YLeaf start_timeouts; //type: uint32
        ydk::YLeaf neighbor_unconfigured_timeouts; //type: uint32
        ydk::YLeaf time_since_cleared; //type: uint64

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers : public ydk::Entity
{
    public:
        BfdCountersBundleChildrenMembers();
        ~BfdCountersBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdCountersBundleChildrenMember; //type: BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember> > bfd_counters_bundle_children_member;
        
}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember : public ydk::Entity
{
    public:
        BfdCountersBundleChildrenMember();
        ~BfdCountersBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf member_name; //type: string
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf starting; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf neighbor_unconfigured; //type: uint32
        ydk::YLeaf start_timeouts; //type: uint32
        ydk::YLeaf neighbor_unconfigured_timeouts; //type: uint32
        ydk::YLeaf time_since_cleared; //type: uint64

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember


class BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem : public ydk::Entity
{
    public:
        BfdCountersBundleItem();
        ~BfdCountersBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string

}; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem


class BundleInformation::BfdCounters::BfdCountersMembers : public ydk::Entity
{
    public:
        BfdCountersMembers();
        ~BfdCountersMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdCountersMember; //type: BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember> > bfd_counters_member;
        
}; // BundleInformation::BfdCounters::BfdCountersMembers


class BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember : public ydk::Entity
{
    public:
        BfdCountersMember();
        ~BfdCountersMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        class BfdCountersMemberItem; //type: BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem> bfd_counters_member_item;
        
}; // BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember


class BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem : public ydk::Entity
{
    public:
        BfdCountersMemberItem();
        ~BfdCountersMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_name; //type: string
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf starting; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf neighbor_unconfigured; //type: uint32
        ydk::YLeaf start_timeouts; //type: uint32
        ydk::YLeaf neighbor_unconfigured_timeouts; //type: uint32
        ydk::YLeaf time_since_cleared; //type: uint64

}; // BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem


class BundleInformation::ScheduledActions : public ydk::Entity
{
    public:
        ScheduledActions();
        ~ScheduledActions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ScheduledActionsBundles; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles> scheduled_actions_bundles;
        
}; // BundleInformation::ScheduledActions


class BundleInformation::ScheduledActions::ScheduledActionsBundles : public ydk::Entity
{
    public:
        ScheduledActionsBundles();
        ~ScheduledActionsBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ScheduledActionsBundle; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle> > scheduled_actions_bundle;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle : public ydk::Entity
{
    public:
        ScheduledActionsBundle();
        ~ScheduledActionsBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface; //type: string
        class ScheduledActionsBundleItem; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem> scheduled_actions_bundle_item;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem : public ydk::Entity
{
    public:
        ScheduledActionsBundleItem();
        ~ScheduledActionsBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        class ScheduledAction; //type: BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction> > scheduled_action;
        
}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem


class BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction : public ydk::Entity
{
    public:
        ScheduledAction();
        ~ScheduledAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mlacp_action; //type: BmdBagMlacpSchActionItem
        ydk::YLeaf time_remaining; //type: uint64
        ydk::YLeaf action_state; //type: BmdSwitchReason

}; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction


class BundleInformation::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleBundles; //type: BundleInformation::Bundle::BundleBundles
        class BundleMembers; //type: BundleInformation::Bundle::BundleMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles> bundle_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers> bundle_members;
        
}; // BundleInformation::Bundle


class BundleInformation::Bundle::BundleBundles : public ydk::Entity
{
    public:
        BundleBundles();
        ~BundleBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleBundle; //type: BundleInformation::Bundle::BundleBundles::BundleBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle> > bundle_bundle;
        
}; // BundleInformation::Bundle::BundleBundles


class BundleInformation::Bundle::BundleBundles::BundleBundle : public ydk::Entity
{
    public:
        BundleBundle();
        ~BundleBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface; //type: string
        class BundleBundleDescendant; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant
        class BundleBundleChildrenMembers; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers
        class BundleBundleItem; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers> bundle_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant> bundle_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem> bundle_bundle_item;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant : public ydk::Entity
{
    public:
        BundleBundleDescendant();
        ~BundleBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData
        class MemberData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData> > member_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress> mac_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers : public ydk::Entity
{
    public:
        BundleBundleChildrenMembers();
        ~BundleBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleBundleChildrenMember; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember> > bundle_bundle_children_member;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember : public ydk::Entity
{
    public:
        BundleBundleChildrenMember();
        ~BundleBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem : public ydk::Entity
{
    public:
        BundleBundleItem();
        ~BundleBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress
        class BfdConfig; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress> mac_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig


class BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress


class BundleInformation::Bundle::BundleMembers : public ydk::Entity
{
    public:
        BundleMembers();
        ~BundleMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleMember; //type: BundleInformation::Bundle::BundleMembers::BundleMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember> > bundle_member;
        
}; // BundleInformation::Bundle::BundleMembers


class BundleInformation::Bundle::BundleMembers::BundleMember : public ydk::Entity
{
    public:
        BundleMember();
        ~BundleMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        class BundleMemberAncestor; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor
        class BundleMemberItem; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor> bundle_member_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem> bundle_member_item;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor : public ydk::Entity
{
    public:
        BundleMemberAncestor();
        ~BundleMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData
        class MemberData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData> > member_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress> mac_address;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem : public ydk::Entity
{
    public:
        BundleMemberItem();
        ~BundleMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters
        class LinkData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData
        class MemberMuxData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData
        class MacAddress; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData> member_mux_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData


class BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress


class BundleInformation::EventsRg : public ydk::Entity
{
    public:
        EventsRg();
        ~EventsRg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsRgMembers; //type: BundleInformation::EventsRg::EventsRgMembers
        class EventsRgIccpGroups; //type: BundleInformation::EventsRg::EventsRgIccpGroups
        class EventsRgBundles; //type: BundleInformation::EventsRg::EventsRgBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles> events_rg_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups> events_rg_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers> events_rg_members;
        
}; // BundleInformation::EventsRg


class BundleInformation::EventsRg::EventsRgMembers : public ydk::Entity
{
    public:
        EventsRgMembers();
        ~EventsRgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsRgMember; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember> > events_rg_member;
        
}; // BundleInformation::EventsRg::EventsRgMembers


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember : public ydk::Entity
{
    public:
        EventsRgMember();
        ~EventsRgMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        class EventsRgMemberAncestor; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor> events_rg_member_ancestor;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor : public ydk::Entity
{
    public:
        EventsRgMemberAncestor();
        ~EventsRgMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups : public ydk::Entity
{
    public:
        EventsRgIccpGroups();
        ~EventsRgIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsRgIccpGroup; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup> > events_rg_iccp_group;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup : public ydk::Entity
{
    public:
        EventsRgIccpGroup();
        ~EventsRgIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group; //type: uint32
        class EventsRgBundleItemIccpGroup; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup> events_rg_bundle_item_iccp_group;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup : public ydk::Entity
{
    public:
        EventsRgBundleItemIccpGroup();
        ~EventsRgBundleItemIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles : public ydk::Entity
{
    public:
        EventsRgBundles();
        ~EventsRgBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsRgBundle; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle> > events_rg_bundle;
        
}; // BundleInformation::EventsRg::EventsRgBundles


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle : public ydk::Entity
{
    public:
        EventsRgBundle();
        ~EventsRgBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface; //type: string
        class EventsRgBundleAncestor; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor> events_rg_bundle_ancestor;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor : public ydk::Entity
{
    public:
        EventsRgBundleAncestor();
        ~EventsRgBundleAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data


class BundleInformation::Lacp : public ydk::Entity
{
    public:
        Lacp();
        ~Lacp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LacpBundles; //type: BundleInformation::Lacp::LacpBundles
        class LacpMembers; //type: BundleInformation::Lacp::LacpMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles> lacp_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers> lacp_members;
        
}; // BundleInformation::Lacp


class BundleInformation::Lacp::LacpBundles : public ydk::Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LacpBundle; //type: BundleInformation::Lacp::LacpBundles::LacpBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle> > lacp_bundle;
        
}; // BundleInformation::Lacp::LacpBundles


class BundleInformation::Lacp::LacpBundles::LacpBundle : public ydk::Entity
{
    public:
        LacpBundle();
        ~LacpBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface; //type: string
        class LacpBundleItem; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem
        class LacpBundleDescendant; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant
        class LacpBundleChildrenMembers; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers> lacp_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant> lacp_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem> lacp_bundle_item;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem : public ydk::Entity
{
    public:
        LacpBundleItem();
        ~LacpBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant : public ydk::Entity
{
    public:
        LacpBundleDescendant();
        ~LacpBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData
        class MemberData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData> > member_data;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf selection_state; //type: LacpSelState
        ydk::YLeaf period_state; //type: LacpPeriodState
        ydk::YLeaf receive_machine_state; //type: Rxstates
        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf actor_churn_state; //type: LacpChurnstates
        ydk::YLeaf partner_churn_state; //type: LacpChurnstates
        ydk::YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo : public ydk::Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo : public ydk::Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo : public ydk::Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mbr_type; //type: BmdMemberTypeEnum
        class Local; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign : public ydk::Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers : public ydk::Entity
{
    public:
        LacpBundleChildrenMembers();
        ~LacpBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LacpBundleChildrenMember; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember> > lacp_bundle_children_member;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember : public ydk::Entity
{
    public:
        LacpBundleChildrenMember();
        ~LacpBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf selection_state; //type: LacpSelState
        ydk::YLeaf period_state; //type: LacpPeriodState
        ydk::YLeaf receive_machine_state; //type: Rxstates
        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf actor_churn_state; //type: LacpChurnstates
        ydk::YLeaf partner_churn_state; //type: LacpChurnstates
        ydk::YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo : public ydk::Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo : public ydk::Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo

class BmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf misconfiguration;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf error;

};

class BmFeatureStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_feature_not_configured;
        static const ydk::Enum::YLeaf bm_feature_not_operational;
        static const ydk::Enum::YLeaf bm_feature_operational;

};

class LoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf value_;
        static const ydk::Enum::YLeaf source_ip;
        static const ydk::Enum::YLeaf destination_ip;
        static const ydk::Enum::YLeaf unknown;

};

class LacpSelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unselected;
        static const ydk::Enum::YLeaf standby;
        static const ydk::Enum::YLeaf selected;

};

class BmdMlacpNodeSyncEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node_sync_req;
        static const ydk::Enum::YLeaf node_sync_done;
        static const ydk::Enum::YLeaf node_sync_start;
        static const ydk::Enum::YLeaf node_sync_init;
        static const ydk::Enum::YLeaf node_sync_singleton;

};

class BundleMlacpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bundle_mlacp_mode_standby;
        static const ydk::Enum::YLeaf bundle_mlacp_mode_active;
        static const ydk::Enum::YLeaf bundle_mlacp_mode_count;

};

class BmdBagMlacpSchActionItem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf switchover;
        static const ydk::Enum::YLeaf switchback;

};

class BmdSwitchReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_switch_reason_none;
        static const ydk::Enum::YLeaf bm_switch_reason_noop;
        static const ydk::Enum::YLeaf bm_switch_reason_not_mlacp;
        static const ydk::Enum::YLeaf bm_switch_reason_revertive;
        static const ydk::Enum::YLeaf bm_switch_reason_bdl_down;
        static const ydk::Enum::YLeaf bm_switch_reason_recovery;
        static const ydk::Enum::YLeaf bm_switch_reason_preceding_error;
        static const ydk::Enum::YLeaf bm_switch_reason_wrong_order;
        static const ydk::Enum::YLeaf bm_switch_reason_singleton;

};

class BmAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_af_id_ipv4;
        static const ydk::Enum::YLeaf bm_af_id_ipv6;

};

class BmdBagEventBdlItem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_event_bdl_idb_create;
        static const ydk::Enum::YLeaf bmd_event_bdl_configured;
        static const ydk::Enum::YLeaf bmd_event_bdl_im_state;
        static const ydk::Enum::YLeaf bmd_event_bdl_mbr_added;
        static const ydk::Enum::YLeaf bmd_event_bdl_mbr_deleted;
        static const ydk::Enum::YLeaf bmd_event_bdl_mac_addr;
        static const ydk::Enum::YLeaf bmd_event_bdl_first_retry;
        static const ydk::Enum::YLeaf bmd_event_bdl_user_config;
        static const ydk::Enum::YLeaf bmd_event_bdl_error;
        static const ydk::Enum::YLeaf bmd_event_bdl_mlacp_tlv;
        static const ydk::Enum::YLeaf bmd_event_bdl_redundancy_role;
        static const ydk::Enum::YLeaf bdl_bfd_state_change;
        static const ydk::Enum::YLeaf bmd_event_bdl_icl;
        static const ydk::Enum::YLeaf bmd_event_bdl_count;

};

class BmMuxreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_mux_reason_no_reason;
        static const ydk::Enum::YLeaf bm_mux_reason_link_down;
        static const ydk::Enum::YLeaf bm_mux_reason_link_deleted;
        static const ydk::Enum::YLeaf bm_mux_reason_duplex;
        static const ydk::Enum::YLeaf bm_mux_reason_bandwidth;
        static const ydk::Enum::YLeaf bm_mux_reason_loop_back;
        static const ydk::Enum::YLeaf bm_mux_reason_activity_type;
        static const ydk::Enum::YLeaf bm_mux_reason_link_limit;
        static const ydk::Enum::YLeaf bm_mux_reason_shared;
        static const ydk::Enum::YLeaf bm_mux_reason_lagid;
        static const ydk::Enum::YLeaf bm_mux_reason_no_bundle;
        static const ydk::Enum::YLeaf bm_mux_reason_no_primary;
        static const ydk::Enum::YLeaf bm_mux_reason_bundle_down;
        static const ydk::Enum::YLeaf bm_mux_reason_individual;
        static const ydk::Enum::YLeaf bm_mux_reason_defaulted;
        static const ydk::Enum::YLeaf bm_mux_reason_in_sync;
        static const ydk::Enum::YLeaf bm_mux_reason_collecting;
        static const ydk::Enum::YLeaf bm_mux_reason_active_link_limit;
        static const ydk::Enum::YLeaf bm_mux_reason_distributing;
        static const ydk::Enum::YLeaf bm_mux_reason_count;

};

class BmdMlacpMbrStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mbr_state_nak;
        static const ydk::Enum::YLeaf mbr_state_unknown;
        static const ydk::Enum::YLeaf mbr_state_up;
        static const ydk::Enum::YLeaf mbr_state_down;
        static const ydk::Enum::YLeaf mbr_state_admin_down;
        static const ydk::Enum::YLeaf mbr_state_test;
        static const ydk::Enum::YLeaf mbr_state_error;

};

class BmdMemberTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_mbr_local;
        static const ydk::Enum::YLeaf bmd_mbr_foreign;
        static const ydk::Enum::YLeaf bmd_mbr_unknown;

};

class BmBdlMacSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_bdl_mac_source_unknown;
        static const ydk::Enum::YLeaf bm_bdl_mac_source_chassis;
        static const ydk::Enum::YLeaf bm_bdl_mac_source_configured;
        static const ydk::Enum::YLeaf bm_bdl_mac_source_member;
        static const ydk::Enum::YLeaf bm_bdl_mac_source_peer;

};

class LacpChurnstates : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_churn;
        static const ydk::Enum::YLeaf churn;
        static const ydk::Enum::YLeaf churn_monitor;

};

class BmdMlacpNodeStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node_state_incomplete;
        static const ydk::Enum::YLeaf node_state_conn_rejected;
        static const ydk::Enum::YLeaf node_state_connect_sent;
        static const ydk::Enum::YLeaf node_state_unconfigured;
        static const ydk::Enum::YLeaf node_state_unreachable;
        static const ydk::Enum::YLeaf node_state_iccp_down;
        static const ydk::Enum::YLeaf node_state_nak;
        static const ydk::Enum::YLeaf node_state_unknown;
        static const ydk::Enum::YLeaf node_state_mlacp_down;
        static const ydk::Enum::YLeaf node_state_admin_down;
        static const ydk::Enum::YLeaf node_state_pe_isolated;
        static const ydk::Enum::YLeaf node_state_error;
        static const ydk::Enum::YLeaf node_state_test;
        static const ydk::Enum::YLeaf node_state_up;

};

class BmdBagEventMbrItem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_event_mbr_idb_create;
        static const ydk::Enum::YLeaf bmd_event_mbr_bdl_add;
        static const ydk::Enum::YLeaf bmd_event_mbr_im_state;
        static const ydk::Enum::YLeaf bmd_event_mbr_sel_logic;
        static const ydk::Enum::YLeaf bmd_event_mbr_mux;
        static const ydk::Enum::YLeaf bmd_event_mbr_bfd;
        static const ydk::Enum::YLeaf bmd_event_mbr_expired;
        static const ydk::Enum::YLeaf bmd_event_mbr_defaulted;
        static const ydk::Enum::YLeaf bmd_event_mbr_first_retry;
        static const ydk::Enum::YLeaf bmd_event_mbr_msg;
        static const ydk::Enum::YLeaf bmd_event_mbr_error;
        static const ydk::Enum::YLeaf bmd_event_mbr_mlacp_tlv;
        static const ydk::Enum::YLeaf bmd_event_mbr_redundancy_role;
        static const ydk::Enum::YLeaf bmd_event_mbr_count;

};

class BmWhichSystem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_which_system_actr;
        static const ydk::Enum::YLeaf bm_which_system_ptnr;

};

class Rxstates : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf current_rx;
        static const ydk::Enum::YLeaf expired;
        static const ydk::Enum::YLeaf defaulted;
        static const ydk::Enum::YLeaf initialize;
        static const ydk::Enum::YLeaf lacp_disabled;
        static const ydk::Enum::YLeaf port_disabled;

};

class BundleMedia : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bundle_media_ethernet;
        static const ydk::Enum::YLeaf bundle_media_pos;
        static const ydk::Enum::YLeaf bundle_media_count;

};

class BmdBagTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_bag_target_mbr;
        static const ydk::Enum::YLeaf bm_bag_target_bdl;
        static const ydk::Enum::YLeaf bm_bag_target_node;
        static const ydk::Enum::YLeaf bm_bag_target_rg;

};

class BmdBagEventData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_bag_evt_data_none;
        static const ydk::Enum::YLeaf bmd_bag_evt_data_error;
        static const ydk::Enum::YLeaf bmd_bag_evt_data_string;

};

class LacpPeriodState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf period_s_low;
        static const ydk::Enum::YLeaf period_fast;
        static const ydk::Enum::YLeaf period_none;

};

class BmBdlState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_bdl_state_admin_down;
        static const ydk::Enum::YLeaf bm_bdl_state_down;
        static const ydk::Enum::YLeaf bm_bdl_state_client_down;
        static const ydk::Enum::YLeaf bm_bdl_state_ptnr_down;
        static const ydk::Enum::YLeaf bm_bdl_state_bundle_shutdown;
        static const ydk::Enum::YLeaf bm_bdl_state_pe_isolated;
        static const ydk::Enum::YLeaf bm_bdl_state_nak;
        static const ydk::Enum::YLeaf bm_bdl_state_up_active;
        static const ydk::Enum::YLeaf bm_bdl_state_mlacp_hot_standby;
        static const ydk::Enum::YLeaf bm_bdl_state_mlacp_cold_standby;
        static const ydk::Enum::YLeaf bm_bdl_state_unknown;
        static const ydk::Enum::YLeaf bm_bdl_state_cold_standby;
        static const ydk::Enum::YLeaf bm_bdl_state_error_disabled;
        static const ydk::Enum::YLeaf bm_bdl_state_efd_disabled;

};

class BmdMlacpBdlStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bdl_state_nak;
        static const ydk::Enum::YLeaf bdl_state_unknown;
        static const ydk::Enum::YLeaf bdl_state_no_sync;
        static const ydk::Enum::YLeaf bdl_state_rec_delay;
        static const ydk::Enum::YLeaf bdl_state_up;
        static const ydk::Enum::YLeaf bdl_state_down;
        static const ydk::Enum::YLeaf bdl_state_admin_down;
        static const ydk::Enum::YLeaf bdl_state_test;
        static const ydk::Enum::YLeaf bdl_state_error;

};

class BmdBagEventRgItem : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_event_rg_idb_create;
        static const ydk::Enum::YLeaf bmd_event_rg_configured;
        static const ydk::Enum::YLeaf bmd_event_rg_user_config;
        static const ydk::Enum::YLeaf bmd_event_rg_connect_ion;
        static const ydk::Enum::YLeaf bmd_event_rg_data;
        static const ydk::Enum::YLeaf bmd_event_rg_sync;
        static const ydk::Enum::YLeaf bmd_event_rg_first_retry;
        static const ydk::Enum::YLeaf bmd_event_rg_error;
        static const ydk::Enum::YLeaf bmd_event_rg_mlacp_tlv;
        static const ydk::Enum::YLeaf bmd_event_rg_iccp_event;
        static const ydk::Enum::YLeaf bmd_event_rg_count;

};

class BundleMedia1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf pos;

};

class BmdMlacpSwitchover : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_mlacp_switchover_nonrevertive;
        static const ydk::Enum::YLeaf bmd_mlacp_switchover_brute_force;
        static const ydk::Enum::YLeaf bmd_mlacp_switchover_revertive;
        static const ydk::Enum::YLeaf bmd_mlacp_switchover_count;

};

class BmMbrStateReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_mbr_state_reason_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_unselectable_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_deleting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_creating;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_creating;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_deleting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_admin_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_replicating;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bandwidth;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_loop_back;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_activity_type;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_shutdown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_min_selected;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_max_selected;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_limit;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_active_limit;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_standby_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_expired;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_defaulted;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_act_or_not_agg;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_not_agg;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_lagid;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_not_cfgd;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_not_ready;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_ood;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_not_in_sync;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_foreign_partner_oos;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_attach_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_not_collecting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_collect_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_standby_foreign;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_starting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_nbr_unconfig;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_pe_isolated;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_forced_switchover;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_errdis_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_mbr_state_info;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_active;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_state_info;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_config_info;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_sync;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_bdl_has_no_peer;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_nak;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_transport_unavailable;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_not_configured;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_recovery_timer;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_standby;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_maximized_out;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_peer_selected;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_connect_timer_running;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_not_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_lon;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_cumul_rel_bw_limit;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_mac;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_system_id;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_shutdown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_activity_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_activity_iccp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_icpe_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_link_num;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_standby_peer_higher_prio;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_red_state_standby;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_other_red_state_standby;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_hold_ing;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_error_disabled;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_efd_disabled;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_singleton_pe_isolated;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_starting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_nbr_unconfig;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_timer_running;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_client_bundle_ctrl;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_count;

};

class BmStateReasonTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf member_reason;
        static const ydk::Enum::YLeaf bundle_reason;

};

class BmdBfdBdlState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_bfd_bdl_down;
        static const ydk::Enum::YLeaf bmd_bfd_bdl_unknown;
        static const ydk::Enum::YLeaf bmd_bfd_bdl_up;
        static const ydk::Enum::YLeaf bmd_bfd_bdl_count;

};

class BmMuxstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detached;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf collecting;
        static const ydk::Enum::YLeaf distributing;
        static const ydk::Enum::YLeaf collecting_distributing;

};

class BmdMemberState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_mbr_state_configured;
        static const ydk::Enum::YLeaf bmd_mbr_state_standby;
        static const ydk::Enum::YLeaf bmd_mbr_state_hot_standby;
        static const ydk::Enum::YLeaf bmd_mbr_state_negotiating;
        static const ydk::Enum::YLeaf bmd_mbr_state_bfd_running;
        static const ydk::Enum::YLeaf bmd_mbr_state_active;

};


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_0_ */

