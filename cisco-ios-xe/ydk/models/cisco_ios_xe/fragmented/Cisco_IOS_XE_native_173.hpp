#ifndef _CISCO_IOS_XE_NATIVE_173_
#define _CISCO_IOS_XE_NATIVE_173_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_146.hpp"
#include "Cisco_IOS_XE_native_164.hpp"
#include "Cisco_IOS_XE_native_169.hpp"
#include "Cisco_IOS_XE_native_172.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::UpdateGroup : public ydk::Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Split; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::UpdateGroup::Split

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::UpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::UpdateGroup::Split : public ydk::Entity
{
    public:
        Split();
        ~Split();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_override; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup : public ydk::Entity
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

        class Neighbor; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor : public ydk::Entity
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
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class Advertise; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::AllowasIn
        class DistributeList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::DistributeList
        class FilterList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::NextHopSelf
        class PrefixList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::PrefixList
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        ydk::YList distribute_list;
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

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
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

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
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath : public ydk::Entity
{
    public:
        DiversePath();
        ~DiversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty
        class Backup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup : public ydk::Entity
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

        ydk::YLeaf mpath; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::AllowasIn : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

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
        ydk::YLeaf accesslist; //type: one of uint16, string
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::DistributeList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::FilterList : public ydk::Entity
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

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf as_path_list; //type: uint16
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::FilterList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Inherit : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::Inherit


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::MaximumPrefix


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::NextHopSelf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::NextHopSelf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

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
        ydk::YLeaf prefix_list_name; //type: string
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::PrefixList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RouteMap : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SendCommunity : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SendCommunity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor : public ydk::Entity
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
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class Advertise; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::AllowasIn
        class DistributeList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::DistributeList
        class FilterList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::NextHopSelf
        class PrefixList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::PrefixList
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::AllowasIn> allowas_in; // presence node
        ydk::YList distribute_list;
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::NextHopSelf> next_hop_self; // presence node
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

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
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

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
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath : public ydk::Entity
{
    public:
        DiversePath();
        ~DiversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpath; //type: empty
        class Backup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath::Backup : public ydk::Entity
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

        ydk::YLeaf mpath; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::AllowasIn : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

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
        ydk::YLeaf accesslist; //type: one of uint16, string
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::DistributeList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::FilterList : public ydk::Entity
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

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf as_path_list; //type: uint16
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::FilterList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Inherit : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::Inherit


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::MaximumPrefix


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::NextHopSelf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::NextHopSelf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

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
        ydk::YLeaf prefix_list_name; //type: string
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::PrefixList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs::All : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RouteMap : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SendCommunity : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SendCommunity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context> context;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context : public ydk::Entity
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

        class ContextWord; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord

        ydk::YList context_word;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap : public ydk::Entity
{
    public:
        Nsap();
        ~Nsap();

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
        class Nsap_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_> nsap;
                class AfName;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_ : public ydk::Entity
{
    public:
        Nsap_();
        ~Nsap_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        class Bgp_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation
        class MaximumPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths
        class PeerGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor
        class Network; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Network
        class Snmp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths> maximum_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup> peer_group;
        ydk::YList neighbor;
        ydk::YList network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp> snmp; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_ : public ydk::Entity
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

        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        class AggregateTimer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer
        class Dampening; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening
        class Nexthop; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer> aggregate_timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening> dampening; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer> slow_peer;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer : public ydk::Entity
{
    public:
        AggregateTimer();
        ~AggregateTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregate_timer; //type: uint8
        ydk::YLeaf disable_timer; //type: DisableTimer
        class DisableTimer;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

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
        class Dampen; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen : public ydk::Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life_time; //type: uint8
        ydk::YLeaf reuse_time; //type: uint16
        ydk::YLeaf suppress_time; //type: uint16
        ydk::YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop : public ydk::Entity
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
        class Trigger; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap : public ydk::Entity
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

        ydk::YLeaf priority; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths : public ydk::Entity
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
        class Ibgp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp
        class ExternalRtfilter; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter> external_rtfilter;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup : public ydk::Entity
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

        class Neighbor; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor : public ydk::Entity
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
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soo; //type: string
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn
        class Capability; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate
        class FilterList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf
        class PrefixList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate> default_originate; // presence node
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer> slow_peer;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability : public ydk::Entity
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

        class Orf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList : public ydk::Entity
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

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf as_path_list; //type: uint16
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

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
        ydk::YLeaf prefix_list_name; //type: string
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor : public ydk::Entity
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
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soo; //type: string
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn
        class Capability; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate
        class FilterList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf
        class PrefixList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate> default_originate; // presence node
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf> next_hop_self; // presence node
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer> slow_peer;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability : public ydk::Entity
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

        class Orf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList : public ydk::Entity
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

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf as_path_list; //type: uint16
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

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
        ydk::YLeaf prefix_list_name; //type: string
        class Inout;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Network


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context> context;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context : public ydk::Entity
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

        class ContextWord; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord

        ydk::YList context_word;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn : public ydk::Entity
{
    public:
        L2vpn();
        ~L2vpn();

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
        class L2vpnEvpn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn
        class L2vpnVpls; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnVpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn> l2vpn_evpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnVpls> l2vpn_vpls;
                class AfName;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn : public ydk::Entity
{
    public:
        L2vpnEvpn();
        ~L2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class Bgp_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation
        class MaximumPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths
        class PeerGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn
        class Capability; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer
        class Network; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network
        class Snmp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths> maximum_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup> peer_group;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp> snmp; // presence node
                class SoftReconfiguration;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_ : public ydk::Entity
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

        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths
        class Default; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default> default_;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths : public ydk::Entity
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
        class Select; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
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

        class Range; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
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

        class Range; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
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
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths : public ydk::Entity
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
        class Ibgp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp
        class ExternalRtfilter; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter> external_rtfilter;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup : public ydk::Entity
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

        class Neighbor; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor : public ydk::Entity
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
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf soo; //type: string
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf weight; //type: uint16
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths
        class Advertise; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn
        class DistributeList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList
        class Encap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap
        class FilterList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf
        class PrefixList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList
        class RemovePrivateAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        ydk::YList distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap> encap;
        ydk::YList filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        ydk::YList prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer> slow_peer;
                class SoftReconfiguration;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf receive; //type: empty
        class Send; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

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
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        ydk::YList best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::DistributeList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::FilterList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::PrefixList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "extended") return 1;
            if (name == "standard") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::DistributeList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::FilterList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::PrefixList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "extended") return 1;
            if (name == "standard") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::AfName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::DisableTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "receive") return 1;
            if (name == "send") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "extended") return 1;
            if (name == "standard") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "receive") return 1;
            if (name == "send") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "extended") return 1;
            if (name == "standard") return 2;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::AfName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn;
        static const ydk::Enum::YLeaf vpls;

        static int get_enum_value(const std::string & name) {
            if (name == "evpn") return 0;
            if (name == "vpls") return 1;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::RouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filter;

        static int get_enum_value(const std::string & name) {
            if (name == "filter") return 0;
            return -1;
        }
};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_173_ */

