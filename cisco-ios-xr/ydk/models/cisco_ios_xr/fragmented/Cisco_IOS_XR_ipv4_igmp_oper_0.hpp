#ifndef _CISCO_IOS_XR_IPV4_IGMP_OPER_0_
#define _CISCO_IOS_XR_IPV4_IGMP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

class Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

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

        class Standby; //type: Mld::Standby
        class Active; //type: Mld::Active

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby> standby;
        
}; // Mld


class Mld::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrfs; //type: Mld::Standby::Vrfs
        class Process; //type: Mld::Standby::Process
        class DefaultContext; //type: Mld::Standby::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext> default_context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process> process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs> vrfs;
        
}; // Mld::Standby


class Mld::Standby::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Mld::Standby::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf> > vrf;
        
}; // Mld::Standby::Vrfs


class Mld::Standby::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Summary; //type: Mld::Standby::Vrfs::Vrf::Summary
        class InterfaceStateOns; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns
        class DetailGroups; //type: Mld::Standby::Vrfs::Vrf::DetailGroups
        class NonActiveGroups; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups
        class SsmMaps; //type: Mld::Standby::Vrfs::Vrf::SsmMaps
        class ExplicitGroups; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups
        class InterfaceTable; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable
        class InterfaceUnicastQosAdjusts; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts
        class Ranges; //type: Mld::Standby::Vrfs::Vrf::Ranges
        class IfrsInterfaces; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaces
        class TrafficCounters; //type: Mld::Standby::Vrfs::Vrf::TrafficCounters
        class Groups; //type: Mld::Standby::Vrfs::Vrf::Groups
        class GroupSummary; //type: Mld::Standby::Vrfs::Vrf::GroupSummary
        class IfrsInterfaceSummary; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable
        class SsmMapDetails; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails
        class InterfaceStateOffs; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOffs

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups> detail_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups> explicit_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::GroupSummary> group_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups> non_active_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails> ssm_map_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMaps> ssm_maps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::TrafficCounters> traffic_counters;
        
}; // Mld::Standby::Vrfs::Vrf


class Mld::Standby::Vrfs::Vrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf supported_interfaces; //type: uint32
        ydk::YLeaf unsupported_interfaces; //type: uint32
        ydk::YLeaf enabled_interface_count; //type: uint32
        ydk::YLeaf disabled_interface_count; //type: uint32
        ydk::YLeaf tunnel_mte_config_count; //type: uint32
        ydk::YLeaf node_low_memory; //type: boolean
        class Interface; //type: Mld::Standby::Vrfs::Vrf::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Summary::Interface> > interface;
        
}; // Mld::Standby::Vrfs::Vrf::Summary


