#ifndef _CISCO_BRIDGE_DOMAIN_
#define _CISCO_BRIDGE_DOMAIN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace cisco_bridge_domain {

class BridgeDomainConfig : public Entity
{
    public:
        BridgeDomainConfig();
        ~BridgeDomainConfig();

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

        class Global; //type: BridgeDomainConfig::Global
        class BridgeGroups; //type: BridgeDomainConfig::BridgeGroups
        class BridgeDomains; //type: BridgeDomainConfig::BridgeDomains

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains> bridge_domains_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeGroups> bridge_groups_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::Global> global_;
        
}; // BridgeDomainConfig


class BridgeDomainConfig::Global : public Entity
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

        YLeaf bd_state_notification_enabled; //type: boolean
        YLeaf bd_state_notification_rate; //type: uint32
        class Pbb; //type: BridgeDomainConfig::Global::Pbb

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::Global::Pbb> pbb_;
        
}; // BridgeDomainConfig::Global


class BridgeDomainConfig::Global::Pbb : public Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backbone_src_mac; //type: string

}; // BridgeDomainConfig::Global::Pbb


class BridgeDomainConfig::BridgeGroups : public Entity
{
    public:
        BridgeGroups();
        ~BridgeGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BridgeGroup; //type: BridgeDomainConfig::BridgeGroups::BridgeGroup

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeGroups::BridgeGroup> > bridge_group_;
        
}; // BridgeDomainConfig::BridgeGroups


class BridgeDomainConfig::BridgeGroups::BridgeGroup : public Entity
{
    public:
        BridgeGroup();
        ~BridgeGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // BridgeDomainConfig::BridgeGroups::BridgeGroup


class BridgeDomainConfig::BridgeDomains : public Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BridgeDomain; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain> > bridge_domain_;
        
}; // BridgeDomainConfig::BridgeDomains


