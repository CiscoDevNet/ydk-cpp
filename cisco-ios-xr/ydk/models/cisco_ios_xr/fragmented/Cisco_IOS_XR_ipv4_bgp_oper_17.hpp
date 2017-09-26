#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_17_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_12.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_16.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress : public ydk::Entity
{
    public:
        ConnectionRemoteAddress();
        ~ConnectionRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance : public ydk::Entity
{
    public:
        GracefulMaintenance();
        ~GracefulMaintenance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gshut_exists; //type: boolean
        ydk::YLeaf gshut_local_active; //type: boolean
        ydk::YLeaf gshut_active; //type: boolean
        ydk::YLeaf gshut_locpref_set; //type: boolean
        ydk::YLeaf gshut_locpref; //type: uint32
        ydk::YLeaf gshut_prepends; //type: uint8

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics : public ydk::Entity
{
    public:
        MessageStatistics();
        ~MessageStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Open; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open
        class Notification; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification
        class Update; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update
        class Keepalive; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive
        class RouteRefresh; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh
        class Total; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification> notification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open> open;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh> route_refresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total> total;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update> update;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open : public ydk::Entity
{
    public:
        Open();
        ~Open();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh : public ydk::Entity
{
    public:
        RouteRefresh();
        ~RouteRefresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec : public ydk::Entity
{
    public:
        LastTimeSpec();
        ~LastTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics : public ydk::Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf read_throttles; //type: uint32
        ydk::YLeaf low_throttled_read; //type: uint32
        ydk::YLeaf high_throttled_read; //type: uint32
        ydk::YLeaf time_since_last_throttled_read; //type: uint32
        ydk::YLeaf read_calls_count; //type: uint32
        ydk::YLeaf read_messages_count; //type: uint32
        ydk::YLeaf data_bytes_read; //type: uint32
        ydk::YLeaf io_read_time; //type: uint32
        ydk::YLeaf write_calls_count; //type: uint32
        ydk::YLeaf data_bytes_written; //type: uint32
        ydk::YLeaf io_write_time; //type: uint32
        ydk::YLeaf last_sent_seq_no; //type: uint32
        ydk::YLeaf write_subgroup_calls_count; //type: uint32
        ydk::YLeaf write_subgroup_messages_count; //type: uint32
        ydk::YLeaf subgroup_list_time; //type: uint32
        ydk::YLeaf write_queue_calls_count; //type: uint32
        ydk::YLeaf write_queue_messages_count; //type: uint32
        ydk::YLeaf write_queue_time; //type: uint32
        ydk::YLeaf inbound_update_messages; //type: uint32
        ydk::YLeaf inbound_update_messages_time; //type: uint32
        ydk::YLeaf maximum_read_size; //type: uint32
        ydk::YLeaf actives; //type: uint32
        ydk::YLeaf failed_post_actives; //type: uint32
        ydk::YLeaf passives; //type: uint32
        ydk::YLeaf rejected_passives; //type: uint32
        ydk::YLeaf active_collision; //type: uint32
        ydk::YLeaf passive_collision; //type: uint32
        ydk::YLeaf control_to_read_thread_trigger; //type: uint32
        ydk::YLeaf control_to_write_thread_trigger; //type: uint32
        ydk::YLeaf network_status; //type: uint32
        ydk::YLeaf reset_flags; //type: uint32
        ydk::YLeaf nbr_flags; //type: uint32
        ydk::YLeaf nbr_fd; //type: int32
        ydk::YLeaf reset_retries; //type: uint8
        ydk::YLeaf sync_flags; //type: uint32
        ydk::YLeaf nsr_oper_down_count; //type: uint32
        ydk::YLeaf last_nsr_scoped_sync; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo : public ydk::Entity
{
    public:
        ReceivedNotificationInfo();
        ~ReceivedNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since_last_notification; //type: uint32
        ydk::YLeaf notification_error_code; //type: uint8
        ydk::YLeaf notification_error_subcode; //type: uint8
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData : public ydk::Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo : public ydk::Entity
{
    public:
        SendNotificationInfo();
        ~SendNotificationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since_last_notification; //type: uint32
        ydk::YLeaf notification_error_code; //type: uint8
        ydk::YLeaf notification_error_subcode; //type: uint8
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData : public ydk::Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec : public ydk::Entity
{
    public:
        TcpInitSyncDoneTimeSpec();
        ~TcpInitSyncDoneTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec : public ydk::Entity
{
    public:
        TcpInitSyncPhaseTwoTimeSpec();
        ~TcpInitSyncPhaseTwoTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec : public ydk::Entity
{
    public:
        TcpInitSyncTimeSpec();
        ~TcpInitSyncTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds : public ydk::Entity
{
    public:
        NetworkAllRds();
        ~NetworkAllRds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkAllRd; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd> > network_all_rd;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd : public ydk::Entity
{
    public:
        NetworkAllRd();
        ~NetworkAllRd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network; //type: string
        ydk::YLeaf prefix_length; //type: int32
        class NetworkRds; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds> network_rds;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds : public ydk::Entity
{
    public:
        NetworkRds();
        ~NetworkRds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkRd; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd> > network_rd;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd : public ydk::Entity
{
    public:
        NetworkRd();
        ~NetworkRd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: string
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf has_inconsistent_paths; //type: boolean
        ydk::YLeaf is_net_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_net_ldp_signaled; //type: boolean
        ydk::YLeaf table_version; //type: uint32
        ydk::YLeaf table_brib_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf has_local_label; //type: boolean
        ydk::YLeaf net_local_label; //type: uint32
        ydk::YLeaf net_local_label_rewrite; //type: boolean
        ydk::YLeaf net_local_label_srgb; //type: boolean
        ydk::YLeaf has_lbl_retained; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf net_flags; //type: uint32
        ydk::YLeaf net_extended_flags; //type: uint32
        ydk::YLeaf net_multipath; //type: boolean
        ydk::YLeaf net_eibgp_multipath; //type: boolean
        ydk::YLeaf net_backup_available; //type: boolean
        ydk::YLeaf net_backup_label_rewrite_available; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf gateway_array; //type: uint32
        ydk::YLeaf resilient_nexthop_set; //type: uint32
        ydk::YLeaf is_permanent_network; //type: boolean
        ydk::YLeaf num_of_path; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf bit; //type: uint16
        ydk::YLeaf flags; //type: uint8
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield
        class LocalProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath
        class ActiveProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath
        class LocalPathElement; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement
        class ActivePathElement; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement> > active_path_element;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath> > active_process_instance_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement> > local_path_element;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath> > local_process_instance_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge> version_age;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp> version_timestamp;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement : public ydk::Entity
{
    public:
        ActivePathElement();
        ~ActivePathElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pelem_path_id; //type: uint32
        ydk::YLeaf pelem_version; //type: uint32
        ydk::YLeaf pelem_flags; //type: uint32
        ydk::YLeaf pelem_gw_metric; //type: uint32
        ydk::YLeaf pelem_path_flags; //type: uint64
        ydk::YLeaf pelem_path_peer_path_id; //type: uint32
        ydk::YLeaf pelem_table_attr_version; //type: uint32
        ydk::YLeaf pelem_path_table_attr_version; //type: uint32
        ydk::YLeaf pelem_no_bestpath_table_attr_version; //type: uint32
        ydk::YLeaf pelem_no_addpath_table_attr_version; //type: uint32
        ydk::YLeaf is_perm_path_pelem; //type: boolean
        class PelemPathNexthop; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel
        class PelemPathNeighborAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr> pelem_path_neighbor_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop> pelem_path_nexthop;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel : public ydk::Entity
{
    public:
        NhTunnel();
        ~NhTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_type; //type: BgpTunnel
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf is_tunnel_info_stale; //type: boolean
        ydk::YLeaf is_tunnel_registered; //type: boolean
        ydk::YLeaf tunnel_v6_required; //type: boolean
        ydk::YLeaf tunnel_v6_enabled; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf tunnel_if_handle; //type: uint32
        ydk::YLeaf last_tunnel_update; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr : public ydk::Entity
{
    public:
        PelemPathNeighborAddr();
        ~PelemPathNeighborAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop : public ydk::Entity
{
    public:
        PelemPathNexthop();
        ~PelemPathNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath : public ydk::Entity
{
    public:
        ActiveProcessInstancePath();
        ~ActiveProcessInstancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_path; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf label_o_or_version; //type: uint32
        ydk::YLeaf label_fail; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf source_route_distinguisher; //type: string
        ydk::YLeaf prefix_version; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_vrf_name; //type: string
        ydk::YLeaf srcaf_name; //type: BgpAfi
        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr
        class PathInformation; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn> attributes_after_policy_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation> path_information;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn : public ydk::Entity
{
    public:
        AttributesAfterPolicyIn();
        ~AttributesAfterPolicyIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_as_path2_byte; //type: boolean
        ydk::YLeaf is_application_gateway_present; //type: boolean
        ydk::YLeaf is_attr_set_present; //type: boolean
        ydk::YLeaf set_aigp_inbound_igp; //type: boolean
        ydk::YLeaf set_aigp_inbound_metric; //type: boolean
        ydk::YLeaf is_rnh_present; //type: boolean
        ydk::YLeaf is_ribrnh_present; //type: boolean
        ydk::YLeaf attribute_key_number; //type: uint32
        ydk::YLeaf attribute_reuse_id_config; //type: boolean
        ydk::YLeaf attribute_reuse_id_max_id; //type: uint32
        ydk::YLeaf attribute_reuse_id_node; //type: uint32
        ydk::YLeaf attribute_reuse_id_current; //type: uint32
        ydk::YLeaf attribute_reuse_id_keys; //type: uint32
        ydk::YLeaf attribute_reuse_id_recover_sec; //type: uint32
        ydk::YLeaf vpn_distinguisher; //type: uint32
        ydk::YLeaf rnh_type; //type: uint16
        ydk::YLeaf rnh_len; //type: uint8
        ydk::YLeaf rnh_addr_len; //type: uint32
        ydk::YLeaf ribrnh_table; //type: uint32
        ydk::YLeaf ribrnh_mac; //type: string
        ydk::YLeaf ribrnhip_table; //type: uint32
        ydk::YLeaf ribrnh_vni; //type: uint32
        ydk::YLeaf ribrnh_encap; //type: uint8
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr> rnh_addr;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet : public ydk::Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity> > large_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes : public ydk::Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity> > large_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp : public ydk::Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr : public ydk::Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpRnhAddrLen
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation : public ydk::Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_type; //type: BgpRoute1
        ydk::YLeaf is_path_valid; //type: boolean
        ydk::YLeaf is_path_damped; //type: boolean
        ydk::YLeaf is_path_history_held; //type: boolean
        ydk::YLeaf is_internal_path; //type: boolean
        ydk::YLeaf is_best_path; //type: boolean
        ydk::YLeaf is_as_best; //type: boolean
        ydk::YLeaf is_spkr_as_best; //type: boolean
        ydk::YLeaf is_partial_best; //type: boolean
        ydk::YLeaf is_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_import_dampened; //type: boolean
        ydk::YLeaf is_import_suspect; //type: boolean
        ydk::YLeaf is_path_not_advertised; //type: boolean
        ydk::YLeaf is_path_not_advertised_to_ebgps; //type: boolean
        ydk::YLeaf is_path_advertised_local_as_only; //type: boolean
        ydk::YLeaf is_path_from_route_reflector; //type: boolean
        ydk::YLeaf is_path_received_only; //type: boolean
        ydk::YLeaf is_received_path_not_modified; //type: boolean
        ydk::YLeaf is_path_locally_sourced; //type: boolean
        ydk::YLeaf is_path_local_aggregate; //type: boolean
        ydk::YLeaf is_path_from_network_command; //type: boolean
        ydk::YLeaf is_path_from_redistribute_command; //type: boolean
        ydk::YLeaf is_path_imported; //type: boolean
        ydk::YLeaf is_path_reoriginated; //type: boolean
        ydk::YLeaf is_path_reoriginated_stitching; //type: boolean
        ydk::YLeaf is_path_vpn_only; //type: boolean
        ydk::YLeaf is_path_from_confederation_peer; //type: boolean
        ydk::YLeaf is_path_synced_with_igp; //type: boolean
        ydk::YLeaf is_path_multipath; //type: boolean
        ydk::YLeaf is_path_imp_candidate; //type: boolean
        ydk::YLeaf is_path_stale; //type: boolean
        ydk::YLeaf is_path_long_lived_stale; //type: boolean
        ydk::YLeaf is_path_backup; //type: boolean
        ydk::YLeaf is_path_backup_protect_multipath; //type: boolean
        ydk::YLeaf is_path_best_external; //type: boolean
        ydk::YLeaf is_path_additional_path; //type: boolean
        ydk::YLeaf is_path_nexthop_discarded; //type: boolean
        ydk::YLeaf rcvd_label_count; //type: uint32
        ydk::YLeaf has_local_net_label; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf path_weight; //type: uint16
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf has_mdt_group_addr; //type: boolean
        ydk::YLeaf l2vpn_size; //type: uint32
        ydk::YLeaf l2vpn_evpn_esi; //type: string
        ydk::YLeaf has_gw_addr; //type: boolean
        ydk::YLeaf has_nh_addr; //type: boolean
        ydk::YLeaf has_second_label; //type: boolean
        ydk::YLeaf second_label; //type: uint32
        ydk::YLeaf path_flap_count; //type: uint32
        ydk::YLeaf seconds_since_first_flap; //type: uint32
        ydk::YLeaf time_to_unsuppress; //type: uint32
        ydk::YLeaf dampen_penalty; //type: uint32
        ydk::YLeaf halflife_time; //type: uint32
        ydk::YLeaf suppress_penalty; //type: uint32
        ydk::YLeaf reuse_value; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf best_path_comp_stage; //type: BgpBpStage
        ydk::YLeaf best_path_id_comp_winner; //type: uint32
        ydk::YLeaf path_flags; //type: uint64
        ydk::YLeaf path_import_flags; //type: uint32
        ydk::YLeaf best_path_id; //type: uint32
        ydk::YLeaf local_path_id; //type: uint32
        ydk::YLeaf rcvd_path_id; //type: uint32
        ydk::YLeaf path_table_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf sn_rpki_origin_as_validity; //type: uint8
        ydk::YLeaf show_rpki_origin_as_validity; //type: boolean
        ydk::YLeaf ibgp_signaled_validity; //type: boolean
        ydk::YLeaf rpki_origin_as_validation_disabled; //type: boolean
        ydk::YLeaf accept_own_path; //type: boolean
        ydk::YLeaf accept_own_self_originated_p_ath; //type: boolean
        ydk::YLeaf aigp_metric; //type: uint64
        ydk::YLeaf mvpn_sfs_path; //type: boolean
        ydk::YLeaf fspec_invalid_path; //type: boolean
        ydk::YLeaf has_mvpn_nbr_addr; //type: boolean
        ydk::YLeaf has_mvpn_nexthop_addr; //type: boolean
        ydk::YLeaf has_mvpn_pmsi; //type: boolean
        ydk::YLeaf mvpn_pmsi_type; //type: uint16
        ydk::YLeaf mvpn_pmsi_flags; //type: uint8
        ydk::YLeaf mvpn_pmsi_label; //type: uint32
        ydk::YLeaf has_mvpn_extcomm; //type: boolean
        ydk::YLeaf mvpn_path_flags; //type: uint16
        ydk::YLeaf local_nh; //type: boolean
        ydk::YLeaf rt_set_limit_enabled; //type: boolean
        ydk::YLeaf path_rt_set_id; //type: uint32
        ydk::YLeaf path_rt_set_route_count; //type: uint32
        ydk::YLeaf is_path_af_install_eligible; //type: boolean
        ydk::YLeaf is_permanent_path; //type: boolean
        ydk::YLeaf graceful_shutdown; //type: boolean
        ydk::YLeaf labeled_unicast_safi_path; //type: boolean
        ydk::YLeaf vpn_path_flags; //type: uint8
        ydk::YLeaf has_vpn_nexthop_addr; //type: boolean
        ydk::YLeaf is_orig_src_rd_present; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf route_distinguisher; //type: string
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr
        class GwAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::GwAddr
        class NhAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr
        class VpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr
        class RcvdLabel; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::RcvdLabel
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity> > extended_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::GwAddr> gw_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue> > mvpn_pmsi_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhAddr> nh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhTunnel> nh_tunnel;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::RcvdLabel> > rcvd_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr> vpn_nexthop_addr;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield : public ydk::Entity
{
    public:
        AddPathOrrBitfield();
        ~AddPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner : public ydk::Entity
{
    public:
        BestPathCompWinner();
        ~BestPathCompWinner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield : public ydk::Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix : public ydk::Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::GwAddr : public ydk::Entity
{
    public:
        GwAddr();
        ~GwAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpV4V6Len
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::GwAddr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue : public ydk::Entity
{
    public:
        L2VpnCircuitStatusValue();
        ~L2VpnCircuitStatusValue();

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

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo : public ydk::Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr : public ydk::Entity
{
    public:
        MdtGroupAddr();
        ~MdtGroupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_17_ */

