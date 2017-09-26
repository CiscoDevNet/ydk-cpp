#ifndef _CISCO_IOS_XR_IPV4_IGMP_CFG_
#define _CISCO_IOS_XR_IPV4_IGMP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_cfg {

class Amt : public ydk::Entity
{
    public:
        Amt();
        ~Amt();

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

        ydk::YLeaf maximum_v4_route_gateway; //type: uint32
        ydk::YLeaf gateway_filter; //type: string
        ydk::YLeaf maximum_v4_routes; //type: uint32
        ydk::YLeaf amttos; //type: uint32
        ydk::YLeaf amtttl; //type: uint32
        ydk::YLeaf maximum_v6_route_gateway; //type: uint32
        ydk::YLeaf maximum_gateway; //type: uint32
        ydk::YLeaf maximum_v6_routes; //type: uint32
        ydk::YLeaf amtqqic; //type: uint32
        ydk::YLeaf amtmtu; //type: uint32
        class RelayAdvAdd; //type: Amt::RelayAdvAdd
        class RelayAnycastPrefix; //type: Amt::RelayAnycastPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Amt::RelayAdvAdd> relay_adv_add; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Amt::RelayAnycastPrefix> relay_anycast_prefix; // presence node
        
}; // Amt


class Amt::RelayAdvAdd : public ydk::Entity
{
    public:
        RelayAdvAdd();
        ~RelayAdvAdd();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface; //type: string

}; // Amt::RelayAdvAdd


class Amt::RelayAnycastPrefix : public ydk::Entity
{
    public:
        RelayAnycastPrefix();
        ~RelayAnycastPrefix();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32

}; // Amt::RelayAnycastPrefix

class Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        class Vrfs; //type: Igmp::Vrfs
        class DefaultContext; //type: Igmp::DefaultContext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext> default_context; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs> vrfs;
        
}; // Igmp


class Igmp::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

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

        ydk::YLeaf ssmdns_query_group; //type: empty
        ydk::YLeaf robustness; //type: uint32
        class Nsf; //type: Igmp::DefaultContext::Nsf
        class UnicastQosAdjust; //type: Igmp::DefaultContext::UnicastQosAdjust
        class Accounting; //type: Igmp::DefaultContext::Accounting
        class Traffic; //type: Igmp::DefaultContext::Traffic
        class InheritableDefaults; //type: Igmp::DefaultContext::InheritableDefaults
        class SsmAccessGroups; //type: Igmp::DefaultContext::SsmAccessGroups
        class Maximum; //type: Igmp::DefaultContext::Maximum
        class Interfaces; //type: Igmp::DefaultContext::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Traffic> traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::UnicastQosAdjust> unicast_qos_adjust;
        
}; // Igmp::DefaultContext


class Igmp::DefaultContext::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf max_history; //type: uint32

}; // Igmp::DefaultContext::Accounting


class Igmp::DefaultContext::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

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

        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class MaximumGroupsPerInterfaceOor; //type: Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::DefaultContext::InheritableDefaults::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        
}; // Igmp::DefaultContext::InheritableDefaults


class Igmp::DefaultContext::InheritableDefaults::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::DefaultContext::InheritableDefaults::ExplicitTracking


class Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

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

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Igmp::DefaultContext::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Igmp::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface> > interface;
        
}; // Igmp::DefaultContext::Interfaces


class Igmp::DefaultContext::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class JoinGroups; //type: Igmp::DefaultContext::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;
        
}; // Igmp::DefaultContext::Interfaces::Interface


class Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking


class Igmp::DefaultContext::Interfaces::Interface::JoinGroups : public ydk::Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JoinGroup; //type: Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;
        
}; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups


class Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup


class Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public ydk::Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses : public ydk::Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticGroupGroupAddress; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;
        
}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Igmp::DefaultContext::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

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

        ydk::YLeaf maximum_groups; //type: uint32

}; // Igmp::DefaultContext::Maximum


class Igmp::DefaultContext::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

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

        ydk::YLeaf lifetime; //type: uint32

}; // Igmp::DefaultContext::Nsf


