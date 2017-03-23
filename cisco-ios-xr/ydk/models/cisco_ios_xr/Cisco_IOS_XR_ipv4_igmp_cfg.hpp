#ifndef _CISCO_IOS_XR_IPV4_IGMP_CFG_
#define _CISCO_IOS_XR_IPV4_IGMP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_cfg {

class Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

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



        class Vrfs; //type: Igmp::Vrfs
        class DefaultContext; //type: Igmp::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext> default_context; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs> vrfs;


}; // Igmp


class Igmp::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Igmp::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf> > vrf;


}; // Igmp::Vrfs


class Igmp::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf ssmdns_query_group; //type: empty
        YLeaf robustness; //type: uint32

        class Traffic; //type: Igmp::Vrfs::Vrf::Traffic
        class InheritableDefaults; //type: Igmp::Vrfs::Vrf::InheritableDefaults
        class SsmAccessGroups; //type: Igmp::Vrfs::Vrf::SsmAccessGroups
        class Maximum; //type: Igmp::Vrfs::Vrf::Maximum
        class Interfaces; //type: Igmp::Vrfs::Vrf::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Traffic> traffic;


}; // Igmp::Vrfs::Vrf


class Igmp::Vrfs::Vrf::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile; //type: string



}; // Igmp::Vrfs::Vrf::Traffic


class Igmp::Vrfs::Vrf::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class MaximumGroupsPerInterfaceOor; //type: Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node


}; // Igmp::Vrfs::Vrf::InheritableDefaults


class Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking


class Igmp::Vrfs::Vrf::SsmAccessGroups : public Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SsmAccessGroup; //type: Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


}; // Igmp::Vrfs::Vrf::SsmAccessGroups


class Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup : public Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf access_list_name; //type: string



}; // Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup


class Igmp::Vrfs::Vrf::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32



}; // Igmp::Vrfs::Vrf::Maximum


class Igmp::Vrfs::Vrf::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Igmp::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface> > interface;


}; // Igmp::Vrfs::Vrf::Interfaces


class Igmp::Vrfs::Vrf::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class JoinGroups; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


}; // Igmp::Vrfs::Vrf::Interfaces::Interface


class Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups : public Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JoinGroup; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


}; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups


class Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup : public Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup


class Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses : public Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticGroupGroupAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking


class Igmp::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ssmdns_query_group; //type: empty
        YLeaf robustness; //type: uint32

        class Nsf; //type: Igmp::DefaultContext::Nsf
        class UnicastQosAdjust; //type: Igmp::DefaultContext::UnicastQosAdjust
        class Accounting; //type: Igmp::DefaultContext::Accounting
        class Traffic; //type: Igmp::DefaultContext::Traffic
        class InheritableDefaults; //type: Igmp::DefaultContext::InheritableDefaults
        class SsmAccessGroups; //type: Igmp::DefaultContext::SsmAccessGroups
        class Maximum; //type: Igmp::DefaultContext::Maximum
        class Interfaces; //type: Igmp::DefaultContext::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Traffic> traffic;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::UnicastQosAdjust> unicast_qos_adjust;


}; // Igmp::DefaultContext


class Igmp::DefaultContext::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lifetime; //type: uint32



}; // Igmp::DefaultContext::Nsf


class Igmp::DefaultContext::UnicastQosAdjust : public Entity
{
    public:
        UnicastQosAdjust();
        ~UnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf download_interval; //type: uint32
        YLeaf adjustment_delay; //type: uint32
        YLeaf hold_off; //type: uint32



}; // Igmp::DefaultContext::UnicastQosAdjust


class Igmp::DefaultContext::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_history; //type: uint32



}; // Igmp::DefaultContext::Accounting


class Igmp::DefaultContext::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile; //type: string



}; // Igmp::DefaultContext::Traffic


class Igmp::DefaultContext::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class MaximumGroupsPerInterfaceOor; //type: Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::DefaultContext::InheritableDefaults::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node


}; // Igmp::DefaultContext::InheritableDefaults


class Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Igmp::DefaultContext::InheritableDefaults::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Igmp::DefaultContext::InheritableDefaults::ExplicitTracking


class Igmp::DefaultContext::SsmAccessGroups : public Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SsmAccessGroup; //type: Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


}; // Igmp::DefaultContext::SsmAccessGroups


class Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup : public Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf access_list_name; //type: string



}; // Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup


class Igmp::DefaultContext::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32



}; // Igmp::DefaultContext::Maximum


