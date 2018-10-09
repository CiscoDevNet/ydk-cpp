#ifndef _CISCO_IOS_XR_L2VPN_CFG_2_
#define _CISCO_IOS_XR_L2VPN_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_cfg_0.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes : public ydk::Entity
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

        class BdacStormControlType; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType

        ydk::YList bdac_storm_control_type;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType : public ydk::Entity
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
        class StormControlUnit; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon : public ydk::Entity
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

        class SplitHorizonGroupId; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId> split_horizon_group_id;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses : public ydk::Entity
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

        class StaticMacAddress; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress

        ydk::YList static_mac_address;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac : public ydk::Entity
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
        class InterfaceMacAging; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging
        class InterfaceMacSecure; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure
        class InterfaceMacLimit; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging> interface_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure> interface_mac_secure;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit> interface_mac_limit;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns : public ydk::Entity
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

        class BdPseudowireEvpn; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn

        ydk::YList bd_pseudowire_evpn;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::IpSourceGuard : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::IpSourceGuard


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai : public ydk::Entity
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
        class DaiAddressValidation; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation> dai_address_validation;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces : public ydk::Entity
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

        class RoutedInterface; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface

        ydk::YList routed_interface;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface : public ydk::Entity
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
        class RoutedInterfaceSplitHorizonGroup; //type: L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup> routed_interface_split_horizon_group;
        
}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface


class L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup : public ydk::Entity
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

}; // L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup


class L2vpn::Database::FlexibleXconnectServiceTable : public ydk::Entity
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

        class VlanUnawareFlexibleXconnectServices; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices
        class VlanAwareFlexibleXconnectServices; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices> vlan_unaware_flexible_xconnect_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices> vlan_aware_flexible_xconnect_services;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable


class L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices : public ydk::Entity
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

        class VlanUnawareFlexibleXconnectService; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService

        ydk::YList vlan_unaware_flexible_xconnect_service;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices


class L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService : public ydk::Entity
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
        class VlanUnawareFxcAttachmentCircuits; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits
        class VlanUnawareFxcPseudowireEvpns; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits> vlan_unaware_fxc_attachment_circuits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns> vlan_unaware_fxc_pseudowire_evpns;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService


class L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits : public ydk::Entity
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

        class VlanUnawareFxcAttachmentCircuit; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit

        ydk::YList vlan_unaware_fxc_attachment_circuit;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits


class L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit : public ydk::Entity
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

}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit


class L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns : public ydk::Entity
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

        class VlanUnawareFxcPseudowireEvpn; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn

        ydk::YList vlan_unaware_fxc_pseudowire_evpn;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns


class L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn : public ydk::Entity
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

}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn


class L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices : public ydk::Entity
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

        class VlanAwareFlexibleXconnectService; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService

        ydk::YList vlan_aware_flexible_xconnect_service;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices


class L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService : public ydk::Entity
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
        class VlanAwareFxcAttachmentCircuits; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits> vlan_aware_fxc_attachment_circuits;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService


class L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits : public ydk::Entity
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

        class VlanAwareFxcAttachmentCircuit; //type: L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit

        ydk::YList vlan_aware_fxc_attachment_circuit;
        
}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits


class L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit : public ydk::Entity
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

}; // L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit


class L2vpn::Database::Redundancy : public ydk::Entity
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
        class IccpRedundancyGroups; //type: L2vpn::Database::Redundancy::IccpRedundancyGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::Redundancy::IccpRedundancyGroups> iccp_redundancy_groups;
        
}; // L2vpn::Database::Redundancy


class L2vpn::Database::Redundancy::IccpRedundancyGroups : public ydk::Entity
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

        class IccpRedundancyGroup; //type: L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup

        ydk::YList iccp_redundancy_group;
        
}; // L2vpn::Database::Redundancy::IccpRedundancyGroups


class L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup : public ydk::Entity
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
        class IccpInterfaces; //type: L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces> iccp_interfaces;
        
}; // L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup


class L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces : public ydk::Entity
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

        class IccpInterface; //type: L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface

        ydk::YList iccp_interface;
        
}; // L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces


class L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface : public ydk::Entity
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

}; // L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface


class L2vpn::Pbb : public ydk::Entity
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

}; // L2vpn::Pbb


class L2vpn::AutoDiscovery : public ydk::Entity
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

        class BgpSignaling; //type: L2vpn::AutoDiscovery::BgpSignaling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::AutoDiscovery::BgpSignaling> bgp_signaling;
        
}; // L2vpn::AutoDiscovery


