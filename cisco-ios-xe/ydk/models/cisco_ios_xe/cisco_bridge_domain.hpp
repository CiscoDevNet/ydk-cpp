#ifndef _CISCO_BRIDGE_DOMAIN_
#define _CISCO_BRIDGE_DOMAIN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace cisco_bridge_domain {

class BridgeDomainConfig : public ydk::Entity
{
    public:
        BridgeDomainConfig();
        ~BridgeDomainConfig();

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

        class Global; //type: BridgeDomainConfig::Global
        class BridgeGroups; //type: BridgeDomainConfig::BridgeGroups
        class BridgeDomains; //type: BridgeDomainConfig::BridgeDomains

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains> bridge_domains;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeGroups> bridge_groups;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::Global> global;
        
}; // BridgeDomainConfig


class BridgeDomainConfig::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_state_notification_enabled; //type: boolean
        ydk::YLeaf bd_state_notification_rate; //type: uint32
        class Pbb; //type: BridgeDomainConfig::Global::Pbb

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::Global::Pbb> pbb;
        
}; // BridgeDomainConfig::Global


class BridgeDomainConfig::Global::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backbone_src_mac; //type: string

}; // BridgeDomainConfig::Global::Pbb


class BridgeDomainConfig::BridgeGroups : public ydk::Entity
{
    public:
        BridgeGroups();
        ~BridgeGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeGroup; //type: BridgeDomainConfig::BridgeGroups::BridgeGroup

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeGroups::BridgeGroup> > bridge_group;
        
}; // BridgeDomainConfig::BridgeGroups


class BridgeDomainConfig::BridgeGroups::BridgeGroup : public ydk::Entity
{
    public:
        BridgeGroup();
        ~BridgeGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // BridgeDomainConfig::BridgeGroups::BridgeGroup


class BridgeDomainConfig::BridgeDomains : public ydk::Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomain; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // BridgeDomainConfig::BridgeDomains


class BridgeDomainConfig::BridgeDomains::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        //type: string (refers to cisco_bridge_domain::BridgeDomainConfig::BridgeGroups::BridgeGroup::name)
        ydk::YLeaf bridge_group;
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf bd_status_change_notification; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf flooding_mode; //type: FloodingMode
        class Members; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members
        class Mac; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac
        class DynamicArpInspection; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection
        class IpSourceGuard; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard
        class StormControl; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl
        class IgmpSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping
        class MldSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping
        class DhcpIpv4Snooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping> dhcp_ipv4_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection> dynamic_arp_inspection; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping> igmp_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard> ip_source_guard; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac> mac;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members> members;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping> mld_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl> storm_control;
                class FloodingMode;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members : public ydk::Entity
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