class Igmp::DefaultContext::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Igmp::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface> > interface;


}; // Igmp::DefaultContext::Interfaces


class Igmp::DefaultContext::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class JoinGroups; //type: Igmp::DefaultContext::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


}; // Igmp::DefaultContext::Interfaces::Interface


class Igmp::DefaultContext::Interfaces::Interface::JoinGroups : public Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JoinGroup; //type: Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


}; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups


class Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup : public Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup


class Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses : public Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticGroupGroupAddress; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking

class Amt : public Entity
{
    public:
        Amt();
        ~Amt();

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


        YLeaf maximum_v4_route_gateway; //type: uint32
        YLeaf gateway_filter; //type: string
        YLeaf maximum_v4_routes; //type: uint32
        YLeaf amttos; //type: uint32
        YLeaf amtttl; //type: uint32
        YLeaf maximum_v6_route_gateway; //type: uint32
        YLeaf maximum_gateway; //type: uint32
        YLeaf maximum_v6_routes; //type: uint32
        YLeaf amtqqic; //type: uint32
        YLeaf amtmtu; //type: uint32

        class RelayAdvAdd; //type: Amt::RelayAdvAdd
        class RelayAnycastPrefix; //type: Amt::RelayAnycastPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Amt::RelayAdvAdd> relay_adv_add; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Amt::RelayAnycastPrefix> relay_anycast_prefix; // presence node


}; // Amt


class Amt::RelayAdvAdd : public Entity
{
    public:
        RelayAdvAdd();
        ~RelayAdvAdd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface; //type: string



}; // Amt::RelayAdvAdd


class Amt::RelayAnycastPrefix : public Entity
{
    public:
        RelayAnycastPrefix();
        ~RelayAnycastPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32



}; // Amt::RelayAnycastPrefix

class Mld : public Entity
{
    public:
        Mld();
        ~Mld();

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



        class Vrfs; //type: Mld::Vrfs
        class DefaultContext; //type: Mld::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext> default_context; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs> vrfs;


}; // Mld


class Mld::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Mld::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf> > vrf;


}; // Mld::Vrfs


class Mld::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf ssmdns_query_group; //type: empty
        YLeaf robustness; //type: uint32

        class Traffic; //type: Mld::Vrfs::Vrf::Traffic
        class InheritableDefaults; //type: Mld::Vrfs::Vrf::InheritableDefaults
        class SsmAccessGroups; //type: Mld::Vrfs::Vrf::SsmAccessGroups
        class Maximum; //type: Mld::Vrfs::Vrf::Maximum
        class Interfaces; //type: Mld::Vrfs::Vrf::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Traffic> traffic;


}; // Mld::Vrfs::Vrf


class Mld::Vrfs::Vrf::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile; //type: string



}; // Mld::Vrfs::Vrf::Traffic


class Mld::Vrfs::Vrf::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class MaximumGroupsPerInterfaceOor; //type: Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node


}; // Mld::Vrfs::Vrf::InheritableDefaults


class Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking


class Mld::Vrfs::Vrf::SsmAccessGroups : public Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SsmAccessGroup; //type: Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


}; // Mld::Vrfs::Vrf::SsmAccessGroups


class Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup : public Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf access_list_name; //type: string



}; // Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup


class Mld::Vrfs::Vrf::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32



}; // Mld::Vrfs::Vrf::Maximum


class Mld::Vrfs::Vrf::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Mld::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface> > interface;


}; // Mld::Vrfs::Vrf::Interfaces


class Mld::Vrfs::Vrf::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class JoinGroups; //type: Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


}; // Mld::Vrfs::Vrf::Interfaces::Interface


class Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups : public Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JoinGroup; //type: Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


}; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups


class Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup : public Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup


class Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses : public Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticGroupGroupAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking


class Mld::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ssmdns_query_group; //type: empty
        YLeaf robustness; //type: uint32

        class Nsf; //type: Mld::DefaultContext::Nsf
        class UnicastQosAdjust; //type: Mld::DefaultContext::UnicastQosAdjust
        class Accounting; //type: Mld::DefaultContext::Accounting
        class Traffic; //type: Mld::DefaultContext::Traffic
        class InheritableDefaults; //type: Mld::DefaultContext::InheritableDefaults
        class SsmAccessGroups; //type: Mld::DefaultContext::SsmAccessGroups
        class Maximum; //type: Mld::DefaultContext::Maximum
        class Interfaces; //type: Mld::DefaultContext::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults> inheritable_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Maximum> maximum;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::SsmAccessGroups> ssm_access_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Traffic> traffic;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::UnicastQosAdjust> unicast_qos_adjust;


}; // Mld::DefaultContext


