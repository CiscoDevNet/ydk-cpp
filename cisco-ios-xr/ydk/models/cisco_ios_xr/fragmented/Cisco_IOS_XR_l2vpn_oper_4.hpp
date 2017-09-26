#ifndef _CISCO_IOS_XR_L2VPN_OPER_4_
#define _CISCO_IOS_XR_L2VPN_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion


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


class L2VpnForwarding::Nodes::Node::PbbBmacSa : public ydk::Entity
{
    public:
        PbbBmacSa();
        ~PbbBmacSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf mac; //type: string
        ydk::YLeaf chassis_mac; //type: string

}; // L2VpnForwarding::Nodes::Node::PbbBmacSa

class L2Vpnv2 : public ydk::Entity
{
    public:
        L2Vpnv2();
        ~L2Vpnv2();

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

        class Standby; //type: L2Vpnv2::Standby
        class Active; //type: L2Vpnv2::Active
        class Nodes; //type: L2Vpnv2::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby> standby;
        
}; // L2Vpnv2


class L2Vpnv2::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class Discoveries; //type: L2Vpnv2::Active::Discoveries
        class FlexibleXconnectServiceSummary; //type: L2Vpnv2::Active::FlexibleXconnectServiceSummary
        class MainInterfaces; //type: L2Vpnv2::Active::MainInterfaces
        class IccpSm; //type: L2Vpnv2::Active::IccpSm
        class BridgeSummary; //type: L2Vpnv2::Active::BridgeSummary
        class Nsr; //type: L2Vpnv2::Active::Nsr
        class PreferredPaths; //type: L2Vpnv2::Active::PreferredPaths
        class GlobalSettings; //type: L2Vpnv2::Active::GlobalSettings
        class Pwr; //type: L2Vpnv2::Active::Pwr
        class XconnectMp2MpCe2Ces; //type: L2Vpnv2::Active::XconnectMp2MpCe2Ces
        class Xconnects; //type: L2Vpnv2::Active::Xconnects
        class XconnectGroups; //type: L2Vpnv2::Active::XconnectGroups
        class XconnectMp2Mps; //type: L2Vpnv2::Active::XconnectMp2Mps
        class Indexes; //type: L2Vpnv2::Active::Indexes
        class XconnectSummary; //type: L2Vpnv2::Active::XconnectSummary
        class ProcFsm; //type: L2Vpnv2::Active::ProcFsm
        class MstpPorts; //type: L2Vpnv2::Active::MstpPorts
        class GenericInterfaceListDetails; //type: L2Vpnv2::Active::GenericInterfaceListDetails
        class L2VpnResourceState; //type: L2Vpnv2::Active::L2VpnResourceState
        class BridgeDomains; //type: L2Vpnv2::Active::BridgeDomains
        class DiscoverySummary; //type: L2Vpnv2::Active::DiscoverySummary
        class G8032; //type: L2Vpnv2::Active::G8032
        class PseudowireClasses; //type: L2Vpnv2::Active::PseudowireClasses
        class L2VpnCollaborators; //type: L2Vpnv2::Active::L2VpnCollaborators
        class Mvrp; //type: L2Vpnv2::Active::Mvrp
        class GenericInterfaces; //type: L2Vpnv2::Active::GenericInterfaces
        class MstpVlans; //type: L2Vpnv2::Active::MstpVlans
        class L2VpnPbbBsa; //type: L2Vpnv2::Active::L2VpnPbbBsa
        class FlexibleXconnectServices; //type: L2Vpnv2::Active::FlexibleXconnectServices
        class XconnectBrief; //type: L2Vpnv2::Active::XconnectBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains> bridge_domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeSummary> bridge_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries> discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::DiscoverySummary> discovery_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::FlexibleXconnectServiceSummary> flexible_xconnect_service_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::FlexibleXconnectServices> flexible_xconnect_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::G8032> g8032;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::GenericInterfaceListDetails> generic_interface_list_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::GenericInterfaces> generic_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::GlobalSettings> global_settings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm> iccp_sm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Indexes> indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::L2VpnCollaborators> l2vpn_collaborators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::L2VpnPbbBsa> l2vpn_pbb_bsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::L2VpnResourceState> l2vpn_resource_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces> main_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MstpPorts> mstp_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MstpVlans> mstp_vlans;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Mvrp> mvrp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::PreferredPaths> preferred_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::ProcFsm> proc_fsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr> pwr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectBrief> xconnect_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectGroups> xconnect_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectMp2MpCe2Ces> xconnect_mp2mp_ce2ces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectMp2Mps> xconnect_mp2mps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectSummary> xconnect_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects> xconnects;
        
}; // L2Vpnv2::Active


