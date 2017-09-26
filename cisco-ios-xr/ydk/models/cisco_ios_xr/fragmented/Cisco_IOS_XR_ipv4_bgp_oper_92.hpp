#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_92_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_92_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_73.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_91.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_ : public ydk::Entity
{
    public:
        Instance_();
        ~Instance_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_idle_watch_timer_running; //type: boolean
        ydk::YLeaf connection_state; //type: BgpConnState
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress
        class NeighborAge; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge
        class IdleWatchTimerRemainingValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue> idle_watch_timer_remaining_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge> neighbor_age;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue : public ydk::Entity
{
    public:
        IdleWatchTimerRemainingValue();
        ~IdleWatchTimerRemainingValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge : public ydk::Entity
{
    public:
        NeighborAge();
        ~NeighborAge();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf speaker_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf remote_as; //type: uint32
        ydk::YLeaf has_internal_link; //type: boolean
        ydk::YLeaf is_external_neighbor_not_directly_connected; //type: boolean
        ydk::YLeaf messages_received; //type: uint32
        ydk::YLeaf messages_sent; //type: uint32
        ydk::YLeaf update_messages_in; //type: uint32
        ydk::YLeaf update_messages_out; //type: uint32
        ydk::YLeaf messages_queued_in; //type: uint32
        ydk::YLeaf messages_queued_out; //type: uint32
        ydk::YLeaf connection_established_time; //type: uint32
        ydk::YLeaf connection_state; //type: BgpConnState
        ydk::YLeaf previous_connection_state; //type: uint32
        ydk::YLeaf connection_admin_status; //type: uint32
        ydk::YLeaf open_check_error_code; //type: BgpOpenCheckErr
        ydk::YLeaf is_local_address_configured; //type: boolean
        ydk::YLeaf connection_local_port; //type: uint32
        ydk::YLeaf connection_remote_port; //type: uint32
        ydk::YLeaf neighbor_interface_handle; //type: uint32
        ydk::YLeaf reset_notification_sent; //type: boolean
        ydk::YLeaf is_administratively_shut_down; //type: boolean
        ydk::YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        ydk::YLeaf is_out_of_memory_shutdown; //type: boolean
        ydk::YLeaf is_out_of_memory_forced_up; //type: boolean
        ydk::YLeaf is_ebgp_peer_as_league; //type: boolean
        ydk::YLeaf is_ebgp_peer_common_admin; //type: boolean
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf suppress4_byte_as; //type: boolean
        ydk::YLeaf bfd_session_state; //type: BgpBfdState
        ydk::YLeaf bfd_session_created_state; //type: BgpBfdState
        ydk::YLeaf bfd_session_enable_mode; //type: BgpBfdEnableMode
        ydk::YLeaf bfd_minintervalval; //type: uint32
        ydk::YLeaf bfd_multiplierval; //type: uint32
        ydk::YLeaf bfd_state_ts; //type: uint64
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf negotiated_protocol_version; //type: uint16
        ydk::YLeaf ebgp_time_to_live; //type: uint32
        ydk::YLeaf is_ebgp_multihop_bgp_mpls_forwarding_disabled; //type: boolean
        ydk::YLeaf tcpmss; //type: uint32
        ydk::YLeaf msg_log_in; //type: uint32
        ydk::YLeaf msg_log_out; //type: uint32
        ydk::YLeaf neighbor_local_as; //type: uint32
        ydk::YLeaf local_as_no_prepend; //type: boolean
        ydk::YLeaf is_capability_negotiation_suppressed; //type: boolean
        ydk::YLeaf is_capability_negotiation_performed; //type: boolean
        ydk::YLeaf is_route_refresh_capability_received; //type: boolean
        ydk::YLeaf is_route_refresh_old_capability_received; //type: boolean
        ydk::YLeaf is_gr_aware; //type: boolean
        ydk::YLeaf is4_byte_as_capability_received; //type: boolean
        ydk::YLeaf is4_byte_as_capability_sent; //type: boolean
        ydk::YLeaf multi_protocol_capability_received; //type: boolean
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf keep_alive_time; //type: uint16
        ydk::YLeaf configured_hold_time; //type: uint16
        ydk::YLeaf configured_keepalive; //type: uint16
        ydk::YLeaf configured_min_acc_hold_time; //type: uint16
        ydk::YLeaf min_advertise_interval; //type: uint32
        ydk::YLeaf min_advertise_interval_msecs; //type: uint32
        ydk::YLeaf min_origination_interval; //type: uint16
        ydk::YLeaf connect_retry_interval; //type: uint16
        ydk::YLeaf time_since_last_update; //type: uint32
        ydk::YLeaf time_since_last_read; //type: uint32
        ydk::YLeaf time_since_last_read_reset; //type: uint32
        ydk::YLeaf time_last_cb; //type: uint64
        ydk::YLeaf time_last_cb_reset; //type: uint32
        ydk::YLeaf time_last_fb; //type: uint64
        ydk::YLeaf count_last_write; //type: uint32
        ydk::YLeaf time_since_last_write; //type: uint32
        ydk::YLeaf attempted_last_write_bytes; //type: uint32
        ydk::YLeaf actual_last_write_bytes; //type: uint32
        ydk::YLeaf time_since_second_last_write; //type: uint32
        ydk::YLeaf attempted_second_last_write_bytes; //type: uint32
        ydk::YLeaf actual_second_last_write_bytes; //type: uint32
        ydk::YLeaf time_since_last_write_reset; //type: uint32
        ydk::YLeaf attempted_last_write_reset_bytes; //type: uint32
        ydk::YLeaf actual_last_write_reset_bytes; //type: uint32
        ydk::YLeaf time_since_second_last_write_reset; //type: uint32
        ydk::YLeaf attempted_second_last_write_reset_bytes; //type: uint32
        ydk::YLeaf actual_second_last_write_reset_bytes; //type: uint32
        ydk::YLeaf last_write_event; //type: uint32
        ydk::YLeaf second_last_write_event; //type: uint32
        ydk::YLeaf last_k_aexpiry_reset; //type: uint32
        ydk::YLeaf second_last_k_aexpiry_reset; //type: uint32
        ydk::YLeaf last_k_anotsent_reset; //type: uint32
        ydk::YLeaf last_k_aerror_reset; //type: uint32
        ydk::YLeaf last_k_astart_reset; //type: uint32
        ydk::YLeaf second_last_k_astart_reset; //type: uint32
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        ydk::YLeaf time_since_connection_last_dropped; //type: uint32
        ydk::YLeaf reset_reason; //type: BgpResetReasonIndex
        ydk::YLeaf peer_reset_reason; //type: BgpPeerResetReasonIndex
        ydk::YLeaf peer_error_code; //type: uint32
        ydk::YLeaf last_notify_error_code; //type: uint8
        ydk::YLeaf last_notify_error_subcode; //type: uint8
        ydk::YLeaf error_notifies_received; //type: uint32
        ydk::YLeaf error_notifies_sent; //type: uint32
        ydk::YLeaf remote_as_number; //type: uint32
        ydk::YLeaf dmz_link_bandwidth; //type: uint32
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf tos_type; //type: uint8
        ydk::YLeaf tos_value; //type: uint8
        ydk::YLeaf tcp_session_open_mode; //type: BgpTcpMode
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf standby_rp; //type: boolean
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf graceful_restart_enabled_nbr; //type: boolean
        ydk::YLeaf gr_restart_time; //type: uint32
        ydk::YLeaf gr_stale_path_time; //type: uint32
        ydk::YLeaf fssn_offset; //type: uint32
        ydk::YLeaf fpbsn_offset; //type: uint32
        ydk::YLeaf last_ackd_seq_no; //type: uint32
        ydk::YLeaf bytes_written; //type: uint32
        ydk::YLeaf bytes_read; //type: uint32
        ydk::YLeaf socket_read_bytes; //type: uint32
        ydk::YLeaf is_read_disabled; //type: boolean
        ydk::YLeaf update_bytes_read; //type: uint32
        ydk::YLeaf nsr_state; //type: BgpSyncNbrNsrState
        ydk::YLeaf is_passive_close; //type: boolean
        ydk::YLeaf nbr_enforce_first_as; //type: boolean
        ydk::YLeaf active_bmp_servers; //type: uint8
        ydk::YLeaf nbr_cluster_id; //type: uint32
        ydk::YLeaf nbr_in_cluster; //type: uint8
        ydk::YLeaf ignore_connected; //type: boolean
        ydk::YLeaf internal_vpn_client; //type: boolean
        ydk::YLeaf io_armed; //type: boolean
        ydk::YLeaf read_armed; //type: boolean
        ydk::YLeaf write_armed; //type: boolean
        ydk::YLeaf discard_data_bytes; //type: uint32
        ydk::YLeaf local_as_replace_as; //type: boolean
        ydk::YLeaf local_as_dual_as; //type: boolean
        ydk::YLeaf local_as_dual_as_mode_native; //type: boolean
        ydk::YLeaf egress_peer_engineering_enabled; //type: boolean
        ydk::YLeaf discard_as4_path; //type: uint32
        ydk::YLeaf rpki_disable; //type: boolean
        ydk::YLeaf rpki_use_validity; //type: boolean
        ydk::YLeaf rpki_allow_invalid; //type: boolean
        ydk::YLeaf rpki_signal_ibgp; //type: boolean
        ydk::YLeaf dynamic_neighbor; //type: boolean
        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress
        class SendNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo
        class ReceivedNotificationInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics
        class MessageStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics
        class TcpInitSyncTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec
        class TcpInitSyncPhaseTwoTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec
        class TcpInitSyncDoneTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData> > af_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance> graceful_maintenance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics> message_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics> performance_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo> received_notification_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo> send_notification_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec> tcp_init_sync_done_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec> tcp_init_sync_phase_two_time_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec> tcp_init_sync_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf is_neighbor_route_reflector_client; //type: boolean
        ydk::YLeaf is_legacy_pe_rt; //type: boolean
        ydk::YLeaf is_neighbor_af_capable; //type: boolean
        ydk::YLeaf is_soft_reconfiguration_inbound_allowed; //type: boolean
        ydk::YLeaf is_use_soft_reconfiguration_always_on; //type: boolean
        ydk::YLeaf remove_private_as_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_from_inbound_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_inbound_updates; //type: boolean
        ydk::YLeaf flowspec_validation_d_isable; //type: boolean
        ydk::YLeaf flowspec_redirect_validation_d_isable; //type: boolean
        ydk::YLeaf orr_group_name; //type: string
        ydk::YLeaf orr_group_index; //type: uint32
        ydk::YLeaf is_orr_root_address_configured; //type: boolean
        ydk::YLeaf advertise_afi; //type: boolean
        ydk::YLeaf advertise_afi_reorg; //type: boolean
        ydk::YLeaf advertise_afi_disable; //type: boolean
        ydk::YLeaf encapsulation_type; //type: uint32
        ydk::YLeaf advertise_rt_type; //type: uint8
        ydk::YLeaf advertise_afi_def_vrf_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv4_afi_def_vrf_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv6_afi_def_vrf_imp_disable; //type: boolean
        ydk::YLeaf advertise_afi_vrf_re_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv4_afi_vrf_re_imp_disable; //type: boolean
        ydk::YLeaf advertise_evpnv6_afi_vrf_re_imp_disable; //type: boolean
        ydk::YLeaf advertise_afi_eo_r_ready; //type: boolean
        ydk::YLeaf always_use_next_hop_local; //type: boolean
        ydk::YLeaf sent_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_gshut_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_extended_community_to_neighbor; //type: boolean
        ydk::YLeaf neighbor_default_originate; //type: boolean
        ydk::YLeaf is_orf_sent; //type: boolean
        ydk::YLeaf is_update_deferred; //type: boolean
        ydk::YLeaf is_orf_send_scheduled; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        ydk::YLeaf filter_group_index; //type: uint32
        ydk::YLeaf is_update_throttled; //type: boolean
        ydk::YLeaf is_update_leaving; //type: boolean
        ydk::YLeaf vpn_update_gen_enabled; //type: boolean
        ydk::YLeaf vpn_update_gen_trigger_enabled; //type: boolean
        ydk::YLeaf is_addpath_send_operational; //type: boolean
        ydk::YLeaf is_addpath_receive_operational; //type: boolean
        ydk::YLeaf neighbor_version; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf max_prefix_limit; //type: uint32
        ydk::YLeaf use_max_prefix_warning_only; //type: boolean
        ydk::YLeaf max_prefix_discard_extra_paths; //type: boolean
        ydk::YLeaf max_prefix_exceed_discard_paths; //type: boolean
        ydk::YLeaf max_prefix_threshold_percent; //type: uint8
        ydk::YLeaf max_prefix_restart_time; //type: uint16
        ydk::YLeaf prefixes_accepted; //type: uint32
        ydk::YLeaf prefixes_synced; //type: uint32
        ydk::YLeaf prefixes_withdrawn_not_found; //type: uint32
        ydk::YLeaf prefixes_denied; //type: uint32
        ydk::YLeaf prefixes_denied_no_policy; //type: uint32
        ydk::YLeaf prefixes_denied_rt_permit; //type: uint32
        ydk::YLeaf prefixes_denied_orf_policy; //type: uint32
        ydk::YLeaf prefixes_denied_policy; //type: uint32
        ydk::YLeaf number_of_bestpaths; //type: uint32
        ydk::YLeaf number_of_best_externalpaths; //type: uint32
        ydk::YLeaf prefixes_advertised; //type: uint32
        ydk::YLeaf prefixes_be_advertised; //type: uint32
        ydk::YLeaf prefixes_suppressed; //type: uint32
        ydk::YLeaf prefixes_withdrawn; //type: uint32
        ydk::YLeaf is_peer_orf_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_send; //type: boolean
        ydk::YLeaf is_received_orf_send_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_receive; //type: boolean
        ydk::YLeaf is_received_orf_receive_capable; //type: boolean
        ydk::YLeaf is_advertised_graceful_restart; //type: boolean
        ydk::YLeaf is_graceful_restart_state_flag; //type: boolean
        ydk::YLeaf is_received_graceful_restart_capable; //type: boolean
        ydk::YLeaf is_add_path_send_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_send_capability_received; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_received; //type: boolean
        ydk::YLeaf is_ext_nh_encoding_capability_received; //type: boolean
        ydk::YLeaf is_ext_nh_encoding_capability_sent; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf local_restart_time; //type: uint32
        ydk::YLeaf stale_path_timeout; //type: uint32
        ydk::YLeaf rib_purge_timeout_value; //type: uint32
        ydk::YLeaf neighbor_preserved_forwarding_state; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_configured; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_sent; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_stale_time_accept; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_capability_received; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_received; //type: uint32
        ydk::YLeaf neighbor_preserved_long_lived_forwarding_state; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_time_remaining; //type: uint32
        ydk::YLeaf route_refreshes_received; //type: uint32
        ydk::YLeaf route_refreshes_sent; //type: uint32
        ydk::YLeaf refresh_target_version; //type: uint32
        ydk::YLeaf refresh_version; //type: uint32
        ydk::YLeaf refresh_acked_version; //type: uint32
        ydk::YLeaf is_prefix_orf_present; //type: boolean
        ydk::YLeaf orf_entries_received; //type: uint32
        ydk::YLeaf is_default_originate_sent; //type: boolean
        ydk::YLeaf route_policy_prefix_orf; //type: string
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf route_policy_default_originate; //type: string
        ydk::YLeaf is_neighbor_ebgp_without_inbound_policy; //type: boolean
        ydk::YLeaf is_neighbor_ebgp_without_outbound_policy; //type: boolean
        ydk::YLeaf is_as_override_set; //type: boolean
        ydk::YLeaf is_allow_as_in_set; //type: boolean
        ydk::YLeaf allow_as_in_count; //type: uint32
        ydk::YLeaf address_family_long_lived_time; //type: uint32
        ydk::YLeaf eo_r_received_in_read_only; //type: boolean
        ydk::YLeaf acked_version; //type: uint32
        ydk::YLeaf synced_acked_version; //type: uint32
        ydk::YLeaf outstanding_version; //type: uint32
        ydk::YLeaf outstanding_version_max; //type: uint32
        ydk::YLeaf is_aigp_set; //type: boolean
        ydk::YLeaf is_rt_present; //type: boolean
        ydk::YLeaf is_rt_present_standby; //type: boolean
        ydk::YLeaf accept_own_enabled; //type: boolean
        ydk::YLeaf selective_multipath_eligible; //type: boolean
        ydk::YLeaf afrpki_disable; //type: boolean
        ydk::YLeaf afrpki_use_validity; //type: boolean
        ydk::YLeaf afrpki_allow_invalid; //type: boolean
        ydk::YLeaf afrpki_signal_ibgp; //type: boolean
        ydk::YLeaf is_advertise_permanent_network; //type: boolean
        ydk::YLeaf is_send_mcast_attr; //type: boolean
        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean
        ydk::YLeaf advertise_v4_flags; //type: uint32
        ydk::YLeaf advertise_v6_flags; //type: uint32
        ydk::YLeaf advertise_local_labeled_route_unicast; //type: boolean
        ydk::YLeaf prefixes_denied_non_cumulative; //type: uint32
        ydk::YLeaf enable_label_stack; //type: boolean
        class NeighborAfPerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity
        class ExtendedCommunityStandby; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby> > extended_community_standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics> neighbor_af_performance_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby : public ydk::Entity
{
    public:
        ExtendedCommunityStandby();
        ~ExtendedCommunityStandby();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics : public ydk::Entity
{
    public:
        NeighborAfPerformanceStatistics();
        ~NeighborAfPerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_group_pending_message_count; //type: uint32
        ydk::YLeaf processed_messages; //type: uint32
        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf split_horizon_update_transmit; //type: uint32
        ydk::YLeaf split_horizon_update_blocked; //type: uint32
        ydk::YLeaf split_horizon_withdraw_transmit; //type: uint32
        ydk::YLeaf split_horizon_withdraw_blocked; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress : public ydk::Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics : public ydk::Entity
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

        class Open; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open
        class Notification; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification
        class Update; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update
        class Keepalive; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive
        class RouteRefresh; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh
        class Total; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification> notification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open> open;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh> route_refresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total> total;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update> update;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive : public ydk::Entity
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

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification : public ydk::Entity
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

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open : public ydk::Entity
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

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh : public ydk::Entity
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

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total : public ydk::Entity
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

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update : public ydk::Entity
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

        class Tx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx
        class Rx; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx> tx;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx : public ydk::Entity
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
        class LastTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec> last_time_spec;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo : public ydk::Entity
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
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo : public ydk::Entity
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
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf : public ydk::Entity
{
    public:
        NextHopVrf();
        ~NextHopVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_processing_time; //type: uint32
        ydk::YLeaf max_proc_notification_time; //type: uint32
        ydk::YLeaf max_notification_bestpath_deletes; //type: uint32
        ydk::YLeaf max_notification_bestpath_changes; //type: uint32
        ydk::YLeaf maximum_processing_time; //type: uint32
        ydk::YLeaf last_notificationication_time; //type: uint32
        ydk::YLeaf last_notification_processing_time; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits : public ydk::Entity
{
    public:
        Postits();
        ~Postits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Postit; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit> > postit;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit : public ydk::Entity
{
    public:
        Postit();
        ~Postit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf connect_state; //type: uint32
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf nsr_state; //type: BgpSyncNbrNsrState
        class NeighborsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress
        class NeighborAf; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf
        class PostitInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf> > neighbor_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress> neighbors_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo> > postit_info;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf : public ydk::Entity
{
    public:
        NeighborAf();
        ~NeighborAf();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress : public ydk::Entity
{
    public:
        NeighborsAddress();
        ~NeighborsAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo : public ydk::Entity
{
    public:
        PostitInfo();
        ~PostitInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf postit_type; //type: uint32
        ydk::YLeaf postit_subtype; //type: uint32
        ydk::YLeaf postit_flags; //type: uint8
        ydk::YLeaf postit_af_name; //type: BgpAfi
        ydk::YLeaf postit_ts; //type: uint64
        ydk::YLeaf postit_direction; //type: uint8
        ydk::YLeaf postit_id; //type: uint32
        ydk::YLeaf peer_id; //type: uint32
        ydk::YLeaf postit_policy; //type: string
        ydk::YLeaf postit_reset; //type: BgpResetReasonIndex
        class PostitNotification; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification> postit_notification;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification : public ydk::Entity
{
    public:
        PostitNotification();
        ~PostitNotification();

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
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo : public ydk::Entity
{
    public:
        ProcessInfo();
        ~ProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_instance; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_totals; //type: boolean
        class Global; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global
        class Vrf_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics> performance_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_> vrf;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_instance_node; //type: string
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf path_attributes_entry_count; //type: uint32
        ydk::YLeaf path_attribute_memory; //type: uint32
        ydk::YLeaf as_path_entry_count; //type: uint32
        ydk::YLeaf as_path_entries_memory; //type: uint32
        ydk::YLeaf community_entry_count; //type: uint32
        ydk::YLeaf community_memory; //type: uint32
        ydk::YLeaf extended_community_entry_count; //type: uint32
        ydk::YLeaf extended_community_memory; //type: uint32
        ydk::YLeaf pe_distinguisher_label_entry_count; //type: uint32
        ydk::YLeaf pe_distinguisher_label_memory; //type: uint32
        ydk::YLeaf pta_entry_count; //type: uint32
        ydk::YLeaf pta_memory; //type: uint32
        ydk::YLeaf tunnel_encap_entry_count; //type: uint32
        ydk::YLeaf tunnel_encap_memory; //type: uint32
        ydk::YLeaf ribrnh_entry_count; //type: uint32
        ydk::YLeaf ribrnh_memory; //type: uint32
        ydk::YLeaf ppmp_entry_count; //type: uint32
        ydk::YLeaf ppmp_memory; //type: uint32
        ydk::YLeaf route_reflectors; //type: uint32
        ydk::YLeaf route_reflector_memory; //type: uint32
        ydk::YLeaf nexthop_count; //type: uint32
        ydk::YLeaf nexthop_memory; //type: uint32
        ydk::YLeaf lsattr_entry_count; //type: uint32
        ydk::YLeaf lsattr_memory; //type: uint32
        ydk::YLeaf attr_set_entry_count; //type: uint32
        ydk::YLeaf attr_set_memory; //type: uint32
        ydk::YLeaf lindex_entry_count; //type: uint32
        ydk::YLeaf lindex_memory; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf total_vrf_count; //type: uint32
        ydk::YLeaf neighbors_count_total; //type: uint32
        ydk::YLeaf established_neighbors_count_total; //type: uint32
        ydk::YLeaf sn_num_non_dflt_vrf_nbrs; //type: uint32
        ydk::YLeaf sn_num_non_dflt_vrf_nbrs_estab; //type: uint32
        ydk::YLeaf large_community_entry_count; //type: uint32
        ydk::YLeaf large_community_memory; //type: uint32
        class PoolSize; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize
        class PoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount
        class PoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount
        class MsgLogPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize
        class MsgLogPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount
        class MsgLogPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount
        class BmpPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize
        class BmpPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount
        class BmpPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount> > bmp_pool_alloc_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount> > bmp_pool_free_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize> > bmp_pool_size;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount> > msg_log_pool_alloc_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount> > msg_log_pool_free_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize> > msg_log_pool_size;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount> > pool_alloc_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount> > pool_free_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize> > pool_size;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount : public ydk::Entity
{
    public:
        BmpPoolAllocCount();
        ~BmpPoolAllocCount();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount : public ydk::Entity
{
    public:
        BmpPoolFreeCount();
        ~BmpPoolFreeCount();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize : public ydk::Entity
{
    public:
        BmpPoolSize();
        ~BmpPoolSize();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount : public ydk::Entity
{
    public:
        MsgLogPoolAllocCount();
        ~MsgLogPoolAllocCount();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount : public ydk::Entity
{
    public:
        MsgLogPoolFreeCount();
        ~MsgLogPoolFreeCount();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize : public ydk::Entity
{
    public:
        MsgLogPoolSize();
        ~MsgLogPoolSize();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount : public ydk::Entity
{
    public:
        PoolAllocCount();
        ~PoolAllocCount();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount : public ydk::Entity
{
    public:
        PoolFreeCount();
        ~PoolFreeCount();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize : public ydk::Entity
{
    public:
        PoolSize();
        ~PoolSize();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Global::PoolSize


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics : public ydk::Entity
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

        class Global; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global
        class Vrf_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_> vrf;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configuration_items_processed; //type: uint32
        ydk::YLeaf configuration_processing_time; //type: uint32
        ydk::YLeaf edm_requests_count; //type: uint32
        ydk::YLeaf edm_processing_time; //type: uint32
        ydk::YLeaf brib_api_output_messages_sent; //type: uint32
        ydk::YLeaf brib_api_output_bytes_sent; //type: uint32
        ydk::YLeaf brib_api_output_bytes_generated; //type: uint32
        ydk::YLeaf brib_api_output_prefixes_advertised; //type: uint32
        ydk::YLeaf brib_api_output_prefixes_withdrawn; //type: uint32
        ydk::YLeaf brib_api_output_sending_time; //type: uint32
        ydk::YLeaf brib_api_output_generation_time; //type: uint32
        ydk::YLeaf brib_api_output_calls; //type: uint32
        ydk::YLeaf brib_api_input_messages; //type: uint32
        ydk::YLeaf brib_api_input_bytes; //type: uint32
        ydk::YLeaf brib_api_input_prefixes_received; //type: uint32
        ydk::YLeaf brib_api_input_withdrawn_prefixes; //type: uint32
        ydk::YLeaf brib_api_input_processing_time; //type: uint32
        ydk::YLeaf instance_node_role; //type: boolean
        ydk::YLeaf active_nsrtcp_phase_two_enter_time; //type: uint32
        ydk::YLeaf sec_active_nsrtcp_phase_two_enter_time; //type: uint32
        ydk::YLeaf proc_scoped_sync_state; //type: BgpScopedSyncState
        ydk::YLeaf initial_sync_sessions_added; //type: boolean
        ydk::YLeaf in_event_attach_calls; //type: uint32
        ydk::YLeaf out_event_attach_calls; //type: uint32
        ydk::YLeaf in_out_event_attach_calls; //type: uint32
        ydk::YLeaf updgen_timer_id; //type: uint32
        ydk::YLeaf updgen_tree_timer_left; //type: uint64
        ydk::YLeaf updgen_tree_timer_expiry; //type: uint64
        ydk::YLeaf current_clock_time; //type: uint64
        ydk::YLeaf updgen_handler_tm; //type: uint64
        ydk::YLeaf io_timer_id; //type: uint32
        ydk::YLeaf io_tree_timer_left; //type: uint64
        ydk::YLeaf io_tree_timer_expiry; //type: uint64
        ydk::YLeaf io_handler_tm; //type: uint64
        ydk::YLeaf qad_messages_sent; //type: uint32
        ydk::YLeaf qadack_sent; //type: uint32
        ydk::YLeaf qad_send_failure; //type: uint32
        ydk::YLeaf qad_ac_ks_failure; //type: uint32
        ydk::YLeaf qad_suspends; //type: uint32
        ydk::YLeaf qad_resumes; //type: uint32
        ydk::YLeaf qad_send_drops; //type: uint32
        ydk::YLeaf qad_messages_received; //type: uint32
        ydk::YLeaf qad_processed; //type: uint32
        ydk::YLeaf qad_ac_ks_received; //type: uint32
        ydk::YLeaf qad_timeout_received; //type: uint32
        ydk::YLeaf qad_init_drops; //type: uint32
        ydk::YLeaf qadoos_drops; //type: uint32
        ydk::YLeaf qad_recv_drops; //type: uint32
        ydk::YLeaf qad_timeout_recvd; //type: uint32
        ydk::YLeaf nsr_last_reset_reason; //type: uint8
        ydk::YLeaf redcon_nsr_ready; //type: boolean
        ydk::YLeaf redcon_state_time; //type: uint32
        ydk::YLeaf active_nsr_state; //type: uint32
        ydk::YLeaf sec_active_nsr_state; //type: uint32
        ydk::YLeaf total_outstanding_postits; //type: uint32
        ydk::YLeaf total_neighbors_with_pending_postits; //type: uint32
        ydk::YLeaf tep2p_auto_tunnel_enabled; //type: boolean
        class Ipv4RibServer; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer
        class Ipv6RibServer; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer
        class TeConnection; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection
        class LsdConnection; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection
        class DsNpl; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl
        class ActiveNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime
        class StandbyNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime
        class ActiveNsrfoTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime
        class PostitCountInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo
        class IssuMilestone; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime> > active_nsr_mode_enter_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime> > active_nsrfo_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl> ds_npl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer> ipv4rib_server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer> ipv6rib_server;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone> > issu_milestone;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection> lsd_connection;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo> > postit_count_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime> > standby_nsr_mode_enter_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection> te_connection;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime : public ydk::Entity
{
    public:
        ActiveNsrModeEnterTime();
        ~ActiveNsrModeEnterTime();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime : public ydk::Entity
{
    public:
        ActiveNsrfoTime();
        ~ActiveNsrfoTime();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl : public ydk::Entity
{
    public:
        DsNpl();
        ~DsNpl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir_service_conn_state; //type: BgpDsConnState
        ydk::YLeaf issu_mgr_conn_state; //type: BgpIsmConnState
        ydk::YLeaf issu_phase; //type: string
        ydk::YLeaf issu_type_ng; //type: boolean
        ydk::YLeaf issuha_option; //type: string
        ydk::YLeaf local_ds_handle; //type: uint64
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf dsissu_status_flag; //type: uint32
        class NplPriorityStatistic; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic
        class NplEndpoint; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint> > npl_endpoint;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic> > npl_priority_statistic;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint : public ydk::Entity
{
    public:
        NplEndpoint();
        ~NplEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf endpoint_name; //type: string
        ydk::YLeaf sync_group_name; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf endpoint_handle; //type: uint64
        ydk::YLeaf endpoint_stale_flag; //type: boolean
        ydk::YLeaf endpoint_issu_role; //type: string
        ydk::YLeaf endpoint_active_flag; //type: boolean
        ydk::YLeaf msg_size; //type: uint32
        ydk::YLeaf wheel_id; //type: uint32
        ydk::YLeaf expected_sequence_num; //type: uint32
        class Endpoint; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint> > endpoint;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint : public ydk::Entity
{
    public:
        Endpoint();
        ~Endpoint();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic : public ydk::Entity
{
    public:
        NplPriorityStatistic();
        ~NplPriorityStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NumSent; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent
        class NumRecv; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv
        class NumSentDrop; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop
        class NumRecvDrop; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv> > num_recv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent> > num_sent;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop> > num_sent_drop;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv : public ydk::Entity
{
    public:
        NumRecv();
        ~NumRecv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop : public ydk::Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlRecvDropArray; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray> > nsr_pl_recv_drop_array;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray : public ydk::Entity
{
    public:
        NsrPlRecvDropArray();
        ~NsrPlRecvDropArray();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent : public ydk::Entity
{
    public:
        NumSent();
        ~NumSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop : public ydk::Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlSendDropArray; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray> > nsr_pl_send_drop_array;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray : public ydk::Entity
{
    public:
        NsrPlSendDropArray();
        ~NsrPlSendDropArray();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer : public ydk::Entity
{
    public:
        Ipv4RibServer();
        ~Ipv4RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_rib_connection_up; //type: boolean
        ydk::YLeaf rib_connection_up_count; //type: uint32
        ydk::YLeaf last_rib_connection_up_age; //type: uint32
        ydk::YLeaf rib_connection_down_count; //type: uint32
        ydk::YLeaf last_rib_connection_down_age; //type: uint32
        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer : public ydk::Entity
{
    public:
        Ipv6RibServer();
        ~Ipv6RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_rib_connection_up; //type: boolean
        ydk::YLeaf rib_connection_up_count; //type: uint32
        ydk::YLeaf last_rib_connection_up_age; //type: uint32
        ydk::YLeaf rib_connection_down_count; //type: uint32
        ydk::YLeaf last_rib_connection_down_age; //type: uint32
        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone : public ydk::Entity
{
    public:
        IssuMilestone();
        ~IssuMilestone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf milestone_name; //type: string
        ydk::YLeaf milestone_start_timestamp; //type: uint32
        ydk::YLeaf milestone_met_timestamp; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection : public ydk::Entity
{
    public:
        LsdConnection();
        ~LsdConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf last_connection_up_age; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        ydk::YLeaf last_connection_down_age; //type: uint32
        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo : public ydk::Entity
{
    public:
        PostitCountInfo();
        ~PostitCountInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf postit_count; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime : public ydk::Entity
{
    public:
        StandbyNsrModeEnterTime();
        ~StandbyNsrModeEnterTime();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection : public ydk::Entity
{
    public:
        TeConnection();
        ~TeConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf last_connection_up_age; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        ydk::YLeaf last_connection_down_age; //type: uint32
        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lpts_set_up_time; //type: uint32
        ydk::YLeaf lpts_calls; //type: uint32
        ydk::YLeaf read_throttles_count; //type: uint32
        ydk::YLeaf low_throttled_read_count; //type: uint32
        ydk::YLeaf high_throttled_read_count; //type: uint32
        ydk::YLeaf read_calls_count; //type: uint32
        ydk::YLeaf read_messages_count; //type: uint32
        ydk::YLeaf data_bytes_read; //type: uint32
        ydk::YLeaf io_read_time; //type: uint32
        ydk::YLeaf write_calls_count; //type: uint32
        ydk::YLeaf data_bytes_written; //type: uint32
        ydk::YLeaf io_write_time; //type: uint32
        ydk::YLeaf write_subgroup_calls_count; //type: uint32
        ydk::YLeaf write_subgroup_messages_count; //type: uint32
        ydk::YLeaf subgroup_list_time; //type: uint32
        ydk::YLeaf write_queue_calls_count; //type: uint32
        ydk::YLeaf write_queue_messages_count; //type: uint32
        ydk::YLeaf write_queue_time; //type: uint32
        ydk::YLeaf inbound_update_messages; //type: uint32
        ydk::YLeaf inbound_update_messages_time; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbors_count; //type: uint32
        ydk::YLeaf established_neighbors_count; //type: uint32
        ydk::YLeaf update_messages_received; //type: uint32
        ydk::YLeaf update_messages_sent; //type: uint32
        ydk::YLeaf notifications_received; //type: uint32
        ydk::YLeaf notifications_sent; //type: uint32
        ydk::YLeaf network_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::Vrf_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session> > session;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf speaker_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf remote_as; //type: uint32
        ydk::YLeaf messages_queued_in; //type: uint32
        ydk::YLeaf messages_queued_out; //type: uint32
        ydk::YLeaf connection_state; //type: BgpConnState
        ydk::YLeaf is_local_address_configured; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_state; //type: BgpSyncNbrNsrState
        ydk::YLeaf postit_pending; //type: boolean
        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress> connection_remote_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress : public ydk::Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_92_ */