class Mld::Standby::Vrfs::Vrf::Summary::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf on_off; //type: boolean
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32

}; // Mld::Standby::Vrfs::Vrf::Summary::Interface


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns : public ydk::Entity
{
    public:
        InterfaceStateOns();
        ~InterfaceStateOns();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStateOn; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn : public ydk::Entity
{
    public:
        InterfaceStateOn();
        ~InterfaceStateOn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::DetailGroups : public ydk::Entity
{
    public:
        DetailGroups();
        ~DetailGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailGroup; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup> > detail_group;
        
}; // Mld::Standby::Vrfs::Vrf::DetailGroups


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup : public ydk::Entity
{
    public:
        DetailGroup();
        ~DetailGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf is_router_exclude_mode; //type: boolean
        ydk::YLeaf is_host_exclude_mode; //type: boolean
        class GroupInfo; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source> > source;
        
}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_remote; //type: boolean
        ydk::YLeaf is_forward; //type: boolean
        ydk::YLeaf is_we_report; //type: boolean
        ydk::YLeaf flags; //type: int32
        ydk::YLeaf is_added; //type: boolean
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source


class Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress


class Mld::Standby::Vrfs::Vrf::NonActiveGroups : public ydk::Entity
{
    public:
        NonActiveGroups();
        ~NonActiveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonActiveGroups_; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups


class Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_ : public ydk::Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_


class Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress


class Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress


class Mld::Standby::Vrfs::Vrf::SsmMaps : public ydk::Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMap; //type: Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap> > ssm_map;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMaps


class Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap


class Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::ExplicitGroups : public ydk::Entity
{
    public:
        ExplicitGroups();
        ~ExplicitGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExplicitGroup; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup : public ydk::Entity
{
    public:
        ExplicitGroup();
        ~ExplicitGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf include_hosts; //type: uint32
        ydk::YLeaf exclude_hosts; //type: uint32
        class GroupInfo; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_exclude; //type: boolean
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address


class Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Mld::Standby::Vrfs::Vrf::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface> > interface;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceTable


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjusts();
        ~InterfaceUnicastQosAdjusts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceUnicastQosAdjust; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjust();
        ~InterfaceUnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_access; //type: boolean
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf rate_increments; //type: uint32
        ydk::YLeaf rate_decrements; //type: uint32
        class Update; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_add; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf received_time; //type: uint64
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Mld::Standby::Vrfs::Vrf::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Mld::Standby::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Mld::Standby::Vrfs::Vrf::Ranges


class Mld::Standby::Vrfs::Vrf::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_mask; //type: int32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf protocol; //type: IgmpEdmProtocol
        ydk::YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::Vrfs::Vrf::Ranges::Range


class Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::IfrsInterfaces : public ydk::Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfrsInterface; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaces


class Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public ydk::Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf join_group_count; //type: uint32
        class IgmpInterfaceEntry; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public ydk::Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf packet_manager_input_errors; //type: uint32
        ydk::YLeaf packet_manager_output_errors; //type: uint32
        ydk::YLeaf checksum_errors; //type: uint32
        ydk::YLeaf receive_socket_errors; //type: uint32
        ydk::YLeaf socket_errors; //type: uint32
        ydk::YLeaf bad_scope_errors; //type: uint32
        ydk::YLeaf auxillary_data_length_errors; //type: uint32
        ydk::YLeaf invalid_source_address_errors; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf miscellaneous_errors; //type: uint32
        ydk::YLeaf input_queries; //type: uint32
        ydk::YLeaf input_reports; //type: uint32
        ydk::YLeaf input_leaves; //type: uint32
        ydk::YLeaf input_mtrace; //type: uint32
        ydk::YLeaf input_dvmrp; //type: uint32
        ydk::YLeaf input_pim; //type: uint32
        ydk::YLeaf output_queries; //type: uint32
        ydk::YLeaf output_reports; //type: uint32
        ydk::YLeaf output_leaves; //type: uint32
        ydk::YLeaf output_mtrace; //type: uint32
        ydk::YLeaf output_dvmrp; //type: uint32
        ydk::YLeaf output_pim; //type: uint32
        ydk::YLeaf get_packet_failure; //type: uint32
        ydk::YLeaf output_no_parent_interface_handle; //type: uint32
        ydk::YLeaf input_no_idb; //type: uint32
        ydk::YLeaf input_no_vrf_in_idb; //type: uint32
        ydk::YLeaf input_disabled_idb; //type: uint32
        ydk::YLeaf input_martian_address; //type: uint32
        ydk::YLeaf input_no_assigned_vrf_id; //type: uint32
        ydk::YLeaf input_no_vrf_mtrace; //type: uint32
        ydk::YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Mld::Standby::Vrfs::Vrf::TrafficCounters


class Mld::Standby::Vrfs::Vrf::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Mld::Standby::Vrfs::Vrf::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Groups::Group> > group;
        
}; // Mld::Standby::Vrfs::Vrf::Groups


class Mld::Standby::Vrfs::Vrf::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr
        class LastReporter; //type: Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::Groups::Group


class Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter


class Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress


class Mld::Standby::Vrfs::Vrf::GroupSummary : public ydk::Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groutes; //type: uint32
        ydk::YLeaf sg_routes; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_low_memory; //type: boolean

}; // Mld::Standby::Vrfs::Vrf::GroupSummary


class Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary : public ydk::Entity
{
    public:
        IfrsInterfaceSummary();
        ~IfrsInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf configuration_count; //type: uint32

}; // Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary


class Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable : public ydk::Entity
{
    public:
        GlobalInterfaceTable();
        ~GlobalInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface> > interface;
        
}; // Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable


class Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface


class Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address


class Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress


class Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::SsmMapDetails : public ydk::Entity
{
    public:
        SsmMapDetails();
        ~SsmMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMapDetail; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail : public ydk::Entity
{
    public:
        SsmMapDetail();
        ~SsmMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf response_pending; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint64
        class MapInfo; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo : public ydk::Entity
{
    public:
        MapInfo();
        ~MapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources : public ydk::Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources


class Mld::Standby::Vrfs::Vrf::InterfaceStateOffs : public ydk::Entity
{
    public:
        InterfaceStateOffs();
        ~InterfaceStateOffs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStateOff; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOffs


class Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff : public ydk::Entity
{
    public:
        InterfaceStateOff();
        ~InterfaceStateOff();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff


class Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address


class Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Mld::Standby::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AmtSummary; //type: Mld::Standby::Process::AmtSummary
        class Nsr; //type: Mld::Standby::Process::Nsr
        class AmtGatewaies; //type: Mld::Standby::Process::AmtGatewaies
        class UnicastQosAdjustStats; //type: Mld::Standby::Process::UnicastQosAdjustStats
        class BviStatistics; //type: Mld::Standby::Process::BviStatistics
        class Nsf; //type: Mld::Standby::Process::Nsf

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::AmtGatewaies> amt_gatewaies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::AmtSummary> amt_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::BviStatistics> bvi_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::UnicastQosAdjustStats> unicast_qos_adjust_stats;
        
}; // Mld::Standby::Process


class Mld::Standby::Process::AmtSummary : public ydk::Entity
{
    public:
        AmtSummary();
        ~AmtSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf anycast_prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf relay_address; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf gateway_count; //type: uint32
        ydk::YLeaf max_gateway; //type: uint32
        ydk::YLeaf tunnel_count; //type: uint32
        ydk::YLeaf tunnel_configured_maximum; //type: uint32
        ydk::YLeaf is_acl_configured; //type: boolean
        ydk::YLeaf is_gateway_simulation; //type: boolean
        ydk::YLeaf is_ou_of_resource; //type: boolean

}; // Mld::Standby::Process::AmtSummary


class Mld::Standby::Process::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: uint8
        ydk::YLeaf partner_proc_connected; //type: boolean
        ydk::YLeaf collab_conv_done; //type: boolean
        ydk::YLeaf rmf_notification_done; //type: boolean
        ydk::YLeaf last_proc; //type: uint64
        ydk::YLeaf last_proc_connection_up; //type: uint64
        ydk::YLeaf last_proc_connection_dn; //type: uint64
        ydk::YLeaf last_rmf_ready; //type: uint64
        ydk::YLeaf last_rmf_not_ready; //type: uint64
        ydk::YLeaf count_proc_connection_up; //type: uint32
        ydk::YLeaf count_proc_connection_dn; //type: uint32
        ydk::YLeaf count_rmf_ready; //type: uint32
        ydk::YLeaf count_rmf_not_ready; //type: uint32

}; // Mld::Standby::Process::Nsr


class Mld::Standby::Process::AmtGatewaies : public ydk::Entity
{
    public:
        AmtGatewaies();
        ~AmtGatewaies();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AmtGateway; //type: Mld::Standby::Process::AmtGatewaies::AmtGateway

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Process::AmtGatewaies::AmtGateway> > amt_gateway;
        
}; // Mld::Standby::Process::AmtGatewaies


class Mld::Standby::Process::AmtGatewaies::AmtGateway : public ydk::Entity
{
    public:
        AmtGateway();
        ~AmtGateway();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_address; //type: string
        ydk::YLeaf port; //type: int32
        ydk::YLeaf amtgw; //type: string
        ydk::YLeaf amt_port; //type: uint32
        ydk::YLeaf key_len; //type: uint32
        ydk::YLeaf amtnh; //type: uint32
        ydk::YLeaf amt_nonce; //type: uint32
        ydk::YLeaf idb; //type: uint64
        ydk::YLeaf mem_upd_in; //type: uint32
        ydk::YLeaf mem_upd_out; //type: uint32

}; // Mld::Standby::Process::AmtGatewaies::AmtGateway


class Mld::Standby::Process::UnicastQosAdjustStats : public ydk::Entity
{
    public:
        UnicastQosAdjustStats();
        ~UnicastQosAdjustStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queues; //type: uint16
        ydk::YLeaf batches; //type: uint16
        ydk::YLeaf add_to_batches; //type: uint32
        ydk::YLeaf delete_to_batches; //type: uint32
        ydk::YLeaf send_success; //type: uint32
        ydk::YLeaf send_errors; //type: uint32
        ydk::YLeaf send_comm_errors; //type: uint32
        ydk::YLeaf send_partial_errors; //type: uint32
        ydk::YLeaf received_resync_requests; //type: uint32
        ydk::YLeaf sent_resync_bulks; //type: uint32
        ydk::YLeaf is_resync_received; //type: boolean
        ydk::YLeaf is_resync_required; //type: boolean
        ydk::YLeaf is_resync_start_sent; //type: boolean
        ydk::YLeaf is_qos_s_sweeped; //type: boolean
        ydk::YLeaf last_sweep_time; //type: uint64
        ydk::YLeaf last_download_time; //type: uint64

}; // Mld::Standby::Process::UnicastQosAdjustStats


class Mld::Standby::Process::BviStatistics : public ydk::Entity
{
    public:
        BviStatistics();
        ~BviStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive_buffers; //type: uint32
        ydk::YLeaf release_buffers; //type: uint32
        ydk::YLeaf send_blocks; //type: uint32
        ydk::YLeaf release_fail_buffers; //type: uint32
        ydk::YLeaf null_buffer_handles; //type: uint32
        ydk::YLeaf rx_ipc_open_notif; //type: uint32
        ydk::YLeaf rx_ipc_close_notif; //type: uint32
        ydk::YLeaf rx_ipc_error_notif; //type: uint32
        ydk::YLeaf rx_ipc_lwm_notif; //type: uint32
        ydk::YLeaf rx_ipc_input_wait_notif; //type: uint32
        ydk::YLeaf rx_ipc_send_status_notif; //type: uint32
        ydk::YLeaf rx_ipc_publish_notif; //type: uint32
        ydk::YLeaf rx_ipc_q_full_notif; //type: uint32
        ydk::YLeaf rx_ipc_output_notif; //type: uint32
        ydk::YLeaf rx_ipc_connect_notif; //type: uint32
        ydk::YLeaf rx_igmp_packet_success; //type: uint32
        ydk::YLeaf rx_add_mrouter_msg; //type: uint32
        ydk::YLeaf rx_delete_mrouter_msg; //type: uint32
        ydk::YLeaf rx_sweep_mrouter_msg; //type: uint32
        ydk::YLeaf tx_add_mrouter_msg; //type: uint32
        ydk::YLeaf tx_delete_mrouter_msg; //type: uint32
        ydk::YLeaf tx_sweep_mrouter_msg; //type: uint32
        ydk::YLeaf rx_unknown_mrouter_msg; //type: uint32
        ydk::YLeaf tx_unknown_mrouter_msg; //type: uint32
        ydk::YLeaf tx_buffer_errors; //type: uint32
        ydk::YLeaf tx_buffers; //type: uint32
        ydk::YLeaf tx_protocol_buffers; //type: uint32
        ydk::YLeaf tx_mrouter_buffers; //type: uint32
        ydk::YLeaf tx_unknown_buffers; //type: uint32
        ydk::YLeaf wtx_msg_recvd; //type: uint32
        ydk::YLeaf wtx_msg_sent; //type: uint32
        ydk::YLeaf wtx_msg_proto_sent; //type: uint32
        ydk::YLeaf wtx_msg_drop_dc; //type: uint32
        ydk::YLeaf wtx_msg_drop_nomem; //type: uint32
        ydk::YLeaf wtx_msg_freed; //type: uint32

}; // Mld::Standby::Process::BviStatistics


class Mld::Standby::Process::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_multicast_nsf_active; //type: boolean
        ydk::YLeaf multicast_nsf_timeout; //type: uint32
        ydk::YLeaf multicast_nsf_time_left; //type: uint32
        ydk::YLeaf respawn_count; //type: uint32
        ydk::YLeaf last_nsf_on; //type: int64
        ydk::YLeaf last_nsf_off; //type: int64
        ydk::YLeaf last_nsf_on_min; //type: int32
        ydk::YLeaf last_nsf_off_min; //type: int32
        ydk::YLeaf last_icd_notif_recv; //type: int64
        ydk::YLeaf last_icd_notif_recv_min; //type: int32

}; // Mld::Standby::Process::Nsf


class Mld::Standby::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: Mld::Standby::DefaultContext::Summary
        class InterfaceStateOns; //type: Mld::Standby::DefaultContext::InterfaceStateOns
        class DetailGroups; //type: Mld::Standby::DefaultContext::DetailGroups
        class NonActiveGroups; //type: Mld::Standby::DefaultContext::NonActiveGroups
        class SsmMaps; //type: Mld::Standby::DefaultContext::SsmMaps
        class ExplicitGroups; //type: Mld::Standby::DefaultContext::ExplicitGroups
        class InterfaceTable; //type: Mld::Standby::DefaultContext::InterfaceTable
        class InterfaceUnicastQosAdjusts; //type: Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts
        class Ranges; //type: Mld::Standby::DefaultContext::Ranges
        class IfrsInterfaces; //type: Mld::Standby::DefaultContext::IfrsInterfaces
        class TrafficCounters; //type: Mld::Standby::DefaultContext::TrafficCounters
        class Groups; //type: Mld::Standby::DefaultContext::Groups
        class GroupSummary; //type: Mld::Standby::DefaultContext::GroupSummary
        class IfrsInterfaceSummary; //type: Mld::Standby::DefaultContext::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Mld::Standby::DefaultContext::GlobalInterfaceTable
        class SsmMapDetails; //type: Mld::Standby::DefaultContext::SsmMapDetails
        class InterfaceStateOffs; //type: Mld::Standby::DefaultContext::InterfaceStateOffs

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups> detail_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups> explicit_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::GroupSummary> group_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::NonActiveGroups> non_active_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::SsmMapDetails> ssm_map_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::SsmMaps> ssm_maps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::TrafficCounters> traffic_counters;
        
}; // Mld::Standby::DefaultContext


class Mld::Standby::DefaultContext::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf supported_interfaces; //type: uint32
        ydk::YLeaf unsupported_interfaces; //type: uint32
        ydk::YLeaf enabled_interface_count; //type: uint32
        ydk::YLeaf disabled_interface_count; //type: uint32
        ydk::YLeaf tunnel_mte_config_count; //type: uint32
        ydk::YLeaf node_low_memory; //type: boolean
        class Interface; //type: Mld::Standby::DefaultContext::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Summary::Interface> > interface;
        
}; // Mld::Standby::DefaultContext::Summary


class Mld::Standby::DefaultContext::Summary::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf on_off; //type: boolean
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32

}; // Mld::Standby::DefaultContext::Summary::Interface


class Mld::Standby::DefaultContext::InterfaceStateOns : public ydk::Entity
{
    public:
        InterfaceStateOns();
        ~InterfaceStateOns();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStateOn; //type: Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Mld::Standby::DefaultContext::InterfaceStateOns


class Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn : public ydk::Entity
{
    public:
        InterfaceStateOn();
        ~InterfaceStateOn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn


class Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address


class Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Mld::Standby::DefaultContext::DetailGroups : public ydk::Entity
{
    public:
        DetailGroups();
        ~DetailGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailGroup; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup> > detail_group;
        
}; // Mld::Standby::DefaultContext::DetailGroups


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup : public ydk::Entity
{
    public:
        DetailGroup();
        ~DetailGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf is_router_exclude_mode; //type: boolean
        ydk::YLeaf is_host_exclude_mode; //type: boolean
        class GroupInfo; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source> > source;
        
}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_remote; //type: boolean
        ydk::YLeaf is_forward; //type: boolean
        ydk::YLeaf is_we_report; //type: boolean
        ydk::YLeaf flags; //type: int32
        ydk::YLeaf is_added; //type: boolean
        class SourceAddress; //type: Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source


class Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress


class Mld::Standby::DefaultContext::NonActiveGroups : public ydk::Entity
{
    public:
        NonActiveGroups();
        ~NonActiveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonActiveGroups_; //type: Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Mld::Standby::DefaultContext::NonActiveGroups


class Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_ : public ydk::Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_


class Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress


class Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress


class Mld::Standby::DefaultContext::SsmMaps : public ydk::Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMap; //type: Mld::Standby::DefaultContext::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::SsmMaps::SsmMap> > ssm_map;
        
}; // Mld::Standby::DefaultContext::SsmMaps


class Mld::Standby::DefaultContext::SsmMaps::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::DefaultContext::SsmMaps::SsmMap


class Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr


class Mld::Standby::DefaultContext::ExplicitGroups : public ydk::Entity
{
    public:
        ExplicitGroups();
        ~ExplicitGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExplicitGroup; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Mld::Standby::DefaultContext::ExplicitGroups


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup : public ydk::Entity
{
    public:
        ExplicitGroup();
        ~ExplicitGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf include_hosts; //type: uint32
        ydk::YLeaf exclude_hosts; //type: uint32
        class GroupInfo; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo : public ydk::Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf is_exclude; //type: boolean
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        class Address; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address


class Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Mld::Standby::DefaultContext::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Standby::DefaultContext::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceTable::Interface> > interface;
        
}; // Mld::Standby::DefaultContext::InterfaceTable


class Mld::Standby::DefaultContext::InterfaceTable::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::DefaultContext::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::DefaultContext::InterfaceTable::Interface


class Mld::Standby::DefaultContext::InterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceTable::Interface::Address


class Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress


class Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress


class Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjusts();
        ~InterfaceUnicastQosAdjusts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceUnicastQosAdjust; //type: Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts


class Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjust();
        ~InterfaceUnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_access; //type: boolean
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf rate_increments; //type: uint32
        ydk::YLeaf rate_decrements; //type: uint32
        class Update; //type: Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_add; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf received_time; //type: uint64
        class SourceAddress; //type: Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Mld::Standby::DefaultContext::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Mld::Standby::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Ranges::Range> > range;
        
}; // Mld::Standby::DefaultContext::Ranges


class Mld::Standby::DefaultContext::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_mask; //type: int32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf protocol; //type: IgmpEdmProtocol
        ydk::YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::DefaultContext::Ranges::Range


class Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr


class Mld::Standby::DefaultContext::IfrsInterfaces : public ydk::Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfrsInterface; //type: Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Mld::Standby::DefaultContext::IfrsInterfaces


class Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface : public ydk::Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf join_group_count; //type: uint32
        class IgmpInterfaceEntry; //type: Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface


class Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public ydk::Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Mld::Standby::DefaultContext::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf packet_manager_input_errors; //type: uint32
        ydk::YLeaf packet_manager_output_errors; //type: uint32
        ydk::YLeaf checksum_errors; //type: uint32
        ydk::YLeaf receive_socket_errors; //type: uint32
        ydk::YLeaf socket_errors; //type: uint32
        ydk::YLeaf bad_scope_errors; //type: uint32
        ydk::YLeaf auxillary_data_length_errors; //type: uint32
        ydk::YLeaf invalid_source_address_errors; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf miscellaneous_errors; //type: uint32
        ydk::YLeaf input_queries; //type: uint32
        ydk::YLeaf input_reports; //type: uint32
        ydk::YLeaf input_leaves; //type: uint32
        ydk::YLeaf input_mtrace; //type: uint32
        ydk::YLeaf input_dvmrp; //type: uint32
        ydk::YLeaf input_pim; //type: uint32
        ydk::YLeaf output_queries; //type: uint32
        ydk::YLeaf output_reports; //type: uint32
        ydk::YLeaf output_leaves; //type: uint32
        ydk::YLeaf output_mtrace; //type: uint32
        ydk::YLeaf output_dvmrp; //type: uint32
        ydk::YLeaf output_pim; //type: uint32
        ydk::YLeaf get_packet_failure; //type: uint32
        ydk::YLeaf output_no_parent_interface_handle; //type: uint32
        ydk::YLeaf input_no_idb; //type: uint32
        ydk::YLeaf input_no_vrf_in_idb; //type: uint32
        ydk::YLeaf input_disabled_idb; //type: uint32
        ydk::YLeaf input_martian_address; //type: uint32
        ydk::YLeaf input_no_assigned_vrf_id; //type: uint32
        ydk::YLeaf input_no_vrf_mtrace; //type: uint32
        ydk::YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Mld::Standby::DefaultContext::TrafficCounters


class Mld::Standby::DefaultContext::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Mld::Standby::DefaultContext::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Groups::Group> > group;
        
}; // Mld::Standby::DefaultContext::Groups


class Mld::Standby::DefaultContext::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiration_time; //type: int32
        ydk::YLeaf explicit_tracking_enabled; //type: boolean
        ydk::YLeaf is_self_join; //type: boolean
        ydk::YLeaf row_status; //type: string
        ydk::YLeaf is_low_memory; //type: boolean
        ydk::YLeaf router_filter_mode; //type: uint8
        ydk::YLeaf older_host_version1_timer; //type: uint32
        ydk::YLeaf older_host_version2_timer; //type: uint32
        ydk::YLeaf is_added; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr
        class LastReporter; //type: Mld::Standby::DefaultContext::Groups::Group::LastReporter
        class SourceAddress; //type: Mld::Standby::DefaultContext::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::Groups::Group::SourceAddress> source_address;
        
}; // Mld::Standby::DefaultContext::Groups::Group


class Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr


class Mld::Standby::DefaultContext::Groups::Group::LastReporter : public ydk::Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::Groups::Group::LastReporter


class Mld::Standby::DefaultContext::Groups::Group::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::Groups::Group::SourceAddress


class Mld::Standby::DefaultContext::GroupSummary : public ydk::Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groutes; //type: uint32
        ydk::YLeaf sg_routes; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_low_memory; //type: boolean

}; // Mld::Standby::DefaultContext::GroupSummary


class Mld::Standby::DefaultContext::IfrsInterfaceSummary : public ydk::Entity
{
    public:
        IfrsInterfaceSummary();
        ~IfrsInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf configuration_count; //type: uint32

}; // Mld::Standby::DefaultContext::IfrsInterfaceSummary


class Mld::Standby::DefaultContext::GlobalInterfaceTable : public ydk::Entity
{
    public:
        GlobalInterfaceTable();
        ~GlobalInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface> > interface;
        
}; // Mld::Standby::DefaultContext::GlobalInterfaceTable


class Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface


class Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address


class Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress


class Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress


class Mld::Standby::DefaultContext::SsmMapDetails : public ydk::Entity
{
    public:
        SsmMapDetails();
        ~SsmMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMapDetail; //type: Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Mld::Standby::DefaultContext::SsmMapDetails

class IgmpAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_unicast;
        static const ydk::Enum::YLeaf ipv6_unicast;

};

class IgmpssmMap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf all;

};

class IgmpEdmProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf sm;
        static const ydk::Enum::YLeaf dm;
        static const ydk::Enum::YLeaf bidir;
        static const ydk::Enum::YLeaf ssm;
        static const ydk::Enum::YLeaf any;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_OPER_0_ */