class BridgeDomainConfig::BridgeDomains::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        //type: string (refers to cisco_bridge_domain::BridgeDomainConfig::BridgeGroups::BridgeGroup::name)
        YLeaf bridge_group;
        YLeaf enabled; //type: boolean
        YLeaf bd_status_change_notification; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf flooding_mode; //type: FloodingModeEnum
        class Members; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members
        class Mac; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac
        class DynamicArpInspection; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection
        class IpSourceGuard; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard
        class StormControl; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl
        class IgmpSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping
        class MldSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping
        class DhcpIpv4Snooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping> dhcp_ipv4_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection> dynamic_arp_inspection_; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping> igmp_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard> ip_source_guard_; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac> mac_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members> members_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping> mld_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl> storm_control_;
                class FloodingModeEnum;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members : public Entity
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

        class AcMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember
        class VfiMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember
        class AccessPwMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember> > ac_member_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember> access_pw_member_;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember> > vfi_member_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember : public Entity
{
    public:
        AcMember();
        ~AcMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        class SplitHorizonGroup; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup
        class Mac; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac
        class IgmpSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping
        class MldSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping
        class DhcpIpv4Snooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping
        class Flooding; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding
        class StormControl; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl
        class DynamicArpInspection; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection
        class IpSourceGuard; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping> dhcp_ipv4_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection> dynamic_arp_inspection_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding> flooding_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping> igmp_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard> ip_source_guard_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac> mac_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping> mld_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup> split_horizon_group_; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl> storm_control_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup : public Entity
{
    public:
        SplitHorizonGroup();
        ~SplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf learning_enabled; //type: boolean
        class Limit; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit
        class Aging; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging
        class PortDown; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown
        class Secure; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging> aging_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit> limit_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown> port_down_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure> secure_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        YLeaf action; //type: MacLimitActionEnum
        YLeaf notification; //type: MacLimitNotificationTypeIdentity

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf type; //type: MacAgingTypeEnum

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown : public Entity
{
    public:
        PortDown();
        ~PortDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flush; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure : public Entity
{
    public:
        Secure();
        ~Secure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: MacSecureActionEnum
        YLeaf logging; //type: boolean
        YLeaf enabled; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping : public Entity
{
    public:
        IgmpSnooping();
        ~IgmpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping : public Entity
{
    public:
        MldSnooping();
        ~MldSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping : public Entity
{
    public:
        DhcpIpv4Snooping();
        ~DhcpIpv4Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disabled; //type: empty
        YLeaf disabled_unknown_unicast; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: StormControlActionIdentity
        class Thresholds; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds> > thresholds_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds : public Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_class; //type: EthTrafficClassEnum
        YLeaf value_; //type: uint32
        YLeaf unit; //type: UnitEnum
        class UnitEnum;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection : public Entity
{
    public:
        DynamicArpInspection();
        ~DynamicArpInspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: boolean
        YLeaf enable; //type: boolean
        class AddressValidation; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation> address_validation_; // presence node
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation : public Entity
{
    public:
        AddressValidation();
        ~AddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_mac; //type: empty
        YLeaf src_mac; //type: empty
        YLeaf ipv4; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard : public Entity
{
    public:
        IpSourceGuard();
        ~IpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: boolean
        YLeaf enable; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember : public Entity
{
    public:
        VfiMember();
        ~VfiMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember : public Entity
{
    public:
        AccessPwMember();
        ~AccessPwMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessPwIfMember; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember
        class PwNeighborSpec; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember> > access_pw_if_member_;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec> > pw_neighbor_spec_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember : public Entity
{
    public:
        AccessPwIfMember();
        ~AccessPwIfMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec : public Entity
{
    public:
        PwNeighborSpec();
        ~PwNeighborSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ip_address; //type: string
        YLeaf vc_id; //type: uint32
        //type: string (refers to cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::name)
        YLeaf pw_class_template;
        YLeaf encap_type; //type: PwEncapsulationTypeIdentity
        YLeaf tag_impose_vlan; //type: uint16
        YLeaf source_ipv6; //type: string
        class StaticLabel; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel
        class SplitHorizonGroup; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup
        class Mac; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac
        class IgmpSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping
        class MldSnooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping
        class DhcpIpv4Snooping; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping
        class Flooding; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding
        class StormControl; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl
        class Backup; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup> backup_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping> dhcp_ipv4_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding> flooding_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping> igmp_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac> mac_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping> mld_snooping_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup> split_horizon_group_; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel> static_label_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl> storm_control_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel : public Entity
{
    public:
        StaticLabel();
        ~StaticLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_label; //type: uint32
        YLeaf remote_label; //type: uint32

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup : public Entity
{
    public:
        SplitHorizonGroup();
        ~SplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf learning_enabled; //type: boolean
        class Limit; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit
        class Aging; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging
        class PortDown; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown
        class Secure; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging> aging_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit> limit_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown> port_down_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure> secure_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        YLeaf action; //type: MacLimitActionEnum
        YLeaf notification; //type: MacLimitNotificationTypeIdentity

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf type; //type: MacAgingTypeEnum

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown : public Entity
{
    public:
        PortDown();
        ~PortDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flush; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure : public Entity
{
    public:
        Secure();
        ~Secure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: MacSecureActionEnum
        YLeaf logging; //type: boolean
        YLeaf enabled; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping : public Entity
{
    public:
        IgmpSnooping();
        ~IgmpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping : public Entity
{
    public:
        MldSnooping();
        ~MldSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping : public Entity
{
    public:
        DhcpIpv4Snooping();
        ~DhcpIpv4Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disabled; //type: empty
        YLeaf disabled_unknown_unicast; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: StormControlActionIdentity
        class Thresholds; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds> > thresholds_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds : public Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_class; //type: EthTrafficClassEnum
        YLeaf value_; //type: uint32
        YLeaf unit; //type: UnitEnum
        class UnitEnum;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ip_address; //type: string
        YLeaf vc_id; //type: uint32
        //type: string (refers to cisco_pw::PseudowireConfig::PwTemplates::PwTemplate::name)
        YLeaf pw_class_template;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf learning_enabled; //type: boolean
        class Limit; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit
        class Aging; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging
        class PortDown; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown
        class Flooding; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding
        class Secure; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure
        class Static_; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging> aging_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding> flooding_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit> limit_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown> port_down_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure> secure_; // presence node
        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_> static__;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: uint32
        YLeaf action; //type: MacLimitActionEnum
        YLeaf notification; //type: MacLimitNotificationTypeIdentity

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf type; //type: MacAgingTypeEnum

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown : public Entity
{
    public:
        PortDown();
        ~PortDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flush; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disabled; //type: empty
        YLeaf disabled_unknown_unicast; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure : public Entity
{
    public:
        Secure();
        ~Secure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: MacSecureActionEnum
        YLeaf logging; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacAddresses; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses> > mac_addresses_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_


class BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses : public Entity
{
    public:
        MacAddresses();
        ~MacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_addr; //type: string
        YLeaf drop; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses


class BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection : public Entity
{
    public:
        DynamicArpInspection();
        ~DynamicArpInspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: boolean
        class AddressValidation; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation

        std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation> address_validation_; // presence node
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection


class BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation : public Entity
{
    public:
        AddressValidation();
        ~AddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_mac; //type: empty
        YLeaf src_mac; //type: empty
        YLeaf ipv4; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation


class BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard : public Entity
{
    public:
        IpSourceGuard();
        ~IpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: boolean

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard


class BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: StormControlActionIdentity
        class Thresholds; //type: BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds> > thresholds_;
        
}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl


class BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds : public Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_class; //type: EthTrafficClassEnum
        YLeaf value_; //type: uint32
        YLeaf unit; //type: UnitEnum
        class UnitEnum;

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds


class BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping : public Entity
{
    public:
        IgmpSnooping();
        ~IgmpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf disabled; //type: empty

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping : public Entity
{
    public:
        MldSnooping();
        ~MldSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping


class BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping : public Entity
{
    public:
        DhcpIpv4Snooping();
        ~DhcpIpv4Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping

class BridgeDomainState : public Entity
{
    public:
        BridgeDomainState();
        ~BridgeDomainState();

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

        class SystemCapabilities; //type: BridgeDomainState::SystemCapabilities
        class ModuleCapabilities; //type: BridgeDomainState::ModuleCapabilities
        class BridgeDomains; //type: BridgeDomainState::BridgeDomains
        class MacTable; //type: BridgeDomainState::MacTable

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains> bridge_domains_;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::MacTable> > mac_table_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::ModuleCapabilities> module_capabilities_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::SystemCapabilities> system_capabilities_;
        
}; // BridgeDomainState


class BridgeDomainState::SystemCapabilities : public Entity
{
    public:
        SystemCapabilities();
        ~SystemCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_bd; //type: uint32
        YLeaf max_ac_per_bd; //type: uint32
        YLeaf max_pw_per_bd; //type: uint32
        YLeaf max_vfi_per_bd; //type: uint32
        YLeaf max_sh_group_per_bd; //type: uint32
        YLeaf max_interflex_if_per_bd; //type: uint32

}; // BridgeDomainState::SystemCapabilities


class BridgeDomainState::ModuleCapabilities : public Entity
{
    public:
        ModuleCapabilities();
        ~ModuleCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Modules; //type: BridgeDomainState::ModuleCapabilities::Modules

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::ModuleCapabilities::Modules> > modules_;
        
}; // BridgeDomainState::ModuleCapabilities


class BridgeDomainState::ModuleCapabilities::Modules : public Entity
{
    public:
        Modules();
        ~Modules();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf max_mac_per_bd; //type: uint32
        YLeaf max_pdd_edge_bd; //type: uint32
        YLeaf max_bd; //type: uint32
        YLeaf max_ac_per_bd; //type: uint32
        YLeaf max_pw_per_bd; //type: uint32
        YLeaf max_vfi_per_bd; //type: uint32
        YLeaf max_sh_group_per_bd; //type: uint32

}; // BridgeDomainState::ModuleCapabilities::Modules


class BridgeDomainState::BridgeDomains : public Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BridgeDomain; //type: BridgeDomainState::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain> > bridge_domain_;
        
}; // BridgeDomainState::BridgeDomains


class BridgeDomainState::BridgeDomains::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf bd_state; //type: BridgeDomainStateTypeEnum
        YLeaf create_time; //type: uint32
        YLeaf last_status_change; //type: uint32
        YLeaf mac_limit_reached; //type: boolean
        YLeaf p2mp_pw_disabled; //type: boolean
        class Members; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members> members_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain


class BridgeDomainState::BridgeDomains::BridgeDomain::Members : public Entity
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

        class AcMember; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember
        class VfiMember; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember
        class AccessPwMember; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember> > ac_member_;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember> > access_pw_member_;
        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember> > vfi_member_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember : public Entity
{
    public:
        AcMember();
        ~AcMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::InterfacesState::Interface::name)
        YLeaf interface;
        YLeaf static_mac_count; //type: uint32
        class DaiStats; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats
        class IpsgStats; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats
        class StormControl; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats> dai_stats_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats> ipsg_stats_;
        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl> storm_control_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats : public Entity
{
    public:
        DaiStats();
        ~DaiStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_drops; //type: uint64
        YLeaf byte_drops; //type: uint64

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats : public Entity
{
    public:
        IpsgStats();
        ~IpsgStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_drops; //type: uint64
        YLeaf byte_drops; //type: uint64

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DropCounter; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter> > drop_counter_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter : public Entity
{
    public:
        DropCounter();
        ~DropCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_class; //type: EthTrafficClassEnum
        YLeaf packet_drops; //type: uint64
        YLeaf octate_drops; //type: uint64

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember : public Entity
{
    public:
        VfiMember();
        ~VfiMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::InterfacesState::Interface::name)
        YLeaf interface;
        class Flooding; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding> flooding_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status> > status_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_class; //type: EthTrafficClassEnum
        YLeaf enabled; //type: boolean

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember : public Entity
{
    public:
        AccessPwMember();
        ~AccessPwMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: union (refers to cisco_pw::PseudowireState::Pseudowires::vc_peer_address)
        YLeaf vc_peer_address;
        //type: uint32 (refers to cisco_pw::PseudowireState::Pseudowires::vc_id)
        YLeaf vc_id;
        class Flooding; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding

        std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding> flooding_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status

        std::vector<std::shared_ptr<cisco_bridge_domain::BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status> > status_;
        
}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding


class BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_class; //type: EthTrafficClassEnum
        YLeaf enabled; //type: boolean

}; // BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status


class BridgeDomainState::MacTable : public Entity
{
    public:
        MacTable();
        ~MacTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_id; //type: string
        YLeaf mac_address; //type: string
        YLeaf mac_type; //type: MacTypeEnum
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf secure_mac; //type: boolean
        YLeaf ntfy_mac; //type: boolean
        YLeaf age; //type: uint32
        YLeaf location; //type: string
        class MacTypeEnum;

}; // BridgeDomainState::MacTable

class ClearBridgeDomainRpc : public Entity
{
    public:
        ClearBridgeDomainRpc();
        ~ClearBridgeDomainRpc();

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

        class Input; //type: ClearBridgeDomainRpc::Input
        class Output; //type: ClearBridgeDomainRpc::Output

        std::shared_ptr<cisco_bridge_domain::ClearBridgeDomainRpc::Input> input_;
        std::shared_ptr<cisco_bridge_domain::ClearBridgeDomainRpc::Output> output_;
        
}; // ClearBridgeDomainRpc


class ClearBridgeDomainRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf bd_id; //type: string
        YLeaf bg_id; //type: string

}; // ClearBridgeDomainRpc::Input


class ClearBridgeDomainRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf errstr; //type: string

}; // ClearBridgeDomainRpc::Output

class ClearMacAddressRpc : public Entity
{
    public:
        ClearMacAddressRpc();
        ~ClearMacAddressRpc();

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

        class Input; //type: ClearMacAddressRpc::Input
        class Output; //type: ClearMacAddressRpc::Output

        std::shared_ptr<cisco_bridge_domain::ClearMacAddressRpc::Input> input_;
        std::shared_ptr<cisco_bridge_domain::ClearMacAddressRpc::Output> output_;
        
}; // ClearMacAddressRpc


class ClearMacAddressRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf mac_address; //type: string
        class BridgeDomain; //type: ClearMacAddressRpc::Input::BridgeDomain

        std::shared_ptr<cisco_bridge_domain::ClearMacAddressRpc::Input::BridgeDomain> bridge_domain_;
        
}; // ClearMacAddressRpc::Input


class ClearMacAddressRpc::Input::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_id; //type: string
        YLeaf bg_id; //type: string

}; // ClearMacAddressRpc::Input::BridgeDomain


class ClearMacAddressRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf errstr; //type: string

}; // ClearMacAddressRpc::Output

class CreateParameterizedBridgeDomainsRpc : public Entity
{
    public:
        CreateParameterizedBridgeDomainsRpc();
        ~CreateParameterizedBridgeDomainsRpc();

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

        class Input; //type: CreateParameterizedBridgeDomainsRpc::Input
        class Output; //type: CreateParameterizedBridgeDomainsRpc::Output

        std::shared_ptr<cisco_bridge_domain::CreateParameterizedBridgeDomainsRpc::Input> input_;
        std::shared_ptr<cisco_bridge_domain::CreateParameterizedBridgeDomainsRpc::Output> output_;
        
}; // CreateParameterizedBridgeDomainsRpc


class CreateParameterizedBridgeDomainsRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf parameter; //type: ParameterEnum
        class Member; //type: CreateParameterizedBridgeDomainsRpc::Input::Member

        std::vector<std::shared_ptr<cisco_bridge_domain::CreateParameterizedBridgeDomainsRpc::Input::Member> > member_;
                class ParameterEnum;

}; // CreateParameterizedBridgeDomainsRpc::Input


class CreateParameterizedBridgeDomainsRpc::Input::Member : public Entity
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

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;

}; // CreateParameterizedBridgeDomainsRpc::Input::Member


class CreateParameterizedBridgeDomainsRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf errstr; //type: string

}; // CreateParameterizedBridgeDomainsRpc::Output

class BridgeDomainStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf admin_down;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::FloodingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf convergence_optimized;
        static const Enum::YLeaf resilience_optimized;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::UnitEnum : public Enum
{
    public:
        static const Enum::YLeaf bps;
        static const Enum::YLeaf kbps;
        static const Enum::YLeaf pps;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::UnitEnum : public Enum
{
    public:
        static const Enum::YLeaf bps;
        static const Enum::YLeaf kbps;
        static const Enum::YLeaf pps;

};

class BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::UnitEnum : public Enum
{
    public:
        static const Enum::YLeaf bps;
        static const Enum::YLeaf kbps;
        static const Enum::YLeaf pps;

};

class BridgeDomainState::MacTable::MacTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dynamic;

};

class CreateParameterizedBridgeDomainsRpc::Input::ParameterEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan;

};


}
}

#endif /* _CISCO_BRIDGE_DOMAIN_ */

