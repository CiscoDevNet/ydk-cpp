#ifndef _CISCO_IOS_XR_L2VPN_OPER_11_
#define _CISCO_IOS_XR_L2VPN_OPER_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_10.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public ydk::Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto
        class TwoByteAs; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public ydk::Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf received_bytes; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2tpv3 : public ydk::Entity
{
    public:
        L2tpv3();
        ~L2tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_class_name; //type: string
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf ipv6_source_address; //type: string
        ydk::YLeaf path_mtu_enabled; //type: boolean
        ydk::YLeaf path_mtu_max_value; //type: uint16
        ydk::YLeaf dont_fragment_bit; //type: boolean
        ydk::YLeaf tos_mode; //type: L2vpnTosMode
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf local_session_id; //type: uint32
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf local_cookie_size; //type: uint8
        ydk::YLeaf remote_cookie_size; //type: uint8
        ydk::YLeaf local_cookie_low_value; //type: uint32
        ydk::YLeaf remote_cookie_low_value; //type: uint32
        ydk::YLeaf local_cookie_high_value; //type: uint32
        ydk::YLeaf remote_cookie_high_value; //type: uint32
        ydk::YLeaf remote_circuit_status_up; //type: boolean
        ydk::YLeaf tunnel_state; //type: L2vpnL2tpTunnelState
        ydk::YLeaf local_secondary_cookie_size; //type: uint8
        ydk::YLeaf local_secondary_cookie_low_value; //type: uint32
        ydk::YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2tpv3


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface : public ydk::Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters> parameters;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange

        ydk::YList rewrite_tag;
        ydk::YList vlan_range;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters> parameters;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange

        ydk::YList rewrite_tag;
        ydk::YList vlan_range;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath : public ydk::Entity
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

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy
        class TeNamedTunnel; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy> srte_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel> te_named_tunnel;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy : public ydk::Entity
{
    public:
        SrtePolicy();
        ~SrtePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel : public ydk::Entity
{
    public:
        TeNamedTunnel();
        ~TeNamedTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_named_tunnel; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling : public ydk::Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        ydk::YList tlv;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling : public ydk::Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        ydk::YList tlv;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ImpostionStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ImpositionStat; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2fsbiDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop
        class Multicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop : public ydk::Entity
{
    public:
        L2fsbiDrop();
        ~L2fsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DispositionStat; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2mpStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats
        class KnownUnicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats : public ydk::Entity
{
    public:
        DispositionP2mpStats();
        ~DispositionP2mpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2mpPw : public ydk::Entity
{
    public:
        P2mpPw();
        ~P2mpPw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_available; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf local_ptree_type; //type: L2vpnP2mpPwPtree
        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_extended_tunnel_id; //type: string
        ydk::YLeaf local_p2mp_id; //type: uint32
        ydk::YLeaf local_flags; //type: uint8
        ydk::YLeaf remote_available; //type: boolean
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf remote_ptree_type; //type: L2vpnP2mpPwPtree
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf remote_extended_tunnel_id; //type: string
        ydk::YLeaf remote_p2mp_id; //type: uint32
        ydk::YLeaf remote_flags; //type: uint8

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2mpPw


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base
        class StormControl; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl> storm_control;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf split_horizon_group_inherited; //type: boolean
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf etree_leaf_inherited; //type: boolean
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_secure_shutdown_recovery_time; //type: uint16
        ydk::YLeaf mac_secure_shutdown_recovery_time_remaining; //type: uint16
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf l2mc_src_traffic_enabled; //type: L2vpnBagL2mcSrcTraffic
        class StormControl; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac : public ydk::Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf pbb_bmac; //type: string
        ydk::YLeaf nh_addr; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable : public ydk::Entity
{
    public:
        BridgeCoreVfiTable();
        ~BridgeCoreVfiTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgePws; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws> bridge_pws;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws : public ydk::Entity
{
    public:
        BridgePws();
        ~BridgePws();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgePw; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw

        ydk::YList bridge_pw;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw : public ydk::Entity
{
    public:
        BridgePw();
        ~BridgePw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pw_type; //type: L2vpnpw
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf ve_id_vpls_id_0_3; //type: uint32
        ydk::YLeaf vpls_id_4_7; //type: uint32
        ydk::YLeaf is_access; //type: boolean
        class Pseudowire; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire
        class SecurityParameters; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters
        class StaticMac; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire> pseudowire;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters> security_parameters;
        ydk::YList static_mac;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_source_address; //type: string
        ydk::YLeaf ipv6_local_source_address; //type: string
        ydk::YLeaf pseudo_wire_id; //type: uint64
        ydk::YLeaf is_pwr_type; //type: boolean
        ydk::YLeaf is_evpn_vpws_type; //type: boolean
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf state; //type: L2vpnSegmentState
        ydk::YLeaf pseudo_wire_state; //type: L2vpnPwState
        ydk::YLeaf protocol; //type: L2vpnSignallingProto
        ydk::YLeaf pw_class_name; //type: string
        ydk::YLeaf tag_rewrite; //type: uint16
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf fe_ctype; //type: L2vpnPwFec
        ydk::YLeaf evpn_src_acid; //type: uint32
        ydk::YLeaf sequencing_type; //type: L2vpnPwSequence
        ydk::YLeaf resync_enabled; //type: boolean
        ydk::YLeaf resync_threshold; //type: uint32
        ydk::YLeaf local_control_word; //type: L2vpnPwControlWord
        ydk::YLeaf remote_control_word; //type: L2vpnPwControlWord
        ydk::YLeaf local_pseudo_wire_type; //type: L2vpnPw
        ydk::YLeaf remote_pseudo_wire_type; //type: L2vpnPw
        ydk::YLeaf imposed_vlan_id; //type: uint32
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf time_elapsed_creation; //type: string
        ydk::YLeaf last_time_status_changed; //type: string
        ydk::YLeaf time_elapsed_status_changed; //type: string
        ydk::YLeaf last_time_status_down; //type: string
        ydk::YLeaf time_elapsed_status_down; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf data_path_down; //type: boolean
        ydk::YLeaf use_tunnel_path; //type: boolean
        ydk::YLeaf odn_configured; //type: boolean
        ydk::YLeaf pseudo_wire_type_mismatched; //type: boolean
        ydk::YLeaf payload_bytes_mismatched; //type: boolean
        ydk::YLeaf bitrate_mismatched; //type: boolean
        ydk::YLeaf rtp_mismatched; //type: boolean
        ydk::YLeaf diff_ts_mismatched; //type: boolean
        ydk::YLeaf sig_pkts_mismatched; //type: boolean
        ydk::YLeaf cas_mismatched; //type: boolean
        ydk::YLeaf payload_type_mismatched; //type: boolean
        ydk::YLeaf freq_mismatched; //type: boolean
        ydk::YLeaf ssrc_mismatched; //type: boolean
        ydk::YLeaf mtu_mismatched; //type: boolean
        ydk::YLeaf illegal_control_word; //type: boolean
        ydk::YLeaf ad_remote_down; //type: boolean
        ydk::YLeaf not_supported_qinq; //type: boolean
        ydk::YLeaf local_label_failed; //type: boolean
        ydk::YLeaf remote_label_failed; //type: boolean
        ydk::YLeaf preferred_path_disable_fallback; //type: boolean
        ydk::YLeaf backup_pw; //type: boolean
        ydk::YLeaf primary_pw; //type: boolean
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf backup_force_active; //type: boolean
        ydk::YLeaf disable_never; //type: boolean
        ydk::YLeaf disable_delay; //type: uint8
        ydk::YLeaf primary_peer_id; //type: string
        ydk::YLeaf primary_pseudo_wire_id; //type: uint64
        ydk::YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        ydk::YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf transport_lsp_down; //type: boolean
        ydk::YLeaf mac_limit_oper_down; //type: boolean
        ydk::YLeaf pw_status_use; //type: boolean
        ydk::YLeaf auto_discovery; //type: boolean
        ydk::YLeaf ad_method; //type: uint32
        ydk::YLeaf pwlsd_rewrite_failed; //type: boolean
        ydk::YLeaf ldp_label_advertise_failed; //type: boolean
        ydk::YLeaf is_vfi; //type: boolean
        ydk::YLeaf is_multi_segment_pseudowire; //type: boolean
        ydk::YLeaf pw_redundancy_one_way; //type: boolean
        ydk::YLeaf load_balance; //type: L2vpnLoadBal
        ydk::YLeaf pw_flow_label_type; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_type_cfg; //type: L2vpnPwFlowLabel
        ydk::YLeaf pw_flow_label_code17_disabled; //type: boolean
        ydk::YLeaf is_flow_label_static; //type: boolean
        ydk::YLeaf is_partially_programmed; //type: boolean
        ydk::YLeaf pw_redundancy_initial_delay; //type: uint8
        ydk::YLeaf bridge_pw_type_mismatch; //type: boolean
        ydk::YLeaf required_bw; //type: uint32
        ydk::YLeaf admited_bw; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf table_policy_name; //type: string
        class PeerId; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId
        class EncapsulationInfo; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo
        class LocalInterface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface
        class RemoteInterface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface
        class PreferredPath; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath
        class LocalSignalling; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling
        class RemoteSignalling; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling
        class Statistics; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics
        class P2mpPw; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::P2mpPw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId> peer_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface> local_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface> remote_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling> local_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling> remote_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::P2mpPw> p2mp_pw;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId : public ydk::Entity
{
    public:
        PeerId();
        ~PeerId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnPeer
        ydk::YLeaf ipv4_peer_id; //type: string
        ydk::YLeaf ipv6_peer_id; //type: string
        ydk::YLeaf internal_label; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo : public ydk::Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: L2vpnEncapMethod
        class Atom; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom
        class L2tpv3; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2tpv3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2tpv3> l2tpv3;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_pseudowire_headend; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf local_group_id; //type: uint32
        ydk::YLeaf remote_group_id; //type: uint32
        ydk::YLeaf local_cv_type; //type: uint8
        ydk::YLeaf local_c_ctype; //type: uint8
        ydk::YLeaf remote_cv_type; //type: uint8
        ydk::YLeaf remote_c_ctype; //type: uint8
        ydk::YLeaf local_veid; //type: uint32
        ydk::YLeaf remote_veid; //type: uint32
        ydk::YLeaf local_ceid; //type: uint32
        ydk::YLeaf remote_ceid; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf remote_source_address; //type: string
        ydk::YLeaf local_ldp_id; //type: string
        ydk::YLeaf remote_ldp_id; //type: string
        ydk::YLeaf saii; //type: string
        ydk::YLeaf taii; //type: string
        ydk::YLeaf is_sai_itype2; //type: boolean
        ydk::YLeaf local_saii_gbl_id; //type: uint32
        ydk::YLeaf local_saiiac_id; //type: uint32
        ydk::YLeaf is_tai_itype2; //type: boolean
        ydk::YLeaf local_taii_gbl_id; //type: uint32
        ydk::YLeaf local_taiiac_id; //type: uint32
        ydk::YLeaf rem_saii_gbl_id; //type: uint32
        ydk::YLeaf rem_saiiac_id; //type: uint32
        ydk::YLeaf rem_taii_gbl_id; //type: uint32
        ydk::YLeaf rem_taiiac_id; //type: uint32
        ydk::YLeaf rem_saii; //type: string
        ydk::YLeaf rem_taii; //type: string
        ydk::YLeaf lsd_rewrite_failed; //type: boolean
        ydk::YLeaf ldp_label_advertisment_failed; //type: boolean
        class LocalAgi; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi : public ydk::Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto
        class TwoByteAs; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public ydk::Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto
        class TwoByteAs; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public ydk::Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf received_bytes; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2tpv3 : public ydk::Entity
{
    public:
        L2tpv3();
        ~L2tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_class_name; //type: string
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf ipv6_source_address; //type: string
        ydk::YLeaf path_mtu_enabled; //type: boolean
        ydk::YLeaf path_mtu_max_value; //type: uint16
        ydk::YLeaf dont_fragment_bit; //type: boolean
        ydk::YLeaf tos_mode; //type: L2vpnTosMode
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf local_session_id; //type: uint32
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf local_cookie_size; //type: uint8
        ydk::YLeaf remote_cookie_size; //type: uint8
        ydk::YLeaf local_cookie_low_value; //type: uint32
        ydk::YLeaf remote_cookie_low_value; //type: uint32
        ydk::YLeaf local_cookie_high_value; //type: uint32
        ydk::YLeaf remote_cookie_high_value; //type: uint32
        ydk::YLeaf remote_circuit_status_up; //type: boolean
        ydk::YLeaf tunnel_state; //type: L2vpnL2tpTunnelState
        ydk::YLeaf local_secondary_cookie_size; //type: uint8
        ydk::YLeaf local_secondary_cookie_low_value; //type: uint32
        ydk::YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2tpv3


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface : public ydk::Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters> parameters;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange

        ydk::YList rewrite_tag;
        ydk::YList vlan_range;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

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
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters> parameters;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange

        ydk::YList rewrite_tag;
        ydk::YList vlan_range;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        ydk::YList interface;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath : public ydk::Entity
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

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy
        class TeNamedTunnel; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy> srte_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel> te_named_tunnel;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy : public ydk::Entity
{
    public:
        SrtePolicy();
        ~SrtePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::SrtePolicy


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel : public ydk::Entity
{
    public:
        TeNamedTunnel();
        ~TeNamedTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_named_tunnel; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::TeNamedTunnel


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling : public ydk::Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        ydk::YList tlv;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling : public ydk::Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        ydk::YList tlv;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ImpostionStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ImpositionStat; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2fsbiDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop
        class Multicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop : public ydk::Entity
{
    public:
        L2fsbiDrop();
        ~L2fsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DispositionStat; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2mpStats; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats
        class KnownUnicast; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_11_ */