class L2vpn::AutoDiscovery::BgpSignaling : public ydk::Entity
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

}; // L2vpn::AutoDiscovery::BgpSignaling


class L2vpn::Utility : public ydk::Entity
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

        class Logging; //type: L2vpn::Utility::Logging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Utility::Logging> logging;
        
}; // L2vpn::Utility


class L2vpn::Utility::Logging : public ydk::Entity
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

}; // L2vpn::Utility::Logging


class L2vpn::Snmp : public ydk::Entity
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

        class Mib; //type: L2vpn::Snmp::Mib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Snmp::Mib> mib;
        
}; // L2vpn::Snmp


class L2vpn::Snmp::Mib : public ydk::Entity
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

        class MibInterface; //type: L2vpn::Snmp::Mib::MibInterface
        class MibPseudowire; //type: L2vpn::Snmp::Mib::MibPseudowire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Snmp::Mib::MibInterface> mib_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Snmp::Mib::MibPseudowire> mib_pseudowire;
        
}; // L2vpn::Snmp::Mib


class L2vpn::Snmp::Mib::MibInterface : public ydk::Entity
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

        class Format; //type: L2vpn::Snmp::Mib::MibInterface::Format

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Snmp::Mib::MibInterface::Format> format;
        
}; // L2vpn::Snmp::Mib::MibInterface


class L2vpn::Snmp::Mib::MibInterface::Format : public ydk::Entity
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

}; // L2vpn::Snmp::Mib::MibInterface::Format


class L2vpn::Snmp::Mib::MibPseudowire : public ydk::Entity
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

}; // L2vpn::Snmp::Mib::MibPseudowire

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

        class GenericInterfaceList; //type: GenericInterfaceLists::GenericInterfaceList

        ydk::YList generic_interface_list;
        
}; // GenericInterfaceLists


class GenericInterfaceLists::GenericInterfaceList : public ydk::Entity
{
    public:
        GenericInterfaceList();
        ~GenericInterfaceList();

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
        class Interfaces; //type: GenericInterfaceLists::GenericInterfaceList::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterfaceList::Interfaces> interfaces;
        
}; // GenericInterfaceLists::GenericInterfaceList


class GenericInterfaceLists::GenericInterfaceList::Interfaces : public ydk::Entity
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

        class Interface; //type: GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface

        ydk::YList interface;
        
}; // GenericInterfaceLists::GenericInterfaceList::Interfaces


class GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface : public ydk::Entity
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

}; // GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface

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
        class EvpnEvis; //type: Evpn::EvpnTables::EvpnEvis
        class EvpnVirtualAccessVfis; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis
        class EvpnLoadBalancing; //type: Evpn::EvpnTables::EvpnLoadBalancing
        class EvpnBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnBgpAutoDiscovery
        class EvpnGroups; //type: Evpn::EvpnTables::EvpnGroups
        class EvpnInstances; //type: Evpn::EvpnTables::EvpnInstances
        class EvpnLogging; //type: Evpn::EvpnTables::EvpnLogging
        class EvpnInterfaces; //type: Evpn::EvpnTables::EvpnInterfaces
        class EvpnVirtualAccessPws; //type: Evpn::EvpnTables::EvpnVirtualAccessPws
        class EvpnEthernetSegment; //type: Evpn::EvpnTables::EvpnEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnTimers> evpn_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnmac> evpnmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis> evpn_evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis> evpn_virtual_access_vfis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLoadBalancing> evpn_load_balancing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnBgpAutoDiscovery> evpn_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnGroups> evpn_groups;
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

        ydk::YLeaf evpn_carving; //type: uint32
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


class Evpn::EvpnTables::EvpnEvis : public ydk::Entity
{
    public:
        EvpnEvis();
        ~EvpnEvis();

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

        class EvpnEvi; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi

        ydk::YList evpn_evi;
        
}; // Evpn::EvpnTables::EvpnEvis


