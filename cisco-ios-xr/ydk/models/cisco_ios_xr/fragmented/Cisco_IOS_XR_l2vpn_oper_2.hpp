#ifndef _CISCO_IOS_XR_L2VPN_OPER_2_
#define _CISCO_IOS_XR_L2VPN_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2 : public ydk::Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs> fxs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf shg_id; //type: uint32
        ydk::YLeaf msti_pointer; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        ydk::YLeaf mvrp_sequence_number; //type: uint16
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp> p2mp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf number_of_macs; //type: uint32
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_limit_action; //type: MgmtL2FibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2FibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf dhcp_enabled; //type: boolean
        ydk::YLeaf dhcp_trusted; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_ipsg_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_profile_enabled; //type: boolean
        ydk::YLeaf igmp_flood_forward_enabled; //type: boolean
        ydk::YLeaf igmp_mroute_port_enabled; //type: boolean
        ydk::YLeaf igmp_route_guard_enabled; //type: boolean
        ydk::YLeaf mld_snoop_enabled; //type: boolean
        ydk::YLeaf mld_snoop_profile_enabled; //type: boolean
        ydk::YLeaf mld_flood_forward_enabled; //type: boolean
        ydk::YLeaf mld_mroute_port_enabled; //type: boolean
        ydk::YLeaf mld_route_guard_enabled; //type: boolean
        ydk::YLeaf stp_participating; //type: boolean
        ydk::YLeaf bvi_configured; //type: boolean
        ydk::YLeaf is_bvi_up; //type: boolean
        ydk::YLeaf is_vni_enabled; //type: boolean
        ydk::YLeaf is_evpn_enabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2fibFeature
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp : public ydk::Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf p2mp_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf ptree_owner_lmrib; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs : public ydk::Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fxs_id; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries : public ydk::Entity
{
    public:
        L2FibMmrpSummaries();
        ~L2FibMmrpSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMmrpSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary> > l2fib_mmrp_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries


class L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary : public ydk::Entity
{
    public:
        L2FibMmrpSummary();
        ~L2FibMmrpSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf multicast_update; //type: uint32
        ydk::YLeaf multicast_update_dropped; //type: uint32
        ydk::YLeaf number_of_routes; //type: uint32
        ydk::YLeaf number_of_routes_with_ole_offload; //type: uint32
        ydk::YLeaf number_of_mroute_add; //type: uint32
        ydk::YLeaf number_mroute_deleted; //type: uint32
        ydk::YLeaf number_mroutes_deleted_all; //type: uint32
        ydk::YLeaf number_mroute_delete_drop; //type: uint32
        ydk::YLeaf number_mroute_all_delete_drop; //type: uint32
        ydk::YLeaf number_xid_add; //type: uint32
        ydk::YLeaf number_xid_deleted; //type: uint32
        ydk::YLeaf number_of_xid; //type: uint32
        ydk::YLeaf stale_deleted; //type: uint32
        ydk::YLeaf stale_xid_deleted; //type: uint32
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message> > message;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary


class L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf messgae_count; //type: uint32
        ydk::YLeaf time; //type: string
        ydk::YLeaf information1; //type: uint32
        ydk::YLeaf information2; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibPwGroups : public ydk::Entity
{
    public:
        L2FibPwGroups();
        ~L2FibPwGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibPwGroup; //type: L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup> > l2fib_pw_group;
        
}; // L2VpnForwarding::Nodes::Node::L2FibPwGroups


class L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup : public ydk::Entity
{
    public:
        L2FibPwGroup();
        ~L2FibPwGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf group_id; //type: int32
        ydk::YLeaf tunnel_if_handle; //type: int32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf pw_list_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareIngresses();
        ~L2FibEvpnInclMCastHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastHardwareIngress; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress> > l2fib_evpn_incl_m_cast_hardware_ingress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareIngress();
        ~L2FibEvpnInclMCastHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList> mcast_replication_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList : public ydk::Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf is_bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails : public ydk::Entity
{
    public:
        L2FibDhcpBindingDetails();
        ~L2FibDhcpBindingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibDhcpBindingDetail; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail> > l2fib_dhcp_binding_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail : public ydk::Entity
{
    public:
        L2FibDhcpBindingDetail();
        ~L2FibDhcpBindingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base
        class Port; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port> port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw


class L2VpnForwarding::Nodes::Node::L2FibxCons : public ydk::Entity
{
    public:
        L2FibxCons();
        ~L2FibxCons();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibxCon; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon> > l2fibx_con;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon : public ydk::Entity
{
    public:
        L2FibxCon();
        ~L2FibxCon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: string
        ydk::YLeaf xcon_name; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf switching_type; //type: MgmtL2FibSwitching
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2> segment2;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1 : public ydk::Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn
        class MonitorSession; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb : public ydk::Entity
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

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion : public ydk::Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2FibBridge
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core> core;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_configured; //type: boolean
        ydk::YLeaf mac; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mcastip; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf parent_if; //type: string
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf source_vtep_if; //type: string
        ydk::YLeaf any_cast_ip; //type: string
        ydk::YLeaf anycast_mcast_ip; //type: string
        ydk::YLeaf ingress_replication; //type: boolean
        ydk::YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn : public ydk::Entity
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

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bound; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2 : public ydk::Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs> fxs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf shg_id; //type: uint32
        ydk::YLeaf msti_pointer; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        ydk::YLeaf mvrp_sequence_number; //type: uint16
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp> p2mp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf number_of_macs; //type: uint32
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_limit_action; //type: MgmtL2FibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2FibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf dhcp_enabled; //type: boolean
        ydk::YLeaf dhcp_trusted; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_ipsg_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_profile_enabled; //type: boolean
        ydk::YLeaf igmp_flood_forward_enabled; //type: boolean
        ydk::YLeaf igmp_mroute_port_enabled; //type: boolean
        ydk::YLeaf igmp_route_guard_enabled; //type: boolean
        ydk::YLeaf mld_snoop_enabled; //type: boolean
        ydk::YLeaf mld_snoop_profile_enabled; //type: boolean
        ydk::YLeaf mld_flood_forward_enabled; //type: boolean
        ydk::YLeaf mld_mroute_port_enabled; //type: boolean
        ydk::YLeaf mld_route_guard_enabled; //type: boolean
        ydk::YLeaf stp_participating; //type: boolean
        ydk::YLeaf bvi_configured; //type: boolean
        ydk::YLeaf is_bvi_up; //type: boolean
        ydk::YLeaf is_vni_enabled; //type: boolean
        ydk::YLeaf is_evpn_enabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2fibFeature
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp : public ydk::Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf p2mp_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf ptree_owner_lmrib; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs : public ydk::Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fxs_id; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces : public ydk::Entity
{
    public:
        L2FibMainInterfaces();
        ~L2FibMainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMainInterface; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface> > l2fib_main_interface;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface : public ydk::Entity
{
    public:
        L2FibMainInterface();
        ~L2FibMainInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface_id; //type: int32
        ydk::YLeaf main_interface_type; //type: EvpnMainInterface
        class L2FibMainInterfaceHardwareEgressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo
        class L2FibMainInterfaceHardwareEgressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo
        class L2FibMainInterfaceInstances; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances
        class L2FibMainInterfaceInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo
        class L2FibMainInterfaceDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo
        class L2FibMainInterfaceHardwareIngressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo
        class L2FibMainInterfaceHardwareIngressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo> l2fib_main_interface_hardware_egress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo> l2fib_main_interface_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances> l2fib_main_interface_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo> l2fib_main_interface_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo> l2fib_main_interface_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo> l2fib_main_interface_hardware_ingress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo> l2fib_main_interface_hardware_ingress_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceHardwareEgressDetailInfo();
        ~L2FibMainInterfaceHardwareEgressDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf evpn_shg_local_label; //type: uint32
        class InstanceId; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId
        class InstancesState; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState
        class InstancesProvisioned; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned
        class BridgePortCountInstance; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance
        class EthernetSegmentIdentifier; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier
        class EvpnShgRemoteInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState> > instances_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned> > instances_provisioned;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance> > bridge_port_count_instance;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState : public ydk::Entity
{
    public:
        InstancesState();
        ~InstancesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: L2fibMainIfInstanceState

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned : public ydk::Entity
{
    public:
        InstancesProvisioned();
        ~InstancesProvisioned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance : public ydk::Entity
{
    public:
        BridgePortCountInstance();
        ~BridgePortCountInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
{
    public:
        EvpnShgRemoteInfo();
        ~EvpnShgRemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteSplitHorizonGroupLabel; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceHardwareEgressInfo();
        ~L2FibMainInterfaceHardwareEgressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        class InstanceId; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId
        class InstancesState; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState
        class InstancesProvisioned; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState> > instances_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned> > instances_provisioned;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState : public ydk::Entity
{
    public:
        InstancesState();
        ~InstancesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: L2fibMainIfInstanceState

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned : public ydk::Entity
{
    public:
        InstancesProvisioned();
        ~InstancesProvisioned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstances();
        ~L2FibMainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMainInterfaceInstance; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance> > l2fib_main_interface_instance;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstance();
        ~L2FibMainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: int32
        class L2FibMainInterfaceInstanceDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo
        class L2FibMainInterfaceInstanceBridgePortDetails; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails
        class L2FibMainInterfaceInstanceInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo
        class L2FibMainInterfaceInstanceHardwareIngressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo
        class L2FibMainInterfaceInstanceHardwareEgressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo
        class L2FibMainInterfaceInstanceHardwareIngressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo
        class L2FibMainInterfaceInstanceBridgePorts; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts
        class L2FibMainInterfaceInstanceHardwareEgressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo> l2fib_main_interface_instance_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails> l2fib_main_interface_instance_bridge_port_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo> l2fib_main_interface_instance_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo> l2fib_main_interface_instance_hardware_ingress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo> l2fib_main_interface_instance_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo> l2fib_main_interface_instance_hardware_ingress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts> l2fib_main_interface_instance_bridge_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo> l2fib_main_interface_instance_hardware_egress_detail_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceDetailInfo();
        ~L2FibMainInterfaceInstanceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePortDetails();
        ~L2FibMainInterfaceInstanceBridgePortDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMainInterfaceInstanceBridgePortDetail; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail> > l2fib_main_interface_instance_bridge_port_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePortDetail();
        ~L2FibMainInterfaceInstanceBridgePortDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: string
        ydk::YLeaf bridge_port_id; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        ydk::YLeaf bp_type; //type: uint8
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper> oper;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_2_ */

