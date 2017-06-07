#ifndef _CISCO_IOS_XR_L2VPN_CFG_1_
#define _CISCO_IOS_XR_L2VPN_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_cfg {


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance : public Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_label; //type: FlowLabelLoadBalanceEnum
        YLeaf static_; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy : public Entity
{
    public:
        BgpRoutePolicy();
        ~BgpRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf export_; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher : public Entity
{
    public:
        RouteDistinguisher();
        ~RouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: BgpRouteDistinguisherEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol : public Entity
{
    public:
        BgpSignalingProtocol();
        ~BgpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ve_range; //type: uint32
        YLeaf veid; //type: uint32
        YLeaf enable; //type: empty
        class FlowLabelLoadBalance; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance : public Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_label; //type: FlowLabelLoadBalanceEnum
        YLeaf static_; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets : public Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RouteTarget; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget> > route_target;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf format; //type: BgpRouteTargetFormatEnum
        class TwoByteAsOrFourByteAs; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs
        class Ipv4Address; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs : public Entity
{
    public:
        TwoByteAsOrFourByteAs();
        ~TwoByteAsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits : public Entity
{
    public:
        BdAttachmentCircuits();
        ~BdAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BdAttachmentCircuit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit> > bd_attachment_circuit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit : public Entity
{
    public:
        BdAttachmentCircuit();
        ~BdAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_flooding; //type: InterfaceTrafficFloodEnum
        YLeaf interface_igmp_snoop; //type: string
        YLeaf interface_flooding_unknown_unicast; //type: InterfaceTrafficFloodEnum
        YLeaf interface_mld_snoop; //type: string
        class InterfaceIpSourceGuard; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard
        class InterfaceDai; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai
        class InterfaceProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile
        class BdacStormControlTypes; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes
        class SplitHorizon; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon
        class StaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses
        class InterfaceMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes> bdac_storm_control_types;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai> interface_dai;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard> interface_ip_source_guard;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac> interface_mac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile> interface_profile;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon> split_horizon;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses> static_mac_addresses;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard : public Entity
{
    public:
        InterfaceIpSourceGuard();
        ~InterfaceIpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai : public Entity
{
    public:
        InterfaceDai();
        ~InterfaceDai();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty
        class InterfaceDaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation> interface_dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation : public Entity
{
    public:
        InterfaceDaiAddressValidation();
        ~InterfaceDaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_verification; //type: L2VpnVerificationEnum
        YLeaf destination_mac_verification; //type: L2VpnVerificationEnum
        YLeaf source_mac_verification; //type: L2VpnVerificationEnum
        YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile : public Entity
{
    public:
        InterfaceProfile();
        ~InterfaceProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_id; //type: InterfaceProfileEnum
        YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes : public Entity
{
    public:
        BdacStormControlTypes();
        ~BdacStormControlTypes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BdacStormControlType; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType> > bdac_storm_control_type;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType : public Entity
{
    public:
        BdacStormControlType();
        ~BdacStormControlType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sctype; //type: StormControlEnum
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit : public Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kbits_per_sec; //type: uint32
        YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon : public Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SplitHorizonGroupId; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId> split_horizon_group_id;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId : public Entity
{
    public:
        SplitHorizonGroupId();
        ~SplitHorizonGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses : public Entity
{
    public:
        StaticMacAddresses();
        ~StaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress> > static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress : public Entity
{
    public:
        StaticMacAddress();
        ~StaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac : public Entity
{
    public:
        InterfaceMac();
        ~InterfaceMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_mac_port_down_flush; //type: PortDownFlushEnum
        YLeaf interface_mac_learning; //type: MacLearnEnum
        class InterfaceMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging
        class InterfaceMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure
        class InterfaceMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging> interface_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit> interface_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure> interface_mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging : public Entity
{
    public:
        InterfaceMacAging();
        ~InterfaceMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_mac_aging_time; //type: uint32
        YLeaf interface_mac_aging_type; //type: MacAgingEnum

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure : public Entity
{
    public:
        InterfaceMacSecure();
        ~InterfaceMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf action; //type: MacSecureActionEnum
        YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit : public Entity
{
    public:
        InterfaceMacLimit();
        ~InterfaceMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_mac_limit_max; //type: uint32
        YLeaf interface_mac_limit_notif; //type: MacNotificationEnum
        YLeaf interface_mac_limit_action; //type: MacLimitActionEnum

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns : public Entity
{
    public:
        BdPseudowireEvpns();
        ~BdPseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BdPseudowireEvpn; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn> > bd_pseudowire_evpn;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn : public Entity
{
    public:
        BdPseudowireEvpn();
        ~BdPseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eviid; //type: uint32
        YLeaf acid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard : public Entity
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

        YLeaf logging; //type: empty
        YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai : public Entity
{
    public:
        Dai();
        ~Dai();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: empty
        YLeaf enable; //type: empty
        class DaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation> dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation : public Entity
{
    public:
        DaiAddressValidation();
        ~DaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_verification; //type: empty
        YLeaf destination_mac_verification; //type: empty
        YLeaf source_mac_verification; //type: empty
        YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces : public Entity
{
    public:
        RoutedInterfaces();
        ~RoutedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutedInterface; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface> > routed_interface;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface : public Entity
{
    public:
        RoutedInterface();
        ~RoutedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class RoutedInterfaceSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup> routed_interface_split_horizon_group;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup : public Entity
{
    public:
        RoutedInterfaceSplitHorizonGroup();
        ~RoutedInterfaceSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routed_interface_split_horizon_group_core; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup


class L2Vpn::Database::PseudowireClasses : public Entity
{
    public:
        PseudowireClasses();
        ~PseudowireClasses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PseudowireClass; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass> > pseudowire_class;
        
}; // L2Vpn::Database::PseudowireClasses


class L2Vpn::Database::PseudowireClasses::PseudowireClass : public Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mac_withdraw; //type: empty
        YLeaf enable; //type: empty
        class L2Tpv3Encapsulation; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation
        class BackupDisableDelay; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay
        class MplsEncapsulation; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay> backup_disable_delay;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation> l2tpv3_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation> mpls_encapsulation;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation : public Entity
{
    public:
        L2Tpv3Encapsulation();
        ~L2Tpv3Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf df_bit_set; //type: empty
        YLeaf cookie_size; //type: L2TpCookieSizeEnum
        YLeaf source_address; //type: string
        YLeaf transport_mode; //type: TransportModeEnum
        YLeaf enable; //type: empty
        YLeaf time_to_live; //type: uint32
        class Sequencing; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing
        class TypeOfService; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService
        class SignalingProtocol; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol
        class PathMtu; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu> path_mtu;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing> sequencing;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol> signaling_protocol;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService> type_of_service;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing : public Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequencing; //type: L2Tpv3SequencingEnum
        YLeaf resync_threshold; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService : public Entity
{
    public:
        TypeOfService();
        ~TypeOfService();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type_of_service_value; //type: uint32
        YLeaf type_of_service_mode; //type: TypeOfServiceModeEnum

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol : public Entity
{
    public:
        SignalingProtocol();
        ~SignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: L2TpSignalingProtocolEnum
        YLeaf l2tpv3_class_name; //type: string

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu : public Entity
{
    public:
        PathMtu();
        ~PathMtu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf max_path_mtu; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu


class L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay : public Entity
{
    public:
        BackupDisableDelay();
        ~BackupDisableDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: BackupDisableEnum
        YLeaf disable_backup; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation : public Entity
{
    public:
        MplsEncapsulation();
        ~MplsEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_switching_tlv; //type: PwSwitchingPointTlvEnum
        YLeaf static_tag_rewrite; //type: uint32
        YLeaf signaling_protocol; //type: MplsSignalingProtocolEnum
        YLeaf vccv_type; //type: VccvVerificationEnum
        YLeaf source_address; //type: string
        YLeaf transport_mode; //type: TransportModeEnum
        YLeaf enable; //type: empty
        YLeaf control_word; //type: ControlWordEnum
        class Sequencing; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing
        class MplsRedundancy; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy
        class PreferredPath; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath
        class LoadBalanceGroup; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup> load_balance_group;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy> mpls_redundancy;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing> sequencing;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing : public Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequencing; //type: MplsSequencingEnum
        YLeaf resync_threshold; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy : public Entity
{
    public:
        MplsRedundancy();
        ~MplsRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf redundancy_one_way; //type: empty
        YLeaf redundancy_initial_delay; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath : public Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: PreferredPathEnum
        YLeaf interface_tunnel_number; //type: uint32
        YLeaf fallback_disable; //type: empty

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup : public Entity
{
    public:
        LoadBalanceGroup();
        ~LoadBalanceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_label_load_balance_code; //type: FlowLabelTlvCodeEnum
        YLeaf pw_label_load_balance; //type: LoadBalanceEnum
        class FlowLabelLoadBalance; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance> flow_label_load_balance;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance : public Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_label; //type: FlowLabelLoadBalanceEnum
        YLeaf static_; //type: empty

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance


class L2Vpn::Database::FlexibleXconnectServiceTable : public Entity
{
    public:
        FlexibleXconnectServiceTable();
        ~FlexibleXconnectServiceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanUnawareFlexibleXconnectServices; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices
        class VlanAwareFlexibleXconnectServices; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices> vlan_aware_flexible_xconnect_services;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices> vlan_unaware_flexible_xconnect_services;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices : public Entity
{
    public:
        VlanUnawareFlexibleXconnectServices();
        ~VlanUnawareFlexibleXconnectServices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanUnawareFlexibleXconnectService; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService> > vlan_unaware_flexible_xconnect_service;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService : public Entity
{
    public:
        VlanUnawareFlexibleXconnectService();
        ~VlanUnawareFlexibleXconnectService();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class VlanUnawareFxcAttachmentCircuits; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits
        class VlanUnawareFxcPseudowireEvpns; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits> vlan_unaware_fxc_attachment_circuits;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns> vlan_unaware_fxc_pseudowire_evpns;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits : public Entity
{
    public:
        VlanUnawareFxcAttachmentCircuits();
        ~VlanUnawareFxcAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanUnawareFxcAttachmentCircuit; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit> > vlan_unaware_fxc_attachment_circuit;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit : public Entity
{
    public:
        VlanUnawareFxcAttachmentCircuit();
        ~VlanUnawareFxcAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns : public Entity
{
    public:
        VlanUnawareFxcPseudowireEvpns();
        ~VlanUnawareFxcPseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanUnawareFxcPseudowireEvpn; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn> > vlan_unaware_fxc_pseudowire_evpn;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn : public Entity
{
    public:
        VlanUnawareFxcPseudowireEvpn();
        ~VlanUnawareFxcPseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eviid; //type: uint32
        YLeaf acid; //type: uint32

}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices : public Entity
{
    public:
        VlanAwareFlexibleXconnectServices();
        ~VlanAwareFlexibleXconnectServices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanAwareFlexibleXconnectService; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService> > vlan_aware_flexible_xconnect_service;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService : public Entity
{
    public:
        VlanAwareFlexibleXconnectService();
        ~VlanAwareFlexibleXconnectService();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eviid; //type: uint32
        class VlanAwareFxcAttachmentCircuits; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits> vlan_aware_fxc_attachment_circuits;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits : public Entity
{
    public:
        VlanAwareFxcAttachmentCircuits();
        ~VlanAwareFxcAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanAwareFxcAttachmentCircuit; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit> > vlan_aware_fxc_attachment_circuit;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit : public Entity
{
    public:
        VlanAwareFxcAttachmentCircuit();
        ~VlanAwareFxcAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit


class L2Vpn::Database::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class IccpRedundancyGroups; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups> iccp_redundancy_groups;
        
}; // L2Vpn::Database::Redundancy


class L2Vpn::Database::Redundancy::IccpRedundancyGroups : public Entity
{
    public:
        IccpRedundancyGroups();
        ~IccpRedundancyGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpRedundancyGroup; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup> > iccp_redundancy_group;
        
}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups


class L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup : public Entity
{
    public:
        IccpRedundancyGroup();
        ~IccpRedundancyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: uint32
        YLeaf multi_homing_node_id; //type: uint32
        class IccpInterfaces; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces> iccp_interfaces;
        
}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup


class L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces : public Entity
{
    public:
        IccpInterfaces();
        ~IccpInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpInterface; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface> > iccp_interface;
        
}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces


class L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface : public Entity
{
    public:
        IccpInterface();
        ~IccpInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf secondary_vlan_range; //type: string
        YLeaf recovery_delay; //type: uint32
        YLeaf primary_vlan_range; //type: string
        YLeaf mac_flush_tcn; //type: empty

}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface


class L2Vpn::Pbb : public Entity
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

        YLeaf backbone_source_mac; //type: string

}; // L2Vpn::Pbb


class L2Vpn::AutoDiscovery : public Entity
{
    public:
        AutoDiscovery();
        ~AutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpSignaling; //type: L2Vpn::AutoDiscovery::BgpSignaling

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery::BgpSignaling> bgp_signaling;
        
}; // L2Vpn::AutoDiscovery


class L2Vpn::AutoDiscovery::BgpSignaling : public Entity
{
    public:
        BgpSignaling();
        ~BgpSignaling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu_mismatch_ignore; //type: empty

}; // L2Vpn::AutoDiscovery::BgpSignaling


class L2Vpn::Utility : public Entity
{
    public:
        Utility();
        ~Utility();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Logging; //type: L2Vpn::Utility::Logging

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Utility::Logging> logging;
        
}; // L2Vpn::Utility


class L2Vpn::Utility::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_domain_state_change; //type: empty
        YLeaf pseudowire_state_change; //type: empty
        YLeaf vfi; //type: empty
        YLeaf nsr_state_change; //type: empty
        YLeaf pwhe_replication_state_change; //type: empty

}; // L2Vpn::Utility::Logging


class L2Vpn::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mib; //type: L2Vpn::Snmp::Mib

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib> mib;
        
}; // L2Vpn::Snmp


class L2Vpn::Snmp::Mib : public Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MibInterface; //type: L2Vpn::Snmp::Mib::MibInterface
        class MibPseudowire; //type: L2Vpn::Snmp::Mib::MibPseudowire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibInterface> mib_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibPseudowire> mib_pseudowire;
        
}; // L2Vpn::Snmp::Mib


class L2Vpn::Snmp::Mib::MibInterface : public Entity
{
    public:
        MibInterface();
        ~MibInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Format; //type: L2Vpn::Snmp::Mib::MibInterface::Format

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibInterface::Format> format;
        
}; // L2Vpn::Snmp::Mib::MibInterface


class L2Vpn::Snmp::Mib::MibInterface::Format : public Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_interface_format; //type: empty

}; // L2Vpn::Snmp::Mib::MibInterface::Format


class L2Vpn::Snmp::Mib::MibPseudowire : public Entity
{
    public:
        MibPseudowire();
        ~MibPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf statistics; //type: empty

}; // L2Vpn::Snmp::Mib::MibPseudowire

class GenericInterfaceLists : public Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

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

        class GenericInterface; //type: GenericInterfaceLists::GenericInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface> > generic_interface;
        
}; // GenericInterfaceLists


class GenericInterfaceLists::GenericInterface : public Entity
{
    public:
        GenericInterface();
        ~GenericInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_interface_list_name; //type: string
        YLeaf enable; //type: empty
        class Interfaces; //type: GenericInterfaceLists::GenericInterface::Interfaces

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces> interfaces;
        
}; // GenericInterfaceLists::GenericInterface


class GenericInterfaceLists::GenericInterface::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: GenericInterfaceLists::GenericInterface::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces::Interface> > interface;
        
}; // GenericInterfaceLists::GenericInterface::Interfaces


class GenericInterfaceLists::GenericInterface::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf enable; //type: empty

}; // GenericInterfaceLists::GenericInterface::Interfaces::Interface

class Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

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

        YLeaf enable; //type: empty
        class EvpnTables; //type: Evpn::EvpnTables

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables> evpn_tables;
        
}; // Evpn


class Evpn::EvpnTables : public Entity
{
    public:
        EvpnTables();
        ~EvpnTables();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_source_interface; //type: string
        class EvpnTimers; //type: Evpn::EvpnTables::EvpnTimers
        class Evpnevis; //type: Evpn::EvpnTables::Evpnevis
        class EvpnVirtualAccessVfis; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis
        class EvpnLoadBalancing; //type: Evpn::EvpnTables::EvpnLoadBalancing
        class EvpnbgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnbgpAutoDiscovery
        class EvpnLogging; //type: Evpn::EvpnTables::EvpnLogging
        class EvpnInterfaces; //type: Evpn::EvpnTables::EvpnInterfaces
        class EvpnVirtualAccessPws; //type: Evpn::EvpnTables::EvpnVirtualAccessPws

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces> evpn_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLoadBalancing> evpn_load_balancing;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLogging> evpn_logging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnTimers> evpn_timers;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws> evpn_virtual_access_pws;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis> evpn_virtual_access_vfis;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnbgpAutoDiscovery> evpnbgp_auto_discovery;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis> evpnevis;
        
}; // Evpn::EvpnTables


class Evpn::EvpnTables::EvpnTimers : public Entity
{
    public:
        EvpnTimers();
        ~EvpnTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_recovery; //type: uint32
        YLeaf enable; //type: empty
        YLeaf evpn_peering; //type: uint32

}; // Evpn::EvpnTables::EvpnTimers


class Evpn::EvpnTables::Evpnevis : public Entity
{
    public:
        Evpnevis();
        ~Evpnevis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Evpnevi; //type: Evpn::EvpnTables::Evpnevis::Evpnevi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi> > evpnevi;
        
}; // Evpn::EvpnTables::Evpnevis


class Evpn::EvpnTables::Evpnevis::Evpnevi : public Entity
{
    public:
        Evpnevi();
        ~Evpnevi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eviid; //type: uint32
        YLeaf evi_stitching; //type: empty
        YLeaf evi_reorig_disable; //type: empty
        YLeaf evpnevi_description; //type: string
        YLeaf evi_advertise_mac; //type: empty
        YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        YLeaf evpn_evi_cw_disable; //type: empty
        class EviLoadBalancing; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing
        class EvpnevibgpAutoDiscovery; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing> evi_load_balancing;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery> evpnevibgp_auto_discovery;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi


class Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing : public Entity
{
    public:
        EviLoadBalancing();
        ~EviLoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evi_flow_label; //type: empty
        YLeaf enable; //type: empty

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery : public Entity
{
    public:
        EvpnevibgpAutoDiscovery();
        ~EvpnevibgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_policy; //type: string
        YLeaf enable; //type: empty
        class EvpnRouteTargets; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets : public Entity
{
    public:
        EvpnRouteTargets();
        ~EvpnRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EvpnRouteTargetAs; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs
        class EvpnRouteTargetNone; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone
        class EvpnRouteTargetIpv4Address; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs> > evpn_route_target_as;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address> > evpn_route_target_ipv4_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone> > evpn_route_target_none;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs : public Entity
{
    public:
        EvpnRouteTargetAs();
        ~EvpnRouteTargetAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: BgpRouteTargetFormatEnum
        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf stitching; //type: BgpRouteTargetEnum

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone : public Entity
{
    public:
        EvpnRouteTargetNone();
        ~EvpnRouteTargetNone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: BgpRouteTargetFormatEnum
        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf stitching; //type: BgpRouteTargetEnum

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address : public Entity
{
    public:
        EvpnRouteTargetIpv4Address();
        ~EvpnRouteTargetIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format; //type: BgpRouteTargetFormatEnum
        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32
        YLeaf stitching; //type: BgpRouteTargetEnum

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher : public Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: BgpRouteDistinguisherEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnVirtualAccessVfis : public Entity
{
    public:
        EvpnVirtualAccessVfis();
        ~EvpnVirtualAccessVfis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EvpnVirtualAccessVfi; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi> > evpn_virtual_access_vfi;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi : public Entity
{
    public:
        EvpnVirtualAccessVfi();
        ~EvpnVirtualAccessVfi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class EvpnVirtualAccessVfiTimers; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers
        class EvpnVirtualEthernetSegment; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers> evpn_virtual_access_vfi_timers;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment> evpn_virtual_ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers : public Entity
{
    public:
        EvpnVirtualAccessVfiTimers();
        ~EvpnVirtualAccessVfiTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_virtual_access_vfi_recovery; //type: uint32
        YLeaf evpn_virtual_access_vfi_peering; //type: uint32
        YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment : public Entity
{
    public:
        EvpnVirtualEthernetSegment();
        ~EvpnVirtualEthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier> identifier; // presence node
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bytes01; //type: string
        YLeaf bytes23; //type: string
        YLeaf bytes45; //type: string
        YLeaf bytes67; //type: string
        YLeaf bytes89; //type: string
        YLeaf type; //type: EthernetSegmentIdentifierEnum

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier


class Evpn::EvpnTables::EvpnLoadBalancing : public Entity
{
    public:
        EvpnLoadBalancing();
        ~EvpnLoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_flow_label; //type: empty
        YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnLoadBalancing


class Evpn::EvpnTables::EvpnbgpAutoDiscovery : public Entity
{
    public:
        EvpnbgpAutoDiscovery();
        ~EvpnbgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        
}; // Evpn::EvpnTables::EvpnbgpAutoDiscovery


class Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher : public Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: BgpRouteDistinguisherEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnLogging : public Entity
{
    public:
        EvpnLogging();
        ~EvpnLogging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_df_election; //type: empty
        YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnLogging


class Evpn::EvpnTables::EvpnInterfaces : public Entity
{
    public:
        EvpnInterfaces();
        ~EvpnInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EvpnInterface; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface> > evpn_interface;
        
}; // Evpn::EvpnTables::EvpnInterfaces


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface : public Entity
{
    public:
        EvpnInterface();
        ~EvpnInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf mac_flush; //type: empty
        class EvpnInterfaceEthernetSegment; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment
        class EvpnacTimers; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment> evpn_interface_ethernet_segment;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers> evpnac_timers;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment : public Entity
{
    public:
        EvpnInterfaceEthernetSegment();
        ~EvpnInterfaceEthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf force_single_homed; //type: empty
        YLeaf load_balancing_single_active; //type: empty
        YLeaf enable; //type: empty
        YLeaf backbone_source_mac; //type: string
        YLeaf es_import_route_target; //type: string
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving
        class Identifier; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving : public Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class ServiceList; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList : public Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: string
        YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bytes01; //type: string
        YLeaf bytes23; //type: string
        YLeaf bytes45; //type: string
        YLeaf bytes67; //type: string
        YLeaf bytes89; //type: string
        YLeaf type; //type: EthernetSegmentIdentifierEnum

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers : public Entity
{
    public:
        EvpnacTimers();
        ~EvpnacTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpnac_peering; //type: uint32
        YLeaf enable; //type: empty
        YLeaf evpnac_recovery; //type: uint32

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers


class Evpn::EvpnTables::EvpnVirtualAccessPws : public Entity
{
    public:
        EvpnVirtualAccessPws();
        ~EvpnVirtualAccessPws();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EvpnVirtualAccessPw; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw> > evpn_virtual_access_pw;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw : public Entity
{
    public:
        EvpnVirtualAccessPw();
        ~EvpnVirtualAccessPw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        class EvpnVirtualAccessPwTimers; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers
        class EvpnVirtualEthernetSegment; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers> evpn_virtual_access_pw_timers;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment> evpn_virtual_ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers : public Entity
{
    public:
        EvpnVirtualAccessPwTimers();
        ~EvpnVirtualAccessPwTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_virtual_access_pw_recovery; //type: uint32
        YLeaf evpn_virtual_access_pw_peering; //type: uint32
        YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment : public Entity
{
    public:
        EvpnVirtualEthernetSegment();
        ~EvpnVirtualEthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier> identifier; // presence node
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bytes01; //type: string
        YLeaf bytes23; //type: string
        YLeaf bytes45; //type: string
        YLeaf bytes67; //type: string
        YLeaf bytes89; //type: string
        YLeaf type; //type: EthernetSegmentIdentifierEnum

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_1_ */

