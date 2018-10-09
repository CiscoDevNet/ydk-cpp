#ifndef _CISCO_IOS_XE_NATIVE_203_
#define _CISCO_IOS_XE_NATIVE_203_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_132.hpp"
#include "Cisco_IOS_XE_native_186.hpp"
#include "Cisco_IOS_XE_native_193.hpp"
#include "Cisco_IOS_XE_native_202.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord : public ydk::Entity
{
    public:
        ContextWord();
        ~ContextWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_word; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls : public ydk::Entity
{
    public:
        L2vpnVpls();
        ~L2vpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation
        class PeerGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor
        class Snmp; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup> peer_group;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp> snmp; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scan_time; //type: uint8
        class Default; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default
        class Nexthop; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer> slow_peer;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_target; //type: RouteTarget
        class RouteTarget;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Trigger; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf enable; //type: boolean

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn
        class Capability; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability
        class Inherit; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf
        class RemovePrivateAs; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Orf; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf : public ydk::Entity
{
    public:
        Orf();
        ~Orf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList prefix_list; //type: list of  PrefixList
        class PrefixList;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn
        class Capability; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability
        class Inherit; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf
        class RemovePrivateAs; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Orf; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf : public ydk::Entity
{
    public:
        Orf();
        ~Orf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList prefix_list; //type: list of  PrefixList
        class PrefixList;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context> context;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ContextWord; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord

        ydk::YList context_word;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context


class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord : public ydk::Entity
{
    public:
        ContextWord();
        ~ContextWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_word; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter : public ydk::Entity
{
    public:
        Rtfilter();
        ~Rtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AfName
        class Rtfilter_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_> rtfilter;
                class AfName;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_ : public ydk::Entity
{
    public:
        Rtfilter_();
        ~Rtfilter_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_
        class MaximumPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths
        class PeerGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor
        class Snmp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths> maximum_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup> peer_group;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp> snmp; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nexthop; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer> slow_peer;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Trigger; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf enable; //type: boolean

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths : public ydk::Entity
{
    public:
        MaximumPaths();
        ~MaximumPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ebgp; //type: uint16
        ydk::YLeaf eibgp; //type: uint16
        class Ibgp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter> external_rtfilter;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unequal_cost; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter : public ydk::Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn
        class Capability; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate
        class Inherit; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf
        class RemovePrivateAs; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate> default_originate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Orf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf : public ydk::Entity
{
    public:
        Orf();
        ~Orf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList prefix_list; //type: list of  PrefixList
        class PrefixList;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn
        class Capability; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate
        class Inherit; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf
        class RemovePrivateAs; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate> default_originate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Orf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf : public ydk::Entity
{
    public:
        Orf();
        ~Orf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList prefix_list; //type: list of  PrefixList
        class PrefixList;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate : public ydk::Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context> context;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ContextWord; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord

        ydk::YList context_word;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord : public ydk::Entity
{
    public:
        ContextWord();
        ~ContextWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_word; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord


class Native::Router::Bgp::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPolicy; //type: Native::Router::Bgp::Template::PeerPolicy
        class PeerSession; //type: Native::Router::Bgp::Template::PeerSession

        ydk::YList peer_policy;
        ydk::YList peer_session;
        
}; // Native::Router::Bgp::Template


class Native::Router::Bgp::Template::PeerPolicy : public ydk::Entity
{
    public:
        PeerPolicy();
        ~PeerPolicy();

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
        class RouteMap; //type: Native::Router::Bgp::Template::PeerPolicy::RouteMap
        class FilterList; //type: Native::Router::Bgp::Template::PeerPolicy::FilterList
        class Inherit; //type: Native::Router::Bgp::Template::PeerPolicy::Inherit
        class Encap; //type: Native::Router::Bgp::Template::PeerPolicy::Encap

        ydk::YList route_map;
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerPolicy::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerPolicy::Encap> encap;
        
}; // Native::Router::Bgp::Template::PeerPolicy


class Native::Router::Bgp::Template::PeerPolicy::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

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
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Bgp::Template::PeerPolicy::RouteMap


class Native::Router::Bgp::Template::PeerPolicy::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_range; //type: uint16
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Bgp::Template::PeerPolicy::FilterList


class Native::Router::Bgp::Template::PeerPolicy::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPolicy_; //type: Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_> peer_policy;
        
}; // Native::Router::Bgp::Template::PeerPolicy::Inherit


class Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_ : public ydk::Entity
{
    public:
        PeerPolicy_();
        ~PeerPolicy_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template_; //type: Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_::Template_

        ydk::YList template_;
        
}; // Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_


class Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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
        ydk::YLeaf range; //type: uint16

}; // Native::Router::Bgp::Template::PeerPolicy::Inherit::PeerPolicy_::Template_


class Native::Router::Bgp::Template::PeerPolicy::Encap : public ydk::Entity
{
    public:
        Encap();
        ~Encap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty
        ydk::YLeaf vxlan; //type: empty

}; // Native::Router::Bgp::Template::PeerPolicy::Encap


class Native::Router::Bgp::Template::PeerSession : public ydk::Entity
{
    public:
        PeerSession();
        ~PeerSession();

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
        ydk::YLeaf remote_as; //type: one of uint32, string
        ydk::YLeaf version; //type: uint8
        class HaMode; //type: Native::Router::Bgp::Template::PeerSession::HaMode
        class Password; //type: Native::Router::Bgp::Template::PeerSession::Password
        class UpdateSource; //type: Native::Router::Bgp::Template::PeerSession::UpdateSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::HaMode> ha_mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::UpdateSource> update_source;
        
}; // Native::Router::Bgp::Template::PeerSession


class Native::Router::Bgp::Template::PeerSession::HaMode : public ydk::Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: Native::Router::Bgp::Template::PeerSession::HaMode::GracefulRestart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::HaMode::GracefulRestart> graceful_restart; // presence node
        
}; // Native::Router::Bgp::Template::PeerSession::HaMode


class Native::Router::Bgp::Template::PeerSession::HaMode::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::Template::PeerSession::HaMode::GracefulRestart


class Native::Router::Bgp::Template::PeerSession::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string
        class PasswordRange; //type: Native::Router::Bgp::Template::PeerSession::Password::PasswordRange

        ydk::YList password_range;
        
}; // Native::Router::Bgp::Template::PeerSession::Password


class Native::Router::Bgp::Template::PeerSession::Password::PasswordRange : public ydk::Entity
{
    public:
        PasswordRange();
        ~PasswordRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encruption_type_range; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Router::Bgp::Template::PeerSession::Password::PasswordRange


class Native::Router::Bgp::Template::PeerSession::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::Template::PeerSession::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::Template::PeerSession::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template::PeerSession::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::Template::PeerSession::UpdateSource


class Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMSubinterface


class Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Bgp::Template::PeerSession::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::Template::PeerSession::UpdateSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Bgp::Template::PeerSession::UpdateSource::LISPSubinterface


class Native::Router::Bgp::Template::PeerSession::UpdateSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Bgp::Template::PeerSession::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::Timers::Bgp_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Timers::Bgp_> bgp;
        
}; // Native::Router::Bgp::Timers


class Native::Router::Bgp::Timers::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive_interval; //type: uint16
        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::Timers::Bgp_


class Native::Router::Bgp::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: Native::Router::Bgp::Scope::Global
        class Vrf; //type: Native::Router::Bgp::Scope::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global> global; // presence node
        ydk::YList vrf;
        
}; // Native::Router::Bgp::Scope


class Native::Router::Bgp::Scope::Global : public ydk::Entity
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

        class PeerGroup; //type: Native::Router::Bgp::Scope::Global::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::Scope::Global::Neighbor
        class AddressFamily; //type: Native::Router::Bgp::Scope::Global::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup> peer_group;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily> address_family;
        
}; // Native::Router::Bgp::Scope::Global


class Native::Router::Bgp::Scope::Global::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::Scope::Global::PeerGroup


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf remote_as; //type: one of uint32, string
        ydk::YLeaf description; //type: string
        ydk::YLeaf version; //type: uint16
        class PeerGroup_; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::PeerGroup_
        class Password; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::Password
        class UpdateSource; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::PeerGroup_> peer_group; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource> update_source;
        
}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::PeerGroup_ : public ydk::Entity
{
    public:
        PeerGroup_();
        ~PeerGroup_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string

}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::PeerGroup_


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::Password


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMSubinterface


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::LISPSubinterface


class Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Bgp::Scope::Global::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::Scope::Global::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf remote_as; //type: one of uint32, string
        ydk::YLeaf description; //type: string
        ydk::YLeaf version; //type: uint16
        class PeerGroup; //type: Native::Router::Bgp::Scope::Global::Neighbor::PeerGroup
        class Password; //type: Native::Router::Bgp::Scope::Global::Neighbor::Password
        class UpdateSource; //type: Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::PeerGroup> peer_group; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource> update_source;
        
}; // Native::Router::Bgp::Scope::Global::Neighbor


class Native::Router::Bgp::Scope::Global::Neighbor::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string

}; // Native::Router::Bgp::Scope::Global::Neighbor::PeerGroup


class Native::Router::Bgp::Scope::Global::Neighbor::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Router::Bgp::Scope::Global::Neighbor::Password


class Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource


class Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMSubinterface


class Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::LISPSubinterface


class Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Bgp::Scope::Global::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::Scope::Global::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NoVrf; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf> no_vrf;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf : public ydk::Entity
{
    public:
        NoVrf();
        ~NoVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4
        class Ipv6; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv6
        class Vpnv4; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv4
        class Vpnv6; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6
        class Nsap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap
        class L2vpn; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn
        class Rtfilter; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter

        ydk::YList ipv4;
        ydk::YList ipv6;
        ydk::YList vpnv4;
        ydk::YList vpnv6;
        ydk::YList nsap;
        ydk::YList l2vpn;
        ydk::YList rtfilter;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpIpv4AfType
        class Ipv4Unicast; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast> ipv4_unicast;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        class AggregateAddress; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress
        class Bgp_; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation
        class Distance; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance
        class DistributeList; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::MaximumPaths
        class PeerGroup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor
        class Network; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network
        class Redistribute; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute
        class SegmentRouting; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting
        class Snmp; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp
        class TableMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap

        ydk::YList aggregate_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance> distance;
        ydk::YList distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::MaximumPaths> maximum_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::PeerGroup> peer_group;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap> table_map; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress : public ydk::Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

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
        ydk::YLeaf ipv4_mask; //type: string
        ydk::YLeaf advertise_map; //type: string
        ydk::YLeaf as_set; //type: empty
        ydk::YLeaf attribute_map; //type: string
        ydk::YLeaf as_override; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf summary_only; //type: empty
        ydk::YLeaf suppress_map; //type: string

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_best_external; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        ydk::YLeaf suppress_inactive; //type: empty
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths
        class AggregateTimer; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer
        class Bestpath; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath
        class Dampening; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening
        class InjectMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap
        class Nexthop; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop
        class Recursion; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion
        class RouteMap; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer> aggregate_timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath> bestpath;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening> dampening; // presence node
        ydk::YList inject_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion> recursion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf install; //type: empty
        ydk::YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select : public ydk::Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_external; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup; //type: empty

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::RouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filter;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::AfName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_203_ */