class Mld::DefaultContext::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lifetime; //type: uint32



}; // Mld::DefaultContext::Nsf


class Mld::DefaultContext::UnicastQosAdjust : public Entity
{
    public:
        UnicastQosAdjust();
        ~UnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf download_interval; //type: uint32
        YLeaf adjustment_delay; //type: uint32
        YLeaf hold_off; //type: uint32



}; // Mld::DefaultContext::UnicastQosAdjust


class Mld::DefaultContext::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_history; //type: uint32



}; // Mld::DefaultContext::Accounting


class Mld::DefaultContext::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile; //type: string



}; // Mld::DefaultContext::Traffic


class Mld::DefaultContext::InheritableDefaults : public Entity
{
    public:
        InheritableDefaults();
        ~InheritableDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class MaximumGroupsPerInterfaceOor; //type: Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::DefaultContext::InheritableDefaults::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node


}; // Mld::DefaultContext::InheritableDefaults


class Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor


class Mld::DefaultContext::InheritableDefaults::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Mld::DefaultContext::InheritableDefaults::ExplicitTracking


class Mld::DefaultContext::SsmAccessGroups : public Entity
{
    public:
        SsmAccessGroups();
        ~SsmAccessGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SsmAccessGroup; //type: Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


}; // Mld::DefaultContext::SsmAccessGroups


class Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup : public Entity
{
    public:
        SsmAccessGroup();
        ~SsmAccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf access_list_name; //type: string



}; // Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup


class Mld::DefaultContext::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32



}; // Mld::DefaultContext::Maximum


class Mld::DefaultContext::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Mld::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface> > interface;


}; // Mld::DefaultContext::Interfaces


class Mld::DefaultContext::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf query_timeout; //type: uint32
        YLeaf access_group; //type: string
        YLeaf query_max_response_time; //type: uint32
        YLeaf version; //type: uint32
        YLeaf router_enable; //type: boolean
        YLeaf query_interval; //type: uint32

        class JoinGroups; //type: Mld::DefaultContext::Interfaces::Interface::JoinGroups
        class StaticGroupGroupAddresses; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses
        class MaximumGroupsPerInterfaceOor; //type: Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor
        class ExplicitTracking; //type: Mld::DefaultContext::Interfaces::Interface::ExplicitTracking

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups> join_groups; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


}; // Mld::DefaultContext::Interfaces::Interface


class Mld::DefaultContext::Interfaces::Interface::JoinGroups : public Entity
{
    public:
        JoinGroups();
        ~JoinGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JoinGroup; //type: Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup
        class JoinGroupSourceAddress; //type: Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


}; // Mld::DefaultContext::Interfaces::Interface::JoinGroups


class Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup : public Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup


class Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress : public Entity
{
    public:
        JoinGroupSourceAddress();
        ~JoinGroupSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf mode; //type: IgmpFilterEnum



}; // Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses : public Entity
{
    public:
        StaticGroupGroupAddresses();
        ~StaticGroupGroupAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticGroupGroupAddress; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress
        class StaticGroupGroupAddressSourceAddress; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress
        class StaticGroupGroupAddressSourceAddressSourceAddressMask; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask
        class StaticGroupGroupAddressGroupAddressMask; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask
        class StaticGroupGroupAddressGroupAddressMaskSourceAddress; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress
        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask; //type: Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress : public Entity
{
    public:
        StaticGroupGroupAddress();
        ~StaticGroupGroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddress();
        ~StaticGroupGroupAddressSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMask();
        ~StaticGroupGroupAddressGroupAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddress();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


class Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
{
    public:
        StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
        ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf group_address_mask; //type: string
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf group_count; //type: uint32
        YLeaf source_count; //type: uint32
        YLeaf suppress_report; //type: boolean



}; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


class Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor : public Entity
{
    public:
        MaximumGroupsPerInterfaceOor();
        ~MaximumGroupsPerInterfaceOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_groups; //type: uint32
        YLeaf warning_threshold; //type: uint32
        YLeaf access_list_name; //type: string



}; // Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor


class Mld::DefaultContext::Interfaces::Interface::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean
        YLeaf access_list_name; //type: string



}; // Mld::DefaultContext::Interfaces::Interface::ExplicitTracking

class IgmpFilterEnum : public Enum
{
    public:
        static const Enum::YLeaf include;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf star_g;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_CFG_ */

