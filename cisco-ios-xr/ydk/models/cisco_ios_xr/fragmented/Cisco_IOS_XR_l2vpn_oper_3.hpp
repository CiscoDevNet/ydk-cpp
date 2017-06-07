#ifndef _CISCO_IOS_XR_L2VPN_OPER_3_
#define _CISCO_IOS_XR_L2VPN_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session : public Entity
{
    public:
        L2Tpv3Session();
        ~L2Tpv3Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: int32
        YLeaf session_id_xr; //type: uint32
        YLeaf interface_handle; //type: string
        YLeaf sub_interface_name; //type: string
        YLeaf source_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf ipv4_table_id; //type: uint32
        YLeaf ipv6_table_id; //type: uint32
        YLeaf nhop_ip_addr; //type: string
        YLeaf session_type; //type: L2FibL2TpSessionEnum
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions : public Entity
{
    public:
        L2Tpv2Sessions();
        ~L2Tpv2Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Tpv2Session; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session> > l2tpv2_session;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session : public Entity
{
    public:
        L2Tpv2Session();
        ~L2Tpv2Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: int32
        YLeaf tunnel_id; //type: int32
        YLeaf session_id_xr; //type: uint32
        YLeaf interface_handle; //type: string
        YLeaf sub_interface_name; //type: string
        YLeaf source_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf ipv4_table_id; //type: uint32
        YLeaf ipv6_table_id; //type: uint32
        YLeaf nhop_ip_addr; //type: string
        YLeaf session_type; //type: L2FibL2TpSessionEnum
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base


class L2VpnForwarding::Nodes::Node::L2FibG8032 : public Entity
{
    public:
        L2FibG8032();
        ~L2FibG8032();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibG8032Rings; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings> l2fib_g8032_rings;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings : public Entity
{
    public:
        L2FibG8032Rings();
        ~L2FibG8032Rings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibG8032Ring; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring> > l2fib_g8032_ring;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring : public Entity
{
    public:
        L2FibG8032Ring();
        ~L2FibG8032Ring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ring_name; //type: string
        class L2FibG8032RingDetail; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail
        class L2FibG8032RingSummary; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary
        class L2FibG8032RingInstanceSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries
        class L2FibG8032RingInstanceDetails; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail> l2fib_g8032_ring_detail;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails> l2fib_g8032_ring_instance_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries> l2fib_g8032_ring_instance_summaries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary> l2fib_g8032_ring_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail : public Entity
{
    public:
        L2FibG8032RingDetail();
        ~L2FibG8032RingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ring_name; //type: string
        YLeaf port0; //type: string
        YLeaf port1; //type: string
        YLeaf monitor0; //type: string
        YLeaf monitor1; //type: string
        YLeaf is_open_ring; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary : public Entity
{
    public:
        L2FibG8032RingSummary();
        ~L2FibG8032RingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ring_name; //type: string
        YLeaf port0; //type: string
        YLeaf port1; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries : public Entity
{
    public:
        L2FibG8032RingInstanceSummaries();
        ~L2FibG8032RingInstanceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibG8032RingInstanceSummary; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary> > l2fib_g8032_ring_instance_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary : public Entity
{
    public:
        L2FibG8032RingInstanceSummary();
        ~L2FibG8032RingInstanceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance; //type: int32
        YLeaf ring_instance; //type: uint32
        YLeaf aps_port0; //type: string
        YLeaf aps_port1; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails : public Entity
{
    public:
        L2FibG8032RingInstanceDetails();
        ~L2FibG8032RingInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibG8032RingInstanceDetail; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail> > l2fib_g8032_ring_instance_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail : public Entity
{
    public:
        L2FibG8032RingInstanceDetail();
        ~L2FibG8032RingInstanceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance; //type: int32
        YLeaf ring_instance; //type: uint32
        YLeaf vlan_ids; //type: string
        YLeaf ring_profile; //type: string
        YLeaf rpl; //type: L2FibG8032RplEnum
        YLeaf aps_port0; //type: string
        YLeaf aps_port1; //type: string
        YLeaf aps_port_status0; //type: L2FibG8032ApsPortStatusEnum
        YLeaf aps_port_status1; //type: L2FibG8032ApsPortStatusEnum
        YLeaf aps_channel_level; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts : public Entity
{
    public:
        L2FibBridgePorts();
        ~L2FibBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibBridgePort; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort> > l2fib_bridge_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort : public Entity
{
    public:
        L2FibBridgePort();
        ~L2FibBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf bd_name; //type: string
        YLeaf xc_uint_id; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf shg_id; //type: uint32
        YLeaf xc_id; //type: uint32
        YLeaf number_of_hw_mac; //type: uint32
        YLeaf number_of_sw_mac; //type: uint32
        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf flooding_disabled; //type: boolean
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf mtu; //type: uint32
        YLeaf aging_time_out; //type: uint32
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment
        class BridgePortOperationalInfo; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo> bridge_port_operational_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment : public Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb : public Entity
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

        YLeaf bound; //type: boolean
        YLeaf forward_class; //type: uint8
        YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion : public Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pbb_type; //type: MgmtL2FibBridgeEnum
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_configured; //type: boolean
        YLeaf mac; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core : public Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srcip; //type: string
        YLeaf mcastip; //type: string
        YLeaf bound; //type: boolean
        YLeaf parent_if; //type: string
        YLeaf encap; //type: uint32
        YLeaf udp_port; //type: uint32
        YLeaf source_vtep_if; //type: string
        YLeaf any_cast_ip; //type: string
        YLeaf anycast_mcast_ip; //type: string
        YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn : public Entity
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

        YLeaf bound; //type: boolean
        YLeaf evi; //type: uint32
        YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo : public Entity
{
    public:
        BridgePortOperationalInfo();
        ~BridgePortOperationalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation : public Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_limit; //type: uint32
        YLeaf number_of_macs; //type: uint32
        YLeaf admin_disabled; //type: boolean
        YLeaf flooding_disabled; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotifyEnum
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf mac_secure_action; //type: MgmtL2FibMacSecActionEnum
        YLeaf is_mac_secure_accept_shutdown; //type: boolean
        YLeaf mac_aging_type; //type: boolean
        YLeaf storm_control_unicast_enabled; //type: boolean
        YLeaf storm_control_broadcast_enabled; //type: boolean
        YLeaf storm_control_multicast_enabled; //type: boolean
        YLeaf storm_control_unicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_broadcast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_multicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf dhcp_enabled; //type: boolean
        YLeaf dhcp_trusted; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_ipsg_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        YLeaf igmp_snoop_enabled; //type: boolean
        YLeaf igmp_snoop_profile_enabled; //type: boolean
        YLeaf igmp_flood_forward_enabled; //type: boolean
        YLeaf igmp_mroute_port_enabled; //type: boolean
        YLeaf igmp_route_guard_enabled; //type: boolean
        YLeaf mld_snoop_enabled; //type: boolean
        YLeaf mld_snoop_profile_enabled; //type: boolean
        YLeaf mld_flood_forward_enabled; //type: boolean
        YLeaf mld_mroute_port_enabled; //type: boolean
        YLeaf mld_route_guard_enabled; //type: boolean
        YLeaf stp_participating; //type: boolean
        YLeaf bvi_configured; //type: boolean
        YLeaf is_bvi_up; //type: boolean
        YLeaf is_vni_enabled; //type: boolean
        YLeaf is_evpn_enabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf host_routing_enabled; //type: boolean
        YLeaf is_pbbevpn_enabled; //type: boolean
        YLeaf is_swmac_learning; //type: boolean
        YLeaf is_evpn_flow_label; //type: boolean
        YLeaf is_evpn_cw_disable; //type: boolean
        YLeaf msti; //type: uint32
        YLeaf is_p2mp_pw_enabled; //type: boolean
        YLeaf is_igmp_snoop_enabled; //type: boolean
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature : public Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf feature_type; //type: L2FibFeatureEnum
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibmacDetails : public Entity
{
    public:
        L2FibmacDetails();
        ~L2FibmacDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibmacDetail; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail> > l2fibmac_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail : public Entity
{
    public:
        L2FibmacDetail();
        ~L2FibmacDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf group_name; //type: string
        YLeaf name; //type: string
        YLeaf platform_is_hw_learn; //type: uint8
        YLeaf node_id; //type: string
        YLeaf bridge_domain_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf bmac_configured; //type: boolean
        YLeaf vni_l3_flag; //type: boolean
        YLeaf pbb_bmac; //type: string
        YLeaf l3_encapsulationvlan_id; //type: uint16
        YLeaf next_hop_valid; //type: boolean
        YLeaf peer_vtep_ip; //type: string
        YLeaf flag_extension; //type: uint16
        YLeaf vni; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx> evpn_ctx;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment : public Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb : public Entity
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

        YLeaf xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xcid; //type: uint32
        YLeaf parent_if; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn : public Entity
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

        YLeaf xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf next_hop_address; //type: string
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx : public Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtxEnum
        YLeaf esi_id; //type: uint16
        YLeaf local_label; //type: uint32
        YLeaf bp_ifh; //type: string
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle : public Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_ipv6_addr; //type: string
        YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames : public Entity
{
    public:
        L2FibBridgeDomainNames();
        ~L2FibBridgeDomainNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibBridgeDomainName; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName> > l2fib_bridge_domain_name;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName : public Entity
{
    public:
        L2FibBridgeDomainName();
        ~L2FibBridgeDomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_group_name; //type: string
        YLeaf name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf bridge_name; //type: string
        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf flood_disabled; //type: boolean
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf admin_disabled; //type: boolean
        YLeaf bridge_port_count; //type: uint32
        YLeaf number_of_shg; //type: uint32
        YLeaf number_of_hwmac; //type: uint32
        YLeaf number_of_swmac; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf aging_time_out; //type: uint32
        YLeaf msti; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts : public Entity
{
    public:
        L2FibMroutePorts();
        ~L2FibMroutePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMroutePort; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort> > l2fib_mroute_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort : public Entity
{
    public:
        L2FibMroutePort();
        ~L2FibMroutePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_name; //type: string
        YLeaf xcid; //type: string
        YLeaf source; //type: string
        YLeaf group; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf ac_interface_handle; //type: string
        YLeaf leaf_pointer; //type: uint32
        YLeaf pw_id; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf isid; //type: uint32
        YLeaf csfl; //type: uint32
        YLeaf sat_id; //type: uint16
        YLeaf is_ole_offloaded; //type: boolean
        YLeaf is_ole_master; //type: boolean
        YLeaf is_topo_hub_and_spoke; //type: boolean
        class BaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation> base_information;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix> destination_prefix;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats> forward_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix> source_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation : public Entity
{
    public:
        BaseInformation();
        ~BaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats : public Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat : public Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibStatsDataEnum
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast : public Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix : public Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix : public Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibSummary : public Entity
{
    public:
        L2FibSummary();
        ~L2FibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class XconnectSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary
        class NextHopSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary
        class L2TpDispositionSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary
        class BridgeDomainSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary
        class MacSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary
        class QueueSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary
        class EvpnSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary
        class GlobalCfg; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg
        class PtreeSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary
        class PwGroupSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary
        class PwheMpSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary> bridge_domain_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary> evpn_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg> global_cfg;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary> l2tp_disposition_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary> mac_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary> next_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary> ptree_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary> pw_group_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary> pwhe_mp_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary> queue_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary> xconnect_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary : public Entity
{
    public:
        XconnectSummary();
        ~XconnectSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xconnect_count; //type: uint32
        YLeaf xconnect_up_count; //type: uint32
        YLeaf xconnect_down_count; //type: uint32
        YLeaf ac_to_pw_count_mpls; //type: uint32
        YLeaf ac_to_pw_count_l2tp; //type: uint32
        YLeaf ac_to_pw_count_l2tp_ip_v6; //type: uint32
        YLeaf ac_to_pw_count_l2tpv2; //type: uint32
        YLeaf ac_to_ac_count; //type: uint32
        YLeaf ac_to_unknown_count; //type: uint32
        YLeaf mon_sess_to_pw_count; //type: uint32
        YLeaf mon_sess_to_unknown_count; //type: uint32
        YLeaf ac_to_bp_count; //type: uint32
        YLeaf pw_to_bp_count; //type: uint32
        YLeaf pw_to_unknown_count; //type: uint32
        YLeaf pbb_to_bp_count; //type: uint32
        YLeaf pbb_to_unknown_count; //type: uint32
        YLeaf vni_to_bp_count; //type: uint32
        YLeaf vni_to_unknown_count; //type: uint32
        YLeaf evpn_to_bp_count; //type: uint32
        YLeaf evpn_to_unknown_count; //type: uint32
        YLeaf ac_down_count_aib; //type: uint32
        YLeaf ac_down_count_l2vpn; //type: uint32
        YLeaf ac_down_count_l3fib; //type: uint32
        YLeaf ac_down_count_vpdn; //type: uint32
        YLeaf vpws_pw_invalid_xid_drop_count; //type: uint32
        YLeaf vpls_pw_invalid_xid_drop_count; //type: uint32
        YLeaf virtual_ac_invalid_xid_drop_count; //type: uint32
        YLeaf pbb_invalid_xid_drop_count; //type: uint32
        YLeaf vni_invalid_xid_drop_count; //type: uint32
        YLeaf evpn_invalid_xid_drop_count; //type: uint32
        YLeaf vpls_pw_max_exceeded_drop_cnt; //type: uint32
        YLeaf bundle_ac_max_exceeded_drop_cnt; //type: uint32
        YLeaf p2p_count; //type: uint32
        YLeaf bp_count; //type: uint32
        YLeaf pwhe_l2_if_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary : public Entity
{
    public:
        NextHopSummary();
        ~NextHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsIl; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp
        class Lsm; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm
        class P2MpTunnels; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm> lsm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl> mpls_il;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels> p2mp_tunnels;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl : public Entity
{
    public:
        MplsIl();
        ~MplsIl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_count; //type: uint32
        YLeaf bound_next_hop_count; //type: uint32
        YLeaf unbound_next_hop_count; //type: uint32
        YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_count; //type: uint32
        YLeaf bound_next_hop_count; //type: uint32
        YLeaf unbound_next_hop_count; //type: uint32
        YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_count; //type: uint32
        YLeaf bound_next_hop_count; //type: uint32
        YLeaf unbound_next_hop_count; //type: uint32
        YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm : public Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_count; //type: uint32
        YLeaf bound_next_hop_count; //type: uint32
        YLeaf unbound_next_hop_count; //type: uint32
        YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels : public Entity
{
    public:
        P2MpTunnels();
        ~P2MpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_count; //type: uint32
        YLeaf bound_next_hop_count; //type: uint32
        YLeaf unbound_next_hop_count; //type: uint32
        YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels


class L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary : public Entity
{
    public:
        L2TpDispositionSummary();
        ~L2TpDispositionSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2tp_disposition_session_count; //type: uint32
        YLeaf bound_l2tp_disposition_session_count; //type: uint32
        YLeaf unbound_l2tp_disposition_session_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary : public Entity
{
    public:
        BridgeDomainSummary();
        ~BridgeDomainSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_domain_count; //type: uint32
        YLeaf bridge_domain_drop_count; //type: uint32
        YLeaf bridge_domain_with_bvi_count; //type: uint32
        YLeaf bridge_domain_with_p2mp_enabled; //type: uint32
        YLeaf bridge_domain_with_pbbevpn_enabled; //type: uint32
        YLeaf bridge_domain_with_evpn_enabled; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary : public Entity
{
    public:
        MacSummary();
        ~MacSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_mac_count; //type: uint32
        YLeaf remote_mac_count; //type: uint32
        YLeaf static_mac_count; //type: uint32
        YLeaf routed_mac_count; //type: uint32
        YLeaf mac_count; //type: uint32
        YLeaf sbmac_count; //type: uint32
        YLeaf bmac_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary : public Entity
{
    public:
        QueueSummary();
        ~QueueSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inline_cnt; //type: uint32
        YLeaf retry_cnt; //type: uint32
        YLeaf update_cnt; //type: uint32
        YLeaf del_cnt; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary : public Entity
{
    public:
        EvpnSummary();
        ~EvpnSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf isid_count; //type: uint32
        YLeaf default_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg : public Entity
{
    public:
        GlobalCfg();
        ~GlobalCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_balance_type; //type: L2FibLoadBalEnum
        YLeaf evpn_imc_label_block_base; //type: uint32
        YLeaf evpn_imc_label_block_size; //type: uint16
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg


class L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base


class L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary : public Entity
{
    public:
        PtreeSummary();
        ~PtreeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_ptree_count; //type: uint32
        YLeaf mldp_enabled_ptree_count; //type: uint32
        YLeaf lmrib_mldp_ptree_count; //type: uint32
        YLeaf rsvp_te_enabled_ptree_count; //type: uint32
        YLeaf lmrib_rsvp_te_ptree_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary : public Entity
{
    public:
        PwGroupSummary();
        ~PwGroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf plat_grouping_supported; //type: boolean
        YLeaf total_pw_groups; //type: uint32
        YLeaf pw_groups_down; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary : public Entity
{
    public:
        PwheMpSummary();
        ~PwheMpSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary


class L2VpnForwarding::Nodes::Node::L2FibNvePeers : public Entity
{
    public:
        L2FibNvePeers();
        ~L2FibNvePeers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibNvePeer; //type: L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer> > l2fib_nve_peer;
        
}; // L2VpnForwarding::Nodes::Node::L2FibNvePeers


class L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer : public Entity
{
    public:
        L2FibNvePeer();
        ~L2FibNvePeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xc_uint_id; //type: string
        YLeaf vniid; //type: string
        YLeaf vtep_address; //type: string
        YLeaf nve_if; //type: string
        YLeaf vn_iid; //type: uint32
        YLeaf vte_pip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer


class L2VpnForwarding::Nodes::Node::L2FibMmrps : public Entity
{
    public:
        L2FibMmrps();
        ~L2FibMmrps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMmrp; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp> > l2fib_mmrp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp : public Entity
{
    public:
        L2FibMmrp();
        ~L2FibMmrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string
        YLeaf group; //type: string
        YLeaf bd_group_name; //type: string
        YLeaf bd_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf xid_count; //type: uint16
        YLeaf platform_data_length; //type: uint8
        YLeaf platform_data; //type: string
        YLeaf hardware_information; //type: string
        YLeaf bridge_domain_name; //type: string
        class MulticastBaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats
        class IrbInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix> destination_prefix;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats> forward_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo> irb_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix> source_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation : public Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix : public Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix : public Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats : public Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat : public Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibStatsDataEnum
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast : public Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo : public Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mxid_ac_interface_handle; //type: string
        YLeaf mxid_pw_id; //type: uint32
        YLeaf mxid_next_hop_address; //type: string
        YLeaf irb_plat_data_len; //type: uint16
        YLeafList irb_plat_data; //type: list of  uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs : public Entity
{
    public:
        L2FibEvpnIp6Macs();
        ~L2FibEvpnIp6Macs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnIp6Mac; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac> > l2fib_evpn_ip6mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac : public Entity
{
    public:
        L2FibEvpnIp6Mac();
        ~L2FibEvpnIp6Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bdid; //type: int32
        YLeaf ip_address; //type: string
        YLeaf is_local; //type: boolean
        YLeaf mac_address; //type: string
        YLeaf bdid_xr; //type: uint32
        YLeaf mac_address_xr; //type: string
        YLeaf arp_nd_sync_pending; //type: boolean
        YLeaf arp_nd_probe_pending; //type: boolean
        YLeaf arp_nd_delete_pending; //type: boolean
        YLeaf is_local_xr; //type: boolean
        class IpAddressXr; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr> ip_address_xr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr : public Entity
{
    public:
        IpAddressXr();
        ~IpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr_type; //type: L2FibIpAddrEnum
        YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries : public Entity
{
    public:
        L2FibDhcpBindingSummaries();
        ~L2FibDhcpBindingSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibDhcpBindingSummary; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary> > l2fib_dhcp_binding_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary : public Entity
{
    public:
        L2FibDhcpBindingSummary();
        ~L2FibDhcpBindingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xcid; //type: string
        YLeaf bindings; //type: uint32
        class Port; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port> port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf next_hop_address; //type: string
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts : public Entity
{
    public:
        L2FibEvpnInclMCasts();
        ~L2FibEvpnInclMCasts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnInclMCast; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast> > l2fib_evpn_incl_m_cast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast : public Entity
{
    public:
        L2FibEvpnInclMCast();
        ~L2FibEvpnInclMCast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList : public Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_domain_name; //type: string
        YLeaf bridge_domain_id; //type: uint32
        YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles : public Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf is_bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_ipv6_addr; //type: string
        YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

class L2Vpnv2 : public Entity
{
    public:
        L2Vpnv2();
        ~L2Vpnv2();

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

        class Standby; //type: L2Vpnv2::Standby
        class Active; //type: L2Vpnv2::Active
        class Nodes; //type: L2Vpnv2::Nodes

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active> active;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby> standby;
        
}; // L2Vpnv2


class L2Vpnv2::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Discoveries; //type: L2Vpnv2::Standby::Discoveries
        class FlexibleXconnectServiceSummary; //type: L2Vpnv2::Standby::FlexibleXconnectServiceSummary
        class MainInterfaces; //type: L2Vpnv2::Standby::MainInterfaces
        class IccpSm; //type: L2Vpnv2::Standby::IccpSm
        class BridgeSummary; //type: L2Vpnv2::Standby::BridgeSummary
        class Nsr; //type: L2Vpnv2::Standby::Nsr
        class GlobalSettings; //type: L2Vpnv2::Standby::GlobalSettings
        class Pwr; //type: L2Vpnv2::Standby::Pwr
        class XconnectMp2MpCe2Ces; //type: L2Vpnv2::Standby::XconnectMp2MpCe2Ces
        class Xconnects; //type: L2Vpnv2::Standby::Xconnects
        class XconnectGroups; //type: L2Vpnv2::Standby::XconnectGroups
        class XconnectMp2Mps; //type: L2Vpnv2::Standby::XconnectMp2Mps
        class Indexes; //type: L2Vpnv2::Standby::Indexes
        class XconnectSummary; //type: L2Vpnv2::Standby::XconnectSummary
        class ProcFsm; //type: L2Vpnv2::Standby::ProcFsm
        class MstpPorts; //type: L2Vpnv2::Standby::MstpPorts
        class GenericInterfaceListDetails; //type: L2Vpnv2::Standby::GenericInterfaceListDetails
        class L2VpnResourceState; //type: L2Vpnv2::Standby::L2VpnResourceState
        class BridgeDomains; //type: L2Vpnv2::Standby::BridgeDomains
        class DiscoverySummary; //type: L2Vpnv2::Standby::DiscoverySummary
        class G8032; //type: L2Vpnv2::Standby::G8032
        class PseudowireClasses; //type: L2Vpnv2::Standby::PseudowireClasses
        class L2VpnCollaborators; //type: L2Vpnv2::Standby::L2VpnCollaborators
        class Mvrp; //type: L2Vpnv2::Standby::Mvrp
        class GenericInterfaces; //type: L2Vpnv2::Standby::GenericInterfaces
        class MstpVlans; //type: L2Vpnv2::Standby::MstpVlans
        class L2VpnPbbBsa; //type: L2Vpnv2::Standby::L2VpnPbbBsa
        class FlexibleXconnectServices; //type: L2Vpnv2::Standby::FlexibleXconnectServices
        class XconnectBrief; //type: L2Vpnv2::Standby::XconnectBrief

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains> bridge_domains;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeSummary> bridge_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries> discoveries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::DiscoverySummary> discovery_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::FlexibleXconnectServiceSummary> flexible_xconnect_service_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::FlexibleXconnectServices> flexible_xconnect_services;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::G8032> g8032;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails> generic_interface_list_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaces> generic_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GlobalSettings> global_settings;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::IccpSm> iccp_sm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Indexes> indexes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::L2VpnCollaborators> l2vpn_collaborators;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::L2VpnPbbBsa> l2vpn_pbb_bsa;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::L2VpnResourceState> l2vpn_resource_state;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::MainInterfaces> main_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::MstpPorts> mstp_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::MstpVlans> mstp_vlans;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Mvrp> mvrp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm> proc_fsm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Pwr> pwr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectBrief> xconnect_brief;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectGroups> xconnect_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2MpCe2Ces> xconnect_mp2mp_ce2ces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps> xconnect_mp2mps;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectSummary> xconnect_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects> xconnects;
        
}; // L2Vpnv2::Standby


class L2Vpnv2::Standby::Discoveries : public Entity
{
    public:
        Discoveries();
        ~Discoveries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Discovery; //type: L2Vpnv2::Standby::Discoveries::Discovery

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery> > discovery;
        
}; // L2Vpnv2::Standby::Discoveries


class L2Vpnv2::Standby::Discoveries::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_name; //type: L2VpnServiceEnum
        YLeaf group_name; //type: string
        YLeaf vpn_name; //type: string
        YLeaf mtu_mismatch_ignore; //type: boolean
        YLeaf number_vpn; //type: uint32
        YLeaf vpn_id; //type: uint32
        YLeaf service_name_xr; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf vpn_name_xr; //type: string
        YLeaf is_service_connected; //type: boolean
        class SignallingInfo; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo> signalling_info;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo : public Entity
{
    public:
        SignallingInfo();
        ~SignallingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ad_signalling_method; //type: L2VpnAdSigMethodEnum
        class BgpSigInfo; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo
        class LdpSigInfo; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo> bgp_sig_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo> ldp_sig_info;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo : public Entity
{
    public:
        BgpSigInfo();
        ~BgpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_edges; //type: uint32
        YLeaf number_remote_edges; //type: uint32
        class Edge; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge
        class Redge; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge> > edge;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge> > redge;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf edge_id; //type: uint32
        YLeaf label_count; //type: uint32
        class LabelBlock; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock> > label_block;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock : public Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_time_created; //type: uint32
        YLeaf label_base; //type: uint32
        YLeaf block_offset; //type: uint32
        YLeaf block_size; //type: uint32
        YLeaf local_edge_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf label_error; //type: L2VpnAdLsdErrEnum
        YLeafList status_vector; //type: list of  uint8

}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge : public Entity
{
    public:
        Redge();
        ~Redge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf edge_id; //type: uint32
        YLeaf label_count; //type: uint32
        class LabelBlock; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock> > label_block;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock : public Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_time_created; //type: uint32
        YLeaf label_base; //type: uint32
        YLeaf block_offset; //type: uint32
        YLeaf block_size; //type: uint32
        YLeaf local_edge_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf label_error; //type: L2VpnAdLsdErrEnum
        YLeafList status_vector; //type: list of  uint8

}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo : public Entity
{
    public:
        LdpSigInfo();
        ~LdpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_l2_router_id; //type: string
        YLeaf number_remote_edges; //type: uint32
        class LocalVplsId; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId
        class RemoteNlri; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId> local_vpls_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri> > remote_nlri;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId : public Entity
{
    public:
        LocalVplsId();
        ~LocalVplsId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum
        class Auto_; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr


class L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri : public Entity
{
    public:
        RemoteNlri();
        ~RemoteNlri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nlri_time_created; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf remote_l2_router_id; //type: string

}; // L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri


class L2Vpnv2::Standby::FlexibleXconnectServiceSummary : public Entity
{
    public:
        FlexibleXconnectServiceSummary();
        ~FlexibleXconnectServiceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_fxc; //type: uint32
        YLeaf number_fxc_up; //type: uint32
        YLeaf number_fxc_down; //type: uint32

}; // L2Vpnv2::Standby::FlexibleXconnectServiceSummary


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_3_ */