class Igmp::DefaultContext::SsmAccessGroups : public ydk::Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

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

        class SsmAccessGroup; //type: Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;
        
}; // Igmp::DefaultContext::SsmAccessGroups


class Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup : public ydk::Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup


class Igmp::DefaultContext::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

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

        ydk::YLeaf profile; //type: string

}; // Igmp::DefaultContext::Traffic


class Igmp::DefaultContext::UnicastQosAdjust : public ydk::Entity
{
    public:
        UnicastQosAdjust();
        ~UnicastQosAdjust();

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

        ydk::YLeaf download_interval; //type: uint32
        ydk::YLeaf adjustment_delay; //type: uint32
        ydk::YLeaf hold_off; //type: uint32

}; // Igmp::DefaultContext::UnicastQosAdjust


class Igmp::Vrfs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: Igmp::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf> > vrf;
        
}; // Igmp::Vrfs


class Igmp::Vrfs::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ssmdns_query_group; //type: empty
        ydk::YLeaf robustness; //type: uint32
        class Traffic; //type: Igmp::Vrfs::Vrf::Traffic
        class InheritableDefaults; //type: Igmp::Vrfs::Vrf::InheritableDefaults
        class SsmAccessGroups; //type: Igmp::Vrfs::Vrf::SsmAccessGroups
        class Maximum; //type: Igmp::Vrfs::Vrf::Maximum
        class Interfaces; //type: Igmp::Vrfs::Vrf::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Traffic> traffic;
        
}; // Igmp::Vrfs::Vrf


class Igmp::Vrfs::Vrf::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class MaximumGroupsPerInterfaceOor; //type: Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        
}; // Igmp::Vrfs::Vrf::InheritableDefaults


class Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking


class Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Igmp::Vrfs::Vrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Igmp::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Igmp::Vrfs::Vrf::Interfaces


class Igmp::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class JoinGroups; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;
        
}; // Igmp::Vrfs::Vrf::Interfaces::Interface


class Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking


class Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups : public ydk::Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JoinGroup; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;
        
}; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups


class Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup


class Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public ydk::Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses : public ydk::Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticGroupGroupAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;
        
}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Igmp::Vrfs::Vrf::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32

}; // Igmp::Vrfs::Vrf::Maximum


class Igmp::Vrfs::Vrf::SsmAccessGroups : public ydk::Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmAccessGroup; //type: Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;
        
}; // Igmp::Vrfs::Vrf::SsmAccessGroups


class Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup : public ydk::Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf access_list_name; //type: string

}; // Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup


class Igmp::Vrfs::Vrf::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Igmp::Vrfs::Vrf::Traffic

class Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

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

        class Vrfs; //type: Mld::Vrfs
        class DefaultContext; //type: Mld::DefaultContext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext> default_context; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs> vrfs;
        
}; // Mld


class Mld::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

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

        ydk::YLeaf ssmdns_query_group; //type: empty
        ydk::YLeaf robustness; //type: uint32
        class Nsf; //type: Mld::DefaultContext::Nsf
        class UnicastQosAdjust; //type: Mld::DefaultContext::UnicastQosAdjust
        class Accounting; //type: Mld::DefaultContext::Accounting
        class Traffic; //type: Mld::DefaultContext::Traffic
        class InheritableDefaults; //type: Mld::DefaultContext::InheritableDefaults
        class SsmAccessGroups; //type: Mld::DefaultContext::SsmAccessGroups
        class Maximum; //type: Mld::DefaultContext::Maximum
        class Interfaces; //type: Mld::DefaultContext::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Traffic> traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::UnicastQosAdjust> unicast_qos_adjust;
        
}; // Mld::DefaultContext


class Mld::DefaultContext::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf max_history; //type: uint32

}; // Mld::DefaultContext::Accounting


class Mld::DefaultContext::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

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

        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class MaximumGroupsPerInterfaceOor; //type: Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::DefaultContext::InheritableDefaults::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        
}; // Mld::DefaultContext::InheritableDefaults


class Mld::DefaultContext::InheritableDefaults::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Mld::DefaultContext::InheritableDefaults::ExplicitTracking


class Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

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

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Mld::DefaultContext::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Mld::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface> > interface;
        
}; // Mld::DefaultContext::Interfaces


class Mld::DefaultContext::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class JoinGroups; //type: Mld::DefaultContext::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::DefaultContext::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;
        
}; // Mld::DefaultContext::Interfaces::Interface


class Mld::DefaultContext::Interfaces::Interface::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Mld::DefaultContext::Interfaces::Interface::ExplicitTracking


class Mld::DefaultContext::Interfaces::Interface::JoinGroups : public ydk::Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JoinGroup; //type: Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;
        
}; // Mld::DefaultContext::Interfaces::Interface::JoinGroups


class Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup


class Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public ydk::Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses : public ydk::Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticGroupGroupAddress; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;
        
}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Mld::DefaultContext::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

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

        ydk::YLeaf maximum_groups; //type: uint32

}; // Mld::DefaultContext::Maximum


class Mld::DefaultContext::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

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

        ydk::YLeaf lifetime; //type: uint32

}; // Mld::DefaultContext::Nsf


class Mld::DefaultContext::SsmAccessGroups : public ydk::Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

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

        class SsmAccessGroup; //type: Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;
        
}; // Mld::DefaultContext::SsmAccessGroups


class Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup : public ydk::Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf access_list_name; //type: string

}; // Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup


class Mld::DefaultContext::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

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

        ydk::YLeaf profile; //type: string

}; // Mld::DefaultContext::Traffic


class Mld::DefaultContext::UnicastQosAdjust : public ydk::Entity
{
    public:
        UnicastQosAdjust();
        ~UnicastQosAdjust();

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

        ydk::YLeaf download_interval; //type: uint32
        ydk::YLeaf adjustment_delay; //type: uint32
        ydk::YLeaf hold_off; //type: uint32

}; // Mld::DefaultContext::UnicastQosAdjust


class Mld::Vrfs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: Mld::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf> > vrf;
        
}; // Mld::Vrfs


class Mld::Vrfs::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ssmdns_query_group; //type: empty
        ydk::YLeaf robustness; //type: uint32
        class Traffic; //type: Mld::Vrfs::Vrf::Traffic
        class InheritableDefaults; //type: Mld::Vrfs::Vrf::InheritableDefaults
        class SsmAccessGroups; //type: Mld::Vrfs::Vrf::SsmAccessGroups
        class Maximum; //type: Mld::Vrfs::Vrf::Maximum
        class Interfaces; //type: Mld::Vrfs::Vrf::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Maximum> maximum;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Traffic> traffic;
        
}; // Mld::Vrfs::Vrf


class Mld::Vrfs::Vrf::InheritableDefaults : public ydk::Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class MaximumGroupsPerInterfaceOor; //type: Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        
}; // Mld::Vrfs::Vrf::InheritableDefaults


class Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking


class Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Mld::Vrfs::Vrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Mld::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Mld::Vrfs::Vrf::Interfaces


class Mld::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf query_timeout; //type: uint32
        ydk::YLeaf access_group; //type: string
        ydk::YLeaf query_max_response_time; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_enable; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        class JoinGroups; //type: Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;
        
}; // Mld::Vrfs::Vrf::Interfaces::Interface


class Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf access_list_name; //type: string

}; // Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking


class Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups : public ydk::Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JoinGroup; //type: Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;
        
}; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups


class Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup


class Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public ydk::Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf mode; //type: IgmpFilter

}; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public ydk::Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses : public ydk::Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticGroupGroupAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;
        
}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_address_mask; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public ydk::Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf source_count; //type: uint32
        ydk::YLeaf suppress_report; //type: boolean

}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Mld::Vrfs::Vrf::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_groups; //type: uint32

}; // Mld::Vrfs::Vrf::Maximum


class Mld::Vrfs::Vrf::SsmAccessGroups : public ydk::Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmAccessGroup; //type: Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;
        
}; // Mld::Vrfs::Vrf::SsmAccessGroups


class Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup : public ydk::Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf access_list_name; //type: string

}; // Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup


class Mld::Vrfs::Vrf::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Mld::Vrfs::Vrf::Traffic

class IgmpFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf star_g;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_CFG_ */