        class AcMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember
        class VfiMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember
        class AccessPwMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember> > ac_member;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember> access_pw_member;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember> > vfi_member;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember : public ydk::Entity
{
    public:
        AcMember();
        ~AcMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        class SplitHorizonGroup; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup
        class Mac; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac
        class IgmpSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping
        class MldSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping
        class DhcpIpv4Snooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping
        class Flooding; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding
        class StormControl; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl
        class DynamicArpInspection; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection
        class IpSourceGuard; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping> dhcp_ipv4_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection> dynamic_arp_inspection;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding> flooding;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping> igmp_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard> ip_source_guard;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac> mac;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping> mld_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup> split_horizon_group; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl> storm_control;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup : public ydk::Entity
{
    public:
        SplitHorizonGroup();
        ~SplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learning_enabled; //type: boolean
        class Limit; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit
        class Aging; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging
        class PortDown; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown
        class Secure; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging> aging;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit> limit;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown> port_down;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure> secure;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf action; //type: MacLimitAction
        ydk::YLeaf notification; //type: MacLimitNotificationType

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint32
        ydk::YLeaf type; //type: MacAgingType

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown : public ydk::Entity
{
    public:
        PortDown();
        ~PortDown();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flush; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure : public ydk::Entity
{
    public:
        Secure();
        ~Secure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf enabled; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping : public ydk::Entity
{
    public:
        IgmpSnooping();
        ~IgmpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping : public ydk::Entity
{
    public:
        MldSnooping();
        ~MldSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping : public ydk::Entity
{
    public:
        DhcpIpv4Snooping();
        ~DhcpIpv4Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: empty
        ydk::YLeaf disabled_unknown_unicast; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: StormControlAction
        class Thresholds; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds> > thresholds;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_class; //type: EthTrafficClass
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: Unit
        class Unit;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection : public ydk::Entity
{
    public:
        DynamicArpInspection();
        ~DynamicArpInspection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf enable; //type: boolean
        class AddressValidation; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation> address_validation; // presence node
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation : public ydk::Entity
{
    public:
        AddressValidation();
        ~AddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_mac; //type: empty
        ydk::YLeaf src_mac; //type: empty
        ydk::YLeaf ipv4; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard : public ydk::Entity
{
    public:
        IpSourceGuard();
        ~IpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf enable; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember : public ydk::Entity
{
    public:
        VfiMember();
        ~VfiMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember : public ydk::Entity
{
    public:
        AccessPwMember();
        ~AccessPwMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessPwIfMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember
        class PwNeighborSpec; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember> > access_pw_if_member;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec> > pw_neighbor_spec;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember : public ydk::Entity
{
    public:
        AccessPwIfMember();
        ~AccessPwIfMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec : public ydk::Entity
{
    public:
        PwNeighborSpec();
        ~PwNeighborSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf vc_id; //type: uint32
        //type: string (refers to cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::name)
        ydk::YLeaf pw_class_template;
        ydk::YLeaf encap_type; //type: PwEncapsulationType
        ydk::YLeaf tag_impose_vlan; //type: uint16
        ydk::YLeaf source_ipv6; //type: string
        class StaticLabel; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel
        class SplitHorizonGroup; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup
        class Mac; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac
        class IgmpSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping
        class MldSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping
        class DhcpIpv4Snooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping
        class Flooding; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding
        class StormControl; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl
        class Backup; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup> backup;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping> dhcp_ipv4_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding> flooding;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping> igmp_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac> mac;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping> mld_snooping;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup> split_horizon_group; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel> static_label;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl> storm_control;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel : public ydk::Entity
{
    public:
        StaticLabel();
        ~StaticLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup : public ydk::Entity
{
    public:
        SplitHorizonGroup();
        ~SplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learning_enabled; //type: boolean
        class Limit; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit
        class Aging; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging
        class PortDown; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown
        class Secure; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging> aging;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit> limit;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown> port_down;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure> secure;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf action; //type: MacLimitAction
        ydk::YLeaf notification; //type: MacLimitNotificationType

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint32
        ydk::YLeaf type; //type: MacAgingType

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown : public ydk::Entity
{
    public:
        PortDown();
        ~PortDown();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flush; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure : public ydk::Entity
{
    public:
        Secure();
        ~Secure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf enabled; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping : public ydk::Entity
{
    public:
        IgmpSnooping();
        ~IgmpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping : public ydk::Entity
{
    public:
        MldSnooping();
        ~MldSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping : public ydk::Entity
{
    public:
        DhcpIpv4Snooping();
        ~DhcpIpv4Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: empty
        ydk::YLeaf disabled_unknown_unicast; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: StormControlAction
        class Thresholds; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds> > thresholds;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_class; //type: EthTrafficClass
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: Unit
        class Unit;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf vc_id; //type: uint32
        //type: string (refers to cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::name)
        ydk::YLeaf pw_class_template;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learning_enabled; //type: boolean
        class Limit; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit
        class Aging; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging
        class PortDown; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown
        class Flooding; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding
        class Secure; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure
        class Static_; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging> aging;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding> flooding;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit> limit;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown> port_down;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure> secure; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_> static_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf action; //type: MacLimitAction
        ydk::YLeaf notification; //type: MacLimitNotificationType

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint32
        ydk::YLeaf type; //type: MacAgingType

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown : public ydk::Entity
{
    public:
        PortDown();
        ~PortDown();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flush; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: empty
        ydk::YLeaf disabled_unknown_unicast; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure : public ydk::Entity
{
    public:
        Secure();
        ~Secure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf logging; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacAddresses; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses> > mac_addresses;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses : public ydk::Entity
{
    public:
        MacAddresses();
        ~MacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf drop; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses


class BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection : public ydk::Entity
{
    public:
        DynamicArpInspection();
        ~DynamicArpInspection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: boolean
        class AddressValidation; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation> address_validation; // presence node
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection


class BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation : public ydk::Entity
{
    public:
        AddressValidation();
        ~AddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_mac; //type: empty
        ydk::YLeaf src_mac; //type: empty
        ydk::YLeaf ipv4; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation


class BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard : public ydk::Entity
{
    public:
        IpSourceGuard();
        ~IpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard


class BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: StormControlAction
        class Thresholds; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds> > thresholds;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl


class BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_class; //type: EthTrafficClass
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: Unit
        class Unit;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds


class BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping : public ydk::Entity
{
    public:
        IgmpSnooping();
        ~IgmpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf disabled; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping : public ydk::Entity
{
    public:
        MldSnooping();
        ~MldSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping : public ydk::Entity
{
    public:
        DhcpIpv4Snooping();
        ~DhcpIpv4Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping

class BridgeDomainState : public ydk::Entity
{
    public:
        BridgeDomainState();
        ~BridgeDomainState();

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

        class SystemCapabilities; //type: BridgeDomainState::SystemCapabilities
        class ModuleCapabilities; //type: BridgeDomainState::ModuleCapabilities
        class BridgeDomains; //type: BridgeDomainState::BridgeDomains
        class MacTable; //type: BridgeDomainState::MacTable

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains> bridge_domains;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::MacTable> > mac_table;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::ModuleCapabilities> module_capabilities;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::SystemCapabilities> system_capabilities;
        
}; // BridgeDomainState


class BridgeDomainState::SystemCapabilities : public ydk::Entity
{
    public:
        SystemCapabilities();
        ~SystemCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_bd; //type: uint32
        ydk::YLeaf max_ac_per_bd; //type: uint32
        ydk::YLeaf max_pw_per_bd; //type: uint32
        ydk::YLeaf max_vfi_per_bd; //type: uint32
        ydk::YLeaf max_sh_group_per_bd; //type: uint32
        ydk::YLeaf max_interflex_if_per_bd; //type: uint32

}; // BridgeDomainState::SystemCapabilities


class BridgeDomainState::ModuleCapabilities : public ydk::Entity
{
    public:
        ModuleCapabilities();
        ~ModuleCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Modules; //type: BridgeDomainState::ModuleCapabilities::Modules

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::ModuleCapabilities::Modules> > modules;
        
}; // BridgeDomainState::ModuleCapabilities


class BridgeDomainState::ModuleCapabilities::Modules : public ydk::Entity
{
    public:
        Modules();
        ~Modules();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf max_mac_per_bd; //type: uint32
        ydk::YLeaf max_pdd_edge_bd; //type: uint32
        ydk::YLeaf max_bd; //type: uint32
        ydk::YLeaf max_ac_per_bd; //type: uint32
        ydk::YLeaf max_pw_per_bd; //type: uint32
        ydk::YLeaf max_vfi_per_bd; //type: uint32
        ydk::YLeaf max_sh_group_per_bd; //type: uint32

}; // BridgeDomainState::ModuleCapabilities::Modules


class BridgeDomainState::BridgeDomains : public ydk::Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomain; //type: BridgeDomainState::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // BridgeDomainState::BridgeDomains


class BridgeDomainState::BridgeDomains::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf bd_state; //type: BridgeDomainStateType
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf last_status_change; //type: uint32
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf p2mp_pw_disabled; //type: boolean
        class Members; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members> members;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain


class BridgeDomainState::BridgeDomains::BridgeDomain::Members : public ydk::Entity
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

        class AcMember; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember
        class VfiMember; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember
        class AccessPwMember; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember> > ac_member;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember> > access_pw_member;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember> > vfi_member;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember : public ydk::Entity
{
    public:
        AcMember();
        ~AcMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf static_mac_count; //type: uint32
        class DaiStats; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats
        class IpsgStats; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats
        class StormControl; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats> dai_stats;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats> ipsg_stats;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl> storm_control;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats : public ydk::Entity
{
    public:
        DaiStats();
        ~DaiStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_drops; //type: uint64
        ydk::YLeaf byte_drops; //type: uint64

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats : public ydk::Entity
{
    public:
        IpsgStats();
        ~IpsgStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_drops; //type: uint64
        ydk::YLeaf byte_drops; //type: uint64

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DropCounter; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter> > drop_counter;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter : public ydk::Entity
{
    public:
        DropCounter();
        ~DropCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_class; //type: EthTrafficClass
        ydk::YLeaf packet_drops; //type: uint64
        ydk::YLeaf octate_drops; //type: uint64

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember : public ydk::Entity
{
    public:
        VfiMember();
        ~VfiMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::InterfacesState::Interface::name)
        ydk::YLeaf interface;
        class Flooding; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding> flooding;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Status; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status> > status;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_class; //type: EthTrafficClass
        ydk::YLeaf enabled; //type: boolean

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember : public ydk::Entity
{
    public:
        AccessPwMember();
        ~AccessPwMember();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to cisco_pw::PseudowireState::Pseudowires::vc_peer_address)
        ydk::YLeaf vc_peer_address;
        //type: uint32 (refers to cisco_pw::PseudowireState::Pseudowires::vc_id)
        ydk::YLeaf vc_id;
        class Flooding; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding> flooding;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Status; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status> > status;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_class; //type: EthTrafficClass
        ydk::YLeaf enabled; //type: boolean

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status


class BridgeDomainState::MacTable : public ydk::Entity
{
    public:
        MacTable();
        ~MacTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_id; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_type; //type: MacType
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf secure_mac; //type: boolean
        ydk::YLeaf ntfy_mac; //type: boolean
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf location; //type: string
        class MacType;

}; // BridgeDomainState::MacTable

class ClearBridgeDomain : public ydk::Entity
{
    public:
        ClearBridgeDomain();
        ~ClearBridgeDomain();

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

        class Input; //type: ClearBridgeDomain::Input
        class Output; //type: ClearBridgeDomain::Output

        std::shared_ptr<cisco_bridge_domain::ClearBridgeDomain::Input> input;
        std::shared_ptr<cisco_bridge_domain::ClearBridgeDomain::Output> output;
        
}; // ClearBridgeDomain


class ClearBridgeDomain::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf bd_id; //type: string
        ydk::YLeaf bg_id; //type: string

}; // ClearBridgeDomain::Input


class ClearBridgeDomain::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf errstr; //type: string

}; // ClearBridgeDomain::Output

class ClearMacAddress : public ydk::Entity
{
    public:
        ClearMacAddress();
        ~ClearMacAddress();

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

        class Input; //type: ClearMacAddress::Input
        class Output; //type: ClearMacAddress::Output

        std::shared_ptr<cisco_bridge_domain::ClearMacAddress::Input> input;
        std::shared_ptr<cisco_bridge_domain::ClearMacAddress::Output> output;
        
}; // ClearMacAddress


class ClearMacAddress::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf mac_address; //type: string
        class BridgeDomain; //type: ClearMacAddress::Input::BridgeDomain

        std::shared_ptr<cisco_bridge_domain::ClearMacAddress::Input::BridgeDomain> bridge_domain;
        
}; // ClearMacAddress::Input


class ClearMacAddress::Input::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_id; //type: string
        ydk::YLeaf bg_id; //type: string

}; // ClearMacAddress::Input::BridgeDomain


class ClearMacAddress::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf errstr; //type: string

}; // ClearMacAddress::Output

class CreateParameterizedBridgeDomains : public ydk::Entity
{
    public:
        CreateParameterizedBridgeDomains();
        ~CreateParameterizedBridgeDomains();

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

        class Input; //type: CreateParameterizedBridgeDomains::Input
        class Output; //type: CreateParameterizedBridgeDomains::Output

        std::shared_ptr<cisco_bridge_domain::CreateParameterizedBridgeDomains::Input> input;
        std::shared_ptr<cisco_bridge_domain::CreateParameterizedBridgeDomains::Output> output;
        
}; // CreateParameterizedBridgeDomains


class CreateParameterizedBridgeDomains::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parameter; //type: Parameter
        class Member; //type: CreateParameterizedBridgeDomains::Input::Member

        std::vector<std::shared_ptr<cisco_bridge_domain::CreateParameterizedBridgeDomains::Input::Member> > member;
                class Parameter;

}; // CreateParameterizedBridgeDomains::Input


class CreateParameterizedBridgeDomains::Input::Member : public ydk::Entity
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

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;

}; // CreateParameterizedBridgeDomains::Input::Member


class CreateParameterizedBridgeDomains::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf errstr; //type: string

}; // CreateParameterizedBridgeDomains::Output

class BridgeDomainStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::FloodingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf convergence_optimized;
        static const ydk::Enum::YLeaf resilience_optimized;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::Unit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf pps;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::Unit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf pps;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::Unit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf pps;

};

class BridgeDomainState::MacTable::MacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};

class CreateParameterizedBridgeDomains::Input::Parameter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan;

};


}
}

#endif /* _CISCO_BRIDGE_DOMAIN_ */