class Evpn::EvpnTables::EvpnEvis::EvpnEvi : public ydk::Entity
{
    public:
        EvpnEvi();
        ~EvpnEvi();

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
        ydk::YLeaf evpn_evi_description; //type: string
        ydk::YLeaf evi_ecmp_disable; //type: empty
        ydk::YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        ydk::YLeaf evpn_evi_cw_disable; //type: empty
        class EviLoadBalancing; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing
        class EvpnEviBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery
        class EviMulticast; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviMulticast
        class EviAdvertiseMac; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing> evi_load_balancing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery> evpn_evi_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviMulticast> evi_multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac> evi_advertise_mac;
        
}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing : public ydk::Entity
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
        ydk::YLeaf evi_static_flow_label; //type: empty

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnEviBgpAutoDiscovery();
        ~EvpnEviBgpAutoDiscovery();

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
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher
        class EvpnRouteTargets; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;
        
}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
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

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets : public ydk::Entity
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

        class EvpnRouteTargetAs; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs
        class EvpnRouteTargetNone; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone
        class EvpnRouteTargetIpv4Address; //type: Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address

        ydk::YList evpn_route_target_as;
        ydk::YList evpn_route_target_none;
        ydk::YList evpn_route_target_ipv4_address;
        
}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs : public ydk::Entity
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

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone : public ydk::Entity
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

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address : public ydk::Entity
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

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviMulticast : public ydk::Entity
{
    public:
        EviMulticast();
        ~EviMulticast();

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
        ydk::YLeaf evi_mcast_source_connected; //type: empty

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviMulticast


class Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac : public ydk::Entity
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

}; // Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac


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

        ydk::YList evpn_virtual_access_vfi;
        
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
        ydk::YLeaf evpn_virtual_access_vfi_carving; //type: uint32
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
        ydk::YLeaf service_carving_type; //type: EthernetSegmentServiceCarving
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

        ydk::YLeaf evpn_static_flow_label; //type: empty
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


class Evpn::EvpnTables::EvpnGroups : public ydk::Entity
{
    public:
        EvpnGroups();
        ~EvpnGroups();

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

        class EvpnGroup; //type: Evpn::EvpnTables::EvpnGroups::EvpnGroup

        ydk::YList evpn_group;
        
}; // Evpn::EvpnTables::EvpnGroups


class Evpn::EvpnTables::EvpnGroups::EvpnGroup : public ydk::Entity
{
    public:
        EvpnGroup();
        ~EvpnGroup();

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
        class EvpnGroupCoreInterfaces; //type: Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces> evpn_group_core_interfaces;
        
}; // Evpn::EvpnTables::EvpnGroups::EvpnGroup


class Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces : public ydk::Entity
{
    public:
        EvpnGroupCoreInterfaces();
        ~EvpnGroupCoreInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnGroupCoreInterface; //type: Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface

        ydk::YList evpn_group_core_interface;
        
}; // Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces


class Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface : public ydk::Entity
{
    public:
        EvpnGroupCoreInterface();
        ~EvpnGroupCoreInterface();

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

}; // Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface


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

        ydk::YList evpn_instance;
        
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

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: EvpnEncapsulation
        ydk::YLeaf side; //type: EvpnSide
        ydk::YLeaf evi_reorig_disable; //type: empty
        ydk::YLeaf evi_advertise_mac_deprecated; //type: empty
        ydk::YLeaf evpn_evi_description; //type: string
        ydk::YLeaf evi_ecmp_disable; //type: empty
        ydk::YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        ydk::YLeaf evpn_evi_cw_disable; //type: empty
        class EvpnInstanceBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery
        class EvpnInstanceAdvertiseMac; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac
        class EvpnInstanceMulticast; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceMulticast
        class EvpnInstanceLoadBalancing; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery> evpn_instance_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac> evpn_instance_advertise_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceMulticast> evpn_instance_multicast;
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

        ydk::YList evpn_route_target_as;
        ydk::YList evpn_route_target_none;
        ydk::YList evpn_route_target_ipv4_address;
        
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


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceMulticast : public ydk::Entity
{
    public:
        EvpnInstanceMulticast();
        ~EvpnInstanceMulticast();

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
        ydk::YLeaf evi_mcast_source_connected; //type: empty

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceMulticast


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
        ydk::YLeaf evi_static_flow_label; //type: empty

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

        ydk::YList evpn_interface;
        
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
        ydk::YLeaf evpn_core_isolation_group; //type: uint32
        ydk::YLeaf mac_flush; //type: MacFlushMode
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
        ydk::YLeaf evpnac_carving; //type: uint32
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
        ydk::YLeaf load_balancing_mode; //type: EthernetSegmentLoadBalance
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf backbone_source_mac; //type: string
        ydk::YLeaf es_import_route_target; //type: string
        ydk::YLeaf service_carving_type; //type: EthernetSegmentServiceCarving
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

        ydk::YList evpn_virtual_access_pw;
        
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
        ydk::YLeaf evpn_virtual_access_pw_carving; //type: uint32

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
        ydk::YLeaf service_carving_type; //type: EthernetSegmentServiceCarving
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

        ydk::YList evpn_esi_type;
        
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

#endif /* _CISCO_IOS_XR_L2VPN_CFG_2_ */

