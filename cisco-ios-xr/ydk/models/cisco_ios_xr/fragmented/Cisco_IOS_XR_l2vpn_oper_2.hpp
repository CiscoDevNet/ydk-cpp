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


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S : public ydk::Entity
{
    public:
        L2FibMrouteIpv6S();
        ~L2FibMrouteIpv6S();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMrouteIpv6; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6> > l2fib_mroute_ipv6;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6 : public ydk::Entity
{
    public:
        L2FibMrouteIpv6();
        ~L2FibMrouteIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf xid_count; //type: uint16
        ydk::YLeaf platform_data_length; //type: uint8
        ydk::YLeaf platform_data; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        class MulticastBaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats
        class IrbInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo> irb_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix> source_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats : public ydk::Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat : public ydk::Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibStatsData
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo : public ydk::Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mxid_ac_interface_handle; //type: string
        ydk::YLeaf mxid_pw_id; //type: uint32
        ydk::YLeaf mxid_next_hop_address; //type: string
        ydk::YLeaf irb_plat_data_len; //type: uint16
        class IrbPlatData; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData> > irb_plat_data;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData : public ydk::Entity
{
    public:
        IrbPlatData();
        ~IrbPlatData();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo::IrbPlatData


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation : public ydk::Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts : public ydk::Entity
{
    public:
        L2FibMroutePorts();
        ~L2FibMroutePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMroutePort; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort> > l2fib_mroute_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort : public ydk::Entity
{
    public:
        L2FibMroutePort();
        ~L2FibMroutePort();

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
        ydk::YLeaf xcid; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf ac_interface_handle; //type: string
        ydk::YLeaf leaf_pointer; //type: uint32
        ydk::YLeaf pw_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf isid; //type: uint32
        ydk::YLeaf csfl; //type: uint32
        ydk::YLeaf sat_id; //type: uint16
        ydk::YLeaf is_ole_offloaded; //type: boolean
        ydk::YLeaf is_ole_master; //type: boolean
        ydk::YLeaf is_topo_hub_and_spoke; //type: boolean
        class BaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation> base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix> source_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation : public ydk::Entity
{
    public:
        BaseInformation();
        ~BaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats : public ydk::Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat : public ydk::Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibStatsData
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries : public ydk::Entity
{
    public:
        L2FibMrouteSummaries();
        ~L2FibMrouteSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMrouteSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary> > l2fib_mroute_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary : public ydk::Entity
{
    public:
        L2FibMrouteSummary();
        ~L2FibMrouteSummary();

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
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message> > message;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibMroutes : public ydk::Entity
{
    public:
        L2FibMroutes();
        ~L2FibMroutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMroute; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute> > l2fib_mroute;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute : public ydk::Entity
{
    public:
        L2FibMroute();
        ~L2FibMroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf xid_count; //type: uint16
        ydk::YLeaf platform_data_length; //type: uint8
        ydk::YLeaf platform_data; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        class MulticastBaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats
        class IrbInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo> irb_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix> source_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats : public ydk::Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat : public ydk::Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibStatsData
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo : public ydk::Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mxid_ac_interface_handle; //type: string
        ydk::YLeaf mxid_pw_id; //type: uint32
        ydk::YLeaf mxid_next_hop_address; //type: string
        ydk::YLeaf irb_plat_data_len; //type: uint16
        class IrbPlatData; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData> > irb_plat_data;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData : public ydk::Entity
{
    public:
        IrbPlatData();
        ~IrbPlatData();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbPlatData


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation : public ydk::Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails : public ydk::Entity
{
    public:
        L2FibMstpDetails();
        ~L2FibMstpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMstpDetail; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail> > l2fib_mstp_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail : public ydk::Entity
{
    public:
        L2FibMstpDetail();
        ~L2FibMstpDetail();

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
        ydk::YLeaf msti; //type: int32
        ydk::YLeaf parent_interface_xr; //type: string
        ydk::YLeaf msti_xr; //type: uint32
        ydk::YLeaf internal_msti; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base
        class BridgePortArray; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base> base;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray> > bridge_port_array;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray : public ydk::Entity
{
    public:
        BridgePortArray();
        ~BridgePortArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray


class L2VpnForwarding::Nodes::Node::L2FibMstpSummaries : public ydk::Entity
{
    public:
        L2FibMstpSummaries();
        ~L2FibMstpSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMstpSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary> > l2fib_mstp_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpSummaries


class L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary : public ydk::Entity
{
    public:
        L2FibMstpSummary();
        ~L2FibMstpSummary();

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
        ydk::YLeaf msti; //type: int32
        ydk::YLeaf parent_interface_xr; //type: string
        ydk::YLeaf msti_xr; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf bridge_port_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary


class L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base


class L2VpnForwarding::Nodes::Node::L2FibNvePeers : public ydk::Entity
{
    public:
        L2FibNvePeers();
        ~L2FibNvePeers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibNvePeer; //type: L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer> > l2fib_nve_peer;
        
}; // L2VpnForwarding::Nodes::Node::L2FibNvePeers


class L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer : public ydk::Entity
{
    public:
        L2FibNvePeer();
        ~L2FibNvePeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xc_uint_id; //type: string
        ydk::YLeaf vniid; //type: string
        ydk::YLeaf vtep_address; //type: string
        ydk::YLeaf nve_if; //type: string
        ydk::YLeaf vn_iid; //type: uint32
        ydk::YLeaf vte_pip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer


class L2VpnForwarding::Nodes::Node::L2FibP2Mp : public ydk::Entity
{
    public:
        L2FibP2Mp();
        ~L2FibP2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ptrees; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees> ptrees;
        
}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp


class L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees : public ydk::Entity
{
    public:
        Ptrees();
        ~Ptrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ptree; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree> > ptree;
        
}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees


class L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree : public ydk::Entity
{
    public:
        Ptree();
        ~Ptree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnp2mpPtree
        ydk::YLeaf lsm_id; //type: int32
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: int32
        ydk::YLeaf lsm_id_xr; //type: uint32
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf p2mp_id_xr; //type: uint32
        ydk::YLeaf extended_tunnel_id_xr; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree


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


class L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts : public ydk::Entity
{
    public:
        L2FibPwheMainPorts();
        ~L2FibPwheMainPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibPwheMainPort; //type: L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort> > l2fib_pwhe_main_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts


class L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort : public ydk::Entity
{
    public:
        L2FibPwheMainPort();
        ~L2FibPwheMainPort();

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
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_type; //type: uint32
        ydk::YLeaf generic_interface_list_id; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf control_word_enabled; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort


class L2VpnForwarding::Nodes::Node::L2FibResourceAvailability : public ydk::Entity
{
    public:
        L2FibResourceAvailability();
        ~L2FibResourceAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overall_out_of_resource_mode; //type: uint32
        ydk::YLeaf hardware_resource_mode_information; //type: string
        class ShmResource; //type: L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource
        class HardwareResourceMode; //type: L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode> > hardware_resource_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource> shm_resource;
        
}; // L2VpnForwarding::Nodes::Node::L2FibResourceAvailability


class L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode : public ydk::Entity
{
    public:
        HardwareResourceMode();
        ~HardwareResourceMode();

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

}; // L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::HardwareResourceMode


class L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource : public ydk::Entity
{
    public:
        ShmResource();
        ~ShmResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oout_of_resource_mode; //type: uint32
        ydk::YLeaf maximum_available; //type: uint64
        ydk::YLeaf average_available; //type: uint64
        ydk::YLeaf average_utility; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource


class L2VpnForwarding::Nodes::Node::L2FibSummary : public ydk::Entity
{
    public:
        L2FibSummary();
        ~L2FibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary> bridge_domain_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary> evpn_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg> global_cfg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary> l2tp_disposition_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary> mac_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary> next_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary> ptree_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary> pw_group_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary> pwhe_mp_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary> queue_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary> xconnect_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary : public ydk::Entity
{
    public:
        BridgeDomainSummary();
        ~BridgeDomainSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_count; //type: uint32
        ydk::YLeaf bridge_domain_drop_count; //type: uint32
        ydk::YLeaf bridge_domain_with_bvi_count; //type: uint32
        ydk::YLeaf bridge_domain_with_p2mp_enabled; //type: uint32
        ydk::YLeaf bridge_domain_with_pbbevpn_enabled; //type: uint32
        ydk::YLeaf bridge_domain_with_evpn_enabled; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary : public ydk::Entity
{
    public:
        EvpnSummary();
        ~EvpnSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf isid_count; //type: uint32
        ydk::YLeaf default_count; //type: uint32
        ydk::YLeaf stitching_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg : public ydk::Entity
{
    public:
        GlobalCfg();
        ~GlobalCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf evpn_imc_label_block_base; //type: uint32
        ydk::YLeaf evpn_imc_label_block_size; //type: uint16
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg


class L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base


class L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary : public ydk::Entity
{
    public:
        L2TpDispositionSummary();
        ~L2TpDispositionSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_disposition_session_count; //type: uint32
        ydk::YLeaf bound_l2tp_disposition_session_count; //type: uint32
        ydk::YLeaf unbound_l2tp_disposition_session_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary : public ydk::Entity
{
    public:
        MacSummary();
        ~MacSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_mac_count; //type: uint32
        ydk::YLeaf remote_mac_count; //type: uint32
        ydk::YLeaf static_mac_count; //type: uint32
        ydk::YLeaf routed_mac_count; //type: uint32
        ydk::YLeaf mac_count; //type: uint32
        ydk::YLeaf sbmac_count; //type: uint32
        ydk::YLeaf bmac_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary : public ydk::Entity
{
    public:
        NextHopSummary();
        ~NextHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsIl; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp
        class Lsm; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm
        class P2MpTunnels; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm> lsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl> mpls_il;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels> p2mp_tunnels;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp : public ydk::Entity
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

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm : public ydk::Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls : public ydk::Entity
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

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl : public ydk::Entity
{
    public:
        MplsIl();
        ~MplsIl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels : public ydk::Entity
{
    public:
        P2MpTunnels();
        ~P2MpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels


class L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary : public ydk::Entity
{
    public:
        PtreeSummary();
        ~PtreeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_ptree_count; //type: uint32
        ydk::YLeaf mldp_enabled_ptree_count; //type: uint32
        ydk::YLeaf lmrib_mldp_ptree_count; //type: uint32
        ydk::YLeaf rsvp_te_enabled_ptree_count; //type: uint32
        ydk::YLeaf lmrib_rsvp_te_ptree_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary : public ydk::Entity
{
    public:
        PwGroupSummary();
        ~PwGroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plat_grouping_supported; //type: boolean
        ydk::YLeaf total_pw_groups; //type: uint32
        ydk::YLeaf pw_groups_down; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary : public ydk::Entity
{
    public:
        PwheMpSummary();
        ~PwheMpSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary : public ydk::Entity
{
    public:
        QueueSummary();
        ~QueueSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inline_cnt; //type: uint32
        ydk::YLeaf retry_cnt; //type: uint32
        ydk::YLeaf update_cnt; //type: uint32
        ydk::YLeaf del_cnt; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary : public ydk::Entity
{
    public:
        XconnectSummary();
        ~XconnectSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_count; //type: uint32
        ydk::YLeaf xconnect_up_count; //type: uint32
        ydk::YLeaf xconnect_down_count; //type: uint32
        ydk::YLeaf ac_to_pw_count_mpls; //type: uint32
        ydk::YLeaf ac_to_pw_count_l2tp; //type: uint32
        ydk::YLeaf ac_to_pw_count_l2tp_ip_v6; //type: uint32
        ydk::YLeaf ac_to_pw_count_l2tpv2; //type: uint32
        ydk::YLeaf ac_to_ac_count; //type: uint32
        ydk::YLeaf ac_to_unknown_count; //type: uint32
        ydk::YLeaf mon_sess_to_pw_count; //type: uint32
        ydk::YLeaf mon_sess_to_unknown_count; //type: uint32
        ydk::YLeaf ac_to_bp_count; //type: uint32
        ydk::YLeaf pw_to_bp_count; //type: uint32
        ydk::YLeaf pw_to_unknown_count; //type: uint32
        ydk::YLeaf pbb_to_bp_count; //type: uint32
        ydk::YLeaf pbb_to_unknown_count; //type: uint32
        ydk::YLeaf vni_to_bp_count; //type: uint32
        ydk::YLeaf vni_to_unknown_count; //type: uint32
        ydk::YLeaf evpn_to_bp_count; //type: uint32
        ydk::YLeaf evpn_to_unknown_count; //type: uint32
        ydk::YLeaf ac_down_count_aib; //type: uint32
        ydk::YLeaf ac_down_count_l2vpn; //type: uint32
        ydk::YLeaf ac_down_count_l3fib; //type: uint32
        ydk::YLeaf ac_down_count_vpdn; //type: uint32
        ydk::YLeaf vpws_pw_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf vpls_pw_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf virtual_ac_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf pbb_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf vni_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf evpn_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf vpls_pw_max_exceeded_drop_cnt; //type: uint32
        ydk::YLeaf bundle_ac_max_exceeded_drop_cnt; //type: uint32
        ydk::YLeaf p2p_count; //type: uint32
        ydk::YLeaf bp_count; //type: uint32
        ydk::YLeaf pwhe_l2_if_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary


class L2VpnForwarding::Nodes::Node::L2FibmacDetails : public ydk::Entity
{
    public:
        L2FibmacDetails();
        ~L2FibmacDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibmacDetail; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail> > l2fibmac_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail : public ydk::Entity
{
    public:
        L2FibmacDetail();
        ~L2FibmacDetail();

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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw> pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses : public ydk::Entity
{
    public:
        L2FibmacHardwareEgresses();
        ~L2FibmacHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibmacHardwareEgress; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress> > l2fibmac_hardware_egress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress : public ydk::Entity
{
    public:
        L2FibmacHardwareEgress();
        ~L2FibmacHardwareEgress();

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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw> pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses : public ydk::Entity
{
    public:
        L2FibmacHardwareIngresses();
        ~L2FibmacHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibmacHardwareIngress; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress> > l2fibmac_hardware_ingress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress : public ydk::Entity
{
    public:
        L2FibmacHardwareIngress();
        ~L2FibmacHardwareIngress();

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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw> pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S : public ydk::Entity
{
    public:
        L2FibxConL2Tpv2S();
        ~L2FibxConL2Tpv2S();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibxConL2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2> > l2fibx_con_l2tpv2;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2 : public ydk::Entity
{
    public:
        L2FibxConL2Tpv2();
        ~L2FibxConL2Tpv2();

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
        ydk::YLeaf xcon_name; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf switching_type; //type: MgmtL2FibSwitching
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2> segment2;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1 : public ydk::Entity
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
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn
        class MonitorSession; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw> pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion : public ydk::Entity
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
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core> core;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_2_ */