class L2Vpnv2::Active::BridgeDomains : public ydk::Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

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

        class BridgeDomain; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // L2Vpnv2::Active::BridgeDomains


class L2Vpnv2::Active::BridgeDomains::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

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

        ydk::YLeaf bridge_domain_group_name; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        class BridgeAccessVfiTable; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable
        class BridgeCoreVfiTable; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable
        class BridgeAcs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs
        class BridgeAccessPws; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws
        class BridgeDomainInfo; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws> bridge_access_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable> bridge_access_vfi_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs> bridge_acs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable> bridge_core_vfi_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo> bridge_domain_info;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws : public ydk::Entity
{
    public:
        BridgeAccessPws();
        ~BridgeAccessPws();

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

        class BridgeAccessPw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw> > bridge_access_pw;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw : public ydk::Entity
{
    public:
        BridgeAccessPw();
        ~BridgeAccessPw();

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
        ydk::YLeaf is_access; //type: boolean
        class Pseudowire; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire
        class SecurityParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters
        class StaticMac; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire> pseudowire;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac> > static_mac;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class PeerId; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics
        class P2MpPw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface> local_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling> local_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw> p2mp_pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId> peer_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface> remote_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling> remote_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics> statistics;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf encapsulation; //type: L2vpnEncapMethod
        class Atom; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class LocalAgi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf received_bytes; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3 : public ydk::Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

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
        ydk::YLeaf tunnel_state; //type: L2vpnL2TpTunnelState
        ydk::YLeaf local_secondary_cookie_size; //type: uint8
        ydk::YLeaf local_secondary_cookie_low_value; //type: uint32
        ydk::YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters> parameters;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw : public ydk::Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

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

        ydk::YLeaf local_available; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf local_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_extended_tunnel_id; //type: string
        ydk::YLeaf local_p2mp_id; //type: uint32
        ydk::YLeaf local_flags; //type: uint8
        ydk::YLeaf remote_available; //type: boolean
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf remote_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf remote_extended_tunnel_id; //type: string
        ydk::YLeaf remote_p2mp_id; //type: uint32
        ydk::YLeaf remote_flags; //type: uint8

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnPeer
        ydk::YLeaf ipv4_peer_id; //type: string
        ydk::YLeaf ipv6_peer_id; //type: string
        ydk::YLeaf internal_label; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy> srte_policy;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf policy_name; //type: string

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters> parameters;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DispositionStat; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpositionStat; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class Base; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf bmac; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable : public ydk::Entity
{
    public:
        BridgeAccessVfiTable();
        ~BridgeAccessVfiTable();

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

        class BridgePws; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws> bridge_pws;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class BridgePw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw> > bridge_pw;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pw_type; //type: L2vpnpw
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf ve_id_vpls_id_0_3; //type: uint32
        ydk::YLeaf vpls_id_4_7; //type: uint32
        ydk::YLeaf is_access; //type: boolean
        class Pseudowire; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire
        class SecurityParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters
        class StaticMac; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire> pseudowire;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac> > static_mac;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class PeerId; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics
        class P2MpPw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface> local_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling> local_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw> p2mp_pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId> peer_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface> remote_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling> remote_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics> statistics;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf encapsulation; //type: L2vpnEncapMethod
        class Atom; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class LocalAgi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf received_bytes; //type: uint64

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3 : public ydk::Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

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
        ydk::YLeaf tunnel_state; //type: L2vpnL2TpTunnelState
        ydk::YLeaf local_secondary_cookie_size; //type: uint8
        ydk::YLeaf local_secondary_cookie_low_value; //type: uint32
        ydk::YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters> parameters;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_4_ */

