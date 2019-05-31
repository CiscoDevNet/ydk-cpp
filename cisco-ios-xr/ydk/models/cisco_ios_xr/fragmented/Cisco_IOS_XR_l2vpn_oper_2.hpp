#ifndef _CISCO_IOS_XR_L2VPN_OPER_2_
#define _CISCO_IOS_XR_L2VPN_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2vpnForwarding::Nodes::Node::L2fibxCons : public ydk::Entity
{
    public:
        L2fibxCons();
        ~L2fibxCons();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibxCon; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon

        ydk::YList l2fibx_con;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon : public ydk::Entity
{
    public:
        L2fibxCon();
        ~L2fibxCon();

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
        ydk::YLeaf switching_type; //type: MgmtL2fibSwitching
        class Segment1; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1
        class Segment2; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2> segment2;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1 : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Evpn
        class MonitorSession; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::MonitorSession
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
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
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        ydk::YLeaf rewrittenvlan_id_count; //type: uint8
        ydk::YLeaf rewritten_first_vlan_id; //type: uint16
        ydk::YLeaf rewritten_second_vlan_id; //type: uint16
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac::FxcNextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb : public ydk::Entity
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
        class PbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion : public ydk::Entity
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

        ydk::YLeaf pbb_type; //type: MgmtL2fibBridge
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pbb::PbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Vni : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Vni


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Evpn : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Evpn


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::MonitorSession : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::MonitorSession


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw : public ydk::Entity
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
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::NextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::Mpls : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
{
    public:
        L2tpIpv6Ts();
        ~L2tpIpv6Ts();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire : public ydk::Entity
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
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment1::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2 : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac
        class Bp; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp
        class Fxs; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Fxs
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Fxs> fxs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
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
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        ydk::YLeaf rewrittenvlan_id_count; //type: uint8
        ydk::YLeaf rewritten_first_vlan_id; //type: uint16
        ydk::YLeaf rewritten_second_vlan_id; //type: uint16
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac::FxcNextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp : public ydk::Entity
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
        class Oper; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper
        class P2mp; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::P2mp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::P2mp> p2mp;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper : public ydk::Entity
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
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation : public ydk::Entity
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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: MgmtL2fibMacAging
        ydk::YLeaf l2mc_src_traffic_enabled; //type: uint32
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
        ydk::YLeaf etree_leaf; //type: boolean
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::P2mp : public ydk::Entity
{
    public:
        P2mp();
        ~P2mp();

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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Bp::P2mp


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Fxs : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Fxs


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw : public ydk::Entity
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
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::NextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::Mpls : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
{
    public:
        L2tpIpv6Ts();
        ~L2tpIpv6Ts();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire : public ydk::Entity
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
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxCons::L2fibxCon::Segment2::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces : public ydk::Entity
{
    public:
        L2fibMainInterfaces();
        ~L2fibMainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMainInterface; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface

        ydk::YList l2fib_main_interface;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface : public ydk::Entity
{
    public:
        L2fibMainInterface();
        ~L2fibMainInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface_id; //type: uint32
        ydk::YLeaf main_interface_type; //type: EvpnMainInterface
        class L2fibMainInterfaceHardwareEgressDetailInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo
        class L2fibMainInterfaceHardwareEgressInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressInfo
        class L2fibMainInterfaceInstances; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances
        class L2fibMainInterfaceInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo
        class L2fibMainInterfaceDetailInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo
        class L2fibMainInterfaceHardwareIngressDetailInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo
        class L2fibMainInterfaceHardwareIngressInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo> l2fib_main_interface_hardware_egress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressInfo> l2fib_main_interface_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances> l2fib_main_interface_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo> l2fib_main_interface_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo> l2fib_main_interface_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo> l2fib_main_interface_hardware_ingress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo> l2fib_main_interface_hardware_ingress_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceHardwareEgressDetailInfo();
        ~L2fibMainInterfaceHardwareEgressDetailInfo();

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
        ydk::YLeaf evpn_rid; //type: string
        ydk::YLeaf evpn_service_carving_mcast_mode; //type: L2fibEvpnScMcastMode
        ydk::YLeafList instance_id; //type: list of  uint32
        ydk::YLeafList instances_state; //type: list of  L2fibMainIfInstanceState
        ydk::YLeafList instances_provisioned; //type: list of  boolean
        ydk::YLeafList bridge_port_count_instance; //type: list of  uint32
        ydk::YLeafList ethernet_segment_identifier; //type: list of  uint8
        class EvpnShgRemoteInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo
        class EsNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EsNextHop

        ydk::YList evpn_shg_remote_info;
        ydk::YList es_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
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

        class RemoteSplitHorizonGroupLabel; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EsNextHop : public ydk::Entity
{
    public:
        EsNextHop();
        ~EsNextHop();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressDetailInfo::EsNextHop


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceHardwareEgressInfo();
        ~L2fibMainInterfaceHardwareEgressInfo();

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
        ydk::YLeafList instance_id; //type: list of  uint32
        ydk::YLeafList instances_state; //type: list of  L2fibMainIfInstanceState
        ydk::YLeafList instances_provisioned; //type: list of  boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareEgressInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstances();
        ~L2fibMainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMainInterfaceInstance; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance

        ydk::YList l2fib_main_interface_instance;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstance();
        ~L2fibMainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        class L2fibMainInterfaceInstanceDetailInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceDetailInfo
        class L2fibMainInterfaceInstanceBridgePortDetails; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails
        class L2fibMainInterfaceInstanceInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceInfo
        class L2fibMainInterfaceInstanceHardwareIngressDetailInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressDetailInfo
        class L2fibMainInterfaceInstanceHardwareEgressInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressInfo
        class L2fibMainInterfaceInstanceHardwareIngressInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressInfo
        class L2fibMainInterfaceInstanceBridgePorts; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts
        class L2fibMainInterfaceInstanceHardwareEgressDetailInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressDetailInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceDetailInfo> l2fib_main_interface_instance_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails> l2fib_main_interface_instance_bridge_port_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceInfo> l2fib_main_interface_instance_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressDetailInfo> l2fib_main_interface_instance_hardware_ingress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressInfo> l2fib_main_interface_instance_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressInfo> l2fib_main_interface_instance_hardware_ingress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts> l2fib_main_interface_instance_bridge_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressDetailInfo> l2fib_main_interface_instance_hardware_egress_detail_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceDetailInfo();
        ~L2fibMainInterfaceInstanceDetailInfo();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceBridgePortDetails();
        ~L2fibMainInterfaceInstanceBridgePortDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMainInterfaceInstanceBridgePortDetail; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail

        ydk::YList l2fib_main_interface_instance_bridge_port_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceBridgePortDetail();
        ~L2fibMainInterfaceInstanceBridgePortDetail();

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
        class Oper; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper> oper;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper : public ydk::Entity
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
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation : public ydk::Entity
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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: MgmtL2fibMacAging
        ydk::YLeaf l2mc_src_traffic_enabled; //type: uint32
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
        ydk::YLeaf etree_leaf; //type: boolean
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceInfo();
        ~L2fibMainInterfaceInstanceInfo();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareIngressDetailInfo();
        ~L2fibMainInterfaceInstanceHardwareIngressDetailInfo();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareEgressInfo();
        ~L2fibMainInterfaceInstanceHardwareEgressInfo();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareIngressInfo();
        ~L2fibMainInterfaceInstanceHardwareIngressInfo();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceBridgePorts();
        ~L2fibMainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMainInterfaceInstanceBridgePort; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts::L2fibMainInterfaceInstanceBridgePort

        ydk::YList l2fib_main_interface_instance_bridge_port;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts::L2fibMainInterfaceInstanceBridgePort : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceBridgePort();
        ~L2fibMainInterfaceInstanceBridgePort();

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
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        ydk::YLeaf bp_type; //type: uint8

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts::L2fibMainInterfaceInstanceBridgePort


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareEgressDetailInfo();
        ~L2fibMainInterfaceInstanceHardwareEgressDetailInfo();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInfo();
        ~L2fibMainInterfaceInfo();

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
        ydk::YLeafList instance_id; //type: list of  uint32
        ydk::YLeafList instances_state; //type: list of  L2fibMainIfInstanceState
        ydk::YLeafList instances_provisioned; //type: list of  boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceDetailInfo();
        ~L2fibMainInterfaceDetailInfo();

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
        ydk::YLeaf evpn_rid; //type: string
        ydk::YLeaf evpn_service_carving_mcast_mode; //type: L2fibEvpnScMcastMode
        ydk::YLeafList instance_id; //type: list of  uint32
        ydk::YLeafList instances_state; //type: list of  L2fibMainIfInstanceState
        ydk::YLeafList instances_provisioned; //type: list of  boolean
        ydk::YLeafList bridge_port_count_instance; //type: list of  uint32
        ydk::YLeafList ethernet_segment_identifier; //type: list of  uint8
        class EvpnShgRemoteInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo
        class EsNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EsNextHop

        ydk::YList evpn_shg_remote_info;
        ydk::YList es_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
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

        class RemoteSplitHorizonGroupLabel; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EsNextHop : public ydk::Entity
{
    public:
        EsNextHop();
        ~EsNextHop();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EsNextHop


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceHardwareIngressDetailInfo();
        ~L2fibMainInterfaceHardwareIngressDetailInfo();

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
        ydk::YLeaf evpn_rid; //type: string
        ydk::YLeaf evpn_service_carving_mcast_mode; //type: L2fibEvpnScMcastMode
        ydk::YLeafList instance_id; //type: list of  uint32
        ydk::YLeafList instances_state; //type: list of  L2fibMainIfInstanceState
        ydk::YLeafList instances_provisioned; //type: list of  boolean
        ydk::YLeafList bridge_port_count_instance; //type: list of  uint32
        ydk::YLeafList ethernet_segment_identifier; //type: list of  uint8
        class EvpnShgRemoteInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo
        class EsNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EsNextHop

        ydk::YList evpn_shg_remote_info;
        ydk::YList es_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
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

        class RemoteSplitHorizonGroupLabel; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EsNextHop : public ydk::Entity
{
    public:
        EsNextHop();
        ~EsNextHop();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EsNextHop


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceHardwareIngressInfo();
        ~L2fibMainInterfaceHardwareIngressInfo();

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
        ydk::YLeafList instance_id; //type: list of  uint32
        ydk::YLeafList instances_state; //type: list of  L2fibMainIfInstanceState
        ydk::YLeafList instances_provisioned; //type: list of  boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo


class L2vpnForwarding::Nodes::Node::L2fibMstpDetails : public ydk::Entity
{
    public:
        L2fibMstpDetails();
        ~L2fibMstpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMstpDetail; //type: L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail

        ydk::YList l2fib_mstp_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMstpDetails


class L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail : public ydk::Entity
{
    public:
        L2fibMstpDetail();
        ~L2fibMstpDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf main_interface_type; //type: EvpnMainInterface
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf parent_interface_xr; //type: string
        ydk::YLeaf msti_xr; //type: uint32
        ydk::YLeaf internal_msti; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf learn_key; //type: uint8
        ydk::YLeafList bridge_port_array; //type: list of  string

}; // L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail


class L2vpnForwarding::Nodes::Node::L2fibL2tp : public ydk::Entity
{
    public:
        L2fibL2tp();
        ~L2fibL2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2tpv3Sessions; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions
        class L2tpv2Sessions; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions> l2tpv3_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions> l2tpv2_sessions;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions : public ydk::Entity
{
    public:
        L2tpv3Sessions();
        ~L2tpv3Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2tpv3Session; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session

        ydk::YList l2tpv3_session;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session : public ydk::Entity
{
    public:
        L2tpv3Session();
        ~L2tpv3Session();

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
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf ipv4_table_id; //type: uint32
        ydk::YLeaf ipv6_table_id; //type: uint32
        ydk::YLeaf nhop_ip_addr; //type: string
        ydk::YLeaf session_type; //type: L2fibL2tpSession

}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions : public ydk::Entity
{
    public:
        L2tpv2Sessions();
        ~L2tpv2Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2tpv2Session; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session

        ydk::YList l2tpv2_session;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session : public ydk::Entity
{
    public:
        L2tpv2Session();
        ~L2tpv2Session();

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
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf ipv4_table_id; //type: uint32
        ydk::YLeaf ipv6_table_id; //type: uint32
        ydk::YLeaf nhop_ip_addr; //type: string
        ydk::YLeaf session_type; //type: L2fibL2tpSession

}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session


class L2vpnForwarding::Nodes::Node::L2fibG8032 : public ydk::Entity
{
    public:
        L2fibG8032();
        ~L2fibG8032();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032Rings; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings> l2fib_g8032_rings;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings : public ydk::Entity
{
    public:
        L2fibG8032Rings();
        ~L2fibG8032Rings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032Ring; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring

        ydk::YList l2fib_g8032_ring;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring : public ydk::Entity
{
    public:
        L2fibG8032Ring();
        ~L2fibG8032Ring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ring_name; //type: string
        class L2fibG8032RingDetail; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail
        class L2fibG8032RingSummary; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary
        class L2fibG8032RingInstanceSummaries; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries
        class L2fibG8032RingInstanceDetails; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail> l2fib_g8032_ring_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary> l2fib_g8032_ring_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries> l2fib_g8032_ring_instance_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails> l2fib_g8032_ring_instance_details;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail : public ydk::Entity
{
    public:
        L2fibG8032RingDetail();
        ~L2fibG8032RingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ring_name; //type: string
        ydk::YLeaf port0; //type: string
        ydk::YLeaf port1; //type: string
        ydk::YLeaf monitor0; //type: string
        ydk::YLeaf monitor1; //type: string
        ydk::YLeaf is_open_ring; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary : public ydk::Entity
{
    public:
        L2fibG8032RingSummary();
        ~L2fibG8032RingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ring_name; //type: string
        ydk::YLeaf port0; //type: string
        ydk::YLeaf port1; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceSummaries();
        ~L2fibG8032RingInstanceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032RingInstanceSummary; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries::L2fibG8032RingInstanceSummary

        ydk::YList l2fib_g8032_ring_instance_summary;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries::L2fibG8032RingInstanceSummary : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceSummary();
        ~L2fibG8032RingInstanceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ring_instance; //type: uint32
        ydk::YLeaf aps_port0; //type: string
        ydk::YLeaf aps_port1; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries::L2fibG8032RingInstanceSummary


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceDetails();
        ~L2fibG8032RingInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032RingInstanceDetail; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails::L2fibG8032RingInstanceDetail

        ydk::YList l2fib_g8032_ring_instance_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails::L2fibG8032RingInstanceDetail : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceDetail();
        ~L2fibG8032RingInstanceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ring_instance; //type: uint32
        ydk::YLeaf vlan_ids; //type: string
        ydk::YLeaf ring_profile; //type: string
        ydk::YLeaf rpl; //type: L2fibG8032Rpl
        ydk::YLeaf aps_port0; //type: string
        ydk::YLeaf aps_port1; //type: string
        ydk::YLeaf aps_port_status0; //type: L2fibG8032ApsPortStatus
        ydk::YLeaf aps_port_status1; //type: L2fibG8032ApsPortStatus
        ydk::YLeaf aps_channel_level; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails::L2fibG8032RingInstanceDetail


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts : public ydk::Entity
{
    public:
        L2fibBridgePorts();
        ~L2fibBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibBridgePort; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort

        ydk::YList l2fib_bridge_port;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort : public ydk::Entity
{
    public:
        L2fibBridgePort();
        ~L2fibBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf xc_uint_id; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf shg_id; //type: uint32
        ydk::YLeaf xc_id; //type: uint32
        ydk::YLeaf number_of_hw_mac; //type: uint32
        ydk::YLeaf number_of_sw_mac; //type: uint32
        ydk::YLeaf number_of_mcast_routes; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf aging_time_out; //type: uint32
        class Segment; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment
        class BridgePortOperationalInfo; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo> bridge_port_operational_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
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
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        ydk::YLeaf rewrittenvlan_id_count; //type: uint8
        ydk::YLeaf rewritten_first_vlan_id; //type: uint16
        ydk::YLeaf rewritten_second_vlan_id; //type: uint16
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb : public ydk::Entity
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
        class PbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion> pbb_union;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion : public ydk::Entity
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

        ydk::YLeaf pbb_type; //type: MgmtL2fibBridge
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw : public ydk::Entity
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
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
{
    public:
        L2tpIpv6Ts();
        ~L2tpIpv6Ts();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire : public ydk::Entity
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
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo : public ydk::Entity
{
    public:
        BridgePortOperationalInfo();
        ~BridgePortOperationalInfo();

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
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation : public ydk::Entity
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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: MgmtL2fibMacAging
        ydk::YLeaf l2mc_src_traffic_enabled; //type: uint32
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
        ydk::YLeaf etree_leaf; //type: boolean
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibmacDetails : public ydk::Entity
{
    public:
        L2fibmacDetails();
        ~L2fibmacDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibmacDetail; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail

        ydk::YList l2fibmac_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail : public ydk::Entity
{
    public:
        L2fibmacDetail();
        ~L2fibmacDetail();

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
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf platform_is_hw_learn; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bmac_configured; //type: boolean
        ydk::YLeaf vni_l3_flag; //type: boolean
        ydk::YLeaf pbb_bmac; //type: string
        ydk::YLeaf l3_encapsulationvlan_id; //type: uint16
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf peer_vtep_ip; //type: string
        ydk::YLeaf flag_extension; //type: uint16
        ydk::YLeaf vni; //type: uint32
        class Segment; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment
        class EvpnCtx; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop> next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vsp_vlan; //type: uint16

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb : public ydk::Entity
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

        ydk::YLeaf xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni : public ydk::Entity
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

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf parent_if; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn : public ydk::Entity
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

        ydk::YLeaf xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx : public ydk::Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle> mcast_ole;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle : public ydk::Entity
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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32
        ydk::YLeaf mcast_encapsulation; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames : public ydk::Entity
{
    public:
        L2fibBridgeDomainNames();
        ~L2fibBridgeDomainNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibBridgeDomainName; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames::L2fibBridgeDomainName

        ydk::YList l2fib_bridge_domain_name;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames::L2fibBridgeDomainName : public ydk::Entity
{
    public:
        L2fibBridgeDomainName();
        ~L2fibBridgeDomainName();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf flood_disabled; //type: boolean
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf number_of_shg; //type: uint32
        ydk::YLeaf number_of_hwmac; //type: uint32
        ydk::YLeaf number_of_swmac; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf aging_time_out; //type: uint32
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf l2mc_src_traffic_enabled; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames::L2fibBridgeDomainName


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_2_ */

