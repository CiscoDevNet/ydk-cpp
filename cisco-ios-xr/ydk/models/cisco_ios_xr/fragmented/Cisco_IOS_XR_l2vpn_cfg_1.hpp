#ifndef _CISCO_IOS_XR_L2VPN_CFG_1_
#define _CISCO_IOS_XR_L2VPN_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance : public ydk::Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_label; //type: FlowLabelLoadBalance
        ydk::YLeaf static_; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy : public ydk::Entity
{
    public:
        BgpRoutePolicy();
        ~BgpRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf export_; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher : public ydk::Entity
{
    public:
        RouteDistinguisher();
        ~RouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol : public ydk::Entity
{
    public:
        BgpSignalingProtocol();
        ~BgpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ve_range; //type: uint32
        ydk::YLeaf veid; //type: uint32
        ydk::YLeaf enable; //type: empty
        class FlowLabelLoadBalance; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance : public ydk::Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_label; //type: FlowLabelLoadBalance
        ydk::YLeaf static_; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteTarget; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget> > route_target;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        class TwoByteAsOrFourByteAs; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs
        class Ipv4Address; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address> > ipv4_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs : public ydk::Entity
{
    public:
        TwoByteAsOrFourByteAs();
        ~TwoByteAsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits : public ydk::Entity
{
    public:
        BdAttachmentCircuits();
        ~BdAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdAttachmentCircuit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit> > bd_attachment_circuit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit : public ydk::Entity
{
    public:
        BdAttachmentCircuit();
        ~BdAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_flooding; //type: InterfaceTrafficFlood
        ydk::YLeaf interface_igmp_snoop; //type: string
        ydk::YLeaf interface_flooding_unknown_unicast; //type: InterfaceTrafficFlood
        ydk::YLeaf interface_mld_snoop; //type: string
        class InterfaceIpSourceGuard; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard
        class InterfaceDai; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai
        class InterfaceProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile
        class BdacStormControlTypes; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes
        class SplitHorizon; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon
        class StaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses
        class InterfaceMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard> interface_ip_source_guard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai> interface_dai;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile> interface_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes> bdac_storm_control_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon> split_horizon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses> static_mac_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac> interface_mac;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard : public ydk::Entity
{
    public:
        InterfaceIpSourceGuard();
        ~InterfaceIpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai : public ydk::Entity
{
    public:
        InterfaceDai();
        ~InterfaceDai();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty
        class InterfaceDaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation> interface_dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation : public ydk::Entity
{
    public:
        InterfaceDaiAddressValidation();
        ~InterfaceDaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_verification; //type: L2vpnVerification
        ydk::YLeaf destination_mac_verification; //type: L2vpnVerification
        ydk::YLeaf source_mac_verification; //type: L2vpnVerification
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile : public ydk::Entity
{
    public:
        InterfaceProfile();
        ~InterfaceProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes : public ydk::Entity
{
    public:
        BdacStormControlTypes();
        ~BdacStormControlTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdacStormControlType; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType> > bdac_storm_control_type;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType : public ydk::Entity
{
    public:
        BdacStormControlType();
        ~BdacStormControlType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sctype; //type: StormControl
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit : public ydk::Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbits_per_sec; //type: uint32
        ydk::YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SplitHorizonGroupId; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId> split_horizon_group_id;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId : public ydk::Entity
{
    public:
        SplitHorizonGroupId();
        ~SplitHorizonGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses : public ydk::Entity
{
    public:
        StaticMacAddresses();
        ~StaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress> > static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress : public ydk::Entity
{
    public:
        StaticMacAddress();
        ~StaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac : public ydk::Entity
{
    public:
        InterfaceMac();
        ~InterfaceMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mac_port_down_flush; //type: PortDownFlush
        ydk::YLeaf interface_mac_learning; //type: MacLearn
        class InterfaceMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging
        class InterfaceMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure
        class InterfaceMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging> interface_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure> interface_mac_secure;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit> interface_mac_limit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging : public ydk::Entity
{
    public:
        InterfaceMacAging();
        ~InterfaceMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mac_aging_time; //type: uint32
        ydk::YLeaf interface_mac_aging_type; //type: MacAging

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure : public ydk::Entity
{
    public:
        InterfaceMacSecure();
        ~InterfaceMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit : public ydk::Entity
{
    public:
        InterfaceMacLimit();
        ~InterfaceMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mac_limit_max; //type: uint32
        ydk::YLeaf interface_mac_limit_notif; //type: MacNotification
        ydk::YLeaf interface_mac_limit_action; //type: MacLimitAction

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns : public ydk::Entity
{
    public:
        BdPseudowireEvpns();
        ~BdPseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPseudowireEvpn; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn> > bd_pseudowire_evpn;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn : public ydk::Entity
{
    public:
        BdPseudowireEvpn();
        ~BdPseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf acid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard : public ydk::Entity
{
    public:
        IpSourceGuard();
        ~IpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai : public ydk::Entity
{
    public:
        Dai();
        ~Dai();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf enable; //type: empty
        class DaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation> dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation : public ydk::Entity
{
    public:
        DaiAddressValidation();
        ~DaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_verification; //type: empty
        ydk::YLeaf destination_mac_verification; //type: empty
        ydk::YLeaf source_mac_verification; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces : public ydk::Entity
{
    public:
        RoutedInterfaces();
        ~RoutedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoutedInterface; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface> > routed_interface;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface : public ydk::Entity
{
    public:
        RoutedInterface();
        ~RoutedInterface();

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
        class RoutedInterfaceSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup> routed_interface_split_horizon_group;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup : public ydk::Entity
{
    public:
        RoutedInterfaceSplitHorizonGroup();
        ~RoutedInterfaceSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routed_interface_split_horizon_group_core; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup


class L2Vpn::Database::PseudowireClasses : public ydk::Entity
{
    public:
        PseudowireClasses();
        ~PseudowireClasses();

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

        class PseudowireClass; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass> > pseudowire_class;
        
}; // L2Vpn::Database::PseudowireClasses


class L2Vpn::Database::PseudowireClasses::PseudowireClass : public ydk::Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf mac_withdraw; //type: empty
        ydk::YLeaf enable; //type: empty
        class L2Tpv3Encapsulation; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation
        class BackupDisableDelay; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay
        class MplsEncapsulation; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation> l2tpv3_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay> backup_disable_delay;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation> mpls_encapsulation;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation : public ydk::Entity
{
    public:
        L2Tpv3Encapsulation();
        ~L2Tpv3Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf df_bit_set; //type: empty
        ydk::YLeaf cookie_size; //type: L2tpCookieSize
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf transport_mode; //type: TransportMode
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf time_to_live; //type: uint32
        class Sequencing; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing
        class TypeOfService; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService
        class SignalingProtocol; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol
        class PathMtu; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing> sequencing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService> type_of_service;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol> signaling_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu> path_mtu;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing : public ydk::Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequencing; //type: L2tpv3Sequencing
        ydk::YLeaf resync_threshold; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService : public ydk::Entity
{
    public:
        TypeOfService();
        ~TypeOfService();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type_of_service_value; //type: uint32
        ydk::YLeaf type_of_service_mode; //type: TypeOfServiceMode

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol : public ydk::Entity
{
    public:
        SignalingProtocol();
        ~SignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: L2tpSignalingProtocol
        ydk::YLeaf l2tpv3_class_name; //type: string

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol


class L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu : public ydk::Entity
{
    public:
        PathMtu();
        ~PathMtu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf max_path_mtu; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu


class L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay : public ydk::Entity
{
    public:
        BackupDisableDelay();
        ~BackupDisableDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BackupDisable
        ydk::YLeaf disable_backup; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation : public ydk::Entity
{
    public:
        MplsEncapsulation();
        ~MplsEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_switching_tlv; //type: PwSwitchingPointTlv
        ydk::YLeaf static_tag_rewrite; //type: uint32
        ydk::YLeaf signaling_protocol; //type: MplsSignalingProtocol
        ydk::YLeaf vccv_type; //type: VccvVerification
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf transport_mode; //type: TransportMode
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf control_word; //type: ControlWord
        class Sequencing; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing
        class MplsRedundancy; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy
        class PreferredPath; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath
        class LoadBalanceGroup; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing> sequencing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy> mpls_redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup> load_balance_group;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing : public ydk::Entity
{
    public:
        Sequencing();
        ~Sequencing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequencing; //type: MplsSequencing
        ydk::YLeaf resync_threshold; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy : public ydk::Entity
{
    public:
        MplsRedundancy();
        ~MplsRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf redundancy_one_way; //type: empty
        ydk::YLeaf redundancy_initial_delay; //type: uint32

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PreferredPath
        ydk::YLeaf interface_tunnel_number; //type: uint32
        ydk::YLeaf fallback_disable; //type: empty
        ydk::YLeaf srte_policy; //type: string

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup : public ydk::Entity
{
    public:
        LoadBalanceGroup();
        ~LoadBalanceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_label_load_balance_code; //type: FlowLabelTlvCode
        ydk::YLeaf pw_label_load_balance; //type: LoadBalance
        class FlowLabelLoadBalance; //type: L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance> flow_label_load_balance;
        
}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup


class L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance : public ydk::Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_label; //type: FlowLabelLoadBalance
        ydk::YLeaf static_; //type: empty

}; // L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance


class L2Vpn::Database::FlexibleXconnectServiceTable : public ydk::Entity
{
    public:
        FlexibleXconnectServiceTable();
        ~FlexibleXconnectServiceTable();

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

        class VlanUnawareFlexibleXconnectServices; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices
        class VlanAwareFlexibleXconnectServices; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices> vlan_unaware_flexible_xconnect_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices> vlan_aware_flexible_xconnect_services;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices : public ydk::Entity
{
    public:
        VlanUnawareFlexibleXconnectServices();
        ~VlanUnawareFlexibleXconnectServices();

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

        class VlanUnawareFlexibleXconnectService; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService> > vlan_unaware_flexible_xconnect_service;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService : public ydk::Entity
{
    public:
        VlanUnawareFlexibleXconnectService();
        ~VlanUnawareFlexibleXconnectService();

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

        ydk::YLeaf name; //type: string
        class VlanUnawareFxcAttachmentCircuits; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits
        class VlanUnawareFxcPseudowireEvpns; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits> vlan_unaware_fxc_attachment_circuits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns> vlan_unaware_fxc_pseudowire_evpns;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits : public ydk::Entity
{
    public:
        VlanUnawareFxcAttachmentCircuits();
        ~VlanUnawareFxcAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanUnawareFxcAttachmentCircuit; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit> > vlan_unaware_fxc_attachment_circuit;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit : public ydk::Entity
{
    public:
        VlanUnawareFxcAttachmentCircuit();
        ~VlanUnawareFxcAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns : public ydk::Entity
{
    public:
        VlanUnawareFxcPseudowireEvpns();
        ~VlanUnawareFxcPseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanUnawareFxcPseudowireEvpn; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn> > vlan_unaware_fxc_pseudowire_evpn;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn : public ydk::Entity
{
    public:
        VlanUnawareFxcPseudowireEvpn();
        ~VlanUnawareFxcPseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf acid; //type: uint32

}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices : public ydk::Entity
{
    public:
        VlanAwareFlexibleXconnectServices();
        ~VlanAwareFlexibleXconnectServices();

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

        class VlanAwareFlexibleXconnectService; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService> > vlan_aware_flexible_xconnect_service;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService : public ydk::Entity
{
    public:
        VlanAwareFlexibleXconnectService();
        ~VlanAwareFlexibleXconnectService();

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

        ydk::YLeaf eviid; //type: uint32
        class VlanAwareFxcAttachmentCircuits; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits> vlan_aware_fxc_attachment_circuits;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits : public ydk::Entity
{
    public:
        VlanAwareFxcAttachmentCircuits();
        ~VlanAwareFxcAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanAwareFxcAttachmentCircuit; //type: L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit> > vlan_aware_fxc_attachment_circuit;
        
}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits


class L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit : public ydk::Entity
{
    public:
        VlanAwareFxcAttachmentCircuit();
        ~VlanAwareFxcAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit


class L2Vpn::Database::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

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

        ydk::YLeaf enable; //type: empty
        class IccpRedundancyGroups; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups> iccp_redundancy_groups;
        
}; // L2Vpn::Database::Redundancy


class L2Vpn::Database::Redundancy::IccpRedundancyGroups : public ydk::Entity
{
    public:
        IccpRedundancyGroups();
        ~IccpRedundancyGroups();

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

        class IccpRedundancyGroup; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup> > iccp_redundancy_group;
        
}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups


class L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup : public ydk::Entity
{
    public:
        IccpRedundancyGroup();
        ~IccpRedundancyGroup();

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

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf multi_homing_node_id; //type: uint32
        class IccpInterfaces; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces> iccp_interfaces;
        
}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup


class L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces : public ydk::Entity
{
    public:
        IccpInterfaces();
        ~IccpInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpInterface; //type: L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface> > iccp_interface;
        
}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces


class L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface : public ydk::Entity
{
    public:
        IccpInterface();
        ~IccpInterface();

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
        ydk::YLeaf secondary_vlan_range; //type: string
        ydk::YLeaf recovery_delay; //type: uint32
        ydk::YLeaf primary_vlan_range; //type: string
        ydk::YLeaf mac_flush_tcn; //type: empty

}; // L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface


class L2Vpn::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

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

        ydk::YLeaf backbone_source_mac; //type: string

}; // L2Vpn::Pbb


class L2Vpn::AutoDiscovery : public ydk::Entity
{
    public:
        AutoDiscovery();
        ~AutoDiscovery();

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

        class BgpSignaling; //type: L2Vpn::AutoDiscovery::BgpSignaling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery::BgpSignaling> bgp_signaling;
        
}; // L2Vpn::AutoDiscovery


class L2Vpn::AutoDiscovery::BgpSignaling : public ydk::Entity
{
    public:
        BgpSignaling();
        ~BgpSignaling();

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

        ydk::YLeaf mtu_mismatch_ignore; //type: empty

}; // L2Vpn::AutoDiscovery::BgpSignaling


class L2Vpn::Utility : public ydk::Entity
{
    public:
        Utility();
        ~Utility();

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

        class Logging; //type: L2Vpn::Utility::Logging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Utility::Logging> logging;
        
}; // L2Vpn::Utility


class L2Vpn::Utility::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf bridge_domain_state_change; //type: empty
        ydk::YLeaf pseudowire_state_change; //type: empty
        ydk::YLeaf vfi; //type: empty
        ydk::YLeaf nsr_state_change; //type: empty
        ydk::YLeaf pwhe_replication_state_change; //type: empty

}; // L2Vpn::Utility::Logging


class L2Vpn::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

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

        class Mib; //type: L2Vpn::Snmp::Mib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib> mib;
        
}; // L2Vpn::Snmp


class L2Vpn::Snmp::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        class MibInterface; //type: L2Vpn::Snmp::Mib::MibInterface
        class MibPseudowire; //type: L2Vpn::Snmp::Mib::MibPseudowire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibInterface> mib_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibPseudowire> mib_pseudowire;
        
}; // L2Vpn::Snmp::Mib


class L2Vpn::Snmp::Mib::MibInterface : public ydk::Entity
{
    public:
        MibInterface();
        ~MibInterface();

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

        class Format; //type: L2Vpn::Snmp::Mib::MibInterface::Format

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp::Mib::MibInterface::Format> format;
        
}; // L2Vpn::Snmp::Mib::MibInterface


class L2Vpn::Snmp::Mib::MibInterface::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

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

        ydk::YLeaf external_interface_format; //type: empty

}; // L2Vpn::Snmp::Mib::MibInterface::Format


class L2Vpn::Snmp::Mib::MibPseudowire : public ydk::Entity
{
    public:
        MibPseudowire();
        ~MibPseudowire();

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

        ydk::YLeaf statistics; //type: empty

}; // L2Vpn::Snmp::Mib::MibPseudowire

class GenericInterfaceLists : public ydk::Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

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

        class GenericInterface; //type: GenericInterfaceLists::GenericInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface> > generic_interface;
        
}; // GenericInterfaceLists


class GenericInterfaceLists::GenericInterface : public ydk::Entity
{
    public:
        GenericInterface();
        ~GenericInterface();

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

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Interfaces; //type: GenericInterfaceLists::GenericInterface::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces> interfaces;
        
}; // GenericInterfaceLists::GenericInterface


class GenericInterfaceLists::GenericInterface::Interfaces : public ydk::Entity
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

        class Interface; //type: GenericInterfaceLists::GenericInterface::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces::Interface> > interface;
        
}; // GenericInterfaceLists::GenericInterface::Interfaces


class GenericInterfaceLists::GenericInterface::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty

}; // GenericInterfaceLists::GenericInterface::Interfaces::Interface

class Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

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

        ydk::YLeaf enable; //type: empty
        class EvpnTables; //type: Evpn::EvpnTables

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables> evpn_tables;
        
}; // Evpn


class Evpn::EvpnTables : public ydk::Entity
{
    public:
        EvpnTables();
        ~EvpnTables();

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

        ydk::YLeaf evi_cost_out; //type: empty
        ydk::YLeaf evpn_source_interface; //type: string
        ydk::YLeaf evpn_cost_in_startup; //type: uint32
        class EvpnTimers; //type: Evpn::EvpnTables::EvpnTimers
        class Evpnmac; //type: Evpn::EvpnTables::Evpnmac
        class Evpnevis; //type: Evpn::EvpnTables::Evpnevis
        class EvpnVirtualAccessVfis; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis
        class EvpnLoadBalancing; //type: Evpn::EvpnTables::EvpnLoadBalancing
        class EvpnBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnBgpAutoDiscovery
        class EvpnInstances; //type: Evpn::EvpnTables::EvpnInstances
        class EvpnLogging; //type: Evpn::EvpnTables::EvpnLogging
        class EvpnInterfaces; //type: Evpn::EvpnTables::EvpnInterfaces
        class EvpnVirtualAccessPws; //type: Evpn::EvpnTables::EvpnVirtualAccessPws
        class EvpnEthernetSegment; //type: Evpn::EvpnTables::EvpnEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnTimers> evpn_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnmac> evpnmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis> evpnevis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis> evpn_virtual_access_vfis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLoadBalancing> evpn_load_balancing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnBgpAutoDiscovery> evpn_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances> evpn_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLogging> evpn_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces> evpn_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws> evpn_virtual_access_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEthernetSegment> evpn_ethernet_segment;
        
}; // Evpn::EvpnTables


class Evpn::EvpnTables::EvpnTimers : public ydk::Entity
{
    public:
        EvpnTimers();
        ~EvpnTimers();

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

        ydk::YLeaf evpn_recovery; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evpn_peering; //type: uint32

}; // Evpn::EvpnTables::EvpnTimers


class Evpn::EvpnTables::Evpnmac : public ydk::Entity
{
    public:
        Evpnmac();
        ~Evpnmac();

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

        ydk::YLeaf enable; //type: empty
        class EvpnmacSecure; //type: Evpn::EvpnTables::Evpnmac::EvpnmacSecure

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnmac::EvpnmacSecure> evpnmac_secure;
        
}; // Evpn::EvpnTables::Evpnmac


class Evpn::EvpnTables::Evpnmac::EvpnmacSecure : public ydk::Entity
{
    public:
        EvpnmacSecure();
        ~EvpnmacSecure();

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

        ydk::YLeaf evpnmac_secure_freeze_time; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evpnmac_secure_retry_count; //type: uint32
        ydk::YLeaf evpnmac_secure_move_count; //type: uint32
        ydk::YLeaf evpnmac_secure_move_interval; //type: uint32

}; // Evpn::EvpnTables::Evpnmac::EvpnmacSecure


class Evpn::EvpnTables::Evpnevis : public ydk::Entity
{
    public:
        Evpnevis();
        ~Evpnevis();

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

        class Evpnevi; //type: Evpn::EvpnTables::Evpnevis::Evpnevi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi> > evpnevi;
        
}; // Evpn::EvpnTables::Evpnevis


class Evpn::EvpnTables::Evpnevis::Evpnevi : public ydk::Entity
{
    public:
        Evpnevi();
        ~Evpnevi();

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

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf evi_reorig_disable; //type: empty
        ydk::YLeaf evi_advertise_mac_deprecated; //type: empty
        ydk::YLeaf evpnevi_description; //type: string
        ydk::YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        ydk::YLeaf evpn_evi_cw_disable; //type: empty
        class EviLoadBalancing; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing
        class EvpnevIbgpAutoDiscovery; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery
        class EviAdvertiseMac; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing> evi_load_balancing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery> evpnev_ibgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac> evi_advertise_mac;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi


class Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing : public ydk::Entity
{
    public:
        EviLoadBalancing();
        ~EviLoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evi_flow_label; //type: empty

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnevIbgpAutoDiscovery();
        ~EvpnevIbgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf table_policy; //type: string
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher
        class EvpnRouteTargets; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets : public ydk::Entity
{
    public:
        EvpnRouteTargets();
        ~EvpnRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteTargetAs; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs
        class EvpnRouteTargetNone; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone
        class EvpnRouteTargetIpv4Address; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs> > evpn_route_target_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone> > evpn_route_target_none;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address> > evpn_route_target_ipv4_address;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs : public ydk::Entity
{
    public:
        EvpnRouteTargetAs();
        ~EvpnRouteTargetAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone : public ydk::Entity
{
    public:
        EvpnRouteTargetNone();
        ~EvpnRouteTargetNone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address : public ydk::Entity
{
    public:
        EvpnRouteTargetIpv4Address();
        ~EvpnRouteTargetIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address


class Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac : public ydk::Entity
{
    public:
        EviAdvertiseMac();
        ~EviAdvertiseMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evi_advertise_mac_bvi; //type: empty

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac


class Evpn::EvpnTables::EvpnVirtualAccessVfis : public ydk::Entity
{
    public:
        EvpnVirtualAccessVfis();
        ~EvpnVirtualAccessVfis();

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

        class EvpnVirtualAccessVfi; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi> > evpn_virtual_access_vfi;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi : public ydk::Entity
{
    public:
        EvpnVirtualAccessVfi();
        ~EvpnVirtualAccessVfi();

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

        ydk::YLeaf name; //type: string
        class EvpnVirtualAccessVfiTimers; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers
        class EvpnVirtualEthernetSegment; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers> evpn_virtual_access_vfi_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment> evpn_virtual_ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers : public ydk::Entity
{
    public:
        EvpnVirtualAccessVfiTimers();
        ~EvpnVirtualAccessVfiTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_virtual_access_vfi_recovery; //type: uint32
        ydk::YLeaf evpn_virtual_access_vfi_peering; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment : public ydk::Entity
{
    public:
        EvpnVirtualEthernetSegment();
        ~EvpnVirtualEthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes01; //type: string
        ydk::YLeaf bytes23; //type: string
        ydk::YLeaf bytes45; //type: string
        ydk::YLeaf bytes67; //type: string
        ydk::YLeaf bytes89; //type: string
        ydk::YLeaf type; //type: EthernetSegmentIdentifier

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving : public ydk::Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class ServiceList; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::EvpnLoadBalancing : public ydk::Entity
{
    public:
        EvpnLoadBalancing();
        ~EvpnLoadBalancing();

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

        ydk::YLeaf evpn_flow_label; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnLoadBalancing


class Evpn::EvpnTables::EvpnBgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnBgpAutoDiscovery();
        ~EvpnBgpAutoDiscovery();

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

        ydk::YLeaf enable; //type: empty
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        
}; // Evpn::EvpnTables::EvpnBgpAutoDiscovery


class Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

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

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnInstances : public ydk::Entity
{
    public:
        EvpnInstances();
        ~EvpnInstances();

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

        class EvpnInstance; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance> > evpn_instance;
        
}; // Evpn::EvpnTables::EvpnInstances


class Evpn::EvpnTables::EvpnInstances::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf encapsulation; //type: EvpnEncapsulation
        ydk::YLeaf side; //type: EvpnSide
        ydk::YLeaf evi_reorig_disable; //type: empty
        ydk::YLeaf evi_advertise_mac_deprecated; //type: empty
        ydk::YLeaf evpnevi_description; //type: string
        ydk::YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        ydk::YLeaf evpn_evi_cw_disable; //type: empty
        class EvpnInstanceBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery
        class EvpnInstanceAdvertiseMac; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac
        class EvpnInstanceLoadBalancing; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery> evpn_instance_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac> evpn_instance_advertise_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing> evpn_instance_load_balancing;
        
}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnInstanceBgpAutoDiscovery();
        ~EvpnInstanceBgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf table_policy; //type: string
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher
        class EvpnRouteTargets; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;
        
}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets : public ydk::Entity
{
    public:
        EvpnRouteTargets();
        ~EvpnRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteTargetAs; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs
        class EvpnRouteTargetNone; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone
        class EvpnRouteTargetIpv4Address; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs> > evpn_route_target_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone> > evpn_route_target_none;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address> > evpn_route_target_ipv4_address;
        
}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs : public ydk::Entity
{
    public:
        EvpnRouteTargetAs();
        ~EvpnRouteTargetAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone : public ydk::Entity
{
    public:
        EvpnRouteTargetNone();
        ~EvpnRouteTargetNone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address : public ydk::Entity
{
    public:
        EvpnRouteTargetIpv4Address();
        ~EvpnRouteTargetIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac : public ydk::Entity
{
    public:
        EvpnInstanceAdvertiseMac();
        ~EvpnInstanceAdvertiseMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evi_advertise_mac_bvi; //type: empty

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing : public ydk::Entity
{
    public:
        EvpnInstanceLoadBalancing();
        ~EvpnInstanceLoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evi_flow_label; //type: empty

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing


class Evpn::EvpnTables::EvpnLogging : public ydk::Entity
{
    public:
        EvpnLogging();
        ~EvpnLogging();

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

        ydk::YLeaf evpn_df_election; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnLogging


class Evpn::EvpnTables::EvpnInterfaces : public ydk::Entity
{
    public:
        EvpnInterfaces();
        ~EvpnInterfaces();

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

        class EvpnInterface; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface> > evpn_interface;
        
}; // Evpn::EvpnTables::EvpnInterfaces


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface : public ydk::Entity
{
    public:
        EvpnInterface();
        ~EvpnInterface();

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
        ydk::YLeaf mac_flush; //type: empty
        class EvpnacTimers; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers
        class EthernetSegment; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers> evpnac_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment> ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers : public ydk::Entity
{
    public:
        EvpnacTimers();
        ~EvpnacTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpnac_peering; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evpnac_recovery; //type: uint32

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force_single_homed; //type: empty
        ydk::YLeaf load_balancing_single_active; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf backbone_source_mac; //type: string
        ydk::YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes01; //type: string
        ydk::YLeaf bytes23; //type: string
        ydk::YLeaf bytes45; //type: string
        ydk::YLeaf bytes67; //type: string
        ydk::YLeaf bytes89; //type: string
        ydk::YLeaf type; //type: EthernetSegmentIdentifier

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving : public ydk::Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class ServiceList; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::EvpnVirtualAccessPws : public ydk::Entity
{
    public:
        EvpnVirtualAccessPws();
        ~EvpnVirtualAccessPws();

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

        class EvpnVirtualAccessPw; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw> > evpn_virtual_access_pw;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw : public ydk::Entity
{
    public:
        EvpnVirtualAccessPw();
        ~EvpnVirtualAccessPw();

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

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        class EvpnVirtualAccessPwTimers; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers
        class EvpnVirtualEthernetSegment; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers> evpn_virtual_access_pw_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment> evpn_virtual_ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers : public ydk::Entity
{
    public:
        EvpnVirtualAccessPwTimers();
        ~EvpnVirtualAccessPwTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_virtual_access_pw_recovery; //type: uint32
        ydk::YLeaf evpn_virtual_access_pw_peering; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment : public ydk::Entity
{
    public:
        EvpnVirtualEthernetSegment();
        ~EvpnVirtualEthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes01; //type: string
        ydk::YLeaf bytes23; //type: string
        ydk::YLeaf bytes45; //type: string
        ydk::YLeaf bytes67; //type: string
        ydk::YLeaf bytes89; //type: string
        ydk::YLeaf type; //type: EthernetSegmentIdentifier

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving : public ydk::Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class ServiceList; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::EvpnEthernetSegment : public ydk::Entity
{
    public:
        EvpnEthernetSegment();
        ~EvpnEthernetSegment();

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

        ydk::YLeaf enable; //type: empty
        class EvpnEsiTypes; //type: Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes> evpn_esi_types;
        
}; // Evpn::EvpnTables::EvpnEthernetSegment


class Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes : public ydk::Entity
{
    public:
        EvpnEsiTypes();
        ~EvpnEsiTypes();

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

        class EvpnEsiType; //type: Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType> > evpn_esi_type;
        
}; // Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes


class Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType : public ydk::Entity
{
    public:
        EvpnEsiType();
        ~EvpnEsiType();

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

        ydk::YLeaf esi_type; //type: uint32
        ydk::YLeaf disable_auto_generation; //type: empty

}; // Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_1_ */

